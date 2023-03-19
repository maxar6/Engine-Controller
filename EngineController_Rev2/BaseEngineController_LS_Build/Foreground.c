/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2195
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Nov 27 15:42:41 2022
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

/* Named constants for Stateflow: '<S287>/Ice Break' */
#define BaseEngineController_LS_IN_Init (1U)
#define BaseEngineController_LS_IN_Open (2U)
#define BaseEngineController_LS_IN_Wait (3U)

/* Named constants for Stateflow: '<S401>/Baro Stall State Delay' */
#define BaseEngineController_LS_IN_CrankRun (1U)
#define BaseEngineController_LS_IN_Stall (2U)
#define BaseEngineController_LS_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S453>/Engine State Machine' */
#define BaseEngineController_LS_IN_Crank (1U)
#define BaseEngineController_LS_IN_Run (2U)
#define BaseEngineController_LS_IN_Stall_h (3U)

/*
 * Initial conditions for enable system:
 *    '<S408>/Collect Average'
 *    '<S449>/Collect Average'
 *    '<S450>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S412>/Unit Delay1' */
  localDW->s412_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S408>/Collect Average'
 *    '<S449>/Collect Average'
 *    '<S450>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  localDW->s408_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S408>/Collect Average'
 *    '<S449>/Collect Average'
 *    '<S450>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  BaseEngineController_LS_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S408>/Collect Average'
 *    '<S449>/Collect Average'
 *    '<S450>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage(boolean_T rtu_0, int8_T rtu_Count,
  real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS *localB,
  rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  real_T rtb_Sum1_b4g;

  /* Outputs for Enabled SubSystem: '<S408>/Collect Average' incorporates:
   *  EnablePort: '<S412>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s408_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Init(localDW);
      localDW->s408_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S412>/Sum1' incorporates:
     *  UnitDelay: '<S412>/Unit Delay1'
     */
    rtb_Sum1_b4g = rtu_Signal + localDW->s412_UnitDelay1_DSTATE;

    /* Product: '<S412>/Product' incorporates:
     *  DataTypeConversion: '<S412>/Data Type Conversion'
     */
    localB->s412_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_b4g;

    /* Update for UnitDelay: '<S412>/Unit Delay1' */
    localDW->s412_UnitDelay1_DSTATE = rtb_Sum1_b4g;
  } else {
    if (localDW->s408_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S408>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S448>/PassThrough1'
 *    '<S448>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S464>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S448>/PassThrough1'
 *    '<S448>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T *
  rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S448>/PassThrough1' incorporates:
   *  EnablePort: '<S464>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S464>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S448>/PassThrough1' */
}

/*
 * Output and update for enable system:
 *    '<S348>/GetInstRPM'
 *    '<S349>/GetInstRPM'
 */
void BaseEngineController_LS_GetInstRPM(boolean_T rtu_0,
  rtB_GetInstRPM_BaseEngineController_LS *localB)
{
  /* Outputs for Enabled SubSystem: '<S348>/GetInstRPM' incorporates:
   *  EnablePort: '<S356>/Enable'
   */
  if (rtu_0) {
    /* S-Function Block: <S356>/motohawk_encoder_instant_rpm */
    {
      localB->s356_motohawk_encoder_instant_rpm = GetEncoderResourceInstantRPM();
    }
  }

  /* End of Outputs for SubSystem: '<S348>/GetInstRPM' */
}

/*
 * Output and update for enable system:
 *    '<S348>/SafeDivide'
 *    '<S349>/SafeDivide'
 */
void BaseEngineController_LS_SafeDivide(boolean_T rtu_0, uint8_T rtu_Count,
  uint16_T rtu_RPMSum, rtB_SafeDivide_BaseEngineController_LS *localB)
{
  uint32_T u;

  /* Outputs for Enabled SubSystem: '<S348>/SafeDivide' incorporates:
   *  EnablePort: '<S358>/Enable'
   */
  if (rtu_0) {
    /* MinMax: '<S358>/MinMax' incorporates:
     *  Constant: '<S358>/Constant'
     */
    u = rtu_Count;

    /* Product: '<S358>/Product' incorporates:
     *  Constant: '<S358>/Constant'
     *  MinMax: '<S358>/MinMax'
     */
    localB->s358_Product = (uint16_T)((uint32_T)rtu_RPMSum / (uint32_T)(int32_T)
                                      (u >= 1U ? u : 1U));
  }

  /* End of Outputs for SubSystem: '<S348>/SafeDivide' */
}

/*
 * Output and update for action system:
 *    '<S499>/If Action Subsystem'
 *    '<S499>/If Action Subsystem1'
 *    '<S499>/If Action Subsystem2'
 *    '<S500>/If Action Subsystem'
 *    '<S500>/If Action Subsystem1'
 *    '<S500>/If Action Subsystem2'
 *    '<S520>/If Action Subsystem'
 *    '<S520>/If Action Subsystem1'
 *    '<S520>/If Action Subsystem2'
 *    '<S522>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S502>/In' */
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
  /* Initial conditions for function-call system: '<S495>/Temp Sensors' */

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

  /* S-Function Block: <S691>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s691_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S682>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s682_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_DWork.s664_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S720>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s720_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S708>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s708_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S734>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s734_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S481>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s481_motohawk_delta_time_DWORK1 = now -
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

  /* InitializeConditions for Stateflow: '<S453>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S474>:4' */
  BaseEngineController_LS_DWork.s474_is_c2_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall_h;

  /* Entry 'Stall': '<S474>:1' */
  BaseEngineController_LS_B.s474_State = 1U;

  /* S-Function Block: <S560>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s560_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S785>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s785_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_DWork.s594_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S590>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s590_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* S-Function Block: <S556>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s556_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* InitializeConditions for Atomic SubSystem: '<S405>/Base TPS Request' */

  /* S-Function Block: <S466>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s466_motohawk_delta_time_DWORK1 = now -
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S405>/Base TPS Request' */

  /* S-Function Block: <S501>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s501_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S509>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s509_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S483>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s483_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S640>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s640_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S401>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s401_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S401>/Baro Stall State Delay' */
  BaseEngineController_LS_DWork.s407_TOld = 0.0;
  BaseEngineController_LS_B.s407_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S407>:4' */
  BaseEngineController_LS_DWork.s407_is_c19_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall;

  /* Entry 'Stall': '<S407>:1' */
  BaseEngineController_LS_B.s407_Enable = TRUE;

  /* S-Function Block: <S414>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s414_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S533>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s533_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_DWork.s471_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S544>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s544_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S614>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s614_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S495>/Fuel Level' */

  /* S-Function Block: <S651>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s651_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* S-Function Block: <S825>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s825_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S830>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s830_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S831>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s831_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S832>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s832_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S847>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s847_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S848>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s848_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S624>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s624_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S849>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s849_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S853>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s853_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S856>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s856_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S855>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s855_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S901>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s901_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S485>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s485_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

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

  /* S-Function Block: <S558>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s558_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* Initial conditions for function-call system: '<S701>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S719>/Initial Condition is True' */
  BaseEngineController_LS_DWork.s719_InitialConditionisTrue_DSTATE = TRUE;

  /* Initial conditions for function-call system: '<S703>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S731>/Initial Condition is True' */
  BaseEngineController_LS_DWork.s731_InitialConditionisTrue_DSTATE = TRUE;
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S495>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_DWork.s495_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S453>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_DWork.s453_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S573>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_DWork.s573_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S495>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_DWork.s495_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S859>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S864>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_DWork.s864_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S859>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S701>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_DWork.s701_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S703>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_DWork.s703_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S495>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_DWork.s495_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S453>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_DWork.s453_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  /* Disable for Stateflow: '<S287>/Ice Break' */
  BaseEngineController_LS_DWork.s295_presentTicks =
    BaseEngineController_LS_M->Timing.clockTick0;
  BaseEngineController_LS_DWork.s295_elapsedTicks =
    BaseEngineController_LS_DWork.s295_presentTicks -
    BaseEngineController_LS_DWork.s295_previousTicks;
  BaseEngineController_LS_DWork.s295_previousTicks =
    BaseEngineController_LS_DWork.s295_presentTicks;
  BaseEngineController_LS_DWork.s295_temporalCounter_i1 =
    BaseEngineController_LS_DWork.s295_temporalCounter_i1 +
    BaseEngineController_LS_DWork.s295_elapsedTicks;
  BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Level2 S-Function Block: '<S573>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_DWork.s573_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S401>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S408>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s408_CollectAverage);

  /* End of Disable for SubSystem: '<S408>/Collect Average' */
  BaseEngineController_LS_DWork.s401_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S401>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S405>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S449>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s449_CollectAverage);

  /* End of Disable for SubSystem: '<S449>/Collect Average' */
  BaseEngineController_LS_DWork.s405_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S405>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
  BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S111>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S164>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S169>/ECT Transient Fueling' */
  /* Disable for Outport: '<S173>/Mult' */
  BaseEngineController_LS_B.s173_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s169_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S169>/ECT Transient Fueling' */

  /* Disable for Enabled SubSystem: '<S169>/OXY Transient Fueling' */
  /* Disable for Outport: '<S176>/Mult' */
  BaseEngineController_LS_B.s176_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s169_OXYTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S169>/OXY Transient Fueling' */

  /* Disable for Outport: '<S169>/DeltaTPSMult' */
  BaseEngineController_LS_B.s169_Product1 = 1.0;
  BaseEngineController_LS_DWork.s164_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S164>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S111>/Injector Manager' */
  /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
  BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S495>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_DWork.s495_motohawk_trigger1_DWORK1 = 0;

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
  /* Disable for Trigger_FGND_TDC1_EVENT_869p0001 */
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

  /* Disable for Enabled SubSystem: '<S405>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S450>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s450_CollectAverage);

  /* End of Disable for SubSystem: '<S450>/Collect Average' */
  BaseEngineController_LS_DWork.s405_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S405>/Capture IAT At Startup' */

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S859>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S864>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_DWork.s864_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S859>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
  /* Disable for Outport: '<S52>/Out1' */
  BaseEngineController_LS_B.s52_In1 = 10.0;
  BaseEngineController_LS_DWork.s31_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S31>/PassThrough' */
  BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S489>/Triggered Subsystem' incorporates:
   *  Disable for S-Function (fcncallgen): '<S490>/Function-Call Generator'
   *  Disable for SubSystem: '<S11>/Diagnostics'
   *  Disable for SubSystem: '<S307>/MisfireDiagSub'
   */

  /* Level2 S-Function Block: '<S328>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_HIRES_6521p0004 */

  /* Disable for function-call system: '<S328>/MisfireDiagFunc' */
  BaseEngineController_LS_DWork.s347_If_ActiveSubsystem = -1;
  BaseEngineController_LS_DWork.s328_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_DWork.s307_MisfireDiagSub_MODE = FALSE;
  BaseEngineController_LS_DWork.s489_TriggeredSubsystem_MODE = FALSE;

  /* Level2 S-Function Block: '<S701>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_DWork.s701_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S703>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_DWork.s703_motohawk_trigger_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S495>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_DWork.s495_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S453>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_DWork.s453_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S291>/Unit Delay' */
  BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S292>/Unit Delay' */
  BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S293>/Unit Delay' */
  BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S294>/Unit Delay' */
  BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = 0.0;

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

  /* InitializeConditions for Stateflow: '<S287>/Ice Break' */
  BaseEngineController_LS_DWork.s295_is_active_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_B.s295_etc = 0.0;
  BaseEngineController_LS_DWork.s295_presentTicks = 0U;
  BaseEngineController_LS_DWork.s295_elapsedTicks = 0U;
  BaseEngineController_LS_DWork.s295_previousTicks = 0U;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Atomic SubSystem: '<S405>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S448>/PassThrough1' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s448_Merge);

  /* End of Start for SubSystem: '<S448>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S448>/PassThrough2' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s448_Merge);

  /* End of Start for SubSystem: '<S448>/PassThrough2' */

  /* End of Start for SubSystem: '<S405>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S573>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_DWork.s573_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S401>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S408>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s408_CollectAverage);

  /* End of Start for SubSystem: '<S408>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S408>/Unit Delay' */
  BaseEngineController_LS_DWork.s408_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S401>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S429>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S433>/Out1' */
  BaseEngineController_LS_B.s429_Merge = 0.005;

  /* End of Start for SubSystem: '<S429>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S429>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S431>/Out1' */
  BaseEngineController_LS_B.s429_Merge = 0.005;

  /* End of Start for SubSystem: '<S429>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S430>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S436>/Out1' */
  BaseEngineController_LS_B.s430_Merge = 0.005;

  /* End of Start for SubSystem: '<S430>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S430>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S434>/Out1' */
  BaseEngineController_LS_B.s430_Merge = 0.005;

  /* End of Start for SubSystem: '<S430>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S405>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S449>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s449_CollectAverage);

  /* End of Start for SubSystem: '<S449>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S449>/Unit Delay' */
  BaseEngineController_LS_DWork.s449_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S405>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
  BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S115>/O2 PID Controller Bank A' */

  /* Start for InitialCondition: '<S247>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_DWork.s247_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S115>/O2 PID Controller Bank A' */

  /* Start for Atomic SubSystem: '<S115>/O2 PID Controller Bank B' */

  /* Start for InitialCondition: '<S248>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_DWork.s248_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S115>/O2 PID Controller Bank B' */

  /* End of Start for SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S93>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S111>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S164>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S169>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S173>/Mult' */
  BaseEngineController_LS_B.s173_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S169>/ECT Transient Fueling' */

  /* Start for Enabled SubSystem: '<S169>/OXY Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S176>/Mult' */
  BaseEngineController_LS_B.s176_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S169>/OXY Transient Fueling' */

  /* S-Function Block: <S175>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s175_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S178>/Unit Delay' */
  BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S174>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s174_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S177>/Unit Delay' */
  BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S169>/DeltaTPSMult' */
  BaseEngineController_LS_B.s169_Product1 = 1.0;

  /* End of Start for SubSystem: '<S164>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S111>/Injector Manager' */

  /* End of Start for SubSystem: '<S93>/Fuel System Manager' */

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/DFCO' */

    /* S-Function Block: <S154>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s154_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
    }

    /* S-Function Block: <S152>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s152_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S210>/IdleStateMachine' */
    BaseEngineController_LS_IdleStateMachine_Init();

    /* S-Function Block: <S209>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s209_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S213>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s213_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S114>/AiflowOffset' */

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

    /* End of InitializeConditions for SubSystem: '<S114>/AiflowOffset' */

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
    /* Initial conditions for function-call system: '<S93>/Boost Control' */

    /* S-Function Block: <S137>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s137_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
    }

    /* S-Function Block: <S147>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s147_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

    /* S-Function Block: <S192>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s192_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

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
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S282>/Initial Condition is True' */
    BaseEngineController_LS_DWork.s282_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S115>/O2 PID Controller Bank A' */
  /* InitializeConditions for UnitDelay: '<S261>/Unit Delay' */
  BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S258>/Unit Delay' */
  BaseEngineController_LS_DWork.s258_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S257>/Unit Delay' */
  BaseEngineController_LS_DWork.s257_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S258>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s258_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay1' */
  BaseEngineController_LS_DWork.s254_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S262>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s262_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
  BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S264>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s264_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay2' */
  BaseEngineController_LS_DWork.s254_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S263>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s263_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S115>/O2 PID Controller Bank A' */

  /* InitializeConditions for Atomic SubSystem: '<S115>/O2 PID Controller Bank B' */
  /* InitializeConditions for UnitDelay: '<S273>/Unit Delay' */
  BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S270>/Unit Delay' */
  BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S269>/Unit Delay' */
  BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S270>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s270_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S266>/Unit Delay1' */
  BaseEngineController_LS_DWork.s266_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S274>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s274_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
  BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S276>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s276_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S266>/Unit Delay2' */
  BaseEngineController_LS_DWork.s266_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S275>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s275_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S115>/O2 PID Controller Bank B' */
  /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S495>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_DWork.s495_motohawk_trigger1_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S833>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S840>/Out1' */
  BaseEngineController_LS_B.s833_Merge = 0.005;

  /* End of Start for SubSystem: '<S833>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S833>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S838>/Out1' */
  BaseEngineController_LS_B.s833_Merge = 0.005;

  /* End of Start for SubSystem: '<S833>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S834>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S843>/Out1' */
  BaseEngineController_LS_B.s834_Merge = 0.005;

  /* End of Start for SubSystem: '<S834>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S834>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S841>/Out1' */
  BaseEngineController_LS_B.s834_Merge = 0.005;

  /* End of Start for SubSystem: '<S834>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S72>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S82>/CycleCounter' */
  BaseEngineController_LS_B.s82_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S82>/CycleNumber' */
  BaseEngineController_LS_B.s82_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_869p0001 */
  BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
  BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
  BaseEngineController_LS_DWork.s72_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for Enabled SubSystem: '<S405>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S450>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s450_CollectAverage);

  /* End of Start for SubSystem: '<S450>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S450>/Unit Delay' */
  BaseEngineController_LS_DWork.s450_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S405>/Capture IAT At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S859>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S864>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_DWork.s864_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S859>/EST Enable TDC Counter' */

  /* S-Function Block: <S802>/Spark Sequence */
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11294p0006 */
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

  /* S-Function Block: <S808>/Injector Sequence */
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

    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S489>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S490>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S489>/Triggered Subsystem' incorporates:
   *  Start for SubSystem: '<S307>/MisfireDiagSub'
   */

  /* Start for function-call system: '<S328>/MisfireDiagFunc' */

  /* Start for If: '<S347>/If' */
  BaseEngineController_LS_DWork.s347_If_ActiveSubsystem = -1;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_HIRES_6521p0004 */
  BaseEngineController_LS_DWork.s328_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S489>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S490>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S314>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s314_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S315>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s315_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S382>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s382_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S385>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s385_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S383>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s383_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S384>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s384_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_DWork.s318_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Start for S-Function (motohawk_sfun_trigger): '<S701>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_DWork.s701_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S703>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_DWork.s703_motohawk_trigger_DWORK1 = 0;
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
  real_T rtb_UnitDelay_ml;
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
  real_T rtb_UnitDelay1_jn;
  real_T rtb_Merge_ox;
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_h;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_UnitDelay1_f4;
  real_T rtb_Merge_f;
  real_T rtb_UnitDelay1_a;
  real_T rtb_Merge_in;
  real_T rtb_UnitDelay1_n5;
  real_T rtb_Merge_jq;
  real_T rtb_motohawk_delta_time_ok;
  real_T rtb_motohawk_interpolation_2d_d;
  real_T rtb_Saturation1_c;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_interpolation_2d1_n;
  real_T rtb_UnitDelay_nr;
  real_T rtb_Merge_dv;
  real_T rtb_motohawk_delta_time_ow;
  real_T rtb_motohawk_delta_time_dd;
  real_T rtb_motohawk_delta_time_oz;
  real_T rtb_Sum1_hu;
  real_T rtb_motohawk_delta_time_b3;
  real_T rtb_motohawk_delta_time_lc;
  real_T rtb_Gain_e;
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
  real_T rtb_motohawk_delta_time_ec;
  real_T rtb_Saturation_l;
  real_T rtb_motohawk_delta_time_iq;
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
  real_T rtb_Saturation_bz;
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
  real_T rtb_motohawk_delta_time_a1;
  real_T rtb_motohawk_delta_time_eq;
  real_T rtb_motohawk_delta_time_bh;
  real_T rtb_motohawk_delta_time_lv;
  real_T rtb_Saturation_jz;
  real_T rtb_Saturation_lu;
  real_T rtb_Saturation_oq;
  real_T rtb_motohawk_interpolation_1d1_m;
  real_T rtb_motohawk_interpolation_2d2_h;
  real_T rtb_motohawk_interpolation_1d2_ld;
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
  real_T rtb_Sum_ac;
  real_T rtb_motohawk_interpolation_2d_o;
  real_T rtb_motohawk_interpolation_1d_hw;
  real_T rtb_motohawk_interpolation_1d1_os;
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
  real_T rtb_Product_mq;
  real_T rtb_UnitDelay_gh;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_gx;
  real_T rtb_DataTypeConversion_c4;
  real_T rtb_motohawk_interpolation_1d3_a;
  real_T rtb_Product5_o;
  real_T rtb_Switch_bn;
  real_T rtb_DataTypeConversion_fq;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_Abs_co;
  real_T rtb_Switch_hp;
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
  int16_T rtb_motohawk_data_read_ld;
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
  uint16_T rtb_Product_mp;
  index_T rtb_motohawk_prelookup_aq;
  index_T rtb_motohawk_prelookup_he;
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
  int8_T rtb_motohawk_interpolation_2d_m0;
  uint8_T rtb_Compare_bx;
  uint8_T rtb_Compare_d;
  uint8_T rtb_Compare_g;
  uint8_T rtb_motohawk_data_read1_bz;
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
  boolean_T rtb_LogicalOperator4_mg;
  boolean_T rtb_LogicalOperator_bx;
  boolean_T rtb_LogicalOperator1_joj;
  boolean_T rtb_LogicalOperator2_bv;
  boolean_T rtb_LogicalOperator1_pp;
  boolean_T rtb_LogicalOperator2_di3;
  boolean_T rtb_LogicalOperator4_l;
  boolean_T rtb_LogicalOperator4_le;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_LogicalOperator5_kw;
  boolean_T rtb_LogicalOperator4_kk;
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
  boolean_T rtb_RelationalOperator6_h;
  boolean_T rtb_LogicalOperator1_cv;
  boolean_T rtb_RelationalOperator5_fz;
  real_T minV;
  real_T minV_0;
  int32_T maxV;
  boolean_T rtb_LogicalOperator6_b;
  boolean_T rtb_LogicalOperator1_al;
  real_T rtb_DataTypeConversion1_e;
  real_T rtb_DataTypeConversion_ik;
  real_T rtb_UnitDelay_nd;
  real_T rtb_UnitDelay1_h;
  real_T rtb_Sum2_gr;
  real_T rtb_Sum1_mz;
  real_T rtb_Switch_fz;
  real_T rtb_Merge_b3;
  boolean_T rtb_RelOp_d;
  boolean_T rtb_RelationalOperator_hl;
  boolean_T rtb_LogicalOperator_c2;
  real_T rtb_Sum1_p3;
  real_T rtb_UnitDelay1_ad;
  real_T rtb_UnitDelay3_m;
  real_T rtb_UnitDelay4_b;
  real_T rtb_UnitDelay1_pn;
  real_T rtb_UnitDelay3_p;
  real_T rtb_UnitDelay4_a;
  real_T rtb_Abs_k;
  real_T rtb_UnitDelay1_k;
  real_T rtb_UnitDelay3_j;
  real_T rtb_UnitDelay4_ie;
  real_T rtb_APP2;
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
  uint8_T rtb_Gain5;
  uint8_T rtb_Gain4;
  uint8_T rtb_Gain3_m;
  uint8_T rtb_Gain2_m;
  uint8_T rtb_Gain1_k;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  real_T u;

  /* S-Function (motohawk_sfun_trigger): '<S495>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  if (BaseEngineController_LS_DWork.s495_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s495_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S702>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S702>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S702>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(12) || IsFaultActive(13));

  /* Logic: '<S702>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S702>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S702>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S702>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(12) || IsFaultSuspected(13));

  /* S-Function Block: <S496>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s496_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S702>/Data Type Conversion' */
  rtb_DataTypeConversion_fc = (real_T)
    BaseEngineController_LS_B.s496_motohawk_ain2;

  /* S-Function Block: <S726>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_fc,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_aq = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S726>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s726_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_aq, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S702>/Unit Delay' */
  rtb_UnitDelay_jb = BaseEngineController_LS_DWork.s702_UnitDelay_DSTATE;

  /* If: '<S702>/If' incorporates:
   *  Logic: '<S702>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S702>/If Action Subsystem' incorporates:
     *  ActionPort: '<S721>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jb, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S702>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S702>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S722>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S702>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S702>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S723>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s726_motohawk_interpolation_1d, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S702>/If Action Subsystem2' */
  }

  /* End of If: '<S702>/If' */

  /* MinMax: '<S725>/MinMax' incorporates:
   *  Constant: '<S702>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_c >= 0.0 ? rtb_Merge_c : 0.0;

  /* MinMax: '<S725>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_e <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S720>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s720_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S720>/Product' incorporates:
   *  MinMax: '<S720>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP2FiltConst_DataStore());

  /* Sum: '<S727>/Sum1' incorporates:
   *  Constant: '<S727>/Constant'
   *  MinMax: '<S725>/MinMax1'
   *  Product: '<S727>/Product'
   *  Product: '<S727>/Product1'
   *  Sum: '<S727>/Sum'
   *  UnitDelay: '<S727>/Unit Delay'
   */
  rtb_Sum1_nb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_e;

  /* If: '<S724>/If' incorporates:
   *  Inport: '<S728>/In1'
   *  Inport: '<S729>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S724>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S724>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S724>/NewValue' incorporates:
     *  ActionPort: '<S728>/Action Port'
     */
    BaseEngineController_LS_B.s724_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S724>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S724>/OldValue' incorporates:
     *  ActionPort: '<S729>/Action Port'
     */
    BaseEngineController_LS_B.s724_Merge = rtb_Sum1_nb;

    /* End of Outputs for SubSystem: '<S724>/OldValue' */
  }

  /* End of If: '<S724>/If' */

  /* Logic: '<S752>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S752>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S752>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(18) || IsFaultActive(19));

  /* Logic: '<S752>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S752>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S752>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S752>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(18) || IsFaultSuspected(19));

  /* DataTypeConversion: '<S705>/Data Type Conversion1' */
  rtb_DataTypeConversion1_e = (real_T)
    BaseEngineController_LS_B.s496_motohawk_ain2;

  /* Switch: '<S705>/Switch' incorporates:
   *  Fcn: '<S705>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration2'
   */
  if ((APP2_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s705_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s705_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S705>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S749>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S749>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s749_MinMax = (u <=
    (APP2_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP2_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S705>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s705_Switch -
    BaseEngineController_LS_B.s749_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S749>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S749>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s749_MinMax1 = (u >=
    (APP2_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP2_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S705>/Gain2' incorporates:
   *  Product: '<S705>/Product1'
   *  Sum: '<S705>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s749_MinMax1 -
     BaseEngineController_LS_B.s749_MinMax) * 100.0;

  /* MinMax: '<S753>/MinMax' incorporates:
   *  Constant: '<S705>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S753>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s753_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP2_AdaptMaxLimit_DataStore())) || rtIsNaN((APP2_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP2_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S751>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s751_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S751>/Product' incorporates:
   *  MinMax: '<S751>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S751>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP2_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP2_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2_AdaptFilterConst_DataStore());

  /* Sum: '<S759>/Sum1' incorporates:
   *  Constant: '<S759>/Constant'
   *  Product: '<S759>/Product'
   *  Product: '<S759>/Product1'
   *  Sum: '<S759>/Sum'
   *  UnitDelay: '<S759>/Unit Delay'
   */
  rtb_Sum1_b4 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s759_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s753_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S752>/Unit Delay1' */
  rtb_UnitDelay1_ok = BaseEngineController_LS_DWork.s752_UnitDelay1_DSTATE;

  /* If: '<S752>/If' incorporates:
   *  Logic: '<S752>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S752>/If Action Subsystem' incorporates:
     *  ActionPort: '<S760>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ok, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S752>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S752>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S761>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2_AdaptDfltValue_DataStore()),
      &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S752>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S752>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S762>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_b4, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S752>/If Action Subsystem2' */
  }

  /* End of If: '<S752>/If' */

  /* If: '<S763>/If' incorporates:
   *  Inport: '<S764>/In1'
   *  Inport: '<S765>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S763>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S763>/override_enable'
   */
  if ((APP2_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S763>/NewValue' incorporates:
     *  ActionPort: '<S764>/Action Port'
     */
    BaseEngineController_LS_B.s763_Merge = (APP2_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S763>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S763>/OldValue' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    BaseEngineController_LS_B.s763_Merge = rtb_Merge_m;

    /* End of Outputs for SubSystem: '<S763>/OldValue' */
  }

  /* End of If: '<S763>/If' */

  /* Switch: '<S496>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S496>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP2 = BaseEngineController_LS_B.s763_Merge;
  } else {
    rtb_APP2 = BaseEngineController_LS_B.s724_Merge;
  }

  /* End of Switch: '<S496>/Switch1' */
  /* Logic: '<S700>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S700>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S700>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S700>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S700>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S700>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S700>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S496>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s496_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S700>/Data Type Conversion' */
  rtb_DataTypeConversion_hd = (real_T)
    BaseEngineController_LS_B.s496_motohawk_ain1;

  /* S-Function Block: <S714>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_hd,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_he = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S714>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s714_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_he, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S700>/Unit Delay' */
  rtb_UnitDelay_ml = BaseEngineController_LS_DWork.s700_UnitDelay_DSTATE;

  /* If: '<S700>/If' incorporates:
   *  Logic: '<S700>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S700>/If Action Subsystem' incorporates:
     *  ActionPort: '<S709>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_ml, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S700>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S700>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S710>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S700>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S700>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S711>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s714_motohawk_interpolation_1d, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S700>/If Action Subsystem2' */
  }

  /* End of If: '<S700>/If' */

  /* MinMax: '<S713>/MinMax' incorporates:
   *  Constant: '<S700>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_o >= 0.0 ? rtb_Merge_o : 0.0;

  /* MinMax: '<S713>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_e <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S708>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s708_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S708>/Product' incorporates:
   *  MinMax: '<S708>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S708>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP1FiltConst_DataStore());

  /* Sum: '<S715>/Sum1' incorporates:
   *  Constant: '<S715>/Constant'
   *  MinMax: '<S713>/MinMax1'
   *  Product: '<S715>/Product'
   *  Product: '<S715>/Product1'
   *  Sum: '<S715>/Sum'
   *  UnitDelay: '<S715>/Unit Delay'
   */
  rtb_Sum1_m = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s715_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_e;

  /* If: '<S712>/If' incorporates:
   *  Inport: '<S716>/In1'
   *  Inport: '<S717>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S712>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S712>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S712>/NewValue' incorporates:
     *  ActionPort: '<S716>/Action Port'
     */
    BaseEngineController_LS_B.s712_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S712>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S712>/OldValue' incorporates:
     *  ActionPort: '<S717>/Action Port'
     */
    BaseEngineController_LS_B.s712_Merge = rtb_Sum1_m;

    /* End of Outputs for SubSystem: '<S712>/OldValue' */
  }

  /* End of If: '<S712>/If' */

  /* Logic: '<S735>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S735>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S735>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(10) || IsFaultActive(11));

  /* Logic: '<S735>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S735>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S735>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S735>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(10) || IsFaultSuspected(11));

  /* DataTypeConversion: '<S704>/Data Type Conversion1' */
  rtb_DataTypeConversion1_e = (real_T)
    BaseEngineController_LS_B.s496_motohawk_ain1;

  /* Switch: '<S704>/Switch' incorporates:
   *  Fcn: '<S704>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration2'
   */
  if ((APP1_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s704_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s704_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S704>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S732>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S732>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s732_MinMax = (u <=
    (APP1_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP1_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S704>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s704_Switch -
    BaseEngineController_LS_B.s732_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S732>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S732>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s732_MinMax1 = (u >=
    (APP1_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP1_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S704>/Gain2' incorporates:
   *  Product: '<S704>/Product1'
   *  Sum: '<S704>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s732_MinMax1 -
     BaseEngineController_LS_B.s732_MinMax) * 100.0;

  /* MinMax: '<S736>/MinMax' incorporates:
   *  Constant: '<S704>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S736>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s736_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP1_AdaptMaxLimit_DataStore())) || rtIsNaN((APP1_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP1_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S734>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s734_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S734>/Product' incorporates:
   *  MinMax: '<S734>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S734>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP1_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1_AdaptFilterConst_DataStore());

  /* Sum: '<S742>/Sum1' incorporates:
   *  Constant: '<S742>/Constant'
   *  Product: '<S742>/Product'
   *  Product: '<S742>/Product1'
   *  Sum: '<S742>/Sum'
   *  UnitDelay: '<S742>/Unit Delay'
   */
  rtb_Sum1_h1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s742_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s736_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S735>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_LS_DWork.s735_UnitDelay1_DSTATE;

  /* If: '<S735>/If' incorporates:
   *  Logic: '<S735>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S735>/If Action Subsystem' incorporates:
     *  ActionPort: '<S743>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_e, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S735>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S735>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S744>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1_AdaptDfltValue_DataStore()),
      &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S735>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S735>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S745>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_h1, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S735>/If Action Subsystem2' */
  }

  /* End of If: '<S735>/If' */

  /* If: '<S746>/If' incorporates:
   *  Inport: '<S747>/In1'
   *  Inport: '<S748>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S746>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S746>/override_enable'
   */
  if ((APP1_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S746>/NewValue' incorporates:
     *  ActionPort: '<S747>/Action Port'
     */
    BaseEngineController_LS_B.s746_Merge = (APP1_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S746>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S746>/OldValue' incorporates:
     *  ActionPort: '<S748>/Action Port'
     */
    BaseEngineController_LS_B.s746_Merge = rtb_Merge_ao;

    /* End of Outputs for SubSystem: '<S746>/OldValue' */
  }

  /* End of If: '<S746>/If' */

  /* Switch: '<S496>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S496>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP1 = BaseEngineController_LS_B.s746_Merge;
  } else {
    rtb_APP1 = BaseEngineController_LS_B.s712_Merge;
  }

  /* End of Switch: '<S496>/Switch' */
  /* Logic: '<S447>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S447>/Logical Operator6' incorporates:
   *  Logic: '<S447>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (rtb_LogicalOperator6_b && (IsFaultActive(12) ||
    IsFaultActive(13)));

  /* Switch: '<S447>/Switch2' incorporates:
   *  Logic: '<S447>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_al || IsFaultActive(20)) {
    /* MinMax: '<S447>/MinMax' */
    rtb_DataTypeConversion1_e = (rtb_APP2 <= rtb_APP1) || rtIsNaN(rtb_APP1) ?
      rtb_APP2 : rtb_APP1;
  } else {
    /* Switch: '<S447>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      rtb_DataTypeConversion1_e = rtb_APP2;
    } else {
      rtb_DataTypeConversion1_e = rtb_APP1;
    }

    /* End of Switch: '<S447>/Switch1' */
  }

  /* End of Switch: '<S447>/Switch2' */
  /* Switch: '<S451>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S451>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* DataTypeConversion: '<S451>/Data Type Conversion' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S451>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_b2 = (real_T)((uint8_T)(Overheat_MaxAPP_DataStore()));

    /* MinMax: '<S470>/MinMax' incorporates:
     *  Constant: '<S451>/Constant1'
     *  Product: '<S451>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S451>/motohawk_calibration2'
     */
    u = (Overheat_ScaleAPP_DataStore()) * rtb_DataTypeConversion1_e;
    u = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S470>/MinMax1' incorporates:
     *  Constant: '<S451>/Constant1'
     *  MinMax: '<S470>/MinMax'
     */
    BaseEngineController_LS_B.s451_Switch1 = u <= rtb_DataTypeConversion_b2 ? u :
      rtb_DataTypeConversion_b2;
  } else {
    BaseEngineController_LS_B.s451_Switch1 = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S451>/Switch1' */
  /* S-Function Block: <S481>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s481_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hb = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S481>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S481>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S481>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s481_Sum = rtb_motohawk_delta_time_hb +
    TimeSinceKeyOnTimer_DataStore();

  /* S-Function Block: <S439>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_B.s677_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s677_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_B.s439_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S440>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_B.s695_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s695_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_B.s440_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S577>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s577_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S577>/Product' incorporates:
   *  MinMax: '<S577>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_e : (ACPresFilterConst_DataStore());

  /* Logic: '<S568>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S568>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S568>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S568>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S568>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S568>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S568>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S494>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s494_motohawk_ain4,
      NULL);
  }

  /* DataTypeConversion: '<S568>/Data Type Conversion' */
  rtb_DataTypeConversion_ik = (real_T)
    BaseEngineController_LS_B.s494_motohawk_ain4;

  /* Product: '<S568>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S568>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_ik * (ACPresGain_DataStore());

  /* Sum: '<S568>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S568>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s568_Sum1 = rtb_DataTypeConversion1_e +
    (ACPresOfst_DataStore());

  /* UnitDelay: '<S568>/Unit Delay1' */
  rtb_UnitDelay1_i = BaseEngineController_LS_DWork.s568_UnitDelay1_DSTATE;

  /* If: '<S568>/If' incorporates:
   *  Logic: '<S568>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S568>/If Action Subsystem' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_i, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S568>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S568>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S568>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S568>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s568_Sum1, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S568>/If Action Subsystem2' */
  }

  /* End of If: '<S568>/If' */

  /* Sum: '<S582>/Sum1' incorporates:
   *  Constant: '<S582>/Constant'
   *  Product: '<S582>/Product'
   *  Product: '<S582>/Product1'
   *  Sum: '<S582>/Sum'
   *  UnitDelay: '<S582>/Unit Delay'
   */
  rtb_Sum1_li = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s582_UnitDelay_DSTATE + rtb_Merge_b *
    rtb_DataTypeConversion_e;

  /* If: '<S581>/If' incorporates:
   *  Inport: '<S583>/In1'
   *  Inport: '<S584>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S581>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S581>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S581>/NewValue' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    BaseEngineController_LS_B.s581_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S581>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S581>/OldValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    BaseEngineController_LS_B.s581_Merge = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S581>/OldValue' */
  }

  /* End of If: '<S581>/If' */

  /* S-Function Block: <S437>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_B.s581_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s581_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    BaseEngineController_LS_B.s437_motohawk_prelookup = (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S493>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S493>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S493>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_B.s493_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S453>/Data Type Conversion' */
  if (BaseEngineController_LS_B.s493_RPMInst < 65536.0) {
    if (BaseEngineController_LS_B.s493_RPMInst >= 0.0) {
      rtb_DataTypeConversion_iq = (uint16_T)
        BaseEngineController_LS_B.s493_RPMInst;
    } else {
      rtb_DataTypeConversion_iq = 0U;
    }
  } else {
    rtb_DataTypeConversion_iq = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S453>/Data Type Conversion' */
  /* Sum: '<S453>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_Product_mp = (uint16_T)i;

  /* End of Sum: '<S453>/Sum' */

  /* RelationalOperator: '<S453>/Relational Operator1' */
  BaseEngineController_LS_B.s453_Stall = ((rtb_DataTypeConversion_iq <
    rtb_Product_mp));

  /* RelationalOperator: '<S453>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration4'
   */
  BaseEngineController_LS_B.s453_Crank = ((rtb_DataTypeConversion_iq >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S453>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_iq > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S453>/Unit Delay' */
  BaseEngineController_LS_B.s453_UnitDelay =
    BaseEngineController_LS_DWork.s453_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S453>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_8437p0004 */
  if (BaseEngineController_LS_DWork.s453_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s453_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S453>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S453>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration2'
   */
  BaseEngineController_LS_B.s453_Run = ((rtb_LogicalOperator6_b &&
    (BaseEngineController_LS_B.s476_Switch >= ((uint8_T)(RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S453>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_LS_DWork.s474_is_c2_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_Crank:
    /* During 'Crank': '<S474>:3' */
    if (BaseEngineController_LS_B.s453_Stall) {
      /* Transition: '<S474>:8' */
      BaseEngineController_LS_DWork.s474_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_h;

      /* Entry 'Stall': '<S474>:1' */
      BaseEngineController_LS_B.s474_State = 1U;
    } else {
      if (BaseEngineController_LS_B.s453_Run) {
        /* Transition: '<S474>:6' */
        BaseEngineController_LS_DWork.s474_is_c2_BaseEngineController_LS =
          BaseEngineController_LS_IN_Run;

        /* Entry 'Run': '<S474>:2' */
        BaseEngineController_LS_B.s474_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_IN_Run:
    /* During 'Run': '<S474>:2' */
    if (BaseEngineController_LS_B.s453_Stall) {
      /* Transition: '<S474>:7' */
      BaseEngineController_LS_DWork.s474_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_h;

      /* Entry 'Stall': '<S474>:1' */
      BaseEngineController_LS_B.s474_State = 1U;
    }
    break;

   case BaseEngineController_LS_IN_Stall_h:
    /* During 'Stall': '<S474>:1' */
    if (BaseEngineController_LS_B.s453_Crank) {
      /* Transition: '<S474>:5' */
      BaseEngineController_LS_DWork.s474_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Crank;

      /* Entry 'Crank': '<S474>:3' */
      BaseEngineController_LS_B.s474_State = 2U;
    }
    break;

   default:
    /* Transition: '<S474>:4' */
    BaseEngineController_LS_DWork.s474_is_c2_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall_h;

    /* Entry 'Stall': '<S474>:1' */
    BaseEngineController_LS_B.s474_State = 1U;
    break;
  }

  /* End of Stateflow: '<S453>/Engine State Machine' */

  /* RelationalOperator: '<S96>/RelOp' incorporates:
   *  Constant: '<S96>/Constant'
   */
  rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s474_State == 1);

  /* S-Function Block: <S492>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_i, NULL);
  }

  /* DataTypeConversion: '<S517>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S492>/motohawk_ain5'
   */
  BaseEngineController_LS_B.s517_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_i;

  /* RelationalOperator: '<S517>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S517>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s517_DataTypeConversion >
                            (ACSwSwitchPt_DataStore()));

  /* Logic: '<S517>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S517>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ACSwPolarity_DataStore());

  /* If: '<S524>/If' incorporates:
   *  Inport: '<S525>/In1'
   *  Inport: '<S526>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S524>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S524>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S524>/NewValue' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    BaseEngineController_LS_B.s524_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S524>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S524>/OldValue' incorporates:
     *  ActionPort: '<S526>/Action Port'
     */
    BaseEngineController_LS_B.s524_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S524>/OldValue' */
  }

  /* End of If: '<S524>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (rtb_LogicalOperator1_al) {
    if (!BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S291>/Unit Delay' */
      BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S292>/Unit Delay' */
      BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S293>/Unit Delay' */
      BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S294>/Unit Delay' */
      BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = 0.0;

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

      /* InitializeConditions for Stateflow: '<S287>/Ice Break' */
      BaseEngineController_LS_DWork.s295_is_active_c3_BaseEngineController_LS =
        0U;
      BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS = 0U;
      BaseEngineController_LS_B.s295_etc = 0.0;
      BaseEngineController_LS_DWork.s295_presentTicks = 0U;
      BaseEngineController_LS_DWork.s295_elapsedTicks = 0U;
      BaseEngineController_LS_DWork.s295_previousTicks = 0U;

      /* Enable for Stateflow: '<S287>/Ice Break' */
      BaseEngineController_LS_DWork.s295_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s295_previousTicks =
        BaseEngineController_LS_DWork.s295_presentTicks;
      BaseEngineController_LS_DWork.s15_Stall_MODE = TRUE;
    }

    /* DataTypeConversion: '<S95>/Data Type Conversion' incorporates:
     *  Constant: '<S95>/OFF'
     */
    BaseEngineController_LS_B.s92_WASTEGATE = 0.0;

    /* DataTypeConversion: '<S95>/Data Type Conversion1' incorporates:
     *  Constant: '<S95>/OFF1'
     */
    BaseEngineController_LS_B.s92_IACS = 0.0;

    /* DataTypeConversion: '<S95>/Data Type Conversion2' incorporates:
     *  Constant: '<S95>/OFF2'
     */
    BaseEngineController_LS_B.s92_IACP = 0.0;

    /* RelationalOperator: '<S288>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s677_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S288>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s677_Merge <=
                     (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S291>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S291>/Switch1' incorporates:
     *  UnitDelay: '<S291>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator6_b = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator6_b =
        BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S291>/Switch1' */
    /* RelationalOperator: '<S289>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration3'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s695_Merge >= (IATFanOn_DataStore
                      ()));

    /* RelationalOperator: '<S289>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration2'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s695_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S292>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S292>/Switch1' incorporates:
     *  UnitDelay: '<S292>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator1_al = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator1_al =
        BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S292>/Switch1' */
    /* RelationalOperator: '<S290>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration5'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s581_Merge >=
                     (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S290>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s581_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S293>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S293>/Switch1' incorporates:
     *  UnitDelay: '<S293>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_Switch1_pb = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_Switch1_pb = BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S293>/Switch1' */
    /* Switch: '<S285>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S285>/motohawk_interpolation_1d'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch_om = (real_T)rtb_LogicalOperator6_b;
    } else {
      /* S-Function Block: <S285>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
           ((ECTFanSpeed_StallTbl_DataStore())), 5);
        (ECTFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d_c;
      }

      rtb_Switch_om = rtb_motohawk_interpolation_1d_c;
    }

    /* End of Switch: '<S285>/Switch' */

    /* Switch: '<S285>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S285>/motohawk_interpolation_1d1'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch1_f = (real_T)rtb_LogicalOperator1_al;
    } else {
      /* S-Function Block: <S285>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_a = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s440_motohawk_prelookup, (real_T *)
           ((IATFanSpeed_StallTbl_DataStore())), 5);
        (IATFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d1_a;
      }

      rtb_Switch1_f = rtb_motohawk_interpolation_1d1_a;
    }

    /* End of Switch: '<S285>/Switch1' */

    /* Switch: '<S285>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S285>/motohawk_interpolation_1d2'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch2_a = (real_T)rtb_Switch1_pb;
    } else {
      /* S-Function Block: <S285>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_g = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s437_motohawk_prelookup, (real_T *)
           ((ACPresFanSpeed_StallTbl_DataStore())), 5);
        (ACPresFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d2_g;
      }

      rtb_Switch2_a = rtb_motohawk_interpolation_1d2_g;
    }

    /* End of Switch: '<S285>/Switch2' */

    /* Switch: '<S285>/Switch3' incorporates:
     *  Product: '<S285>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration15'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch3_p = (real_T)BaseEngineController_LS_B.s524_Merge;
    } else {
      rtb_Switch3_p = (real_T)BaseEngineController_LS_B.s524_Merge *
        (ACSwFanSpeed_Stall_DataStore());
    }

    /* End of Switch: '<S285>/Switch3' */

    /* S-Function (motohawk_sfun_fault_action): '<S285>/motohawk_fault_action'
     *
     * Regarding '<S285>/motohawk_fault_action':
       Get Fault Action Status: DisableFanStall
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_Switch_oh = GetFaultActionStatus(5);
    }

    /* Switch: '<S285>/Switch4' incorporates:
     *  Constant: '<S285>/Constant'
     */
    if (rtb_Switch_oh) {
      rtb_Switch4_i = 0.0;
    } else {
      /* Product: '<S285>/Product3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration9'
       */
      rtb_DataTypeConversion1_e = rtb_Switch3_p * (real_T)(Fan1ACSw_DataStore());

      /* Product: '<S285>/Product2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration8'
       */
      rtb_DataTypeConversion_b2 = rtb_Switch2_a * (real_T)(Fan1ACPres_DataStore());

      /* Product: '<S285>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration7'
       */
      rtb_Product1_gw = rtb_Switch1_f * (real_T)(Fan1IAT_DataStore());

      /* MinMax: '<S285>/MinMax' incorporates:
       *  Product: '<S285>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration6'
       */
      u = rtb_Switch_om * (real_T)(Fan1ECT_DataStore());
      u = (u >= rtb_Product1_gw) || rtIsNaN(rtb_Product1_gw) ? u :
        rtb_Product1_gw;
      u = (u >= rtb_DataTypeConversion_b2) || rtIsNaN(rtb_DataTypeConversion_b2)
        ? u : rtb_DataTypeConversion_b2;
      rtb_Switch4_i = (u >= rtb_DataTypeConversion1_e) || rtIsNaN
        (rtb_DataTypeConversion1_e) ? u : rtb_DataTypeConversion1_e;
    }

    /* End of Switch: '<S285>/Switch4' */

    /* Switch: '<S285>/Switch5' incorporates:
     *  Constant: '<S285>/Constant1'
     */
    if (rtb_Switch_oh) {
      rtb_DataTypeConversion1_e = 0.0;
    } else {
      /* Product: '<S285>/Product7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration13'
       */
      rtb_Product1_gw = rtb_Switch3_p * (real_T)(Fan2ACSw_DataStore());

      /* Product: '<S285>/Product6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration12'
       */
      rtb_DataTypeConversion_b2 = rtb_Switch2_a * (real_T)(Fan2ACPres_DataStore());

      /* Product: '<S285>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration11'
       */
      rtb_DataTypeConversion1_e = rtb_Switch1_f * (real_T)(Fan2IAT_DataStore());

      /* MinMax: '<S285>/MinMax1' incorporates:
       *  Product: '<S285>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration10'
       */
      u = rtb_Switch_om * (real_T)(Fan2ECT_DataStore());
      u = (u >= rtb_DataTypeConversion1_e) || rtIsNaN(rtb_DataTypeConversion1_e)
        ? u : rtb_DataTypeConversion1_e;
      u = (u >= rtb_DataTypeConversion_b2) || rtIsNaN(rtb_DataTypeConversion_b2)
        ? u : rtb_DataTypeConversion_b2;
      rtb_DataTypeConversion1_e = (u >= rtb_Product1_gw) || rtIsNaN
        (rtb_Product1_gw) ? u : rtb_Product1_gw;
    }

    /* End of Switch: '<S285>/Switch5' */

    /* UnitDelay: '<S294>/Unit Delay' */
    BaseEngineController_LS_B.s294_UnitDelay =
      BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE;

    /* Switch: '<S286>/Switch' incorporates:
     *  Constant: '<S286>/Constant'
     *  RelationalOperator: '<S286>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore())) {
      rtb_Switch_oh = TRUE;
    } else {
      rtb_Switch_oh = (BaseEngineController_LS_B.s294_UnitDelay <
                       (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S286>/Switch' */
    /* S-Function Block: <S294>/motohawk_delta_time */
    rtb_motohawk_delta_time_op = 0.005;

    /* Sum: '<S294>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S294>/motohawk_delta_time'
     */
    rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_op +
      BaseEngineController_LS_B.s294_UnitDelay;

    /* S-Function Block: <S296>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s296_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_cj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S287>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration3'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s451_Switch1 >=
      (ETC_StallAppOvrThesh_DataStore()));

    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S296>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S296>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S296>/motohawk_delta_time'
     *  Sum: '<S296>/Sum'
     */
    if (rtb_RelationalOperator2_py) {
      rtb_Product1_gw = rtb_motohawk_delta_time_cj + AppStallOvrTmr_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S296>/Switch' */
    /* RelationalOperator: '<S287>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_bp = (rtb_Product1_gw >=
      (ETC_StallAppOvrTm_DataStore()));

    /* Stateflow: '<S287>/Ice Break' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration2'
     */
    BaseEngineController_LS_DWork.s295_presentTicks =
      BaseEngineController_LS_M->Timing.clockTick0;
    BaseEngineController_LS_DWork.s295_elapsedTicks =
      BaseEngineController_LS_DWork.s295_presentTicks -
      BaseEngineController_LS_DWork.s295_previousTicks;
    BaseEngineController_LS_DWork.s295_previousTicks =
      BaseEngineController_LS_DWork.s295_presentTicks;
    BaseEngineController_LS_DWork.s295_temporalCounter_i1 =
      BaseEngineController_LS_DWork.s295_temporalCounter_i1 +
      BaseEngineController_LS_DWork.s295_elapsedTicks;

    /* Gateway: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    /* During: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    if (BaseEngineController_LS_DWork.s295_is_active_c3_BaseEngineController_LS ==
        0) {
      /* Entry: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
      BaseEngineController_LS_DWork.s295_is_active_c3_BaseEngineController_LS =
        1U;

      /* Transition: '<S295>:2' */
      BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS =
        BaseEngineController_LS_IN_Init;
    } else {
      switch (BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS)
  {
       case BaseEngineController_LS_IN_Init:
        /* During 'Init': '<S295>:1' */
        if (BaseEngineController_LS_B.s481_Sum < (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S295>:5' */
          BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Open;
          BaseEngineController_LS_DWork.s295_temporalCounter_i1 = 0U;
        } else {
          BaseEngineController_LS_B.s295_etc = 0.0;
        }
        break;

       case BaseEngineController_LS_IN_Open:
        /* During 'Open': '<S295>:4' */
        if (BaseEngineController_LS_DWork.s295_temporalCounter_i1 >= (uint32_T)
            ceil((ETC_IceBreakHoldTm_DataStore()) / 0.2 - 2.0E-9)) {
          /* Transition: '<S295>:14' */
          BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Wait;
        } else {
          BaseEngineController_LS_B.s295_etc = (ETC_IceBreakPos_DataStore());
        }
        break;

       case BaseEngineController_LS_IN_Wait:
        /* During 'Wait': '<S295>:15' */
        if (BaseEngineController_LS_B.s481_Sum > (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S295>:16' */
          BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Init;
        } else {
          BaseEngineController_LS_B.s295_etc = 0.0;
        }
        break;

       default:
        /* Transition: '<S295>:2' */
        BaseEngineController_LS_DWork.s295_is_c3_BaseEngineController_LS =
          BaseEngineController_LS_IN_Init;
        break;
      }
    }

    /* End of Stateflow: '<S287>/Ice Break' */

    /* Switch: '<S287>/Switch' incorporates:
     *  Product: '<S287>/Product1'
     *  Product: '<S287>/Product2'
     */
    if ((rtb_RelationalOperator3_bp ? rtb_RelationalOperator2_py : 0) != 0) {
      BaseEngineController_LS_B.s287_Switch = (rtb_RelationalOperator3_bp ?
        (real_T)rtb_RelationalOperator2_py : 0.0) *
        BaseEngineController_LS_B.s451_Switch1;
    } else {
      BaseEngineController_LS_B.s287_Switch = BaseEngineController_LS_B.s295_etc;
    }

    /* End of Switch: '<S287>/Switch' */

    /* Saturate: '<S296>/Saturation' */
    rtb_Saturation_d1 = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S296>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AppStallOvrTmr */
    {
      AppStallOvrTmr_DataStore() = rtb_Saturation_d1;
    }

    /* ZeroOrderHold: '<S95>/Zero-Order Hold12' */
    BaseEngineController_LS_B.s92_FAN1 = rtb_Switch4_i;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold13' */
    BaseEngineController_LS_B.s92_FAN2 = rtb_DataTypeConversion1_e;

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
      BaseEngineController_LS_B.s287_Switch;

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE = rtb_LogicalOperator6_b;

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE =
      rtb_LogicalOperator1_al;

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = rtb_Switch1_pb;

    /* Update for UnitDelay: '<S294>/Unit Delay' */
    BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE =
      rtb_DataTypeConversion_b2;
  } else {
    if (BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* Disable for Stateflow: '<S287>/Ice Break' */
      BaseEngineController_LS_DWork.s295_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s295_elapsedTicks =
        BaseEngineController_LS_DWork.s295_presentTicks -
        BaseEngineController_LS_DWork.s295_previousTicks;
      BaseEngineController_LS_DWork.s295_previousTicks =
        BaseEngineController_LS_DWork.s295_presentTicks;
      BaseEngineController_LS_DWork.s295_temporalCounter_i1 =
        BaseEngineController_LS_DWork.s295_temporalCounter_i1 +
        BaseEngineController_LS_DWork.s295_elapsedTicks;
      BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* S-Function Block: <S493>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S567>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S493>/motohawk_encoder_average_rpm'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_RPM;

  /* S-Function Block: <S560>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s560_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S560>/Product' incorporates:
   *  MinMax: '<S560>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (RPMFiltConst_DataStore());

  /* Sum: '<S567>/Sum1' incorporates:
   *  Constant: '<S567>/Constant'
   *  Product: '<S567>/Product'
   *  Product: '<S567>/Product1'
   *  Sum: '<S567>/Sum'
   *  UnitDelay: '<S567>/Unit Delay'
   */
  BaseEngineController_LS_B.s567_Sum1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_DataTypeConversion_e;

  /* Logic: '<S769>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S769>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S769>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(148) || IsFaultActive(149));

  /* Logic: '<S769>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S769>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S769>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S769>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(148) || IsFaultSuspected(149));

  /* S-Function Block: <S496>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S706>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S496>/motohawk_ain6'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S706>/Switch' incorporates:
   *  Fcn: '<S706>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s706_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s706_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S706>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S766>/motohawk_data_read' */
  rtb_Product_mp = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S766>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration9'
   */
  u = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s766_MinMax = (u <= (TPS1Adapt_Low_Max_DataStore()))
    || rtIsNaN((TPS1Adapt_Low_Max_DataStore())) ? u :
    (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S706>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s706_Switch -
    BaseEngineController_LS_B.s766_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S766>/motohawk_data_read1' */
  rtb_Product_mp = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S766>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration11'
   */
  u = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s766_MinMax1 = (u >= (TPS1Adapt_Hi_Min_DataStore()))
    || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ? u : (TPS1Adapt_Hi_Min_DataStore
    ());

  /* Gain: '<S706>/Gain2' incorporates:
   *  Product: '<S706>/Product1'
   *  Sum: '<S706>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s766_MinMax1 -
     BaseEngineController_LS_B.s766_MinMax) * 100.0;

  /* MinMax: '<S770>/MinMax' incorporates:
   *  Constant: '<S706>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S770>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s770_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1MaxLimit_DataStore());

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
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1FilterConst_DataStore());

  /* Sum: '<S776>/Sum1' incorporates:
   *  Constant: '<S776>/Constant'
   *  Product: '<S776>/Product'
   *  Product: '<S776>/Product1'
   *  Sum: '<S776>/Sum'
   *  UnitDelay: '<S776>/Unit Delay'
   */
  rtb_Sum1_hw = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s776_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s770_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S769>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_LS_DWork.s769_UnitDelay1_DSTATE;

  /* If: '<S769>/If' incorporates:
   *  Logic: '<S769>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S769>/If Action Subsystem' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S769>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S769>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S778>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S769>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S769>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S779>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_hw, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S769>/If Action Subsystem2' */
  }

  /* End of If: '<S769>/If' */

  /* If: '<S780>/If' incorporates:
   *  Inport: '<S781>/In1'
   *  Inport: '<S782>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S780>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S780>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S780>/NewValue' incorporates:
     *  ActionPort: '<S781>/Action Port'
     */
    BaseEngineController_LS_B.s780_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S780>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S780>/OldValue' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    BaseEngineController_LS_B.s780_Merge = rtb_Merge_li;

    /* End of Outputs for SubSystem: '<S780>/OldValue' */
  }

  /* End of If: '<S780>/If' */

  /* Logic: '<S786>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S786>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S786>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(154) || IsFaultActive(155));

  /* Logic: '<S786>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S786>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S786>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S786>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(154) || IsFaultSuspected(155));

  /* S-Function Block: <S496>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S707>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S496>/motohawk_ain9'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S707>/Switch' incorporates:
   *  Fcn: '<S707>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s707_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s707_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S707>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S783>/motohawk_data_read' */
  rtb_Product_mp = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S783>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration9'
   */
  u = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s783_MinMax = (u <= (TPS2Adapt_Low_Max_DataStore()))
    || rtIsNaN((TPS2Adapt_Low_Max_DataStore())) ? u :
    (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S707>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s707_Switch -
    BaseEngineController_LS_B.s783_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S783>/motohawk_data_read1' */
  rtb_Product_mp = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S783>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration11'
   */
  u = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s783_MinMax1 = (u >= (TPS2Adapt_Hi_Min_DataStore()))
    || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ? u : (TPS2Adapt_Hi_Min_DataStore
    ());

  /* Gain: '<S707>/Gain2' incorporates:
   *  Product: '<S707>/Product1'
   *  Sum: '<S707>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s783_MinMax1 -
     BaseEngineController_LS_B.s783_MinMax) * 100.0;

  /* MinMax: '<S787>/MinMax' incorporates:
   *  Constant: '<S707>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S787>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s787_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S785>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s785_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S785>/Product' incorporates:
   *  MinMax: '<S785>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S785>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2FilterConst_DataStore());

  /* Sum: '<S793>/Sum1' incorporates:
   *  Constant: '<S793>/Constant'
   *  Product: '<S793>/Product'
   *  Product: '<S793>/Product1'
   *  Sum: '<S793>/Sum'
   *  UnitDelay: '<S793>/Unit Delay'
   */
  rtb_Sum1_lp = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s793_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s787_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S786>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_LS_DWork.s786_UnitDelay1_DSTATE;

  /* If: '<S786>/If' incorporates:
   *  Logic: '<S786>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S786>/If Action Subsystem' incorporates:
     *  ActionPort: '<S794>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S786>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S786>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S795>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S786>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S786>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S796>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_lp, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S786>/If Action Subsystem2' */
  }

  /* End of If: '<S786>/If' */

  /* If: '<S797>/If' incorporates:
   *  Inport: '<S798>/In1'
   *  Inport: '<S799>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S797>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S797>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S797>/NewValue' incorporates:
     *  ActionPort: '<S798>/Action Port'
     */
    BaseEngineController_LS_B.s797_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S797>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S797>/OldValue' incorporates:
     *  ActionPort: '<S799>/Action Port'
     */
    BaseEngineController_LS_B.s797_Merge = rtb_Merge_mv;

    /* End of Outputs for SubSystem: '<S797>/OldValue' */
  }

  /* End of If: '<S797>/If' */

  /* Logic: '<S458>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S458>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S458>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(148) || IsFaultActive(149));

  /* Logic: '<S458>/Logical Operator6' incorporates:
   *  Logic: '<S458>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S458>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S458>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (rtb_LogicalOperator6_b && (IsFaultActive(154) ||
    IsFaultActive(155)));

  /* Switch: '<S458>/Switch2' incorporates:
   *  Logic: '<S458>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S458>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_al || IsFaultActive(156)) {
    /* MinMax: '<S458>/MinMax' */
    BaseEngineController_LS_B.s458_Switch2 =
      (BaseEngineController_LS_B.s797_Merge >=
       BaseEngineController_LS_B.s780_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s780_Merge) ?
      BaseEngineController_LS_B.s797_Merge :
      BaseEngineController_LS_B.s780_Merge;
  } else {
    /* Switch: '<S458>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s458_Switch2 =
        BaseEngineController_LS_B.s797_Merge;
    } else {
      BaseEngineController_LS_B.s458_Switch2 =
        BaseEngineController_LS_B.s780_Merge;
    }

    /* End of Switch: '<S458>/Switch1' */
  }

  /* End of Switch: '<S458>/Switch2' */

  /* RelationalOperator: '<S91>/RelOp' incorporates:
   *  Constant: '<S91>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s474_State == 2);

  /* S-Function Block: <S594>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s594_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ea = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S594>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s594_UnitDelay_DSTATE;

  /* Logic: '<S569>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S569>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S569>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(75) || IsFaultActive(76));

  /* Logic: '<S569>/Logical Operator6' */
  rtb_LogicalOperator1_al = !rtb_LogicalOperator1_cv;

  /* Logic: '<S569>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S569>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S569>/motohawk_fault_status3'
   */
  rtb_Switch1_pb = (IsFaultSuspected(75) || IsFaultSuspected(76));

  /* S-Function Block: <S494>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_LS_B.s494_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S569>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_LS_B.s494_motohawk_frequency_in;

  /* Product: '<S569>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S569>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_b2 = rtb_DataTypeConversion_e * (FuelSensGain_DataStore
    ());

  /* Sum: '<S569>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S569>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s569_Sum1 = rtb_DataTypeConversion_b2 +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S569>/Saturation' */
  rtb_Saturation_g = BaseEngineController_LS_B.s569_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_B.s569_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s569_Sum1;

  /* UnitDelay: '<S569>/Unit Delay1' */
  rtb_UnitDelay1_ew = BaseEngineController_LS_DWork.s569_UnitDelay1_DSTATE;

  /* If: '<S569>/If' incorporates:
   *  Logic: '<S569>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_al && rtb_Switch1_pb) {
    /* Outputs for IfAction SubSystem: '<S569>/If Action Subsystem' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ew, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S569>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S569>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S569>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S569>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Saturation_g, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S569>/If Action Subsystem2' */
  }

  /* End of If: '<S569>/If' */

  /* Product: '<S594>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S594>/motohawk_delta_time'
   *  Sum: '<S594>/Sum3'
   */
  rtb_DataTypeConversion_c4 = 1.0 / rtb_motohawk_delta_time_ea * (rtb_Merge_i -
    rtb_DataTypeConversion1_e);

  /* MinMax: '<S595>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S592>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_c4 = (rtb_DataTypeConversion_c4 >= (Fall_Rate_DataStore
                                ())) || rtIsNaN((Fall_Rate_DataStore())) ?
    rtb_DataTypeConversion_c4 : (Fall_Rate_DataStore());

  /* Sum: '<S594>/Sum2' incorporates:
   *  MinMax: '<S595>/MinMax1'
   *  Product: '<S594>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S592>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S594>/motohawk_delta_time'
   */
  rtb_Sum2_gr = ((rtb_DataTypeConversion_c4 <= (Rise_Rate_DataStore())) ||
                 rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_c4 :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_ea +
    rtb_DataTypeConversion1_e;

  /* S-Function Block: <S590>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s590_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S590>/Product' incorporates:
   *  MinMax: '<S590>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S590>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_c4 : (FuelSensFilterConst_DataStore());

  /* Sum: '<S593>/Sum1' incorporates:
   *  Constant: '<S593>/Constant'
   *  Product: '<S593>/Product'
   *  Product: '<S593>/Product1'
   *  Sum: '<S593>/Sum'
   *  UnitDelay: '<S593>/Unit Delay'
   */
  rtb_Sum1_mz = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s593_UnitDelay_DSTATE + rtb_Merge_i *
    rtb_DataTypeConversion_c4;

  /* UnitDelay: '<S591>/Unit Delay' */
  rtb_UnitDelay_nd = BaseEngineController_LS_DWork.s591_UnitDelay_DSTATE;

  /* UnitDelay: '<S591>/Unit Delay1' */
  rtb_UnitDelay1_h = BaseEngineController_LS_DWork.s591_UnitDelay1_DSTATE;

  /* UnitDelay: '<S591>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s591_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S585>/Multiport Switch' incorporates:
   *  Product: '<S591>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S585>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S591>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 0:
    rtb_DataTypeConversion1_e = rtb_Sum2_gr;
    break;

   case 1:
    rtb_DataTypeConversion1_e = rtb_Sum1_mz;
    break;

   default:
    /* Product: '<S591>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S591>/motohawk_calibration3'
     */
    rtb_DataTypeConversion1_e *= (Gain3_DataStore());

    /* Sum: '<S591>/Sum2' incorporates:
     *  Product: '<S591>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S591>/motohawk_calibration2'
     */
    rtb_DataTypeConversion1_e += (Gain2_DataStore()) * rtb_UnitDelay1_h;

    /* Sum: '<S591>/Sum' incorporates:
     *  Product: '<S591>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S591>/motohawk_calibration1'
     *  Sum: '<S591>/Sum1'
     */
    rtb_DataTypeConversion1_e = ((Gain1_DataStore()) * rtb_UnitDelay_nd +
      rtb_DataTypeConversion1_e) + rtb_Merge_i;
    rtb_DataTypeConversion1_e *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S585>/Multiport Switch' */
  /* If: '<S589>/If' incorporates:
   *  Inport: '<S596>/In1'
   *  Inport: '<S597>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S589>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S589>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S589>/NewValue' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    BaseEngineController_LS_B.s589_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S589>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S589>/OldValue' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    BaseEngineController_LS_B.s589_Merge = rtb_DataTypeConversion1_e;

    /* End of Outputs for SubSystem: '<S589>/OldValue' */
  }

  /* End of If: '<S589>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Crank' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_DWork.s15_Crank_MODE = TRUE;
    }

    /* RelationalOperator: '<S102>/RelOp' incorporates:
     *  Constant: '<S102>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S100>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (((uint8_T)FuelPulseState_DataStore()) == 1);

    /* Outputs for Enabled SubSystem: '<S100>/WritePulseState' incorporates:
     *  EnablePort: '<S103>/Enable'
     */
    if (rtb_LogicalOperator6_b) {
      /* S-Function (motohawk_sfun_data_write): '<S103>/motohawk_data_write' incorporates:
       *  Constant: '<S103>/Constant'
       */
      /* Write to Data Storage as scalar: FuelPulseState */
      {
        FuelPulseState_DataStore() = ((uint8_T)2U);
      }
    }

    /* End of Outputs for SubSystem: '<S100>/WritePulseState' */
    /* S-Function Block: <S90>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s677_Merge, (CrankECT05IdxArr_DataStore()), 5,
         (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_nl = (CrankECT05Idx_DataStore());
    }

    /* Switch: '<S100>/Switch' incorporates:
     *  Constant: '<S100>/Constant'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S100>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    if (rtb_LogicalOperator6_b) {
      /* S-Function Block: <S100>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_nl, (real_T *) ((CrankPulseTbl_DataStore())),
           5);
        (CrankPulse_DataStore()) = rtb_motohawk_interpolation_1d_j;
      }

      rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_1d_j;
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S100>/Switch' */
    /* MultiPortSwitch: '<S97>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_DataTypeConversion_b2 = rtb_APP1;
    } else {
      rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s458_Switch2;
    }

    /* End of MultiPortSwitch: '<S97>/Multiport Switch1' */

    /* MultiPortSwitch: '<S101>/Multiport Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = (OpenThrottleFPCScalar_ETC_DataStore());
    } else {
      rtb_motohawk_replicate1 = (OpenThrottleFPCScalar_TPS_DataStore());
    }

    /* End of MultiPortSwitch: '<S101>/Multiport Switch2' */

    /* Sum: '<S101>/Add' incorporates:
     *  Constant: '<S101>/ClearFloodFueling1'
     *  Gain: '<S101>/Gain'
     *  Product: '<S101>/Product1'
     */
    rtb_Product1_gw = 0.01 * rtb_DataTypeConversion_b2 * rtb_motohawk_replicate1
      + 1.0;

    /* RelationalOperator: '<S97>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (rtb_DataTypeConversion_b2 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S90>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_B.s567_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s567_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_c = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s695_Merge, (CrankIAT05IdxArr_DataStore()), 5,
         (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_h = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_LS_B.s589_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s589_Merge, (CrankOXY05IdxArr_DataStore()), 5,
         (CrankOXY05Idx_DataStore()));
      rtb_motohawk_prelookup3_n = (CrankOXY05Idx_DataStore());
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
    if (rtb_LogicalOperator6_b) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S97>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_bc = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup3_n, (real_T *) ((CrankFPC_OXYMultTbl_DataStore
             ())), 5);
        (CrankFPC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_bc;
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
          (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
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
    rtb_Sum_ac = rtb_Product1_gw * rtb_motohawk_replicate1 +
      rtb_DataTypeConversion1_e;

    /* S-Function Block: <S98>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_o = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankIACMap_DataStore())), 5, 5);
      (CrankIAC_DataStore()) = rtb_motohawk_interpolation_2d_o;
    }

    /* S-Function Block: <S98>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hw = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_h, (real_T *) ((CrankIAC_IATMultTbl_DataStore())),
         5);
      (CrankIAC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_hw;
    }

    /* S-Function Block: <S98>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_os = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup3_n, (real_T *) ((CrankIAC_OXYMultTbl_DataStore())),
         5);
      (CrankIAC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_os;
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
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d_o *
      rtb_motohawk_interpolation_1d_hw * rtb_motohawk_interpolation_1d1_os;

    /* Switch: '<S99>/Switch' */
    rtb_motohawk_replicate1 = rtb_DataTypeConversion1_e;

    /* DataTypeConversion: '<S90>/Data Type Conversion' */
    BaseEngineController_LS_B.s92_IACP = rtb_motohawk_replicate1;

    /* Switch: '<S99>/Switch1' incorporates:
     *  Constant: '<S99>/Constant'
     *  Constant: '<S99>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S99>/motohawk_data_read'
     *  Sum: '<S99>/Sum'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      rtb_motohawk_replicate1 = 100.0 - rtb_DataTypeConversion1_e;
    } else {
      rtb_motohawk_replicate1 = 0.0;
    }

    /* End of Switch: '<S99>/Switch1' */

    /* DataTypeConversion: '<S90>/Data Type Conversion1' */
    BaseEngineController_LS_B.s92_IACS = rtb_motohawk_replicate1;

    /* DataTypeConversion: '<S90>/Data Type Conversion2' incorporates:
     *  Constant: '<S90>/OFF'
     */
    BaseEngineController_LS_B.s92_WASTEGATE = 0.0;

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
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
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
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
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
        y0[i1] = rtb_Sum_ac;
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
        (rtb_motohawk_prelookup1_nl, (real_T *) ((CrankAirflowSetPtTbl_DataStore
           ())), 5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_k;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s92_Throttle = rtb_motohawk_interpolation_1d1_k;
  } else {
    if (BaseEngineController_LS_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Crank' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S498>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9123p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9123p0002,
      &messageObj);
    if ((BaseEngineController_LS_B.s498_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s498_ReadCANMessage_o1)
      BaseEngineController_LS_B.s498_ReadCANMessage_o1++;
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
      BaseEngineController_LS_B.s498_Lambda = ((real_T) tmp0) / ((real_T) 10000);
      BaseEngineController_LS_B.s498_OxygenConcentratio = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s498_SystemVolts = ((real_T) tmp2) / ((real_T)
        10);
      BaseEngineController_LS_B.s498_HeaterVolts = ((real_T) tmp3) / ((real_T)
        10);
      BaseEngineController_LS_B.s498_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s498_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s498_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s498_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s498_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s498_ReadCANMessage_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S498>/Data Type Conversion2' */
  BaseEngineController_LS_B.s498_DataValidState =
    ((BaseEngineController_LS_B.s498_ReadCANMessage_o8 != 0.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S498>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9124p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9124p0001,
      &messageObj);
    if ((BaseEngineController_LS_B.s498_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s498_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s498_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_B.s498_Lambda_c = ((real_T) tmp0) / ((real_T)
        10000);
      BaseEngineController_LS_B.s498_OxygenConcentratio_d = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s498_SystemVolts_k = ((real_T) tmp2) / ((real_T)
        10);
      BaseEngineController_LS_B.s498_HeaterVolts_d = ((real_T) tmp3) / ((real_T)
        10);
      BaseEngineController_LS_B.s498_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s498_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s498_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s498_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s498_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s498_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S498>/Data Type Conversion6' */
  BaseEngineController_LS_B.s498_DataValidState_f =
    ((BaseEngineController_LS_B.s498_ReadCANMessage1_o8 != 0.0));

  /* S-Function Block: <S445>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_B.s458_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s458_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S497>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9015p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9015p0001,
      &messageObj);
    if ((BaseEngineController_LS_B.s497_ReadCANMessage2_o1 + 1) >
        BaseEngineController_LS_B.s497_ReadCANMessage2_o1)
      BaseEngineController_LS_B.s497_ReadCANMessage2_o1++;
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
      BaseEngineController_LS_B.s497_GPS_Speed = ((real_T) tmp0) / ((real_T)
        62.1373);
      BaseEngineController_LS_B.s497_GPS_Altitude = ((real_T) tmp1) / ((real_T)
        3.28084);
      BaseEngineController_LS_B.s497_GPS_Course = ((real_T) tmp2) / ((real_T)
        100);
      BaseEngineController_LS_B.s497_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s497_ReadCANMessage2_o1 = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S497>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9013p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9013p0001,
      &messageObj);
    if ((BaseEngineController_LS_B.s497_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s497_ReadCANMessage_o1)
      BaseEngineController_LS_B.s497_ReadCANMessage_o1++;
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
      BaseEngineController_LS_B.s497_GPS_Valid = (boolean_T) tmp0;
      BaseEngineController_LS_B.s497_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) 2000);
      BaseEngineController_LS_B.s497_ReadCANMessage_o4 = (real_T) tmp2;
      BaseEngineController_LS_B.s497_ReadCANMessage_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s497_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s497_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s497_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s497_ReadCANMessage_o1 = 0;
    }
  }

  /* Logic: '<S462>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S462>/motohawk_fault_status2'
   */
  rtb_LogicalOperator6_b = !IsFaultActive(79);

  /* Logic: '<S462>/Logical Operator' incorporates:
   *  Logic: '<S462>/Logical Operator2'
   *  S-Function (motohawk_sfun_fault_status): '<S462>/motohawk_fault_status1'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s497_GPS_Valid &&
                    rtb_LogicalOperator6_b && (!IsFaultActive(81)));

  /* Logic: '<S462>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S462>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_py = ((VSPD_GPSPreferred_DataStore()) &&
    rtb_Switch1_pb);

  /* UnitDelay: '<S523>/Unit Delay' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s523_UnitDelay_DSTATE;

  /* UnitDelay: '<S556>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s556_UnitDelay_DSTATE;

  /* S-Function Block: <S547>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s547_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S547>/Product' incorporates:
   *  MinMax: '<S547>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (VSPDFiltConst_DataStore())) || rtIsNaN((VSPDFiltConst_DataStore())) ?
    rtb_DataTypeConversion_c4 : (VSPDFiltConst_DataStore());

  /* Logic: '<S522>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(157) || IsFaultActive(158));

  /* Logic: '<S522>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S522>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(157) || IsFaultSuspected(158));

  /* S-Function Block: <S492>/motohawk_frequency_in1 Frequency Input Get: VSPD_Pin */
  {
    extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    VSPD_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S492>/Data Type Conversion1' */
  rtb_DataTypeConversion_fq = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S492>/Gain1' */
  BaseEngineController_LS_B.s492_Gain1 = 0.01 * rtb_DataTypeConversion_fq;

  /* S-Function Block: <S552>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s492_Gain1, (VSPDIdxArr_DataStore()), 5,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_n = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S552>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s552_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
      ((VSPDTbl_DataStore())), 5);
  }

  /* UnitDelay: '<S522>/Unit Delay' */
  rtb_UnitDelay_jw = BaseEngineController_LS_DWork.s522_UnitDelay_DSTATE;

  /* If: '<S522>/If' incorporates:
   *  Logic: '<S522>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jw, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s552_motohawk_interpolation_1d, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem2' */
  }

  /* End of If: '<S522>/If' */

  /* Sum: '<S553>/Sum1' incorporates:
   *  Constant: '<S553>/Constant'
   *  Product: '<S553>/Product'
   *  Product: '<S553>/Product1'
   *  Sum: '<S553>/Sum'
   *  UnitDelay: '<S553>/Unit Delay'
   */
  rtb_Sum1_g3 = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s553_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_c4;

  /* If: '<S551>/If' incorporates:
   *  Inport: '<S554>/In1'
   *  Inport: '<S555>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S551>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S551>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S551>/NewValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    BaseEngineController_LS_B.s551_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S551>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S551>/OldValue' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    BaseEngineController_LS_B.s551_Merge = rtb_Sum1_g3;

    /* End of Outputs for SubSystem: '<S551>/OldValue' */
  }

  /* End of If: '<S551>/If' */

  /* Sum: '<S556>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s551_Merge -
    rtb_DataTypeConversion1_e;

  /* S-Function Block: <S556>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s556_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S556>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S556>/motohawk_delta_time'
   */
  rtb_DataTypeConversion_fq = rtb_DataTypeConversion1_e /
    rtb_motohawk_delta_time_o;

  /* Abs: '<S523>/Abs' */
  rtb_DataTypeConversion_fq = fabs(rtb_DataTypeConversion_fq);

  /* RelationalOperator: '<S523>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration2'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_fq >=
    (VSPD_RateReject_DataStore()));

  /* Logic: '<S523>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s523_LogicalOperator = ((rtb_LogicalOperator6_b &&
    (VSPD_RateReject_Enable_DataStore())));

  /* Sum: '<S523>/Sum' incorporates:
   *  UnitDelay: '<S523>/Unit Delay1'
   */
  rtb_DataTypeConversion_fq = BaseEngineController_LS_B.s551_Merge -
    BaseEngineController_LS_DWork.s523_UnitDelay1_DSTATE;

  /* Abs: '<S523>/Abs2' */
  rtb_DataTypeConversion_fq = fabs(rtb_DataTypeConversion_fq);

  /* RelationalOperator: '<S523>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration4'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_fq >=
    (VPSD_ChangeReject_DataStore()));

  /* Abs: '<S523>/Abs1' */
  rtb_DataTypeConversion_fq = fabs(BaseEngineController_LS_B.s551_Merge);

  /* RelationalOperator: '<S523>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_al = (rtb_DataTypeConversion_fq <=
    (VSPD_ZeroSpeed_DataStore()));

  /* Logic: '<S523>/Logical Operator3' incorporates:
   *  Logic: '<S523>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s523_LogicalOperator3 = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_al && (VSPD_ChangeReject_Enable_DataStore())));

  /* Logic: '<S523>/Logical Operator1' */
  rtb_LogicalOperator1_cv = (BaseEngineController_LS_B.s523_LogicalOperator ||
    BaseEngineController_LS_B.s523_LogicalOperator3);

  /* UnitDelay: '<S523>/Unit Delay2' */
  rtb_RelationalOperator6_h =
    BaseEngineController_LS_DWork.s523_UnitDelay2_DSTATE;

  /* Memory: '<S557>/Memory' */
  rtb_RelationalOperator5_fz =
    BaseEngineController_LS_DWork.s557_Memory_PreviousInput;

  /* CombinatorialLogic: '<S557>/Logic' */
  {
    uint_T rowidx= 0;

    /* Compute the truth table row index corresponding to the input */
    rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_cv != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator6_h != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator5_fz != 0);

    /* Copy the appropriate row of the table into the block output vector */
    rtb_Logic_j[0] = BaseEngineController_LS_ConstP.pooled894[rowidx];
    rtb_Logic_j[1] = BaseEngineController_LS_ConstP.pooled894[rowidx + 8];
  }

  /* Switch: '<S523>/Switch' incorporates:
   *  Logic: '<S523>/Logical Operator5'
   *  UnitDelay: '<S523>/Unit Delay3'
   */
  if (rtb_Logic_j[0] || rtb_LogicalOperator1_cv) {
    BaseEngineController_LS_B.s523_Switch = rtb_DataTypeConversion_b2;
  } else {
    BaseEngineController_LS_B.s523_Switch =
      BaseEngineController_LS_DWork.s523_UnitDelay3_DSTATE;
  }

  /* End of Switch: '<S523>/Switch' */

  /* Switch: '<S462>/Switch2' */
  if (rtb_RelationalOperator2_py) {
    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S462>/Constant1'
     */
    if (rtb_Switch1_pb) {
      BaseEngineController_LS_B.s462_Switch2 =
        BaseEngineController_LS_B.s497_GPS_Speed;
    } else {
      BaseEngineController_LS_B.s462_Switch2 = 0.0;
    }

    /* End of Switch: '<S462>/Switch1' */
  } else {
    /* Switch: '<S462>/Switch' incorporates:
     *  Constant: '<S462>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S462>/motohawk_calibration'
     */
    if ((VSPD_DigitalPresent_DataStore())) {
      BaseEngineController_LS_B.s462_Switch2 =
        BaseEngineController_LS_B.s523_Switch;
    } else {
      BaseEngineController_LS_B.s462_Switch2 = 0.0;
    }

    /* End of Switch: '<S462>/Switch' */
  }

  /* End of Switch: '<S462>/Switch2' */
  /* S-Function Block: <S446>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD17In_DataStore()) = BaseEngineController_LS_B.s462_Switch2;
    (VSPD17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s462_Switch2, (VSPD17IdxArr_DataStore()), 17,
       (VSPD17Idx_DataStore()));
    rtb_motohawk_prelookup1_k = (VSPD17Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S405>/Base TPS Request' */

  /* UnitDelay: '<S448>/Unit Delay2' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s448_UnitDelay2_DSTATE;

  /* S-Function Block: <S448>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_B.s451_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s451_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_gv = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S448>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_h = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1_k, rtb_motohawk_prelookup_gv, (real_T *)
       ((ETCRequestMap_DataStore())), 17, 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_2d_h;
  }

  /* RelationalOperator: '<S448>/Relational Operator3' */
  BaseEngineController_LS_B.s448_RelationalOperator3 = ((rtb_UnitDelay_gh <
    rtb_motohawk_interpolation_2d_h));

  /* Outputs for Enabled SubSystem: '<S448>/PassThrough1' */
  BaseEngineController_LS_PassThrough1
    (BaseEngineController_LS_B.s448_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_B.s448_Merge);

  /* End of Outputs for SubSystem: '<S448>/PassThrough1' */

  /* RelationalOperator: '<S448>/Relational Operator2' */
  rtb_RelationalOperator2_bw = (rtb_UnitDelay_gh >
    rtb_motohawk_interpolation_2d_h);

  /* Outputs for Enabled SubSystem: '<S448>/PassThrough2' */
  BaseEngineController_LS_PassThrough1(rtb_RelationalOperator2_bw,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_B.s448_Merge);

  /* End of Outputs for SubSystem: '<S448>/PassThrough2' */

  /* S-Function Block: <S466>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s466_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l0 = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S448>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s448_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_gh = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S448>/Product' incorporates:
   *  MinMax: '<S448>/MinMax'
   */
  rtb_UnitDelay_gh /= (rtb_UnitDelay_gh >= BaseEngineController_LS_B.s448_Merge)
    || rtIsNaN(BaseEngineController_LS_B.s448_Merge) ? rtb_UnitDelay_gh :
    BaseEngineController_LS_B.s448_Merge;

  /* Product: '<S463>/Product' */
  rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d_h * rtb_UnitDelay_gh;

  /* Sum: '<S463>/Sum' incorporates:
   *  Constant: '<S463>/Constant'
   */
  rtb_DataTypeConversion_b2 = 1.0 - rtb_UnitDelay_gh;

  /* UnitDelay: '<S463>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s463_UnitDelay_DSTATE;

  /* Sum: '<S463>/Sum1' incorporates:
   *  Product: '<S463>/Product1'
   */
  rtb_DataTypeConversion_b2 = rtb_DataTypeConversion_b2 * rtb_UnitDelay_gh +
    rtb_DataTypeConversion1_e;

  /* UnitDelay: '<S466>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s466_UnitDelay_DSTATE;

  /* Product: '<S466>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S466>/motohawk_delta_time'
   *  Sum: '<S466>/Sum3'
   */
  rtb_DataTypeConversion1_e = 1.0 / rtb_motohawk_delta_time_l0 *
    (rtb_DataTypeConversion_b2 - rtb_UnitDelay_gh);

  /* S-Function Block: <S448>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* MinMax: '<S467>/MinMax' */
  rtb_Abs_k = (rtb_DataTypeConversion1_e >= rtb_motohawk_interpolation_1d1_ku) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_ku) ? rtb_DataTypeConversion1_e :
    rtb_motohawk_interpolation_1d1_ku;

  /* S-Function Block: <S448>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* Sum: '<S466>/Sum2' incorporates:
   *  MinMax: '<S467>/MinMax'
   *  MinMax: '<S467>/MinMax1'
   *  Product: '<S466>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S466>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s466_Sum2 = ((rtb_Abs_k <=
    rtb_motohawk_interpolation_1d1_ku) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_ku) ? rtb_Abs_k :
    rtb_motohawk_interpolation_1d1_ku) * rtb_motohawk_delta_time_l0 +
    rtb_UnitDelay_gh;

  /* Update for UnitDelay: '<S448>/Unit Delay2' incorporates:
   *  UnitDelay: '<S448>/Unit Delay1'
   */
  BaseEngineController_LS_DWork.s448_UnitDelay2_DSTATE =
    BaseEngineController_LS_DWork.s448_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S463>/Unit Delay' */
  BaseEngineController_LS_DWork.s463_UnitDelay_DSTATE =
    rtb_DataTypeConversion_b2;

  /* Update for UnitDelay: '<S466>/Unit Delay' */
  BaseEngineController_LS_DWork.s466_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s466_Sum2;

  /* Update for UnitDelay: '<S448>/Unit Delay1' incorporates:
   *  UnitDelay: '<S448>/Unit Delay3'
   */
  BaseEngineController_LS_DWork.s448_UnitDelay1_DSTATE =
    BaseEngineController_LS_DWork.s448_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S448>/Unit Delay3' incorporates:
   *  UnitDelay: '<S448>/Unit Delay4'
   */
  BaseEngineController_LS_DWork.s448_UnitDelay3_DSTATE =
    BaseEngineController_LS_DWork.s448_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S448>/Unit Delay4' */
  BaseEngineController_LS_DWork.s448_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_2d_h;

  /* End of Outputs for SubSystem: '<S405>/Base TPS Request' */

  /* UnitDelay: '<S456>/Unit Delay' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s456_UnitDelay_DSTATE;

  /* Sum: '<S456>/Sum' incorporates:
   *  Constant: '<S456>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S456>/motohawk_calibration'
   */
  rtb_Product1_gw = 1.0 - (O2BankA_DelagFilterConst_DataStore());

  /* S-Function Block: <S501>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s501_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S501>/Product' incorporates:
   *  MinMax: '<S501>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S501>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank1_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank1_EquivRatioFilterConst_DataStore());

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
  rtb_LogicalOperator1_al = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* Math: '<S498>/Math Function' incorporates:
   *  Saturate: '<S498>/Saturation'
   *
   * About '<S498>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s498_MathFunction = 1.0 /
    (BaseEngineController_LS_B.s498_Lambda >= 0.1 ?
     BaseEngineController_LS_B.s498_Lambda : 0.1);

  /* Product: '<S499>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s498_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S499>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s499_Sum1 = rtb_DataTypeConversion1_e +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S499>/Unit Delay1' */
  rtb_UnitDelay1_jn = BaseEngineController_LS_DWork.s499_UnitDelay1_DSTATE;

  /* If: '<S499>/If' incorporates:
   *  Logic: '<S499>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem' incorporates:
     *  ActionPort: '<S502>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_jn, &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S504>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s499_Sum1, &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem2' */
  }

  /* End of If: '<S499>/If' */

  /* Sum: '<S506>/Sum1' incorporates:
   *  Constant: '<S506>/Constant'
   *  Product: '<S506>/Product'
   *  Product: '<S506>/Product1'
   *  Sum: '<S506>/Sum'
   *  UnitDelay: '<S506>/Unit Delay'
   */
  rtb_Sum1_ir = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s506_UnitDelay_DSTATE + rtb_Merge_ox *
    rtb_DataTypeConversion_fq;

  /* If: '<S505>/If' incorporates:
   *  Inport: '<S507>/In1'
   *  Inport: '<S508>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S505>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S505>/NewValue' incorporates:
     *  ActionPort: '<S507>/Action Port'
     */
    BaseEngineController_LS_B.s505_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S505>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S505>/OldValue' incorporates:
     *  ActionPort: '<S508>/Action Port'
     */
    BaseEngineController_LS_B.s505_Merge = rtb_Sum1_ir;

    /* End of Outputs for SubSystem: '<S505>/OldValue' */
  }

  /* End of If: '<S505>/If' */

  /* S-Function Block: <S509>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s509_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S509>/Product' incorporates:
   *  MinMax: '<S509>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S500>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S500>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S500>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(25) || IsFaultActive(26));

  /* Logic: '<S500>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S500>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S500>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S500>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(25) || IsFaultSuspected(26));

  /* Math: '<S498>/Math Function1' incorporates:
   *  Saturate: '<S498>/Saturation1'
   *
   * About '<S498>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s498_MathFunction1 = 1.0 /
    (BaseEngineController_LS_B.s498_Lambda_c >= 0.1 ?
     BaseEngineController_LS_B.s498_Lambda_c : 0.1);

  /* Product: '<S500>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s498_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S500>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s500_Sum1 = rtb_DataTypeConversion1_e +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S500>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_LS_DWork.s500_UnitDelay1_DSTATE;

  /* If: '<S500>/If' incorporates:
   *  Logic: '<S500>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S500>/If Action Subsystem' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S500>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S500>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S511>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S500>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S500>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S512>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s500_Sum1, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S500>/If Action Subsystem2' */
  }

  /* End of If: '<S500>/If' */

  /* Sum: '<S514>/Sum1' incorporates:
   *  Constant: '<S514>/Constant'
   *  Product: '<S514>/Product'
   *  Product: '<S514>/Product1'
   *  Sum: '<S514>/Sum'
   *  UnitDelay: '<S514>/Unit Delay'
   */
  rtb_Sum1_du = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s514_UnitDelay_DSTATE + rtb_Merge_h *
    rtb_DataTypeConversion_fq;

  /* If: '<S513>/If' incorporates:
   *  Inport: '<S515>/In1'
   *  Inport: '<S516>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S513>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S513>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S513>/NewValue' incorporates:
     *  ActionPort: '<S515>/Action Port'
     */
    BaseEngineController_LS_B.s513_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S513>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S513>/OldValue' incorporates:
     *  ActionPort: '<S516>/Action Port'
     */
    BaseEngineController_LS_B.s513_Merge = rtb_Sum1_du;

    /* End of Outputs for SubSystem: '<S513>/OldValue' */
  }

  /* End of If: '<S513>/If' */

  /* MultiPortSwitch: '<S498>/Multiport Switch' incorporates:
   *  Gain: '<S498>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration2'
   *  Sum: '<S498>/Add'
   */
  if ((BankB_Avg_Enable_DataStore()) == FALSE) {
    BaseEngineController_LS_B.s498_MultiportSwitch =
      BaseEngineController_LS_B.s505_Merge;
  } else {
    BaseEngineController_LS_B.s498_MultiportSwitch =
      (BaseEngineController_LS_B.s505_Merge +
       BaseEngineController_LS_B.s513_Merge) * 0.5;
  }

  /* End of MultiPortSwitch: '<S498>/Multiport Switch' */

  /* Sum: '<S456>/Sum1' incorporates:
   *  Product: '<S456>/Product'
   *  Product: '<S456>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S456>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s456_Sum1 = rtb_DataTypeConversion_b2 *
    rtb_Product1_gw + (O2BankA_DelagFilterConst_DataStore()) *
    BaseEngineController_LS_B.s498_MultiportSwitch;

  /* UnitDelay: '<S456>/Unit Delay1' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s456_UnitDelay1_DSTATE;

  /* Sum: '<S456>/Sum3' incorporates:
   *  Constant: '<S456>/Constant1'
   *  Product: '<S456>/Product2'
   *  Product: '<S456>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S456>/motohawk_calibration1'
   *  Sum: '<S456>/Sum2'
   */
  BaseEngineController_LS_B.s456_Sum3 = (1.0 - (O2BankB_DelagFiltConst_DataStore
    ())) * rtb_DataTypeConversion1_e + (O2BankB_DelagFiltConst_DataStore()) *
    BaseEngineController_LS_B.s513_Merge;

  /* S-Function Block: <S483>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s483_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S483>/Switch' incorporates:
   *  Constant: '<S482>/Constant'
   *  Constant: '<S483>/Constant'
   *  RelationalOperator: '<S482>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S460>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S483>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S483>/motohawk_delta_time'
   *  Sum: '<S483>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_B.s483_Switch = rtb_motohawk_delta_time_f +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s483_Switch = 0.0;
  }

  /* End of Switch: '<S483>/Switch' */
  /* S-Function Block: <S443>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_B.s567_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s567_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_B.s443_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S443>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_B.s567_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s567_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_B.s443_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S439>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT07In_DataStore()) = BaseEngineController_LS_B.s677_Merge;
    (ECT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s677_Merge, (ECT07IdxArr_DataStore()), 7,
       (ECT07Idx_DataStore()));
    BaseEngineController_LS_B.s439_motohawk_prelookup2 = (ECT07Idx_DataStore());
  }

  /* S-Function Block: <S439>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_B.s677_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s677_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_h = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S440>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT07In_DataStore()) = BaseEngineController_LS_B.s695_Merge;
    (IAT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s695_Merge, (IAT07IdxArr_DataStore()), 7,
       (IAT07Idx_DataStore()));
    BaseEngineController_LS_B.s440_motohawk_prelookup1 = (IAT07Idx_DataStore());
  }

  /* S-Function Block: <S640>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s640_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S640>/Product' incorporates:
   *  MinMax: '<S640>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_fq : (SysVoltFilterConst_DataStore());

  /* Logic: '<S576>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(142) || IsFaultActive(143));

  /* Logic: '<S576>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S576>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(142) || IsFaultSuspected(143));

  /* S-Function Block: <S494>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_LS_B.s494_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S576>/Data Type Conversion' */
  rtb_DataTypeConversion_c4 = (real_T)
    BaseEngineController_LS_B.s494_motohawk_ain14;

  /* Product: '<S576>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S576>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_c4 * (SysVoltGain_DataStore
    ());

  /* Sum: '<S576>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S576>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s576_Sum1 = rtb_DataTypeConversion1_e +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S576>/Unit Delay1' */
  rtb_UnitDelay1_f4 = BaseEngineController_LS_DWork.s576_UnitDelay1_DSTATE;

  /* If: '<S576>/If' incorporates:
   *  Logic: '<S576>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S576>/If Action Subsystem' incorporates:
     *  ActionPort: '<S641>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_f4, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S576>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S576>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S642>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S576>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S576>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S643>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s576_Sum1, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S576>/If Action Subsystem2' */
  }

  /* End of If: '<S576>/If' */

  /* Sum: '<S645>/Sum1' incorporates:
   *  Constant: '<S645>/Constant'
   *  Product: '<S645>/Product'
   *  Product: '<S645>/Product1'
   *  Sum: '<S645>/Sum'
   *  UnitDelay: '<S645>/Unit Delay'
   */
  rtb_Sum1_nl = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s645_UnitDelay_DSTATE + rtb_Merge_f *
    rtb_DataTypeConversion_fq;

  /* If: '<S644>/If' incorporates:
   *  Inport: '<S646>/In1'
   *  Inport: '<S647>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S644>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S644>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S644>/NewValue' incorporates:
     *  ActionPort: '<S646>/Action Port'
     */
    BaseEngineController_LS_B.s644_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S644>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S644>/OldValue' incorporates:
     *  ActionPort: '<S647>/Action Port'
     */
    BaseEngineController_LS_B.s644_Merge = rtb_Sum1_nl;

    /* End of Outputs for SubSystem: '<S644>/OldValue' */
  }

  /* End of If: '<S644>/If' */

  /* S-Function Block: <S444>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_B.s644_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s644_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_B.s444_motohawk_prelookup = (SysVolt09Idx_DataStore());
  }

  /* S-Function Block: <S437>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres07In_DataStore()) = BaseEngineController_LS_B.s581_Merge;
    (ACPres07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s581_Merge, (ACPres07IdxArr_DataStore()), 7,
       (ACPres07Idx_DataStore()));
    BaseEngineController_LS_B.s437_motohawk_prelookup1 = (ACPres07Idx_DataStore());
  }

  /* S-Function Block: <S606>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s606_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S606>/Product' incorporates:
   *  MinMax: '<S606>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S606>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_fq : (MAPFilterConst_DataStore());

  /* Logic: '<S571>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S571>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S571>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(120) || IsFaultActive(121));

  /* Logic: '<S571>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S571>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S571>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S571>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(120) || IsFaultSuspected(121));

  /* S-Function (motohawk_sfun_trigger): '<S573>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  if (BaseEngineController_LS_DWork.s573_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s573_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S571>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S571>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s573_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S571>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S571>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s571_Sum1 = rtb_DataTypeConversion1_e +
    (MAPOfst_DataStore());

  /* UnitDelay: '<S571>/Unit Delay1' */
  rtb_UnitDelay1_a = BaseEngineController_LS_DWork.s571_UnitDelay1_DSTATE;

  /* If: '<S571>/If' incorporates:
   *  Logic: '<S571>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S571>/If Action Subsystem' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_a, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S571>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S571>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S571>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S571>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s571_Sum1, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S571>/If Action Subsystem2' */
  }

  /* End of If: '<S571>/If' */

  /* Sum: '<S611>/Sum1' incorporates:
   *  Constant: '<S611>/Constant'
   *  Product: '<S611>/Product'
   *  Product: '<S611>/Product1'
   *  Sum: '<S611>/Sum'
   *  UnitDelay: '<S611>/Unit Delay'
   */
  rtb_Sum1_d4 = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s611_UnitDelay_DSTATE + rtb_Merge_in *
    rtb_DataTypeConversion_fq;

  /* If: '<S610>/If' incorporates:
   *  Inport: '<S612>/In1'
   *  Inport: '<S613>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S610>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S610>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S610>/NewValue' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    BaseEngineController_LS_B.s610_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S610>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S610>/OldValue' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    BaseEngineController_LS_B.s610_Merge = rtb_Sum1_d4;

    /* End of Outputs for SubSystem: '<S610>/OldValue' */
  }

  /* End of If: '<S610>/If' */

  /* S-Function Block: <S441>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_B.s610_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s610_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_m = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S441>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_B.s610_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s610_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_B.s441_motohawk_prelookup1 = (MAP09Idx_DataStore());
  }

  /* S-Function Block: <S441>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_B.s610_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s610_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_B.s441_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S446>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_B.s462_Switch2;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s462_Switch2, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    BaseEngineController_LS_B.s446_motohawk_prelookup = (VSPD09Idx_DataStore());
  }

  /* S-Function Block: <S446>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD07In_DataStore()) = BaseEngineController_LS_B.s462_Switch2;
    (VSPD07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s462_Switch2, (VSPD07IdxArr_DataStore()), 7,
       (VSPD07Idx_DataStore()));
    BaseEngineController_LS_B.s446_motohawk_prelookup2 = (VSPD07Idx_DataStore());
  }

  /* S-Function Block: <S438>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = BaseEngineController_LS_B.s668_Merge;
    (CAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s668_Merge, (CAT05IdxArr_DataStore()), 5,
       (CAT05Idx_DataStore()));
    BaseEngineController_LS_B.s438_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function Block: <S442>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (OXY05In_DataStore()) = BaseEngineController_LS_B.s589_Merge;
    (OXY05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s589_Merge, (OXY05IdxArr_DataStore()), 5,
       (OXY05Idx_DataStore()));
    BaseEngineController_LS_B.s442_motohawk_prelookup = (OXY05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S401>/motohawk_data_read1' */
  BaseEngineController_LS_B.s401_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S401>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s401_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_B.s401_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S401>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S401>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_LS_DWork.s407_is_c19_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_CrankRun:
    /* During 'CrankRun': '<S407>:2' */
    if (BaseEngineController_LS_B.s401_motohawk_data_read1 == 1) {
      /* Transition: '<S407>:6' */
      BaseEngineController_LS_DWork.s407_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_StallDelay;

      /* Entry 'StallDelay': '<S407>:3' */
      BaseEngineController_LS_B.s407_Enable = FALSE;
      BaseEngineController_LS_B.s407_Timer = 0.0;
      BaseEngineController_LS_DWork.s407_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_IN_Stall:
    /* During 'Stall': '<S407>:1' */
    if (BaseEngineController_LS_B.s401_motohawk_data_read1 > 1) {
      /* Transition: '<S407>:5' */
      BaseEngineController_LS_DWork.s407_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S407>:2' */
      BaseEngineController_LS_B.s407_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_IN_StallDelay:
    /* During 'StallDelay': '<S407>:3' */
    if (BaseEngineController_LS_B.s401_motohawk_data_read1 > 1) {
      /* Transition: '<S407>:8' */
      BaseEngineController_LS_DWork.s407_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S407>:2' */
      BaseEngineController_LS_B.s407_Enable = FALSE;
    } else if (((BaseEngineController_LS_B.s401_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_B.s407_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S407>:7' */
      BaseEngineController_LS_DWork.s407_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall;

      /* Entry 'Stall': '<S407>:1' */
      BaseEngineController_LS_B.s407_Enable = TRUE;
    } else {
      BaseEngineController_LS_B.s407_Timer =
        BaseEngineController_LS_DWork.s407_TOld +
        BaseEngineController_LS_B.s401_motohawk_delta_time;
      BaseEngineController_LS_DWork.s407_TOld =
        BaseEngineController_LS_B.s407_Timer;
    }
    break;

   default:
    /* Transition: '<S407>:4' */
    BaseEngineController_LS_DWork.s407_is_c19_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall;

    /* Entry 'Stall': '<S407>:1' */
    BaseEngineController_LS_B.s407_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S401>/Baro Stall State Delay' */
  /* RelationalOperator: '<S409>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S409>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (TPSFinal_DataStore() >= (BaroLearn_TPSPos_DataStore()));

  /* Logic: '<S572>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S572>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S572>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(122) || IsFaultActive(123));

  /* Logic: '<S572>/Logical Operator6' */
  rtb_LogicalOperator1_al = !rtb_RelationalOperator5_fz;

  /* Logic: '<S572>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S572>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S572>/motohawk_fault_status3'
   */
  rtb_Switch1_pb = (IsFaultSuspected(122) || IsFaultSuspected(123));

  /* S-Function Block: <S494>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s494_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S572>/Data Type Conversion' */
  rtb_DataTypeConversion_fq = (real_T)
    BaseEngineController_LS_B.s494_motohawk_ain_read1;

  /* Product: '<S572>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S572>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_fq * (MAPTimeGain_DataStore
    ());

  /* Sum: '<S572>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S572>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s572_Sum1 = rtb_DataTypeConversion1_e +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S572>/Unit Delay1' */
  rtb_UnitDelay1_n5 = BaseEngineController_LS_DWork.s572_UnitDelay1_DSTATE;

  /* If: '<S572>/If' incorporates:
   *  Logic: '<S572>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_al && rtb_Switch1_pb) {
    /* Outputs for IfAction SubSystem: '<S572>/If Action Subsystem' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_n5, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S572>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S572>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S616>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S572>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S572>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s572_Sum1, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S572>/If Action Subsystem2' */
  }

  /* End of If: '<S572>/If' */

  /* Logic: '<S409>/Logical Operator' incorporates:
   *  Constant: '<S413>/Constant'
   *  RelationalOperator: '<S409>/Relational Operator1'
   *  RelationalOperator: '<S413>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz = (rtb_LogicalOperator6_b && (rtb_Merge_jq >=
    (BaroLearn_MAP_DataStore())) &&
    (BaseEngineController_LS_B.s401_motohawk_data_read1 > 1));

  /* S-Function Block: <S414>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s414_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S414>/Switch' incorporates:
   *  Constant: '<S414>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S414>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S414>/motohawk_delta_time'
   *  Sum: '<S414>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_fz = rtb_motohawk_delta_time_ok + BaroLearnTmr_DataStore();
  } else {
    rtb_Switch_fz = 0.0;
  }

  /* End of Switch: '<S414>/Switch' */
  /* Product: '<S409>/Product' incorporates:
   *  RelationalOperator: '<S409>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration'
   */
  rtb_Product_mp = (uint16_T)(rtb_RelationalOperator5_fz ? rtb_Switch_fz >=
    (BaroLearn_Tm_DataStore()) : 0);

  /* DataTypeConversion: '<S409>/Data Type Conversion' */
  rtb_RelationalOperator5_fz = (rtb_Product_mp != 0);

  /* Outputs for Enabled SubSystem: '<S401>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S408>/Enable'
   */
  /* Logic: '<S401>/Logical Operator' */
  if (BaseEngineController_LS_B.s407_Enable || rtb_RelationalOperator5_fz) {
    if (!BaseEngineController_LS_DWork.s401_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S408>/Unit Delay' */
      BaseEngineController_LS_DWork.s408_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s401_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S408>/Add' incorporates:
     *  Constant: '<S408>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S408>/motohawk_calibration'
     */
    rtb_Add_k = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S408>/Sum' incorporates:
     *  Constant: '<S408>/Constant'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_LS_DWork.s408_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S408>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Sum_l3 <= rtb_Add_k);

    /* Switch: '<S408>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Add_k = rtb_Sum_l3;
    }

    /* End of Switch: '<S408>/Switch' */

    /* Sum: '<S408>/Add1' incorporates:
     *  Constant: '<S408>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Add_k - 2);

    /* Logic: '<S408>/Logical Operator' incorporates:
     *  Constant: '<S408>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S408>/Relational Operator1'
     */
    rtb_LogicalOperator_kz = (rtb_LogicalOperator6_b && (rtb_Sum_l3 > 2));

    /* Outputs for Enabled SubSystem: '<S408>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_kz, rtb_Add1_e,
      rtb_Merge_jq, &BaseEngineController_LS_B.s408_CollectAverage,
      &BaseEngineController_LS_DWork.s408_CollectAverage);

    /* End of Outputs for SubSystem: '<S408>/Collect Average' */

    /* Update for UnitDelay: '<S408>/Unit Delay' */
    BaseEngineController_LS_DWork.s408_UnitDelay_DSTATE = rtb_Add_k;
  } else {
    if (BaseEngineController_LS_DWork.s401_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S408>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s408_CollectAverage);

      /* End of Disable for SubSystem: '<S408>/Collect Average' */
      BaseEngineController_LS_DWork.s401_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Logic: '<S401>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S401>/Capture Signal At Startup' */

  /* If: '<S411>/If' incorporates:
   *  Inport: '<S421>/In1'
   *  Inport: '<S422>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S411>/override_enable'
   *  UnitDelay: '<S411>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S411>/NewValue' incorporates:
     *  ActionPort: '<S421>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S411>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S411>/OldValue' incorporates:
     *  ActionPort: '<S422>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_B.s408_CollectAverage.s412_Product;

    /* End of Outputs for SubSystem: '<S411>/OldValue' */
  }

  /* End of If: '<S411>/If' */

  /* Sum: '<S411>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S411>/offset'
   */
  BaseEngineController_LS_B.s411_Sum = rtb_Merge_b3 + (BARO_offset_DataStore());

  /* S-Function Block: <S410>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEMapIn_DataStore()) = BaseEngineController_LS_B.s610_Merge;
    (VEMapIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s610_Merge, (VEMapIdxArr_DataStore()), 17,
       (VEMapIdx_DataStore()));
    rtb_motohawk_prelookup2_c = (VEMapIdx_DataStore());
  }

  /* S-Function Block: <S410>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_c, BaseEngineController_LS_B.s443_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d_d;
  }

  /* S-Function Block: <S410>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BaseEngineController_LS_B.s410_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2_c,
      BaseEngineController_LS_B.s443_Indexes, (real_T *)
      ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) =
      BaseEngineController_LS_B.s410_motohawk_interpolation_2d2;
  }

  /* Sum: '<S410>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S410>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S410>/motohawk_prelookup2'
   */
  BaseEngineController_LS_B.s410_Sum = rtb_motohawk_interpolation_2d_d +
    BaseEngineController_LS_B.s410_motohawk_interpolation_2d2;

  /* Saturate: '<S401>/Saturation1' */
  rtb_Saturation1_c = BaseEngineController_LS_B.s411_Sum >= 1.0 ?
    BaseEngineController_LS_B.s411_Sum : 1.0;

  /* S-Function Block: <S410>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1_c,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_c = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S410>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_j;
  }

  /* S-Function Block: <S440>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_B.s695_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s695_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_b = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S410>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_n = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_b, rtb_motohawk_prelookup1_h, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_n;
  }

  /* Product: '<S410>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S410>/Gas Const [J//kg-K]'
   *  Constant: '<S410>/Units Equivalency Factor'
   *  DataTypeConversion: '<S410>/Data Type Conversion'
   *  Fcn: '<S416>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S410>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S410>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S410>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S410>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S410>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S440>/motohawk_prelookup2'
   *  Saturate: '<S401>/Saturation1'
   */
  BaseEngineController_LS_B.s410_NominalAirFlowRate =
    BaseEngineController_LS_B.s567_Sum1 * BaseEngineController_LS_B.s610_Merge *
    rtb_motohawk_interpolation_1d1_j * rtb_motohawk_interpolation_2d1_n *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_B.s695_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S410>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_B.s410_ModelAirMassFlowRate =
    BaseEngineController_LS_B.s410_Sum *
    BaseEngineController_LS_B.s410_NominalAirFlowRate;

  /* S-Function Block: <S533>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s533_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_gx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S533>/Product' incorporates:
   *  MinMax: '<S533>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S533>/motohawk_calibration'
   */
  rtb_DataTypeConversion_gx /= (rtb_DataTypeConversion_gx >=
    (MAFFiltConst_DataStore())) || rtIsNaN((MAFFiltConst_DataStore())) ?
    rtb_DataTypeConversion_gx : (MAFFiltConst_DataStore());

  /* Logic: '<S520>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S520>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S520>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(118) || IsFaultActive(119));

  /* Logic: '<S520>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S520>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S520>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S520>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(118) || IsFaultSuspected(119));

  /* S-Function Block: <S492>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S492>/Data Type Conversion' */
  rtb_Switch_bn = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S492>/Gain' */
  BaseEngineController_LS_B.s492_Gain = 0.01 * rtb_Switch_bn;

  /* S-Function Block: <S538>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s492_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_k = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S538>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s538_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_k, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S520>/Unit Delay' */
  rtb_UnitDelay_nr = BaseEngineController_LS_DWork.s520_UnitDelay_DSTATE;

  /* If: '<S520>/If' incorporates:
   *  Logic: '<S520>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S520>/If Action Subsystem' incorporates:
     *  ActionPort: '<S534>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_nr, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S520>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S520>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S535>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S520>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S536>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s538_motohawk_interpolation_1d, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S520>/If Action Subsystem2' */
  }

  /* End of If: '<S520>/If' */

  /* Sum: '<S539>/Sum1' incorporates:
   *  Constant: '<S539>/Constant'
   *  Product: '<S539>/Product'
   *  Product: '<S539>/Product1'
   *  Sum: '<S539>/Sum'
   *  UnitDelay: '<S539>/Unit Delay'
   */
  rtb_Sum1_fm = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s539_UnitDelay_DSTATE + rtb_Merge_dv *
    rtb_DataTypeConversion_gx;

  /* If: '<S537>/If' incorporates:
   *  Inport: '<S540>/In1'
   *  Inport: '<S541>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S537>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S537>/NewValue' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    BaseEngineController_LS_B.s537_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S537>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S537>/OldValue' incorporates:
     *  ActionPort: '<S541>/Action Port'
     */
    BaseEngineController_LS_B.s537_Merge = rtb_Sum1_fm;

    /* End of Outputs for SubSystem: '<S537>/OldValue' */
  }

  /* End of If: '<S537>/If' */

  /* MultiPortSwitch: '<S410>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_B.s410_MultiportSwitch =
      BaseEngineController_LS_B.s410_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_B.s410_MultiportSwitch =
      BaseEngineController_LS_B.s537_Merge;
  }

  /* End of MultiPortSwitch: '<S410>/Multiport Switch' */
  /* S-Function Block: <S429>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S429>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s429_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S429>/Relational Operator4' incorporates:
   *  UnitDelay: '<S429>/Unit Delay2'
   */
  BaseEngineController_LS_B.s429_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s429_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s567_Sum1));

  /* Outputs for Enabled SubSystem: '<S429>/IncreasingFilter' incorporates:
   *  EnablePort: '<S433>/Enable'
   */
  if (BaseEngineController_LS_B.s429_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S433>/motohawk_calibration1' */
    BaseEngineController_LS_B.s429_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S429>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S429>/DecreasingFilter' incorporates:
   *  EnablePort: '<S431>/Enable'
   */
  /* RelationalOperator: '<S429>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s567_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S431>/motohawk_calibration2' */
    BaseEngineController_LS_B.s429_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S429>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S429>/DecreasingFilter' */

  /* Product: '<S429>/Product' incorporates:
   *  MinMax: '<S429>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s429_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s429_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s429_Merge;

  /* Sum: '<S432>/Sum1' incorporates:
   *  Constant: '<S432>/Constant'
   *  Product: '<S432>/Product'
   *  Product: '<S432>/Product1'
   *  Sum: '<S432>/Sum'
   *  UnitDelay: '<S432>/Unit Delay'
   */
  BaseEngineController_LS_B.s432_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s432_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s567_Sum1 * rtb_Switch_bn;

  /* Sum: '<S428>/Sum1' */
  rtb_Switch_bn = BaseEngineController_LS_B.s567_Sum1 -
    BaseEngineController_LS_B.s432_Sum1;

  /* Abs: '<S428>/Abs1' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* RelationalOperator: '<S428>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S428>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_b = (rtb_Switch_bn <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S428>/Relational Operator2' incorporates:
   *  Constant: '<S428>/Constant'
   */
  rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s567_Sum1 > 0.0);

  /* S-Function Block: <S430>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S430>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s430_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S430>/Relational Operator4' incorporates:
   *  UnitDelay: '<S430>/Unit Delay2'
   */
  BaseEngineController_LS_B.s430_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s430_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s610_Merge));

  /* Outputs for Enabled SubSystem: '<S430>/IncreasingFilter' incorporates:
   *  EnablePort: '<S436>/Enable'
   */
  if (BaseEngineController_LS_B.s430_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S436>/motohawk_calibration1' */
    BaseEngineController_LS_B.s430_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S430>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S430>/DecreasingFilter' incorporates:
   *  EnablePort: '<S434>/Enable'
   */
  /* RelationalOperator: '<S430>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s610_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration2' */
    BaseEngineController_LS_B.s430_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S430>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S430>/DecreasingFilter' */

  /* Product: '<S430>/Product' incorporates:
   *  MinMax: '<S430>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s430_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s430_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s430_Merge;

  /* Sum: '<S435>/Sum1' incorporates:
   *  Constant: '<S435>/Constant'
   *  Product: '<S435>/Product'
   *  Product: '<S435>/Product1'
   *  Sum: '<S435>/Sum'
   *  UnitDelay: '<S435>/Unit Delay'
   */
  BaseEngineController_LS_B.s435_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s610_Merge * rtb_Switch_bn;

  /* Sum: '<S428>/Sum' */
  rtb_Switch_bn = BaseEngineController_LS_B.s610_Merge -
    BaseEngineController_LS_B.s435_Sum1;

  /* Abs: '<S428>/Abs' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* Logic: '<S428>/Logical Operator' incorporates:
   *  RelationalOperator: '<S428>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S428>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_B.s428_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_al && (rtb_Switch_bn <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S488>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_LS_B.s410_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s410_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_o = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S457>/RelOp' incorporates:
   *  Constant: '<S457>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S405>/motohawk_data_read'
   */
  rtb_RelOp_d = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S405>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S449>/Enable'
   */
  if (rtb_RelOp_d) {
    if (!BaseEngineController_LS_DWork.s405_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S449>/Unit Delay' */
      BaseEngineController_LS_DWork.s449_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s405_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S449>/Sum' incorporates:
     *  Constant: '<S449>/Constant'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s449_UnitDelay_DSTATE + 1);

    /* Sum: '<S449>/Add' incorporates:
     *  Constant: '<S449>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S449>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S449>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S449>/Switch' */

    /* Sum: '<S449>/Add1' incorporates:
     *  Constant: '<S449>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k3 = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S449>/Logical Operator' incorporates:
     *  Constant: '<S449>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S449>/Relational Operator1'
     */
    rtb_LogicalOperator_mr = (rtb_LogicalOperator6_b && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S449>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_mr, rtb_Add1_k3,
      BaseEngineController_LS_B.s661_Merge,
      &BaseEngineController_LS_B.s449_CollectAverage,
      &BaseEngineController_LS_DWork.s449_CollectAverage);

    /* End of Outputs for SubSystem: '<S449>/Collect Average' */

    /* Update for UnitDelay: '<S449>/Unit Delay' */
    BaseEngineController_LS_DWork.s449_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s405_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S449>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s449_CollectAverage);

      /* End of Disable for SubSystem: '<S449>/Collect Average' */
      BaseEngineController_LS_DWork.s405_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S405>/Capture ECT At Startup' */
  /* S-Function Block: <S486>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s449_CollectAverage.s412_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s449_CollectAverage.s412_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_j = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S471>/Sum2' incorporates:
   *  UnitDelay: '<S471>/Unit Delay'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s567_Sum1 -
    BaseEngineController_LS_DWork.s471_UnitDelay_DSTATE;

  /* S-Function Block: <S471>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s471_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ow = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S471>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S471>/motohawk_delta_time'
   */
  rtb_DataTypeConversion1_e /= rtb_motohawk_delta_time_ow;

  /* S-Function Block: <S472>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* Product: '<S472>/Product' incorporates:
   *  MinMax: '<S472>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S472>/motohawk_calibration'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_bn :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S473>/Sum1' incorporates:
   *  Constant: '<S473>/Constant'
   *  Product: '<S473>/Product'
   *  Product: '<S473>/Product1'
   *  Sum: '<S473>/Sum'
   *  UnitDelay: '<S473>/Unit Delay'
   */
  BaseEngineController_LS_B.s473_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s473_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_Switch_bn;

  /* S-Function Block: <S406>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_B.s473_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s473_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_B.s406_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S406>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_B.s483_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s483_Switch, (TimeSinceRun09IdxArr_DataStore()),
       9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* RelationalOperator: '<S94>/RelOp' incorporates:
   *  Constant: '<S94>/Constant'
   */
  rtb_RelOp_hf = (BaseEngineController_LS_B.s474_State == 3);

  /* S-Function Block: <S492>/motohawk_ain1 Resource: ClutchSw_Pin */
  {
    extern NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ClutchSw_Pin_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S518>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S492>/motohawk_ain1'
   */
  BaseEngineController_LS_B.s518_DataTypeConversion = (real_T)rtb_motohawk_ain1;

  /* RelationalOperator: '<S518>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S518>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s518_DataTypeConversion >
                            (ClutchSwSwitchPt_DataStore()));

  /* Logic: '<S518>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S518>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ClutchSwPolarity_DataStore());

  /* If: '<S527>/If' incorporates:
   *  Inport: '<S528>/In1'
   *  Inport: '<S529>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S527>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S527>/override_enable'
   */
  if ((ClutchSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S527>/NewValue' incorporates:
     *  ActionPort: '<S528>/Action Port'
     */
    BaseEngineController_LS_B.s527_Merge = (ClutchSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S527>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S527>/OldValue' incorporates:
     *  ActionPort: '<S529>/Action Port'
     */
    BaseEngineController_LS_B.s527_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S527>/OldValue' */
  }

  /* End of If: '<S527>/If' */

  /* S-Function Block: <S492>/motohawk_ain6 Resource: ScramblePin */
  {
    extern NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ScramblePin_AnalogInput_Get(&rtb_motohawk_ain6_k, NULL);
  }

  /* DataTypeConversion: '<S521>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S492>/motohawk_ain6'
   */
  BaseEngineController_LS_B.s521_DataTypeConversion = (real_T)
    rtb_motohawk_ain6_k;

  /* RelationalOperator: '<S521>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S521>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s521_DataTypeConversion >
                            (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S521>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S521>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator5_fz = rtb_LogicalOperator6_b ^
    (ScramblePolarity_DataStore());

  /* S-Function Block: <S544>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s544_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_dd = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S544>/Switch' incorporates:
   *  Constant: '<S544>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S544>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S544>/motohawk_delta_time'
   *  Sum: '<S544>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_bn = rtb_motohawk_delta_time_dd + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_bn = 0.0;
  }

  /* End of Switch: '<S544>/Switch' */
  /* Logic: '<S542>/Logical Operator' incorporates:
   *  RelationalOperator: '<S542>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S521>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz && (rtb_Switch_bn >=
    (ScrambleDebounceDelay_DataStore())));

  /* If: '<S543>/If' incorporates:
   *  Inport: '<S545>/In1'
   *  Inport: '<S546>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S543>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S543>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S543>/NewValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    BaseEngineController_LS_B.s543_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S543>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S543>/OldValue' incorporates:
     *  ActionPort: '<S546>/Action Port'
     */
    BaseEngineController_LS_B.s543_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S543>/OldValue' */
  }

  /* End of If: '<S543>/If' */

  /* S-Function Block: <S614>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s614_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_gx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S614>/Product' incorporates:
   *  MinMax: '<S614>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S614>/motohawk_calibration'
   */
  rtb_DataTypeConversion_gx /= (rtb_DataTypeConversion_gx >=
    (MAPTimeFilterConst_DataStore())) || rtIsNaN((MAPTimeFilterConst_DataStore()))
    ? rtb_DataTypeConversion_gx : (MAPTimeFilterConst_DataStore());

  /* Sum: '<S619>/Sum1' incorporates:
   *  Constant: '<S619>/Constant'
   *  Product: '<S619>/Product'
   *  Product: '<S619>/Product1'
   *  Sum: '<S619>/Sum'
   *  UnitDelay: '<S619>/Unit Delay'
   */
  rtb_Sum1_mzy = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s619_UnitDelay_DSTATE + rtb_Merge_jq *
    rtb_DataTypeConversion_gx;

  /* If: '<S618>/If' incorporates:
   *  Inport: '<S620>/In1'
   *  Inport: '<S621>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S618>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S618>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S618>/NewValue' incorporates:
     *  ActionPort: '<S620>/Action Port'
     */
    BaseEngineController_LS_B.s618_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S618>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S618>/OldValue' incorporates:
     *  ActionPort: '<S621>/Action Port'
     */
    BaseEngineController_LS_B.s618_Merge = rtb_Sum1_mzy;

    /* End of Outputs for SubSystem: '<S618>/OldValue' */
  }

  /* End of If: '<S618>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Run' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  if (rtb_RelOp_hf) {
    if (!BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/DFCO' */

        /* S-Function Block: <S154>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s154_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
        }

        /* S-Function Block: <S152>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s152_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S210>/IdleStateMachine' */
        BaseEngineController_LS_IdleStateMachine_Init();

        /* S-Function Block: <S209>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s209_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S213>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s213_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S114>/AiflowOffset' */

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

        /* End of InitializeConditions for SubSystem: '<S114>/AiflowOffset' */

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
        /* Initial conditions for function-call system: '<S93>/Boost Control' */

        /* S-Function Block: <S137>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s137_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
        }

        /* S-Function Block: <S147>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s147_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

        /* S-Function Block: <S192>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s192_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

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
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S282>/Initial Condition is True' */
        BaseEngineController_LS_DWork.s282_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S115>/O2 PID Controller Bank A' */
      /* InitializeConditions for UnitDelay: '<S261>/Unit Delay' */
      BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S258>/Unit Delay' */
      BaseEngineController_LS_DWork.s258_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S257>/Unit Delay' */
      BaseEngineController_LS_DWork.s257_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S258>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s258_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S254>/Unit Delay1' */
      BaseEngineController_LS_DWork.s254_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S262>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s262_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
      BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S264>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s264_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S254>/Unit Delay2' */
      BaseEngineController_LS_DWork.s254_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S263>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s263_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S115>/O2 PID Controller Bank A' */

      /* InitializeConditions for Atomic SubSystem: '<S115>/O2 PID Controller Bank B' */
      /* InitializeConditions for UnitDelay: '<S273>/Unit Delay' */
      BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S270>/Unit Delay' */
      BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S269>/Unit Delay' */
      BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S270>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s270_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S266>/Unit Delay1' */
      BaseEngineController_LS_DWork.s266_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S274>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s274_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
      BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S276>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s276_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S266>/Unit Delay2' */
      BaseEngineController_LS_DWork.s266_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S275>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s275_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S115>/O2 PID Controller Bank B' */
      /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
      BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_LS_DWork.s15_Run_MODE = TRUE;
    }

    /* Outputs for Atomic SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function Block: <S107>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s107_WarmUpRatio = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_m, rtb_motohawk_prelookup1_h, (real_T *)
         ((WarmUpEqRatioMap_DataStore())), 5, 9);
      (WarmUpEqRatio_DataStore()) = BaseEngineController_LS_B.s107_WarmUpRatio;
    }

    /* S-Function Block: <S131>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_fx = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_fx;
    }

    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S131>/Constant'
     *  RelationalOperator: '<S131>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S131>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S107>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S406>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_B.s483_Switch >=
        rtb_motohawk_interpolation_1d_fx) {
      /* S-Function Block: <S107>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeRatio = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
          ((WarmUpTimeRatioMap_DataStore())), 9, 5);
        (WarmUpTimeRatio_DataStore()) = rtb_WarmUptimeRatio;
      }

      BaseEngineController_LS_B.s131_Switch = rtb_WarmUptimeRatio;
    } else {
      BaseEngineController_LS_B.s131_Switch = 1.0;
    }

    /* End of Switch: '<S131>/Switch' */
    /* S-Function Block: <S107>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s107_IATEnrichment = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_m,
         BaseEngineController_LS_B.s440_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 5, 5);
      (IntakeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_B.s107_IATEnrichment;
    }

    /* S-Function Block: <S107>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s107_CATEnrichment = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_m,
         BaseEngineController_LS_B.s438_motohawk_prelookup, (real_T *)
         ((ChargeAirTempEnrichmentMap_DataStore())), 5, 5);
      (ChargeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_B.s107_CATEnrichment;
    }

    /* S-Function Block: <S107>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3_b = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_Indexes,
         BaseEngineController_LS_B.s443_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3_b;
    }

    /* If: '<S132>/If' incorporates:
     *  Inport: '<S133>/In1'
     *  Inport: '<S134>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S132>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S132>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S132>/NewValue' incorporates:
       *  ActionPort: '<S133>/Action Port'
       */
      rtb_DataTypeConversion1_e = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S132>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S132>/OldValue' incorporates:
       *  ActionPort: '<S134>/Action Port'
       */
      rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d3_b;

      /* End of Outputs for SubSystem: '<S132>/OldValue' */
    }

    /* End of If: '<S132>/If' */

    /* MinMax: '<S107>/MinMax' */
    u = (rtb_DataTypeConversion1_e >= BaseEngineController_LS_B.s107_WarmUpRatio)
      || rtIsNaN(BaseEngineController_LS_B.s107_WarmUpRatio) ?
      rtb_DataTypeConversion1_e : BaseEngineController_LS_B.s107_WarmUpRatio;
    u = (u >= BaseEngineController_LS_B.s131_Switch) || rtIsNaN
      (BaseEngineController_LS_B.s131_Switch) ? u :
      BaseEngineController_LS_B.s131_Switch;
    u = (u >= BaseEngineController_LS_B.s107_IATEnrichment) || rtIsNaN
      (BaseEngineController_LS_B.s107_IATEnrichment) ? u :
      BaseEngineController_LS_B.s107_IATEnrichment;
    BaseEngineController_LS_B.s107_DesEquivRatio = (u >=
      BaseEngineController_LS_B.s107_CATEnrichment) || rtIsNaN
      (BaseEngineController_LS_B.s107_CATEnrichment) ? u :
      BaseEngineController_LS_B.s107_CATEnrichment;

    /* End of Outputs for SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
    if (BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 1;
    }

    /* Outputs for Enabled SubSystem: '<S106>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S130>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S130>/motohawk_data_write' incorporates:
       *  Constant: '<S130>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S106>/ShutDownTasksComplete Reset' */

    /* Sum: '<S106>/Sum2' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_B.s216_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_LS_B.s114_MinGovAirPID;

    /* MultiPortSwitch: '<S106>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S106>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S106>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_d;
        }

        /* S-Function Block: <S106>/motohawk_interpolation_1d1 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d1_c = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
             ((MinETCSetPtLimitTbl_DataStore())), 9);
          (MinETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d1_c;
        }

        /* Switch: '<S106>/Switch2' */
        if (BaseEngineController_LS_B.s191_MultiportSwitch) {
          rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s194_Switch;
        } else {
          /* Switch: '<S106>/Switch4' incorporates:
           *  Logic: '<S106>/Logical Operator'
           *  Sum: '<S106>/Sum1'
           */
          if (!BaseEngineController_LS_B.s226_RelOp) {
            rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s466_Sum2 +
              BaseEngineController_LS_B.s216_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S106>/Switch4' */
        }

        /* End of Switch: '<S106>/Switch2' */

        /* MinMax: '<S129>/MinMax' */
        u = (rtb_DataTypeConversion1_e >= rtb_motohawk_interpolation_1d1_c) ||
          rtIsNaN(rtb_motohawk_interpolation_1d1_c) ? rtb_DataTypeConversion1_e :
          rtb_motohawk_interpolation_1d1_c;

        /* MinMax: '<S129>/MinMax1' incorporates:
         *  MinMax: '<S129>/MinMax'
         */
        rtb_DataTypeConversion1_e = (u <= rtb_motohawk_interpolation_1d2_d) ||
          rtIsNaN(rtb_motohawk_interpolation_1d2_d) ? u :
          rtb_motohawk_interpolation_1d2_d;
      } else {
        rtb_DataTypeConversion1_e = rtb_APP1;
      }

      /* End of Switch: '<S106>/Switch1' */
      BaseEngineController_LS_B.s106_MultiportSwitch = rtb_DataTypeConversion1_e;
    } else {
      BaseEngineController_LS_B.s106_MultiportSwitch = rtb_DataTypeConversion1_e;
    }

    /* End of MultiPortSwitch: '<S106>/Multiport Switch' */

    /* S-Function (motohawk_sfun_data_write): '<S106>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration'
     */
    /* Write to Data Storage as scalar: IACType */
    {
      IACType_DataStore() = (IACTypeCal_DataStore());
    }

    /* Outputs for Atomic SubSystem: '<S93>/O2 Control' */
    /* Logic: '<S250>/Logical Operator' */
    rtb_LogicalOperator1_al = !BaseEngineController_LS_B.s498_DataValidState;

    /* Logic: '<S250>/Logical Operator1' */
    rtb_LogicalOperator6_b = !BaseEngineController_LS_B.s498_DataValidState_f;

    /* Logic: '<S250>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration'
     */
    rtb_LogicalOperator6_b = (rtb_LogicalOperator6_b && (BankB_Enbl_DataStore()));

    /* Logic: '<S250>/Logical Operator3' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S250>/motohawk_fault_action'
     */
    BaseEngineController_LS_B.s250_LogicalOperator3 = ((rtb_LogicalOperator1_al ||
      rtb_LogicalOperator6_b || GetFaultActionStatus(6)));

    /* S-Function (motohawk_sfun_data_write): '<S115>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() =
        BaseEngineController_LS_B.s250_LogicalOperator3;
    }

    /* Inport: '<S115>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_LS_B.s151_Product1;
    rtb_DesiredLambda_idx_0 = BaseEngineController_LS_B.s109_EquivRatioInfo[1];
    rtb_DesiredLambda_idx_1 = BaseEngineController_LS_B.s109_EquivRatioInfo[2];

    /* Logic: '<S245>/Logical Operator' incorporates:
     *  Constant: '<S245>/Constant'
     *  RelationalOperator: '<S245>/Relational Operator'
     *  RelationalOperator: '<S245>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration1'
     *  Sum: '<S245>/Sum'
     *  Sum: '<S245>/Sum1'
     */
    BaseEngineController_LS_B.s245_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S245>/Logical Operator3' */
    BaseEngineController_LS_B.s245_LogicalOperator3 =
      !BaseEngineController_LS_B.s250_LogicalOperator3;

    /* S-Function Block: <S245>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_j, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_f;
    }

    /* RelationalOperator: '<S245>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S245>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S486>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s245_RelationalOperator5 =
      ((BaseEngineController_LS_B.s483_Switch >= rtb_motohawk_interpolation_1d_f));

    /* Logic: '<S245>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s245_LogicalOperator2 =
      ((BaseEngineController_LS_B.s428_LogicalOperator &&
        BaseEngineController_LS_B.s245_LogicalOperator &&
        BaseEngineController_LS_B.s245_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_LS_B.s245_RelationalOperator5));

    /* Logic: '<S115>/Logical Operator' */
    rtb_RelationalOperator3_bp =
      !BaseEngineController_LS_B.s245_LogicalOperator2;

    /* Logic: '<S115>/Logical Operator1' */
    rtb_LogicalOperator1_er = !rtb_RelOp_hf;

    /* S-Function Block: <S252>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_p = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((RichTargetDeltaMap_DataStore())), 9, 9);
      (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_p;
    }

    /* S-Function Block: <S252>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((LeanTargetDeltaMap_DataStore())), 9, 9);
      (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
    }

    /* S-Function Block: <S252>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S252>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S251>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_h, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_i;
    }

    /* S-Function Block: <S251>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_o, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_o0;
    }

    /* Product: '<S251>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S251>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S251>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S488>/motohawk_prelookup'
     */
    rtb_Switch2_a = rtb_motohawk_interpolation_1d_i *
      rtb_motohawk_interpolation_1d1_o0;

    /* Outputs for Atomic SubSystem: '<S115>/O2 PID Controller Bank A' */
    /* RelationalOperator: '<S254>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d2'
     *  Sum: '<S254>/Sum3'
     */
    rtb_AboveRich_l = (BaseEngineController_LS_B.s456_Sum1 >=
                       rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S254>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d3'
     *  Sum: '<S254>/Sum4'
     */
    rtb_LogicalOperator2_ij = (BaseEngineController_LS_B.s456_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S261>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_ij != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_i[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S261>/Switch1' incorporates:
     *  UnitDelay: '<S261>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_LogicalOperator1_al = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_LogicalOperator1_al =
        BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S261>/Switch1' */

    /* Switch: '<S247>/Switch' */
    if (rtb_RelationalOperator3_bp) {
      BaseEngineController_LS_B.s247_Switch =
        BaseEngineController_LS_B.s456_Sum1;
    } else {
      /* Switch: '<S254>/Switch2' incorporates:
       *  Logic: '<S254>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d1'
       *  Sum: '<S254>/Sum1'
       *  Sum: '<S254>/Sum2'
       */
      if (!rtb_LogicalOperator1_al) {
        BaseEngineController_LS_B.s247_Switch = rtb_RichEquivRatioTargetDelta_p
          + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_B.s247_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S254>/Switch2' */
    }

    /* End of Switch: '<S247>/Switch' */

    /* Sum: '<S256>/Sum2' */
    BaseEngineController_LS_B.s256_Sum2 = BaseEngineController_LS_B.s247_Switch
      - BaseEngineController_LS_B.s456_Sum1;

    /* Product: '<S256>/Product5' */
    rtb_Switch3_p = BaseEngineController_LS_B.s256_Sum2 * rtb_Switch2_a;

    /* Product: '<S256>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s256_Product2 = rtb_Switch3_p *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S258>/Switch1' incorporates:
     *  Constant: '<S253>/Constant'
     *  UnitDelay: '<S258>/Unit Delay'
     */
    if (rtb_LogicalOperator1_er) {
      BaseEngineController_LS_B.s258_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s258_Switch1 =
        BaseEngineController_LS_DWork.s258_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S258>/Switch1' */

    /* Product: '<S256>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration7'
     */
    rtb_Switch1_f = rtb_Switch3_p * (O2CtrlDGain_DataStore());

    /* Sum: '<S257>/Sum2' incorporates:
     *  UnitDelay: '<S257>/Unit Delay'
     */
    rtb_DataTypeConversion1_e = rtb_Switch1_f -
      BaseEngineController_LS_DWork.s257_UnitDelay_DSTATE;

    /* S-Function Block: <S257>/motohawk_delta_time */
    rtb_motohawk_delta_time_m4 = 0.005;

    /* Product: '<S257>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S257>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s257_Product = rtb_DataTypeConversion1_e /
      rtb_motohawk_delta_time_m4;

    /* MinMax: '<S255>/MinMax' incorporates:
     *  Constant: '<S253>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration11'
     *  Sum: '<S253>/Sum'
     *  Sum: '<S256>/Sum1'
     */
    u = ((BaseEngineController_LS_B.s256_Product2 +
          BaseEngineController_LS_B.s257_Product) +
         BaseEngineController_LS_B.s258_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S255>/MinMax1' incorporates:
     *  MinMax: '<S255>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration10'
     */
    rtb_Multiplyby10ifnotyetenabled_c = (u <= (O2CtrlPIDOutUpperLimit_DataStore()))
      || rtIsNaN((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S256>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = rtb_Switch3_p * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S258>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s258_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a1 = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S260>/MinMax' incorporates:
     *  Product: '<S258>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S258>/motohawk_delta_time'
     *  Sum: '<S258>/Sum'
     */
    u = rtb_DataTypeConversion1_e * rtb_motohawk_delta_time_a1 +
      BaseEngineController_LS_B.s258_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S260>/MinMax1' incorporates:
     *  MinMax: '<S260>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration9'
     */
    u = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S254>/Unit Delay1' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s254_UnitDelay1_DSTATE;

    /* Logic: '<S254>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S254>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_LogicalOperator2_ij &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S262>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s262_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_eq = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S254>/Logical Operator4' */
    rtb_Switch1_pb = !rtb_RelationalOperator3_bp;

    /* Logic: '<S254>/Logical Operator6' */
    rtb_RelationalOperator2_py = !rtb_LogicalOperator1_er;

    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S262>/Constant'
     *  Logic: '<S254>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S262>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S262>/motohawk_delta_time'
     *  Sum: '<S262>/Sum'
     */
    if (rtb_LogicalOperator2_ij && rtb_Switch1_pb && rtb_RelationalOperator2_py)
    {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_eq +
        O2LeanTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S262>/Switch' */

    /* Switch: '<S254>/Switch3' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s254_Switch3 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s254_Switch3 = rtb_DataTypeConversion1_e;
    }

    /* End of Switch: '<S254>/Switch3' */
    /* RelationalOperator: '<S254>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration2'
     */
    rtb_LT3_k = ((BaseEngineController_LS_B.s254_Switch3 >=
                  (O2LeanTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(129, rtb_LT3_k);
      UpdateFault(129);
    }

    /* UnitDelay: '<S254>/Unit Delay' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE;

    /* Logic: '<S254>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S254>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_AboveRich_l && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S264>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s264_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bh = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S264>/Constant'
     *  Logic: '<S254>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S264>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S264>/motohawk_delta_time'
     *  Sum: '<S264>/Sum'
     */
    if (rtb_AboveRich_l && rtb_Switch1_pb && rtb_RelationalOperator2_py) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_bh +
        O2RichTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S264>/Switch' */

    /* Switch: '<S254>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s254_Switch1 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s254_Switch1 = rtb_DataTypeConversion_b2;
    }

    /* End of Switch: '<S254>/Switch1' */
    /* RelationalOperator: '<S254>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration1'
     */
    rtb_LT2_p = ((BaseEngineController_LS_B.s254_Switch1 >=
                  (O2RichTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(131, rtb_LT2_p);
      UpdateFault(131);
    }

    /* UnitDelay: '<S254>/Unit Delay2' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s254_UnitDelay2_DSTATE;

    /* Logic: '<S254>/Logical Operator2' incorporates:
     *  Logic: '<S254>/Logical Operator1'
     *  Logic: '<S254>/Logical Operator3'
     */
    rtb_LogicalOperator2_ij = ((!rtb_LogicalOperator2_ij) && (!rtb_AboveRich_l));

    /* Logic: '<S254>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S254>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_LogicalOperator2_ij &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S263>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s263_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_lv = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S263>/Constant'
     *  Logic: '<S254>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S263>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S263>/motohawk_delta_time'
     *  Sum: '<S263>/Sum'
     */
    if (rtb_LogicalOperator2_ij && rtb_Switch1_pb && rtb_RelationalOperator2_py)
    {
      rtb_Product1_gw = rtb_motohawk_delta_time_lv +
        O2ActiveTimer_BankA_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S263>/Switch' */

    /* Switch: '<S254>/Switch4' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s254_Switch4 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s254_Switch4 = rtb_Product1_gw;
    }

    /* End of Switch: '<S254>/Switch4' */
    /* RelationalOperator: '<S254>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration3'
     */
    rtb_LT4_g = ((BaseEngineController_LS_B.s254_Switch4 >=
                  (O2ActiveTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(133, rtb_LT4_g);
      UpdateFault(133);
    }

    /* Saturate: '<S262>/Saturation' */
    rtb_Saturation_jz = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S262>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankA */
    {
      O2LeanTimer_BankA_DataStore() = rtb_Saturation_jz;
    }

    /* Saturate: '<S263>/Saturation' */
    rtb_Saturation_lu = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S263>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankA */
    {
      O2ActiveTimer_BankA_DataStore() = rtb_Saturation_lu;
    }

    /* Saturate: '<S264>/Saturation' */
    rtb_Saturation_oq = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S264>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankA */
    {
      O2RichTimer_BankA_DataStore() = rtb_Saturation_oq;
    }

    /* InitialCondition: '<S247>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_DWork.s247_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_DWork.s247_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Multiplyby10ifnotyetenabled_c = 1.0;
    }

    /* End of InitialCondition: '<S247>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S261>/Unit Delay' */
    BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE =
      rtb_LogicalOperator1_al;

    /* Update for UnitDelay: '<S258>/Unit Delay' incorporates:
     *  MinMax: '<S260>/MinMax1'
     */
    BaseEngineController_LS_DWork.s258_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S257>/Unit Delay' */
    BaseEngineController_LS_DWork.s257_UnitDelay_DSTATE = rtb_Switch1_f;

    /* Update for UnitDelay: '<S254>/Unit Delay1' */
    BaseEngineController_LS_DWork.s254_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s254_Switch3;

    /* Update for UnitDelay: '<S254>/Unit Delay' */
    BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s254_Switch1;

    /* Update for UnitDelay: '<S254>/Unit Delay2' */
    BaseEngineController_LS_DWork.s254_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s254_Switch4;

    /* End of Outputs for SubSystem: '<S115>/O2 PID Controller Bank A' */

    /* Outputs for Atomic SubSystem: '<S115>/O2 PID Controller Bank B' */
    /* RelationalOperator: '<S266>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d2'
     *  Sum: '<S266>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_B.s456_Sum3 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S266>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d3'
     *  Sum: '<S266>/Sum4'
     */
    rtb_LogicalOperator2_br = (BaseEngineController_LS_B.s456_Sum3 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S273>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_br != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_cd[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_cd[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S273>/Switch1' incorporates:
     *  UnitDelay: '<S273>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_cd[1]) {
      rtb_RelationalOperator2_py = rtb_CombinatorialLogic_cd[0];
    } else {
      rtb_RelationalOperator2_py =
        BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S273>/Switch1' */

    /* Switch: '<S248>/Switch' */
    if (rtb_RelationalOperator3_bp) {
      BaseEngineController_LS_B.s248_Switch =
        BaseEngineController_LS_B.s456_Sum3;
    } else {
      /* Switch: '<S266>/Switch2' incorporates:
       *  Logic: '<S266>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S252>/motohawk_interpolation_2d1'
       *  Sum: '<S266>/Sum1'
       *  Sum: '<S266>/Sum2'
       */
      if (!rtb_RelationalOperator2_py) {
        BaseEngineController_LS_B.s248_Switch = rtb_RichEquivRatioTargetDelta_p
          + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_B.s248_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S266>/Switch2' */
    }

    /* End of Switch: '<S248>/Switch' */

    /* Sum: '<S268>/Sum2' */
    BaseEngineController_LS_B.s268_Sum2 = BaseEngineController_LS_B.s248_Switch
      - BaseEngineController_LS_B.s456_Sum3;

    /* Product: '<S268>/Product5' */
    rtb_Switch3_p = BaseEngineController_LS_B.s268_Sum2 * rtb_Switch2_a;

    /* Product: '<S268>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s268_Product2 = rtb_Switch3_p *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S265>/Constant'
     *  UnitDelay: '<S270>/Unit Delay'
     */
    if (rtb_LogicalOperator1_er) {
      BaseEngineController_LS_B.s270_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s270_Switch1 =
        BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Product: '<S268>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration7'
     */
    rtb_Switch2_a = rtb_Switch3_p * (O2CtrlDGain_DataStore());

    /* Sum: '<S269>/Sum2' incorporates:
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_DataTypeConversion1_e = rtb_Switch2_a -
      BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE;

    /* S-Function Block: <S269>/motohawk_delta_time */
    rtb_motohawk_delta_time_gl = 0.005;

    /* Product: '<S269>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S269>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s269_Product = rtb_DataTypeConversion1_e /
      rtb_motohawk_delta_time_gl;

    /* MinMax: '<S267>/MinMax' incorporates:
     *  Constant: '<S265>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration11'
     *  Sum: '<S265>/Sum'
     *  Sum: '<S268>/Sum1'
     */
    u = ((BaseEngineController_LS_B.s268_Product2 +
          BaseEngineController_LS_B.s269_Product) +
         BaseEngineController_LS_B.s270_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S267>/MinMax1' incorporates:
     *  MinMax: '<S267>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration10'
     */
    rtb_Switch4_i = (u <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S268>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = rtb_Switch3_p * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S270>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s270_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_i5 = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S272>/MinMax' incorporates:
     *  Product: '<S270>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
     *  Sum: '<S270>/Sum'
     */
    u = rtb_DataTypeConversion1_e * rtb_motohawk_delta_time_i5 +
      BaseEngineController_LS_B.s270_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S272>/MinMax1' incorporates:
     *  MinMax: '<S272>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration9'
     */
    u = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S266>/Unit Delay1' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s266_UnitDelay1_DSTATE;

    /* Logic: '<S266>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S266>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_LogicalOperator2_br &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S274>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s274_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_lq = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S266>/Logical Operator4' */
    rtb_Switch1_pb = !rtb_RelationalOperator3_bp;

    /* Logic: '<S266>/Logical Operator6' */
    rtb_LogicalOperator1_al = !rtb_LogicalOperator1_er;

    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S274>/Constant'
     *  Logic: '<S266>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S274>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S274>/motohawk_delta_time'
     *  Sum: '<S274>/Sum'
     */
    if (rtb_LogicalOperator2_br && rtb_Switch1_pb && rtb_LogicalOperator1_al) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_lq +
        O2LeanTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S274>/Switch' */

    /* Switch: '<S266>/Switch3' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s266_Switch3 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s266_Switch3 = rtb_DataTypeConversion1_e;
    }

    /* End of Switch: '<S266>/Switch3' */
    /* RelationalOperator: '<S266>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_LS_B.s266_Switch3 >=
                (O2LeanTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S266>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(130, rtb_LT3);
      UpdateFault(130);
    }

    /* UnitDelay: '<S266>/Unit Delay' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE;

    /* Logic: '<S266>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S266>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S276>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s276_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ny = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S276>/Switch' incorporates:
     *  Constant: '<S276>/Constant'
     *  Logic: '<S266>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S276>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S276>/motohawk_delta_time'
     *  Sum: '<S276>/Sum'
     */
    if (rtb_AboveRich && rtb_Switch1_pb && rtb_LogicalOperator1_al) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_ny +
        O2RichTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S276>/Switch' */

    /* Switch: '<S266>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s266_Switch1 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s266_Switch1 = rtb_DataTypeConversion_b2;
    }

    /* End of Switch: '<S266>/Switch1' */
    /* RelationalOperator: '<S266>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_LS_B.s266_Switch1 >=
                (O2RichTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S266>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(132, rtb_LT2);
      UpdateFault(132);
    }

    /* UnitDelay: '<S266>/Unit Delay2' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s266_UnitDelay2_DSTATE;

    /* Logic: '<S266>/Logical Operator2' incorporates:
     *  Logic: '<S266>/Logical Operator1'
     *  Logic: '<S266>/Logical Operator3'
     */
    rtb_LogicalOperator2_br = ((!rtb_LogicalOperator2_br) && (!rtb_AboveRich));

    /* Logic: '<S266>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S266>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_LogicalOperator2_br &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S275>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s275_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_nf = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S275>/Switch' incorporates:
     *  Constant: '<S275>/Constant'
     *  Logic: '<S266>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S275>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S275>/motohawk_delta_time'
     *  Sum: '<S275>/Sum'
     */
    if (rtb_LogicalOperator2_br && rtb_Switch1_pb && rtb_LogicalOperator1_al) {
      rtb_Product1_gw = rtb_motohawk_delta_time_nf +
        O2ActiveTimer_BankB_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S275>/Switch' */

    /* Switch: '<S266>/Switch4' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s266_Switch4 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s266_Switch4 = rtb_Product1_gw;
    }

    /* End of Switch: '<S266>/Switch4' */
    /* RelationalOperator: '<S266>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_LS_B.s266_Switch4 >=
                (O2ActiveTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S266>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(134, rtb_LT4);
      UpdateFault(134);
    }

    /* Saturate: '<S274>/Saturation' */
    rtb_Saturation_e = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S274>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankB */
    {
      O2LeanTimer_BankB_DataStore() = rtb_Saturation_e;
    }

    /* Saturate: '<S275>/Saturation' */
    rtb_Saturation_jl = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S275>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankB */
    {
      O2ActiveTimer_BankB_DataStore() = rtb_Saturation_jl;
    }

    /* Saturate: '<S276>/Saturation' */
    rtb_Saturation_po = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S276>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankB */
    {
      O2RichTimer_BankB_DataStore() = rtb_Saturation_po;
    }

    /* InitialCondition: '<S248>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_DWork.s248_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_DWork.s248_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Switch4_i = 1.0;
    }

    /* End of InitialCondition: '<S248>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S273>/Unit Delay' */
    BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE =
      rtb_RelationalOperator2_py;

    /* Update for UnitDelay: '<S270>/Unit Delay' incorporates:
     *  MinMax: '<S272>/MinMax1'
     */
    BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE = rtb_Switch2_a;

    /* Update for UnitDelay: '<S266>/Unit Delay1' */
    BaseEngineController_LS_DWork.s266_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s266_Switch3;

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s266_Switch1;

    /* Update for UnitDelay: '<S266>/Unit Delay2' */
    BaseEngineController_LS_DWork.s266_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s266_Switch4;

    /* End of Outputs for SubSystem: '<S115>/O2 PID Controller Bank B' */

    /* S-Function (motohawk_sfun_probe): '<S245>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S249>/Constant'
     */
    if (BaseEngineController_LS_B.s245_LogicalOperator2) {
      /* MultiPortSwitch: '<S244>/Multiport Switch' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration'
       */
      if ((O2Cyl1Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion1_e = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_DataTypeConversion1_e = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch' */

      /* MultiPortSwitch: '<S244>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration1'
       */
      if ((O2Cyl2Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion_b2 = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_DataTypeConversion_b2 = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch1' */

      /* MultiPortSwitch: '<S244>/Multiport Switch2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration2'
       */
      if ((O2Cyl3Select_DataStore()) == FALSE) {
        rtb_Product1_gw = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Product1_gw = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch2' */

      /* MultiPortSwitch: '<S244>/Multiport Switch3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration3'
       */
      if ((O2Cyl4Select_DataStore()) == FALSE) {
        rtb_Switch3_p = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch3_p = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch3' */

      /* MultiPortSwitch: '<S244>/Multiport Switch4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration4'
       */
      if ((O2Cyl5Select_DataStore()) == FALSE) {
        rtb_Switch2_a = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch2_a = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch4' */

      /* MultiPortSwitch: '<S244>/Multiport Switch5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration5'
       */
      if ((O2Cyl6Select_DataStore()) == FALSE) {
        rtb_Switch1_f = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch1_f = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch5' */

      /* MultiPortSwitch: '<S244>/Multiport Switch6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration6'
       */
      if ((O2Cyl7Select_DataStore()) == FALSE) {
        rtb_Switch_om = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch_om = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch6' */

      /* MultiPortSwitch: '<S244>/Multiport Switch7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration7'
       */
      if ((O2Cyl8Select_DataStore()) == FALSE) {
        rtb_Switch4_i = rtb_Multiplyby10ifnotyetenabled_c;
      }

      /* End of MultiPortSwitch: '<S244>/Multiport Switch7' */
      BaseEngineController_LS_B.s249_O2FuelMult[0] = rtb_DataTypeConversion1_e;
      BaseEngineController_LS_B.s249_O2FuelMult[1] = rtb_DataTypeConversion_b2;
      BaseEngineController_LS_B.s249_O2FuelMult[2] = rtb_Product1_gw;
      BaseEngineController_LS_B.s249_O2FuelMult[3] = rtb_Switch3_p;
      BaseEngineController_LS_B.s249_O2FuelMult[4] = rtb_Switch2_a;
      BaseEngineController_LS_B.s249_O2FuelMult[5] = rtb_Switch1_f;
      BaseEngineController_LS_B.s249_O2FuelMult[6] = rtb_Switch_om;
      BaseEngineController_LS_B.s249_O2FuelMult[7] = rtb_Switch4_i;
    } else {
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s249_O2FuelMult[i] = 1.0;
      }
    }

    /* End of Switch: '<S249>/Switch' */

    /* End of Outputs for SubSystem: '<S93>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S93>/Fuel System Manager' */
    /* Logic: '<S162>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration7'
     */
    rtb_LogicalOperator_df[0] = !(O2Cyl1Select_DataStore());
    rtb_LogicalOperator_df[1] = !(O2Cyl2Select_DataStore());
    rtb_LogicalOperator_df[2] = !(O2Cyl3Select_DataStore());
    rtb_LogicalOperator_df[3] = !(O2Cyl4Select_DataStore());
    rtb_LogicalOperator_df[4] = !(O2Cyl5Select_DataStore());
    rtb_LogicalOperator_df[5] = !(O2Cyl6Select_DataStore());
    rtb_LogicalOperator_df[6] = !(O2Cyl7Select_DataStore());
    rtb_LogicalOperator_df[7] = !(O2Cyl8Select_DataStore());

    /* Outputs for Atomic SubSystem: '<S111>/O2 Fuel Adapt' */

    /* S-Function Block: <S165>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankAIn_DataStore()) = BaseEngineController_LS_B.s258_Switch1;
      (O2ITerm_BankAIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s258_Switch1, (O2ITerm_BankAIdxArr_DataStore()),
         5, (O2ITerm_BankAIdx_DataStore()));
      rtb_motohawk_prelookup13 = (O2ITerm_BankAIdx_DataStore());
    }

    /* S-Function Block: <S165>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup13, (real_T *) ((FuelAdaptGain_BankATbl_DataStore
           ())), 5);
      (FuelAdaptGain_BankA_DataStore()) = rtb_motohawk_interpolation_1d1_m;
    }

    /* Product: '<S165>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S165>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup13'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s258_Switch1 *
      rtb_motohawk_interpolation_1d1_m;

    /* MinMax: '<S188>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S184>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_e >=
                 (FuelAdaptError_BankALwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankALwrLim_DataStore())) ? rtb_DataTypeConversion1_e :
      (FuelAdaptError_BankALwrLim_DataStore());

    /* MinMax: '<S188>/MinMax1' incorporates:
     *  MinMax: '<S188>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S184>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s188_MinMax1 = (rtb_Abs_k <=
      (FuelAdaptError_BankAUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankAUprLim_DataStore())) ? rtb_Abs_k :
      (FuelAdaptError_BankAUprLim_DataStore());

    /* S-Function Block: <S165>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2_h = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankAMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankA_DataStore()) = rtb_motohawk_interpolation_2d2_h;
    }

    /* Outputs for Atomic SubSystem: '<S165>/WarmUp Disable' */
    /* Logic: '<S186>/Logical Operator' incorporates:
     *  Constant: '<S186>/Constant'
     *  MinMax: '<S186>/MinMax'
     *  RelationalOperator: '<S186>/Relational Operator'
     *  Sum: '<S186>/Sum'
     */
    BaseEngineController_LS_B.s186_LogicalOperator = !(((rtb_DesiredLambda_idx_0
      >= rtb_DesiredLambda_idx_1) || rtIsNaN(rtb_DesiredLambda_idx_1) ?
      rtb_DesiredLambda_idx_0 : rtb_DesiredLambda_idx_1) - rtb_DesiredLambda_idx
      > 0.01);

    /* End of Outputs for SubSystem: '<S165>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S165>/O2 Control Enable Delay' */

    /* S-Function Block: <S187>/motohawk_delta_time */
    rtb_motohawk_delta_time_m3 = 0.005;

    /* Switch: '<S187>/Switch' incorporates:
     *  Constant: '<S187>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S187>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S187>/motohawk_delta_time'
     *  Sum: '<S187>/Sum'
     */
    if (BaseEngineController_LS_B.s245_LogicalOperator2) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_m3 +
        LiqDelayTime_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S187>/Switch' */
    /* RelationalOperator: '<S183>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_b = (rtb_DataTypeConversion1_e >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S187>/Saturation' */
    rtb_Saturation_gs = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S187>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_gs;
    }

    /* End of Outputs for SubSystem: '<S165>/O2 Control Enable Delay' */

    /* MinMax: '<S165>/MinMax' */
    rtb_Abs_k = (BaseEngineController_LS_B.s258_Switch1 >=
                 BaseEngineController_LS_B.s270_Switch1) || rtIsNaN
      (BaseEngineController_LS_B.s270_Switch1) ?
      BaseEngineController_LS_B.s258_Switch1 :
      BaseEngineController_LS_B.s270_Switch1;

    /* Logic: '<S165>/Logical Operator2' incorporates:
     *  Abs: '<S165>/Abs'
     *  MinMax: '<S165>/MinMax'
     *  RelationalOperator: '<S165>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s165_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_B.s186_LogicalOperator && rtb_LogicalOperator6_b
        && (fabs(rtb_Abs_k) <= (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S165>/Adapt FuelFlowComp Map Bank A' incorporates:
     *  EnablePort: '<S181>/Enable'
     */
    if (BaseEngineController_LS_B.s165_LogicalOperator2) {
      /* S-Function Block: <S181>/motohawk_adapt_table */
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
              BaseEngineController_LS_B.s188_MinMax1;
            if (_new > (FuelFlowCompMaxValue_BankA_DataStore()))
              _new = (FuelFlowCompMaxValue_BankA_DataStore());
            if (_new < (FuelFlowCompMinValue_BankA_DataStore()))
              _new = (FuelFlowCompMinValue_BankA_DataStore());
            (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_B.s188_MinMax1;
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

      /* RelationalOperator: '<S181>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_me = ((rtb_motohawk_interpolation_2d2_h >=
        (FuelFlowCompMaxValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S181>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(67, rtb_RelationalOperator2_me);
        UpdateFault(67);
      }

      /* RelationalOperator: '<S181>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_bm = ((rtb_motohawk_interpolation_2d2_h <=
        (FuelFlowCompMinValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S181>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(69, rtb_RelationalOperator1_bm);
        UpdateFault(69);
      }
    }

    /* End of Outputs for SubSystem: '<S165>/Adapt FuelFlowComp Map Bank A' */
    /* S-Function Block: <S165>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankBIn_DataStore()) = BaseEngineController_LS_B.s270_Switch1;
      (O2ITerm_BankBIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s270_Switch1, (O2ITerm_BankBIdxArr_DataStore()),
         5, (O2ITerm_BankBIdx_DataStore()));
      rtb_motohawk_prelookup1_ke = (O2ITerm_BankBIdx_DataStore());
    }

    /* S-Function Block: <S165>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_ld = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_ke, (real_T *)
         ((FuelAdaptGain_BankBTbl_DataStore())), 5);
      (FuelAdaptGain_BankB_DataStore()) = rtb_motohawk_interpolation_1d2_ld;
    }

    /* Product: '<S165>/Product1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S165>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup1'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s270_Switch1 *
      rtb_motohawk_interpolation_1d2_ld;

    /* MinMax: '<S189>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_e >=
                 (FuelAdaptError_BankBLwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBLwrLim_DataStore())) ? rtb_DataTypeConversion1_e :
      (FuelAdaptError_BankBLwrLim_DataStore());

    /* MinMax: '<S189>/MinMax1' incorporates:
     *  MinMax: '<S189>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s189_MinMax1 = (rtb_Abs_k <=
      (FuelAdaptError_BankBUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBUprLim_DataStore())) ? rtb_Abs_k :
      (FuelAdaptError_BankBUprLim_DataStore());

    /* S-Function Block: <S165>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankBMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankB_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* Outputs for Enabled SubSystem: '<S165>/Adapt FuelFlowComp Map Bank B' incorporates:
     *  EnablePort: '<S182>/Enable'
     */
    if (BaseEngineController_LS_B.s165_LogicalOperator2) {
      /* S-Function Block: <S182>/motohawk_adapt_table */
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
              BaseEngineController_LS_B.s189_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_B.s189_MinMax1;
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

      /* RelationalOperator: '<S182>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d3'
       */
      rtb_RelationalOperator2_hq = ((rtb_motohawk_interpolation_2d3 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S182>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(68, rtb_RelationalOperator2_hq);
        UpdateFault(68);
      }

      /* RelationalOperator: '<S182>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d3'
       */
      rtb_RelationalOperator1_a = ((rtb_motohawk_interpolation_2d3 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S182>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(70, rtb_RelationalOperator1_a);
        UpdateFault(70);
      }
    }

    /* End of Outputs for SubSystem: '<S165>/Adapt FuelFlowComp Map Bank B' */

    /* S-Function Block: <S165>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_p = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_p;
    }

    /* Product: '<S165>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d2'
     */
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d1_p *
      rtb_motohawk_interpolation_2d2_h;

    /* Product: '<S165>/Divide1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d3'
     */
    rtb_DataTypeConversion_b2 = rtb_motohawk_interpolation_2d3 *
      rtb_motohawk_interpolation_2d1_p;

    /* End of Outputs for SubSystem: '<S111>/O2 Fuel Adapt' */

    /* Product: '<S162>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration7'
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

    /* S-Function Block: <S168>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_B.s589_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s589_Merge, (DesAFRatioIdxArr_DataStore()),
         11, (DesAFRatioIdx_DataStore()));
      rtb_motohawk_prelookup_hf = (DesAFRatioIdx_DataStore());
    }

    /* S-Function Block: <S168>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      BaseEngineController_LS_B.s168_motohawk_interpolation_1d =
        TableInterpolation1D_real_T(rtb_motohawk_prelookup_hf, (real_T *)
        ((DesAFRatioTbl_DataStore())), 11);
      (DesAFRatio_DataStore()) =
        BaseEngineController_LS_B.s168_motohawk_interpolation_1d;
    }

    /* Product: '<S166>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_LS_B.s166_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_LS_B.s410_MultiportSwitch * rtb_DesiredLambda_idx /
      BaseEngineController_LS_B.s168_motohawk_interpolation_1d;

    /* Product: '<S163>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S163>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S163>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_LS_B.s163_PerCylinderMassFlowRate =
      BaseEngineController_LS_B.s166_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S163>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s163_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = BaseEngineController_LS_B.s163_PerCylinderMassFlowRate *
        BaseEngineController_LS_B.s249_O2FuelMult[i];
    }

    /* End of Product: '<S163>/Apply Multipliers for O2, Knock Control, and Enrichment1' */

    /* Outputs for Atomic SubSystem: '<S111>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S164>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S169>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration1' */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_LS_DWork.s164_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S175>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s175_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S178>/Unit Delay' */
        BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S174>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s174_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S177>/Unit Delay' */
        BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE = 0.0;
        BaseEngineController_LS_DWork.s164_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S175>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s175_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S175>/Product' incorporates:
       *  MinMax: '<S175>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaMAP_FiltConst_DataStore())) ||
        rtIsNaN((DeltaMAP_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaMAP_FiltConst_DataStore());

      /* Sum: '<S178>/Sum1' incorporates:
       *  Constant: '<S178>/Constant'
       *  Product: '<S178>/Product'
       *  Product: '<S178>/Product1'
       *  Sum: '<S178>/Sum'
       *  UnitDelay: '<S178>/Unit Delay'
       */
      BaseEngineController_LS_B.s178_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s610_Merge * rtb_Product_mq;

      /* Sum: '<S169>/Sum1' */
      BaseEngineController_LS_B.s169_Sum1 = BaseEngineController_LS_B.s610_Merge
        - BaseEngineController_LS_B.s178_Sum1;

      /* S-Function Block: <S174>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s174_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S174>/Product' incorporates:
       *  MinMax: '<S174>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S177>/Sum1' incorporates:
       *  Constant: '<S177>/Constant'
       *  Product: '<S177>/Product'
       *  Product: '<S177>/Product1'
       *  Sum: '<S177>/Sum'
       *  UnitDelay: '<S177>/Unit Delay'
       */
      BaseEngineController_LS_B.s177_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s458_Switch2 * rtb_Product_mq;

      /* Sum: '<S169>/Sum' */
      BaseEngineController_LS_B.s169_Sum =
        BaseEngineController_LS_B.s458_Switch2 -
        BaseEngineController_LS_B.s177_Sum1;

      /* S-Function Block: <S169>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_LS_B.s410_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s410_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_ag = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S169>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_LS_B.s169_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s169_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_jq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S169>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup1_jq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_a;
      }

      /* RelationalOperator: '<S171>/RelOp' incorporates:
       *  Constant: '<S171>/Constant'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S169>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup1'
       */
      rtb_LogicalOperator6_b = (rtb_motohawk_interpolation_2d2_a != 1.0);

      /* S-Function Block: <S169>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaMAP17In_DataStore()) = BaseEngineController_LS_B.s169_Sum1;
        (DeltaMAP17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s169_Sum1, (DeltaMAP17IdxArr_DataStore()),
           17, (DeltaMAP17Idx_DataStore()));
        rtb_motohawk_prelookup3 = (DeltaMAP17Idx_DataStore());
      }

      /* S-Function Block: <S169>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup3, (real_T *)
           ((DeltaMAP_MultMap_DataStore())), 9, 17);
        (DeltaMAP_Mult_DataStore()) = rtb_motohawk_interpolation_2d1_a;
      }

      /* Logic: '<S169>/Logical Operator' incorporates:
       *  Constant: '<S172>/Constant'
       *  RelationalOperator: '<S172>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S169>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup3'
       */
      rtb_LogicalOperator6_b = ((rtb_motohawk_interpolation_2d1_a != 1.0) ||
        rtb_LogicalOperator6_b);

      /* Outputs for Enabled SubSystem: '<S169>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S173>/Enable'
       */
      if (rtb_LogicalOperator6_b) {
        if (!BaseEngineController_LS_DWork.s169_ECTTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s169_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S173>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s173_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s173_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s169_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S173>/Mult' */
          BaseEngineController_LS_B.s173_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s169_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S169>/ECT Transient Fueling' */

      /* Outputs for Enabled SubSystem: '<S169>/OXY Transient Fueling' incorporates:
       *  EnablePort: '<S176>/Enable'
       */
      if (rtb_LogicalOperator6_b) {
        if (!BaseEngineController_LS_DWork.s169_OXYTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s169_OXYTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S176>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s176_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s442_motohawk_prelookup, (real_T *)
             ((OXYTransFuelMultTbl_DataStore())), 5);
          (OXYTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s176_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s169_OXYTransientFueling_MODE) {
          /* Disable for Outport: '<S176>/Mult' */
          BaseEngineController_LS_B.s176_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s169_OXYTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S169>/OXY Transient Fueling' */

      /* Product: '<S169>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S169>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S169>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup1'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup3'
       */
      BaseEngineController_LS_B.s169_Product1 = rtb_motohawk_interpolation_2d2_a
        * BaseEngineController_LS_B.s173_motohawk_interpolation_1d *
        rtb_motohawk_interpolation_2d1_a *
        BaseEngineController_LS_B.s176_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S178>/Unit Delay' */
      BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s178_Sum1;

      /* Update for UnitDelay: '<S177>/Unit Delay' */
      BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s177_Sum1;
    } else {
      if (BaseEngineController_LS_DWork.s164_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S169>/ECT Transient Fueling' */
        /* Disable for Outport: '<S173>/Mult' */
        BaseEngineController_LS_B.s173_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s169_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S169>/ECT Transient Fueling' */

        /* Disable for Enabled SubSystem: '<S169>/OXY Transient Fueling' */
        /* Disable for Outport: '<S176>/Mult' */
        BaseEngineController_LS_B.s176_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s169_OXYTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S169>/OXY Transient Fueling' */

        /* Disable for Outport: '<S169>/DeltaTPSMult' */
        BaseEngineController_LS_B.s169_Product1 = 1.0;
        BaseEngineController_LS_DWork.s164_DeltaTPSTransientFueling_MODE = FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S164>/Delta TPS Transient Fueling' */

    /* Product: '<S164>/Divide' */
    for (i = 0; i < 8; i++) {
      rtb_Divide_pr[i] = BaseEngineController_LS_B.s169_Product1 *
        BaseEngineController_LS_B.s163_ApplyMultipliersforO2KnockControlandEnrichment1
        [i];
    }

    /* End of Product: '<S164>/Divide' */
    /* S-Function Block: <S164>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S170>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S179>/Enable'
     */
    /* RelationalOperator: '<S180>/RelOp' incorporates:
     *  Constant: '<S180>/Constant'
     */
    if (BaseEngineController_LS_B.s567_Sum1 != 0.0) {
      /* Product: '<S179>/charge mass' incorporates:
       *  Constant: '<S170>/Units Equivalency Factor'
       */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s179_chargemass[i] = rtb_Divide_pr[i] *
          60000.0 / BaseEngineController_LS_B.s567_Sum1;
      }

      /* End of Product: '<S179>/charge mass' */
    }

    /* End of RelationalOperator: '<S180>/RelOp' */
    /* End of Outputs for SubSystem: '<S170>/Multiply and Divide, avoiding divde by zero' */
    /* S-Function Block: <S164>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s441_motohawk_prelookup1,
         BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S111>/Injector Manager' */

    /* Product: '<S162>/Product2' incorporates:
     *  Product: '<S162>/Product'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fj[i] *= rtb_DataTypeConversion1_e * (real_T)
        rtb_LogicalOperator_df[i] * BaseEngineController_LS_B.s179_chargemass[i];
    }

    /* End of Product: '<S162>/Product2' */

    /* End of Outputs for SubSystem: '<S93>/Fuel System Manager' */

    /* Switch: '<S112>/Switch4' incorporates:
     *  Constant: '<S112>/Constant2'
     *  Logic: '<S112>/Logical Operator'
     *  Sum: '<S112>/Sum2'
     */
    if (!BaseEngineController_LS_B.s226_RelOp) {
      rtb_DataTypeConversion1_e = 0.0;
    } else {
      rtb_DataTypeConversion1_e =
        BaseEngineController_LS_B.s216_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s114_MinGovAirPID;
    }

    /* End of Switch: '<S112>/Switch4' */
    /* Switch: '<S112>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S112>/motohawk_data_read'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      /* ZeroOrderHold: '<S93>/Zero-Order Hold5' incorporates:
       *  Constant: '<S112>/Constant1'
       *  Sum: '<S112>/Sum'
       */
      BaseEngineController_LS_B.s92_IACS = 100.0 - rtb_DataTypeConversion1_e;
    } else {
      /* ZeroOrderHold: '<S93>/Zero-Order Hold5' incorporates:
       *  Constant: '<S112>/Constant'
       */
      BaseEngineController_LS_B.s92_IACS = 0.0;
    }

    /* End of Switch: '<S112>/Switch1' */

    /* ZeroOrderHold: '<S93>/Zero-Order Hold1' */
    BaseEngineController_LS_B.s92_SparkEnergy =
      BaseEngineController_LS_B.s116_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold11' */
    BaseEngineController_LS_B.s92_WASTEGATE =
      BaseEngineController_LS_B.s108_Switch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold12' */
    BaseEngineController_LS_B.s92_SparkAdv =
      BaseEngineController_LS_B.s279_Switch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold16' incorporates:
     *  Constant: '<S93>/ON1'
     */
    BaseEngineController_LS_B.s92_FUELP = TRUE;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S164>/Primary Pulse Injection Timing'
     */
    BaseEngineController_LS_B.s92_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold18' */
    BaseEngineController_LS_B.s92_Throttle =
      BaseEngineController_LS_B.s106_MultiportSwitch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold2' */
    BaseEngineController_LS_B.s92_IACP = rtb_DataTypeConversion1_e;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S164>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_LS_B.s92_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold6' */
    BaseEngineController_LS_B.s92_FAN1 = BaseEngineController_LS_B.s110_Switch4;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold7' */
    BaseEngineController_LS_B.s92_FAN2 = BaseEngineController_LS_B.s110_Switch5;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold8' */
    BaseEngineController_LS_B.s92_AC =
      BaseEngineController_LS_B.s105_LogicalOperator;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold9' */
    memcpy((void *)(&BaseEngineController_LS_B.s92_FPC[0]), (void *)
           &rtb_Product1_fj[0], sizeof(real_T) << 3U);
  } else {
    if (BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
      BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S111>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S164>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S169>/ECT Transient Fueling' */
      /* Disable for Outport: '<S173>/Mult' */
      BaseEngineController_LS_B.s173_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s169_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S169>/ECT Transient Fueling' */

      /* Disable for Enabled SubSystem: '<S169>/OXY Transient Fueling' */
      /* Disable for Outport: '<S176>/Mult' */
      BaseEngineController_LS_B.s176_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s169_OXYTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S169>/OXY Transient Fueling' */

      /* Disable for Outport: '<S169>/DeltaTPSMult' */
      BaseEngineController_LS_B.s169_Product1 = 1.0;
      BaseEngineController_LS_DWork.s164_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S164>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S111>/Injector Manager' */
      /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
      BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* If: '<S811>/If' incorporates:
   *  Inport: '<S812>/In1'
   *  Inport: '<S813>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S811>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S811>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S811>/NewValue' incorporates:
     *  ActionPort: '<S812>/Action Port'
     */
    rtb_LogicalOperator6_b = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S811>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S811>/OldValue' incorporates:
     *  ActionPort: '<S813>/Action Port'
     */
    rtb_LogicalOperator6_b = BaseEngineController_LS_B.s92_AC;

    /* End of Outputs for SubSystem: '<S811>/OldValue' */
  }

  /* End of If: '<S811>/If' */

  /* Logic: '<S810>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S810>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s810_LogicalOperator = rtb_LogicalOperator6_b ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_trigger): '<S495>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  if (BaseEngineController_LS_DWork.s495_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s495_motohawk_trigger1_DWORK1 = 1;
  }

  /* RelationalOperator: '<S425>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S425>/motohawk_calibration10'
   */
  rtb_RelationalOperator_hl = (BaseEngineController_LS_B.s481_Sum >=
    (FuelLevel_KeyUpDelay_DataStore()));

  /* S-Function (motohawk_sfun_data_read): '<S402>/motohawk_data_read' */
  BaseEngineController_LS_B.s402_motohawk_data_read = FuelLvl_NVM_DataStore();

  /* Switch: '<S402>/Switch2' */
  if (rtb_RelationalOperator_hl) {
    rtb_DataTypeConversion_gx = BaseEngineController_LS_B.s650_Merge;
  } else {
    rtb_DataTypeConversion_gx =
      BaseEngineController_LS_B.s402_motohawk_data_read;
  }

  /* End of Switch: '<S402>/Switch2' */

  /* Sum: '<S425>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S425>/motohawk_data_read'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s650_Merge -
    FuelLvl_NVM_DataStore();

  /* Logic: '<S425>/Logical Operator' incorporates:
   *  RelationalOperator: '<S425>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S425>/motohawk_calibration1'
   */
  rtb_LogicalOperator_c2 = ((rtb_DataTypeConversion1_e >=
    (FuelLevl_KeyUpDiff_DataStore())) && rtb_RelationalOperator_hl);

  /* Logic: '<S427>/Logical Operator' incorporates:
   *  Logic: '<S427>/Logical Operator1'
   *  UnitDelay: '<S427>/Unit Delay'
   */
  BaseEngineController_LS_B.s427_LogicalOperator = ((rtb_LogicalOperator_c2 && (
    !BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE)));

  /* Logic: '<S402>/Logical Operator1' incorporates:
   *  Logic: '<S402>/Logical Operator'
   */
  rtb_LogicalOperator6_b = ((!rtb_RelationalOperator_hl) ||
    BaseEngineController_LS_B.s427_LogicalOperator);

  /* S-Function Block: <S402>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s402_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S402>/Switch3' incorporates:
   *  MinMax: '<S402>/MinMax'
   *  Product: '<S402>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S402>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b) {
    rtb_Switch_hp = (FuelLevel_FuelEevntAlpha_DataStore());
  } else {
    /* S-Function Block: <S426>/motohawk_prelookup_col */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstColIn_DataStore()) =
        BaseEngineController_LS_B.s462_Switch2;
      (FuelLevel_FiltConstColIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s462_Switch2,
         (FuelLevel_FiltConstColIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstColIdx_DataStore()));
      rtb_motohawk_prelookup_col = (FuelLevel_FiltConstColIdx_DataStore());
    }

    /* S-Function Block: <S426>/motohawk_prelookup_row */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstRowIn_DataStore()) =
        BaseEngineController_LS_B.s481_Sum;
      (FuelLevel_FiltConstRowIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s481_Sum,
         (FuelLevel_FiltConstRowIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstRowIdx_DataStore()));
      rtb_motohawk_prelookup_row = (FuelLevel_FiltConstRowIdx_DataStore());
    }

    /* S-Function Block: <S426>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
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

  /* End of Switch: '<S402>/Switch3' */

  /* Sum: '<S423>/Sum1' incorporates:
   *  Constant: '<S423>/Constant'
   *  Product: '<S423>/Product'
   *  Product: '<S423>/Product1'
   *  Sum: '<S423>/Sum'
   *  UnitDelay: '<S423>/Unit Delay'
   */
  BaseEngineController_LS_B.s423_Sum1 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s423_UnitDelay_DSTATE +
    rtb_DataTypeConversion_gx * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S814>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s423_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s423_Sum1 > 99.9998565000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s423_Sum1 *
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

  /* S-Function Block: <S828>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s828_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S828>/Product' incorporates:
   *  MinMax: '<S828>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S828>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (RPMFilt_LowPass_DataStore())) || rtIsNaN
    ((RPMFilt_LowPass_DataStore())) ? rtb_Switch_hp : (RPMFilt_LowPass_DataStore
    ());

  /* Sum: '<S829>/Sum1' incorporates:
   *  Constant: '<S829>/Constant'
   *  Product: '<S829>/Product'
   *  Product: '<S829>/Product1'
   *  Sum: '<S829>/Sum'
   *  UnitDelay: '<S829>/Unit Delay'
   */
  BaseEngineController_LS_B.s829_Sum1 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s829_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s567_Sum1 * rtb_Switch_hp;

  /* Switch: '<S826>/Switch' incorporates:
   *  MinMax: '<S826>/MinMax'
   *  Product: '<S826>/Product'
   *  Product: '<S826>/Product1'
   *  Rounding: '<S826>/Rounding Function'
   *  S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration'
   */
  if (((uint8_T)(RPMFilt_Enable_DataStore())) >= 1) {
    /* MinMax: '<S826>/MinMax' incorporates:
     *  Constant: '<S826>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration1'
     */
    u = (real_T)((uint16_T)(RPMFilt_RoundValue_DataStore()));
    rtb_Abs_k = u >= 1.0 ? u : 1.0;
    BaseEngineController_LS_B.s826_Switch = rt_roundd_snf
      (BaseEngineController_LS_B.s829_Sum1 / rtb_Abs_k) * rtb_Abs_k;
  } else {
    BaseEngineController_LS_B.s826_Switch = BaseEngineController_LS_B.s567_Sum1;
  }

  /* End of Switch: '<S826>/Switch' */
  /* S-Function Block: <S825>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s825_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S825>/Product' incorporates:
   *  MinMax: '<S825>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S825>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (TPS_Filt_DataStore())) || rtIsNaN
    ((TPS_Filt_DataStore())) ? rtb_Switch_hp : (TPS_Filt_DataStore());

  /* Sum: '<S827>/Sum1' incorporates:
   *  Constant: '<S827>/Constant'
   *  Product: '<S827>/Product'
   *  Product: '<S827>/Product1'
   *  Sum: '<S827>/Sum'
   *  UnitDelay: '<S827>/Unit Delay'
   */
  rtb_Sum1_hu = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s827_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s458_Switch2 * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S815>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s826_Switch < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s826_Switch > 25599.9370500000F) {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s826_Switch *
                            (2.5599672324F));
        }

        if (rtb_Sum1_hu < -50.0006912000F) {
          tmp1 = (int16_T)(-32768);
        } else if (rtb_Sum1_hu > 49.9991653000F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(rtb_Sum1_hu * (655.3509404286F));
        }

        if (BaseEngineController_LS_B.s695_Merge < -128.0000000000F) {
          tmp2 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s695_Merge > 127.0000000000F) {
          tmp2 = (int8_T)(127);
        } else {
          tmp2 = (int8_T)(BaseEngineController_LS_B.s695_Merge);
        }

        if (BaseEngineController_LS_B.s677_Merge < -128.0000000000F) {
          tmp3 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s677_Merge > 127.0000000000F) {
          tmp3 = (int8_T)(127);
        } else {
          tmp3 = (int8_T)(BaseEngineController_LS_B.s677_Merge);
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

  /* S-Function Block: <S833>/motohawk_delta_time */
  rtb_motohawk_delta_time_b3 = 0.005;

  /* UnitDelay: '<S833>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s833_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S833>/IncreasingFilter' incorporates:
   *  EnablePort: '<S840>/Enable'
   */
  /* RelationalOperator: '<S833>/Relational Operator4' incorporates:
   *  UnitDelay: '<S833>/Unit Delay2'
   */
  if (BaseEngineController_LS_DWork.s833_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s498_MultiportSwitch) {
    /* S-Function (motohawk_sfun_calibration): '<S840>/motohawk_calibration1' */
    BaseEngineController_LS_B.s833_Merge = (PH1_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S833>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S833>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S833>/DecreasingFilter' incorporates:
   *  EnablePort: '<S838>/Enable'
   */
  /* RelationalOperator: '<S833>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s498_MultiportSwitch)
  {
    /* S-Function (motohawk_sfun_calibration): '<S838>/motohawk_calibration2' */
    BaseEngineController_LS_B.s833_Merge = (PH1_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S833>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S833>/DecreasingFilter' */

  /* Switch: '<S833>/Switch1' incorporates:
   *  Constant: '<S833>/Constant'
   *  MinMax: '<S833>/MinMax'
   *  Product: '<S833>/Product'
   *  UnitDelay: '<S833>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s833_UnitDelay5_DSTATE) {
    rtb_Switch_hp = rtb_motohawk_delta_time_b3 / ((rtb_motohawk_delta_time_b3 >=
      BaseEngineController_LS_B.s833_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s833_Merge) ? rtb_motohawk_delta_time_b3 :
      BaseEngineController_LS_B.s833_Merge);
  } else {
    rtb_Switch_hp = 1.0;
  }

  /* End of Switch: '<S833>/Switch1' */

  /* Sum: '<S839>/Sum1' incorporates:
   *  Constant: '<S839>/Constant'
   *  Product: '<S839>/Product'
   *  Product: '<S839>/Product1'
   *  Sum: '<S839>/Sum'
   *  UnitDelay: '<S839>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s498_MultiportSwitch * rtb_Switch_hp;

  /* Switch: '<S833>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S833>/motohawk_calibration'
   *  UnitDelay: '<S833>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s833_UnitDelay5_DSTATE) {
    BaseEngineController_LS_B.s833_Switch = rtb_Sum1_c;
  } else {
    BaseEngineController_LS_B.s833_Switch = (PHI1_DefaultVal_DataStore());
  }

  /* End of Switch: '<S833>/Switch' */
  /* S-Function Block: <S834>/motohawk_delta_time */
  rtb_motohawk_delta_time_lc = 0.005;

  /* UnitDelay: '<S834>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s834_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S834>/IncreasingFilter' incorporates:
   *  EnablePort: '<S843>/Enable'
   */
  /* RelationalOperator: '<S834>/Relational Operator4' incorporates:
   *  UnitDelay: '<S834>/Unit Delay2'
   */
  if (BaseEngineController_LS_DWork.s834_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s513_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration1' */
    BaseEngineController_LS_B.s834_Merge = (PH2_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S834>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S834>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S834>/DecreasingFilter' incorporates:
   *  EnablePort: '<S841>/Enable'
   */
  /* RelationalOperator: '<S834>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s513_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration2' */
    BaseEngineController_LS_B.s834_Merge = (PH2_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S834>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S834>/DecreasingFilter' */

  /* Switch: '<S834>/Switch1' incorporates:
   *  Constant: '<S834>/Constant'
   *  MinMax: '<S834>/MinMax'
   *  Product: '<S834>/Product'
   *  UnitDelay: '<S834>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s834_UnitDelay5_DSTATE) {
    rtb_Switch_hp = rtb_motohawk_delta_time_lc / ((rtb_motohawk_delta_time_lc >=
      BaseEngineController_LS_B.s834_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s834_Merge) ? rtb_motohawk_delta_time_lc :
      BaseEngineController_LS_B.s834_Merge);
  } else {
    rtb_Switch_hp = 1.0;
  }

  /* End of Switch: '<S834>/Switch1' */

  /* Sum: '<S842>/Sum1' incorporates:
   *  Constant: '<S842>/Constant'
   *  Product: '<S842>/Product'
   *  Product: '<S842>/Product1'
   *  Sum: '<S842>/Sum'
   *  UnitDelay: '<S842>/Unit Delay'
   */
  rtb_Sum1_lm = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s842_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s513_Merge * rtb_Switch_hp;

  /* Switch: '<S834>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S834>/motohawk_calibration'
   *  UnitDelay: '<S834>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s834_UnitDelay5_DSTATE) {
    BaseEngineController_LS_B.s834_Switch = rtb_Sum1_lm;
  } else {
    BaseEngineController_LS_B.s834_Switch = (PHI2_DefaultVal_DataStore());
  }

  /* End of Switch: '<S834>/Switch' */
  /* S-Function Block: <S830>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s830_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S830>/Product' incorporates:
   *  MinMax: '<S830>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S830>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (VSPD_Filt_DataStore())) || rtIsNaN
    ((VSPD_Filt_DataStore())) ? rtb_Switch_hp : (VSPD_Filt_DataStore());

  /* Sum: '<S835>/Sum1' incorporates:
   *  Constant: '<S835>/Constant'
   *  Product: '<S835>/Product'
   *  Product: '<S835>/Product1'
   *  Sum: '<S835>/Sum'
   *  UnitDelay: '<S835>/Unit Delay'
   */
  rtb_Sum1_p3 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s835_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s462_Switch2 * rtb_Switch_hp;

  /* Gain: '<S816>/Gain' */
  rtb_Gain_e = 1.60934 * rtb_Sum1_p3;

  /* MultiPortSwitch: '<S455>/Multiport Switch' incorporates:
   *  Constant: '<S455>/Constant1'
   *  MinMax: '<S455>/MinMax'
   */
  if (BaseEngineController_LS_B.s527_Merge == FALSE) {
    /* Product: '<S455>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = (Gear6Ratio_DataStore()) * (FDR_DataStore());

    /* Product: '<S455>/Product' incorporates:
     *  Constant: '<S455>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration7'
     */
    rtb_DataTypeConversion_b2 = (TireRadius_DataStore()) * 0.00595 *
      BaseEngineController_LS_B.s567_Sum1;

    /* Abs: '<S455>/Abs5' incorporates:
     *  Product: '<S455>/Product12'
     *  Sum: '<S455>/Sum5'
     */
    rtb_DataTypeConversion1_e = fabs(rtb_DataTypeConversion_b2 /
      rtb_DataTypeConversion1_e - BaseEngineController_LS_B.s462_Switch2);

    /* Gain: '<S455>/Gain5' incorporates:
     *  RelationalOperator: '<S455>/M6'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration8'
     */
    rtb_Gain5 = (uint8_T)(rtb_DataTypeConversion1_e <= (GearMatchHyst_DataStore())
                          ? 192 : 0);

    /* Gain: '<S455>/Gain4' incorporates:
     *  Abs: '<S455>/Abs4'
     *  Product: '<S455>/Product11'
     *  Product: '<S455>/Product5'
     *  RelationalOperator: '<S455>/M5'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration8'
     *  Sum: '<S455>/Sum4'
     */
    rtb_Gain4 = (uint8_T)(fabs(rtb_DataTypeConversion_b2 /
      ((Gear5Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s462_Switch2) <= (GearMatchHyst_DataStore()) ?
                          160 : 0);

    /* Gain: '<S455>/Gain3' incorporates:
     *  Abs: '<S455>/Abs3'
     *  Product: '<S455>/Product10'
     *  Product: '<S455>/Product4'
     *  RelationalOperator: '<S455>/M4'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration8'
     *  Sum: '<S455>/Sum3'
     */
    rtb_Gain3_m = (uint8_T)((fabs(rtb_DataTypeConversion_b2 /
      ((Gear4Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s462_Switch2) <= (GearMatchHyst_DataStore())) <<
      7);

    /* Gain: '<S455>/Gain2' incorporates:
     *  Abs: '<S455>/Abs2'
     *  Product: '<S455>/Product3'
     *  Product: '<S455>/Product9'
     *  RelationalOperator: '<S455>/M3'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration8'
     *  Sum: '<S455>/Sum2'
     */
    rtb_Gain2_m = (uint8_T)(fabs(rtb_DataTypeConversion_b2 /
      ((Gear3Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s462_Switch2) <= (GearMatchHyst_DataStore()) ?
      192 : 0);

    /* Gain: '<S455>/Gain1' incorporates:
     *  Abs: '<S455>/Abs1'
     *  Product: '<S455>/Product2'
     *  Product: '<S455>/Product8'
     *  RelationalOperator: '<S455>/M2'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration8'
     *  Sum: '<S455>/Sum1'
     */
    rtb_Gain1_k = (uint8_T)((fabs(rtb_DataTypeConversion_b2 /
      ((Gear2Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s462_Switch2) <= (GearMatchHyst_DataStore())) <<
      7);

    /* MinMax: '<S455>/MinMax' incorporates:
     *  Abs: '<S455>/Abs'
     *  Gain: '<S455>/Gain'
     *  Product: '<S455>/Product1'
     *  Product: '<S455>/Product7'
     *  RelationalOperator: '<S455>/M1'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S455>/motohawk_calibration8'
     *  Sum: '<S455>/Sum'
     */
    maxV = ((fabs(rtb_DataTypeConversion_b2 / ((Gear1Ratio_DataStore()) *
               (FDR_DataStore())) - BaseEngineController_LS_B.s462_Switch2) <=
             (GearMatchHyst_DataStore())) << 7) >> 2;
    i = rtb_Gain1_k >> 1;
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
    BaseEngineController_LS_B.s455_MultiportSwitch = ldexp((real_T)((uint32_T)
      maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)i), -5);
  } else {
    BaseEngineController_LS_B.s455_MultiportSwitch = 0.0;
  }

  /* End of MultiPortSwitch: '<S455>/Multiport Switch' */
  /* S-Function Block: <S831>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s831_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S831>/Product' incorporates:
   *  MinMax: '<S831>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S831>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (SparkAdv_Filt_DataStore())) || rtIsNaN
    ((SparkAdv_Filt_DataStore())) ? rtb_Switch_hp : (SparkAdv_Filt_DataStore());

  /* Sum: '<S836>/Sum1' incorporates:
   *  Constant: '<S836>/Constant'
   *  Product: '<S836>/Product'
   *  Product: '<S836>/Product1'
   *  Sum: '<S836>/Sum'
   *  UnitDelay: '<S836>/Unit Delay'
   */
  rtb_Sum1_a = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s836_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s92_SparkAdv * rtb_Switch_hp;

  /* S-Function Block: <S832>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s832_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S832>/Product' incorporates:
   *  MinMax: '<S832>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S832>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (ECUVolt_Filt_DataStore())) || rtIsNaN
    ((ECUVolt_Filt_DataStore())) ? rtb_Switch_hp : (ECUVolt_Filt_DataStore());

  /* Sum: '<S837>/Sum1' incorporates:
   *  Constant: '<S837>/Constant'
   *  Product: '<S837>/Product'
   *  Product: '<S837>/Product1'
   *  Sum: '<S837>/Sum'
   *  UnitDelay: '<S837>/Unit Delay'
   */
  rtb_Sum1_j2 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s837_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s644_Merge * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S816>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s833_Switch < 0.5000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s833_Switch > 1.4960937500F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((BaseEngineController_LS_B.s833_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (BaseEngineController_LS_B.s834_Switch < 0.5000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s834_Switch > 1.4960937500F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_B.s834_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Gain_e < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Gain_e > 411.9857775000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Gain_e * (159.0710252128F));
        }

        if (BaseEngineController_LS_B.s455_MultiportSwitch < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s455_MultiportSwitch >
                   255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s455_MultiportSwitch);
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

  /* UnitDelay: '<S833>/Unit Delay1' */
  rtb_UnitDelay1_ad = BaseEngineController_LS_DWork.s833_UnitDelay1_DSTATE;

  /* UnitDelay: '<S833>/Unit Delay3' */
  rtb_UnitDelay3_m = BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE;

  /* UnitDelay: '<S833>/Unit Delay4' */
  rtb_UnitDelay4_b = BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE;

  /* UnitDelay: '<S834>/Unit Delay1' */
  rtb_UnitDelay1_pn = BaseEngineController_LS_DWork.s834_UnitDelay1_DSTATE;

  /* UnitDelay: '<S834>/Unit Delay3' */
  rtb_UnitDelay3_p = BaseEngineController_LS_DWork.s834_UnitDelay3_DSTATE;

  /* UnitDelay: '<S834>/Unit Delay4' */
  rtb_UnitDelay4_a = BaseEngineController_LS_DWork.s834_UnitDelay4_DSTATE;

  /* S-Function Block: <S847>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s847_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S847>/Product' incorporates:
   *  MinMax: '<S847>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (MAP_filt_DataStore())) || rtIsNaN
    ((MAP_filt_DataStore())) ? rtb_Switch_hp : (MAP_filt_DataStore());

  /* Sum: '<S850>/Sum1' incorporates:
   *  Constant: '<S850>/Constant'
   *  Product: '<S850>/Product'
   *  Product: '<S850>/Product1'
   *  Sum: '<S850>/Sum'
   *  UnitDelay: '<S850>/Unit Delay'
   */
  rtb_Sum1_cn = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s610_Merge * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_read): '<S817>/motohawk_data_read' */
  rtb_motohawk_data_read_i4 = VEFin_DataStore();

  /* S-Function Block: <S598>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s598_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S598>/Product' incorporates:
   *  MinMax: '<S598>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S598>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (FuelPresFilterConst_DataStore())) ||
    rtIsNaN((FuelPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S570>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S570>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S570>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(73) || IsFaultActive(74));

  /* Logic: '<S570>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S570>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S570>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S570>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(73) || IsFaultSuspected(74));

  /* S-Function Block: <S494>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s494_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S570>/Data Type Conversion' */
  rtb_DataTypeConversion_gx = (real_T)
    BaseEngineController_LS_B.s494_motohawk_ain2;

  /* Product: '<S570>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S570>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_gx *
    (FuelPresGain_DataStore());

  /* Sum: '<S570>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S570>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s570_Sum1 = rtb_DataTypeConversion1_e +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S570>/Unit Delay1' */
  rtb_UnitDelay1_pd = BaseEngineController_LS_DWork.s570_UnitDelay1_DSTATE;

  /* If: '<S570>/If' incorporates:
   *  Logic: '<S570>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S570>/If Action Subsystem' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_pd, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S570>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S570>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S570>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S570>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S601>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s570_Sum1, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S570>/If Action Subsystem2' */
  }

  /* End of If: '<S570>/If' */

  /* Sum: '<S603>/Sum1' incorporates:
   *  Constant: '<S603>/Constant'
   *  Product: '<S603>/Product'
   *  Product: '<S603>/Product1'
   *  Sum: '<S603>/Sum'
   *  UnitDelay: '<S603>/Unit Delay'
   */
  rtb_Sum1_cs = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s603_UnitDelay_DSTATE + rtb_Merge_b3f *
    rtb_Switch_hp;

  /* If: '<S602>/If' incorporates:
   *  Inport: '<S604>/In1'
   *  Inport: '<S605>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S602>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S602>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S602>/NewValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_LS_B.s602_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S602>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S602>/OldValue' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    BaseEngineController_LS_B.s602_Merge = rtb_Sum1_cs;

    /* End of Outputs for SubSystem: '<S602>/OldValue' */
  }

  /* End of If: '<S602>/If' */

  /* Gain: '<S817>/Gain' */
  rtb_DataTypeConversion1_e = 0.01 * BaseEngineController_LS_B.s602_Merge;

  /* S-Function Block: <S848>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s848_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S848>/Product' incorporates:
   *  MinMax: '<S848>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S848>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (FuelPres_Filt_DataStore())) || rtIsNaN
    ((FuelPres_Filt_DataStore())) ? rtb_Switch_hp : (FuelPres_Filt_DataStore());

  /* Sum: '<S851>/Sum1' incorporates:
   *  Constant: '<S851>/Constant'
   *  Product: '<S851>/Product'
   *  Product: '<S851>/Product1'
   *  Sum: '<S851>/Sum'
   *  UnitDelay: '<S851>/Unit Delay'
   */
  rtb_Sum1_ay = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s851_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_Switch_hp;

  /* S-Function Block: <S624>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s624_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S624>/Product' incorporates:
   *  MinMax: '<S624>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (OilPresFilterConst_DataStore())) ||
    rtIsNaN((OilPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S574>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S574>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S574>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(135) || IsFaultActive(136));

  /* Logic: '<S574>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S574>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S574>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S574>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(135) || IsFaultSuspected(136));

  /* S-Function Block: <S494>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s494_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S574>/Data Type Conversion' */
  rtb_Switch4_i = (real_T)BaseEngineController_LS_B.s494_motohawk_ain1;

  /* Product: '<S574>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S574>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_Switch4_i * (OilPresGain_DataStore());

  /* Sum: '<S574>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S574>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s574_Sum1 = rtb_DataTypeConversion1_e +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S574>/Unit Delay1' */
  rtb_UnitDelay1_aa = BaseEngineController_LS_DWork.s574_UnitDelay1_DSTATE;

  /* If: '<S574>/If' incorporates:
   *  Logic: '<S574>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S574>/If Action Subsystem' incorporates:
     *  ActionPort: '<S625>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_aa, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S574>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S574>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S626>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S574>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S574>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s574_Sum1, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S574>/If Action Subsystem2' */
  }

  /* End of If: '<S574>/If' */

  /* Sum: '<S629>/Sum1' incorporates:
   *  Constant: '<S629>/Constant'
   *  Product: '<S629>/Product'
   *  Product: '<S629>/Product1'
   *  Sum: '<S629>/Sum'
   *  UnitDelay: '<S629>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s629_UnitDelay_DSTATE + rtb_Merge_ol *
    rtb_Switch_hp;

  /* If: '<S628>/If' incorporates:
   *  Inport: '<S630>/In1'
   *  Inport: '<S631>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S628>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S628>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S628>/NewValue' incorporates:
     *  ActionPort: '<S630>/Action Port'
     */
    BaseEngineController_LS_B.s628_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S628>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S628>/OldValue' incorporates:
     *  ActionPort: '<S631>/Action Port'
     */
    BaseEngineController_LS_B.s628_Merge = rtb_Sum1_o;

    /* End of Outputs for SubSystem: '<S628>/OldValue' */
  }

  /* End of If: '<S628>/If' */

  /* Gain: '<S817>/Gain1' */
  rtb_DataTypeConversion1_e = 0.068948 * BaseEngineController_LS_B.s628_Merge;

  /* S-Function Block: <S849>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s849_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S849>/Product' incorporates:
   *  MinMax: '<S849>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (OilPres_Filt_DataStore())) || rtIsNaN
    ((OilPres_Filt_DataStore())) ? rtb_Switch_hp : (OilPres_Filt_DataStore());

  /* Sum: '<S852>/Sum1' incorporates:
   *  Constant: '<S852>/Constant'
   *  Product: '<S852>/Product'
   *  Product: '<S852>/Product1'
   *  Sum: '<S852>/Sum'
   *  UnitDelay: '<S852>/Unit Delay'
   */
  rtb_Sum1_co = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s852_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_read): '<S817>/motohawk_data_read1' */
  rtb_Switch_hp = BaseEquivRatio_DataStore();

  /* Math: '<S817>/Math Function' incorporates:
   *  Saturate: '<S817>/Saturation'
   *
   * About '<S817>/Math Function':
   *  Operator: reciprocal
   */
  rtb_MathFunction = 1.0 / (rtb_Switch_hp >= 0.01 ? rtb_Switch_hp : 0.01);

  /* Switch: '<S104>/Switch' incorporates:
   *  Constant: '<S104>/OFF'
   *  Logic: '<S104>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S104>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S104>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_fz = FALSE;
  } else {
    rtb_RelationalOperator5_fz = BaseEngineController_LS_B.s92_FUELP;
  }

  /* End of Switch: '<S104>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S817>/motohawk_data_read2' */
  rtb_motohawk_data_read2_lg = O2CtrlMode_DataStore();

  /* S-Function (motohawk_sfun_fault_action): '<S817>/motohawk_fault_action'
   *
   * Regarding '<S817>/motohawk_fault_action':
     Get Fault Action Status: EngineProtectLED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action_o = GetFaultActionStatus(9);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S817>/motohawk_fault_action1'
   *
   * Regarding '<S817>/motohawk_fault_action1':
     Get Fault Action Status: MIL_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_a = GetFaultActionStatus(12);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S817>/motohawk_fault_status2'
   *
   * Regarding '<S817>/motohawk_fault_status2':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status2_f2 = IsFaultActive(117);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S817>/motohawk_fault_status1'
   *
   * Regarding '<S817>/motohawk_fault_status1':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status1_i = IsFaultActive(128);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action1'
   *
   * Regarding '<S22>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_o = GetFaultActionStatus(14);
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
  rtb_LogicalOperator6_b = (rtb_motohawk_fault_action1_o ||
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
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
      BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
      BaseEngineController_LS_DWork.s72_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_869p0001 */
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
    /* Enable for Trigger_FGND_TDC1_EVENT_869p0001 */
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
      /* Disable for Trigger_FGND_TDC1_EVENT_869p0001 */
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

  /* Sum: '<S817>/    ' incorporates:
   *  Sum: '<S817>/      '
   */
  rtb_Switch_kj = rtb_AND1[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)rtb_AND1[1 + i];
  }

  /* End of Sum: '<S817>/    ' */

  /* RelationalOperator: '<S844>/Compare' incorporates:
   *  Constant: '<S844>/Constant'
   *  Sum: '<S817>/    '
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

  /* Sum: '<S817>/      ' incorporates:
   *  Sum: '<S817>/    '
   */
  rtb_Switch_kj = BaseEngineController_LS_B.s22_LogicalOperator2[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)BaseEngineController_LS_B.s22_LogicalOperator2[1
      + i];
  }

  /* End of Sum: '<S817>/      ' */

  /* RelationalOperator: '<S845>/Compare' incorporates:
   *  Constant: '<S845>/Constant'
   *  Sum: '<S817>/      '
   */
  rtb_Compare_d = (((uint8_T)rtb_Switch_kj >= 1));

  /* RelationalOperator: '<S846>/Compare' incorporates:
   *  Constant: '<S846>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S817>/motohawk_data_read3'
   */
  rtb_Compare_g = ((((uint8_T)EncoderState_DataStore()) >= 3));

  /* S-Function (motohawk_sfun_fault_status): '<S817>/motohawk_fault_status3'
   *
   * Regarding '<S817>/motohawk_fault_status3':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status3_g = IsFaultActive(140);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S817>/motohawk_fault_status4'
   *
   * Regarding '<S817>/motohawk_fault_status4':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status4_gd3 = IsFaultActive(42);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S817>/Send CAN Messages' */
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

        tmp8 = (uint8_T)(0U);
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

  /* Product: '<S818>/Product' incorporates:
   *  Constant: '<S818>/Constant1'
   *  Saturate: '<S818>/Saturation'
   */
  rtb_Product_hd = BaseEngineController_LS_B.s410_MultiportSwitch * 60.0 /
    (BaseEngineController_LS_B.s567_Sum1 >= 0.01 ?
     BaseEngineController_LS_B.s567_Sum1 : 0.01);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S818>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s410_MultiportSwitch < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s410_MultiportSwitch >
                   3276.7500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(BaseEngineController_LS_B.s410_MultiportSwitch *
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
        tmp5 = (uint8_T)(BaseEngineController_LS_B.s527_Merge != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S819>/motohawk_data_read2' incorporates:
   *  Constant: '<S819>/Constant5'
   */
  rtb_motohawk_data_read2_m = InjMPW_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_data_read): '<S819>/motohawk_data_read1' incorporates:
   *  Constant: '<S819>/Constant4'
   */
  rtb_motohawk_data_read1_ka = InjDC_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_send_canmsgs): '<S819>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s498_Lambda < -64.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s498_Lambda > 63.5000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_B.s498_Lambda -
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

  /* S-Function (motohawk_sfun_data_read): '<S820>/motohawk_data_read' */
  rtb_motohawk_data_read_bv = BARO_DataStore();

  /* S-Function Block: <S853>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s853_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S853>/Product' incorporates:
   *  MinMax: '<S853>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S853>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (Flex_Filt_DataStore())) || rtIsNaN
    ((Flex_Filt_DataStore())) ? rtb_Switch_hp : (Flex_Filt_DataStore());

  /* Sum: '<S854>/Sum1' incorporates:
   *  Constant: '<S854>/Constant'
   *  Product: '<S854>/Product'
   *  Product: '<S854>/Product1'
   *  Sum: '<S854>/Sum'
   *  UnitDelay: '<S854>/Unit Delay'
   */
  rtb_Sum1_kv = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s854_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s589_Merge * rtb_Switch_hp;

  /* Outputs for Enabled SubSystem: '<S405>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S450>/Enable'
   */
  if (rtb_RelOp_d) {
    if (!BaseEngineController_LS_DWork.s405_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S450>/Unit Delay' */
      BaseEngineController_LS_DWork.s450_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s405_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S450>/Sum' incorporates:
     *  Constant: '<S450>/Constant'
     *  UnitDelay: '<S450>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s450_UnitDelay_DSTATE + 1);

    /* Sum: '<S450>/Add' incorporates:
     *  Constant: '<S450>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S450>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S450>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S450>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S450>/Switch' */

    /* Sum: '<S450>/Add1' incorporates:
     *  Constant: '<S450>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S450>/Logical Operator' incorporates:
     *  Constant: '<S450>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S450>/Relational Operator1'
     */
    rtb_LogicalOperator_g5 = (rtb_LogicalOperator6_b && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S450>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_g5, rtb_Add1_k,
      BaseEngineController_LS_B.s663_Merge,
      &BaseEngineController_LS_B.s450_CollectAverage,
      &BaseEngineController_LS_DWork.s450_CollectAverage);

    /* End of Outputs for SubSystem: '<S450>/Collect Average' */

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    BaseEngineController_LS_DWork.s450_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s405_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S450>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s450_CollectAverage);

      /* End of Disable for SubSystem: '<S450>/Collect Average' */
      BaseEngineController_LS_DWork.s405_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S405>/Capture IAT At Startup' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S820>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s450_CollectAverage.s412_Product <
            -50.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s450_CollectAverage.s412_Product >
                   205.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)
            (BaseEngineController_LS_B.s450_CollectAverage.s412_Product -
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

  /* S-Function (motohawk_sfun_data_read): '<S823>/motohawk_data_read' */
  rtb_motohawk_data_read_ki = BoostControlTarget_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S823>/motohawk_data_read1' */
  rtb_motohawk_data_read1_bz = BoostControlDutyCycleFF_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S823>/motohawk_data_read2' */
  rtb_motohawk_data_read2_h = BoostControlPID_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S823>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read1_bz > 100U) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_bz * (2U));
        }

        if (rtb_motohawk_data_read2_h < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_h > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_motohawk_data_read2_h * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s668_Merge < -50.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s668_Merge > 205.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_B.s668_Merge -
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

  /* S-Function Block: <S856>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s856_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S856>/Product' incorporates:
   *  MinMax: '<S856>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S856>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (APP_Filt_DataStore())) || rtIsNaN
    ((APP_Filt_DataStore())) ? rtb_Switch_hp : (APP_Filt_DataStore());

  /* Sum: '<S858>/Sum1' incorporates:
   *  Constant: '<S858>/Constant'
   *  Product: '<S858>/Product'
   *  Product: '<S858>/Product1'
   *  Sum: '<S858>/Sum'
   *  UnitDelay: '<S858>/Unit Delay'
   */
  rtb_Sum1_mn = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s858_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s451_Switch1 * rtb_Switch_hp;

  /* S-Function Block: <S855>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s855_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S855>/Product' incorporates:
   *  MinMax: '<S855>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S855>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (ETCReq_Filt_DataStore())) || rtIsNaN
    ((ETCReq_Filt_DataStore())) ? rtb_Switch_hp : (ETCReq_Filt_DataStore());

  /* Sum: '<S857>/Sum1' incorporates:
   *  Constant: '<S857>/Constant'
   *  Product: '<S857>/Product'
   *  Product: '<S857>/Product1'
   *  Sum: '<S857>/Sum'
   *  UnitDelay: '<S857>/Unit Delay'
   */
  rtb_Sum1_mw = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s857_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s466_Sum2 * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status9'
   *
   * Regarding '<S824>/motohawk_fault_status9':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status9 = IsFaultActive(20);
  }

  /* Logic: '<S824>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status10'
   */
  rtb_LogicalOperator3_m = ((IsFaultActive(5) || IsFaultActive(4)));

  /* Logic: '<S824>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_d1 = ((IsFaultActive(13) || IsFaultActive(12)));

  /* Logic: '<S824>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status6'
   */
  rtb_LogicalOperator2_p1 = ((IsFaultActive(63) || IsFaultActive(64)));

  /* Logic: '<S824>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status4'
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status7'
   */
  rtb_LogicalOperator4_c = ((IsFaultActive(149) || IsFaultActive(148)));

  /* Logic: '<S824>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status8'
   */
  rtb_LogicalOperator5_g = ((IsFaultActive(155) || IsFaultActive(154)));

  /* S-Function (motohawk_sfun_data_read): '<S824>/motohawk_data_read1' */
  rtb_motohawk_data_read1_pg = ETB_Curr_Flt_DataStore();

  /* S-Function (motohawk_sfun_fault_status): '<S824>/motohawk_fault_status12'
   *
   * Regarding '<S824>/motohawk_fault_status12':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status12 = IsFaultActive(156);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S824>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s780_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s780_Merge > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_B.s780_Merge * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s797_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s797_Merge > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s797_Merge * (2.5499991075F));
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

  /* S-Function (motohawk_sfun_data_read): '<S821>/motohawk_data_read' */
  rtb_motohawk_data_read_ld = BaseRevLimit_DataStore();

  /* Logic: '<S821>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status3'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_bi = ((IsFaultActive(149) || IsFaultActive(148) ||
    IsFaultActive(155) || IsFaultActive(154)));

  /* Logic: '<S821>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status7'
   */
  rtb_LogicalOperator1_jx = ((IsFaultActive(44) || IsFaultActive(43)));

  /* Logic: '<S821>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status6'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status8'
   */
  rtb_LogicalOperator2_ps = ((IsFaultActive(74) || IsFaultActive(73)));

  /* Logic: '<S821>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status10'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status9'
   */
  rtb_LogicalOperator3_nj = ((IsFaultActive(136) || IsFaultActive(135)));

  /* Logic: '<S821>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status12'
   */
  rtb_LogicalOperator4_n = ((IsFaultActive(121) || IsFaultActive(120)));

  /* Logic: '<S821>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status13'
   *  S-Function (motohawk_sfun_fault_status): '<S821>/motohawk_fault_status14'
   */
  rtb_LogicalOperator5_cx = ((IsFaultActive(85) || IsFaultActive(84)));

  /* S-Function (motohawk_sfun_send_canmsgs): '<S821>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S822>/Send CAN Messages' */
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
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */
  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S859>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S864>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
    BaseEngineController_LS_DWork.s864_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S859>/EST Enable TDC Counter' */
    BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S890>/If' incorporates:
   *  Inport: '<S891>/In1'
   *  Inport: '<S892>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S890>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S890>/override_enable'
   */
  if ((FAN1_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S890>/NewValue' incorporates:
     *  ActionPort: '<S891>/Action Port'
     */
    rtb_DataTypeConversion1_e = (FAN1_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S890>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S890>/OldValue' incorporates:
     *  ActionPort: '<S892>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s92_FAN1;

    /* End of Outputs for SubSystem: '<S890>/OldValue' */
  }

  /* End of If: '<S890>/If' */

  /* Product: '<S887>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (FAN1_PWMGain_DataStore());

  /* Sum: '<S887>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_DataTypeConversion1_e + (FAN1_PWMOffset_DataStore());

  /* MinMax: '<S889>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN1_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN1_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN1_PWMMinLimit_DataStore());

  /* MinMax: '<S889>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s889_MinMax1 = (rtb_Switch_hp <=
    (FAN1_PWMMaxLimit_DataStore())) || rtIsNaN((FAN1_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN1_PWMMaxLimit_DataStore());

  /* Gain: '<S887>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s889_MinMax1;

  /* DataTypeConversion: '<S887>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_c = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_c = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_c = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S887>/Data Type Conversion3' */
  /* Gain: '<S887>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN1_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S887>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_j = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_j = 0U;
    }
  } else {
    rtb_DataTypeConversion2_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S887>/Data Type Conversion2' */

  /* If: '<S894>/If' incorporates:
   *  Inport: '<S895>/In1'
   *  Inport: '<S896>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S894>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S894>/override_enable'
   */
  if ((FAN2_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S894>/NewValue' incorporates:
     *  ActionPort: '<S895>/Action Port'
     */
    rtb_DataTypeConversion1_e = (FAN2_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S894>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S894>/OldValue' incorporates:
     *  ActionPort: '<S896>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s92_FAN2;

    /* End of Outputs for SubSystem: '<S894>/OldValue' */
  }

  /* End of If: '<S894>/If' */

  /* Product: '<S888>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S888>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (FAN2_PWMGain_DataStore());

  /* Sum: '<S888>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S888>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_DataTypeConversion1_e + (FAN2_PWMOffset_DataStore());

  /* MinMax: '<S893>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S888>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN2_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN2_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN2_PWMMinLimit_DataStore());

  /* MinMax: '<S893>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S888>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s893_MinMax1 = (rtb_Switch_hp <=
    (FAN2_PWMMaxLimit_DataStore())) || rtIsNaN((FAN2_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN2_PWMMaxLimit_DataStore());

  /* Gain: '<S888>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s893_MinMax1;

  /* DataTypeConversion: '<S888>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_k = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S888>/Data Type Conversion3' */
  /* Gain: '<S888>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S888>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN2_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S888>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_e = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_e = 0U;
    }
  } else {
    rtb_DataTypeConversion2_e = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S888>/Data Type Conversion2' */

  /* S-Function Block: <S492>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_LS_B.s492_motohawk_din, NULL);
  }

  /* Logic: '<S519>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S519>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b = BaseEngineController_LS_B.s492_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S530>/If' incorporates:
   *  Inport: '<S531>/In1'
   *  Inport: '<S532>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S530>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S530>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S530>/NewValue' incorporates:
     *  ActionPort: '<S531>/Action Port'
     */
    BaseEngineController_LS_B.s530_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S530>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S530>/OldValue' incorporates:
     *  ActionPort: '<S532>/Action Port'
     */
    BaseEngineController_LS_B.s530_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S530>/OldValue' */
  }

  /* End of If: '<S530>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz &&
    (!BaseEngineController_LS_B.s530_Merge));

  /* If: '<S898>/If' incorporates:
   *  Inport: '<S899>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S898>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S898>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S898>/NewValue' incorporates:
     *  ActionPort: '<S899>/Action Port'
     */
    rtb_LogicalOperator6_b = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S898>/NewValue' */
  } else {
  }

  /* End of If: '<S898>/If' */

  /* Logic: '<S897>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S897>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s897_LogicalOperator = rtb_LogicalOperator6_b ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S901>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s901_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oe = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S485>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s485_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ds = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S484>/RelOp' incorporates:
   *  Constant: '<S484>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S461>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S461>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_o, NULL);
  }

  /* Switch: '<S485>/Switch' incorporates:
   *  Constant: '<S461>/Constant1'
   *  Constant: '<S485>/Constant'
   *  Logic: '<S461>/Logical Operator'
   *  RelationalOperator: '<S461>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S461>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S485>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S485>/motohawk_delta_time'
   *  Sum: '<S485>/Sum'
   */
  if (rtb_LogicalOperator6_b && (rtb_motohawk_ain_read_o > 150)) {
    BaseEngineController_LS_B.s485_Switch = rtb_motohawk_delta_time_ds +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s485_Switch = 0.0;
  }

  /* End of Switch: '<S485>/Switch' */
  /* RelationalOperator: '<S803>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S803>/motohawk_calibration3'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s485_Switch >
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
    rtb_AboveHiTarget_n = (rtb_motohawk_ain_read_a < 150);

    /* Logic: '<S32>/Logical Operator3' */
    BaseEngineController_LS_B.s32_LogicalOperator3 = ((rtb_LogicalOperator6_b &&
      rtb_LogicalOperator1_al && rtb_AboveHiTarget_n));

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
      ((BaseEngineController_LS_B.s458_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_B.s458_Switch2 <
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
    rtb_Switch1_f = (rtb_Product5_o <= 100.0 ? rtb_Product5_o : 100.0) *
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
      BaseEngineController_LS_B.s458_Switch2;

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S25>/Constant1'
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S25>/motohawk_data_read1'
     *  Sum: '<S25>/Add1'
     */
    rtb_LogicalOperator_np = ((rtb_LogicalOperator6_b && (rtb_Switch3_p <= 5.0 +
      ETC_ShutdownLoAdaptError_DataStore())));

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
      SetFaultSuspected(64, rtb_LogicalOperator_di);
      UpdateFault(64);
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
      SetFaultSuspected(62, rtb_RelationalOperator1_hq);
      UpdateFault(62);
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
    rtb_Switch2_a = (1.0 - rtb_Product5_o) *
      BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE +
      BaseEngineController_LS_B.s458_Switch2 * rtb_Product5_o;

    /* S-Function Block: <S42>/motohawk_delta_time */
    rtb_motohawk_delta_time_hc = 0.005;

    /* Product: '<S42>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
     *  Sum: '<S42>/Sum2'
     */
    BaseEngineController_LS_B.s42_Product = (rtb_Switch2_a -
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
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_d[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
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
    rtb_Product1_gw = rtb_Product5_o * BaseEngineController_LS_B.s458_Switch2;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_oy = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_LS_B.s46_Product = (rtb_Product1_gw -
      rtb_DataTypeConversion_b2) / rtb_motohawk_delta_time_oy;

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE;

    /* Sum: '<S38>/Sum2' */
    BaseEngineController_LS_B.s38_Sum2 =
      BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s458_Switch2;

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
      BaseEngineController_LS_B.s458_Switch2;

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
    if (rtb_LogicalOperator6_b) {
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
    BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE = rtb_LogicalOperator1_al;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE =
      rtb_DataTypeConversion_b2;

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
  /* Logic: '<S806>/Logical Operator1' incorporates:
   *  Logic: '<S803>/Logical Operator'
   *  Logic: '<S803>/Logical Operator9'
   *  RelationalOperator: '<S803>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S803>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S806>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_fz = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_B.s530_Merge || (rtb_Switch1_pb &&
    (BaseEngineController_LS_B.s20_Switch < (ETC_CutPower_ETC_DataStore())))));

  /* Logic: '<S806>/Logical Operator' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* If: '<S902>/If' incorporates:
   *  Inport: '<S903>/In1'
   *  Inport: '<S904>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S902>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S902>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S902>/NewValue' incorporates:
     *  ActionPort: '<S903>/Action Port'
     */
    rtb_DataTypeConversion1_e = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S902>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S902>/OldValue' incorporates:
     *  ActionPort: '<S904>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S902>/OldValue' */
  }

  /* End of If: '<S902>/If' */

  /* Switch: '<S806>/Switch' incorporates:
   *  Constant: '<S806>/Constant2'
   *  Product: '<S806>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S806>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S806>/motohawk_interpolation_1d'
   *  Sum: '<S806>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_hp = 0.0;
  } else {
    /* S-Function Block: <S806>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hr = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s444_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_hr;
    }

    rtb_Switch_hp = rtb_DataTypeConversion1_e * rtb_motohawk_interpolation_1d_hr
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S806>/Switch' */

  /* Saturate: '<S806>/Saturation' */
  BaseEngineController_LS_B.s806_ETC = rtb_Switch_hp >= 100.0 ? 100.0 :
    rtb_Switch_hp <= -100.0 ? -100.0 : rtb_Switch_hp;

  /* Abs: '<S806>/Abs' */
  rtb_Switch_hp = fabs(BaseEngineController_LS_B.s806_ETC);

  /* RelationalOperator: '<S806>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S806>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_al = (rtb_Switch_hp > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S806>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_LS_B.s806_motohawk_pwm1);

  /* Abs: '<S806>/Abs1' */
  rtb_DataTypeConversion2_pj = (int16_T)
    (BaseEngineController_LS_B.s806_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_B.s806_motohawk_pwm1 :
     BaseEngineController_LS_B.s806_motohawk_pwm1);

  /* RelationalOperator: '<S806>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S806>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s806_RelationalOperator4 = (((real_T)
    rtb_DataTypeConversion2_pj < (ETC_I_MIN_DataStore())));

  /* Switch: '<S901>/Switch' incorporates:
   *  Constant: '<S901>/Constant'
   *  Logic: '<S806>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S901>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S901>/motohawk_delta_time'
   *  Sum: '<S901>/Sum'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al &&
      BaseEngineController_LS_B.s806_RelationalOperator4) {
    rtb_Switch_hp = rtb_motohawk_delta_time_oe + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Switch_hp = 0.0;
  }

  /* End of Switch: '<S901>/Switch' */

  /* RelationalOperator: '<S806>/Relational Operator5' incorporates:
   *  Constant: '<S806>/Constant'
   */
  rtb_RelationalOperator5_f = ((rtb_Switch_hp > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S806>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator5_f);
    UpdateFault(63);
  }

  /* Gain: '<S806>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s806_ETC;

  /* DataTypeConversion: '<S806>/Data Type Conversion3' incorporates:
   *  Gain: '<S806>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S806>/motohawk_calibration4'
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

  /* End of DataTypeConversion: '<S806>/Data Type Conversion3' */

  /* DataTypeConversion: '<S806>/Data Type Conversion4' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion4_m = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion4_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S806>/Data Type Conversion4' */

  /* Saturate: '<S901>/Saturation' */
  rtb_Saturation_no = rtb_Switch_hp >= 16000.0 ? 16000.0 : rtb_Switch_hp <= 0.0 ?
    0.0 : rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_write): '<S901>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_no;
  }

  /* If: '<S908>/If' incorporates:
   *  Inport: '<S909>/In1'
   *  Inport: '<S910>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S908>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S908>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S908>/NewValue' incorporates:
     *  ActionPort: '<S909>/Action Port'
     */
    rtb_DataTypeConversion1_e = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S908>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S908>/OldValue' incorporates:
     *  ActionPort: '<S910>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s92_IACP;

    /* End of Outputs for SubSystem: '<S908>/OldValue' */
  }

  /* End of If: '<S908>/If' */

  /* Product: '<S905>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S905>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (IAC_PGain_DataStore());

  /* Sum: '<S905>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S905>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (IAC_POffset_DataStore());

  /* MinMax: '<S907>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S905>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_co : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S907>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S905>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s907_MinMax1 = (rtb_Abs_co <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S905>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s907_MinMax1;

  /* DataTypeConversion: '<S905>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_p = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S905>/Data Type Conversion3' */
  /* Gain: '<S905>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S905>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S905>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_l = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_l = 0U;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S905>/Data Type Conversion2' */

  /* If: '<S912>/If' incorporates:
   *  Inport: '<S913>/In1'
   *  Inport: '<S914>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S912>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S912>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S912>/NewValue' incorporates:
     *  ActionPort: '<S913>/Action Port'
     */
    rtb_DataTypeConversion1_e = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S912>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S912>/OldValue' incorporates:
     *  ActionPort: '<S914>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s92_IACS;

    /* End of Outputs for SubSystem: '<S912>/OldValue' */
  }

  /* End of If: '<S912>/If' */

  /* Product: '<S906>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (IAC_SGain_DataStore());

  /* Sum: '<S906>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (IAC_SOffset_DataStore());

  /* MinMax: '<S911>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_co : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S911>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s911_MinMax1 = (rtb_Abs_co <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S906>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s911_MinMax1;

  /* DataTypeConversion: '<S906>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_d = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_d = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_d = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S906>/Data Type Conversion3' */
  /* Gain: '<S906>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S906>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_i = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_i = 0U;
    }
  } else {
    rtb_DataTypeConversion2_i = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S906>/Data Type Conversion2' */
  /* If: '<S919>/If' incorporates:
   *  Inport: '<S929>/In1'
   *  Inport: '<S930>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S919>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S919>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S919>/NewValue' incorporates:
     *  ActionPort: '<S929>/Action Port'
     */
    rtb_DataTypeConversion1_e = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S919>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S919>/OldValue' incorporates:
     *  ActionPort: '<S930>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s92_SOI;

    /* End of Outputs for SubSystem: '<S919>/OldValue' */
  }

  /* End of If: '<S919>/If' */

  /* Gain: '<S808>/Gain2' */
  rtb_Abs_co = 16.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S808>/Data Type Conversion2' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion2_pj = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_pj = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_pj = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S808>/Data Type Conversion2' */
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
    (BaseEngineController_LS_B.s602_Merge + BaseEngineController_LS_B.s411_Sum)
    - BaseEngineController_LS_B.s610_Merge;

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
  u = BaseEngineController_LS_B.s567_Sum1 >= 0.01 ?
    BaseEngineController_LS_B.s567_Sum1 : 0.01;

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
      (BaseEngineController_LS_B.s444_motohawk_prelookup, (real_T *)
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
  BaseEngineController_LS_B.s21_Sum1 = 120000.0 / u -
    BaseEngineController_LS_B.s21_Sum2;

  /* MinMax: '<S21>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s21_MinMax[i] = (rtb_Product1_fj[i] <=
      BaseEngineController_LS_B.s21_Sum1) || rtIsNaN
      (BaseEngineController_LS_B.s21_Sum1) ? rtb_Product1_fj[i] :
      BaseEngineController_LS_B.s21_Sum1;
  }

  /* End of MinMax: '<S21>/MinMax' */
  /* If: '<S920>/If' incorporates:
   *  Inport: '<S931>/In1'
   *  Inport: '<S932>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S920>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S920>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S920>/NewValue' incorporates:
     *  ActionPort: '<S931>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fj[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S920>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S920>/OldValue' incorporates:
     *  ActionPort: '<S932>/Action Port'
     */
    memcpy((void *)&rtb_Product1_fj[0], (void *)
           (&BaseEngineController_LS_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S920>/OldValue' */
  }

  /* End of If: '<S920>/If' */

  /* DataTypeConversion: '<S808>/Data Type Conversion3' incorporates:
   *  Gain: '<S808>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    u = 1000.0 * rtb_Product1_fj[i];
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

  /* End of DataTypeConversion: '<S808>/Data Type Conversion3' */
  /* Gain: '<S808>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S808>/motohawk_calibration9'
   */
  rtb_Abs_co = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S808>/Data Type Conversion6' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S808>/Data Type Conversion6' */
  /* If: '<S917>/If' incorporates:
   *  Inport: '<S925>/In1'
   *  Inport: '<S926>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S917>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S917>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S917>/NewValue' incorporates:
     *  ActionPort: '<S925>/Action Port'
     */
    rtb_DataTypeConversion1_e = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S917>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S917>/OldValue' incorporates:
     *  ActionPort: '<S926>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S917>/OldValue' */
  }

  /* End of If: '<S917>/If' */

  /* Gain: '<S808>/Gain1' */
  rtb_Abs_co = 1000.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S808>/Data Type Conversion1' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion1_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion1_p = 0U;
    }
  } else {
    rtb_DataTypeConversion1_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S808>/Data Type Conversion1' */
  /* If: '<S918>/If' incorporates:
   *  Inport: '<S927>/In1'
   *  Inport: '<S928>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S918>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S918>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S918>/NewValue' incorporates:
     *  ActionPort: '<S927>/Action Port'
     */
    rtb_DataTypeConversion1_e = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S918>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S918>/OldValue' incorporates:
     *  ActionPort: '<S928>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s92_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S918>/OldValue' */
  }

  /* End of If: '<S918>/If' */

  /* Gain: '<S808>/Gain6' */
  rtb_Abs_co = 16.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S808>/Data Type Conversion7' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S808>/Data Type Conversion7' */
  /* Gain: '<S808>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S808>/motohawk_calibration6'
   */
  rtb_Abs_co = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S808>/Data Type Conversion8' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_Sum_hh = (uint32_T)rtb_Abs_co;
    } else {
      rtb_Sum_hh = 0U;
    }
  } else {
    rtb_Sum_hh = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S808>/Data Type Conversion8' */
  /* Gain: '<S808>/Gain8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S808>/motohawk_calibration1'
   */
  rtb_Abs_co = 1000.0 * (InjectiorMinDuration_DataStore());

  /* DataTypeConversion: '<S808>/Data Type Conversion9' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_UnitDelay_lk = (uint32_T)rtb_Abs_co;
    } else {
      rtb_UnitDelay_lk = 0U;
    }
  } else {
    rtb_UnitDelay_lk = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S808>/Data Type Conversion9' */
  /* Outputs for Atomic SubSystem: '<S808>/Injector Enable Manager' */

  /* S-Function Block: <S924>/motohawk_delta_time */
  rtb_motohawk_delta_time_iq = 0.005;

  /* Switch: '<S924>/Switch' incorporates:
   *  Constant: '<S924>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S924>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S924>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S916>/motohawk_fault_action'
   *  Sum: '<S924>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_iq +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_DataTypeConversion1_e = 0.0;
  }

  /* End of Switch: '<S924>/Switch' */
  /* RelationalOperator: '<S916>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration1'
   */
  rtb_LogicalOperator_iy = (rtb_DataTypeConversion1_e >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S916>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_iy;
  }

  /* RelationalOperator: '<S916>/Relational Operator1' incorporates:
   *  Gain: '<S916>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cf = ((rtb_DataTypeConversion1_e > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S916>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_cf;
  }

  /* RelationalOperator: '<S916>/Relational Operator2' incorporates:
   *  Constant: '<S916>/Constant'
   */
  rtb_RelationalOperator2_cd = ((rtb_DataTypeConversion1_e > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S916>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_cd;
  }

  /* Logic: '<S916>/Logical Operator' */
  rtb_LogicalOperator_iy = !rtb_LogicalOperator_iy;

  /* Logic: '<S916>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S916>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S916>/motohawk_data_read1' */
  rtb_motohawk_data_read1_iz = ECUP_Enabled_DataStore();

  /* Logic: '<S916>/Logical Operator4' incorporates:
   *  Constant: '<S923>/Constant'
   *  RelationalOperator: '<S923>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S916>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_al = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S916>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration8'
   */
  rtb_LogicalOperator_df[0] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator_df[1] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator_df[2] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator_df[3] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator_df[4] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator_df[5] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator_df[6] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator_df[7] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b &&
    rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S924>/Saturation' */
  rtb_Saturation_k4 = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

  /* S-Function (motohawk_sfun_data_write): '<S924>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_k4;
  }

  /* End of Outputs for SubSystem: '<S808>/Injector Enable Manager' */
  /* Logic: '<S808>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S808>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !ESTOP_DataStore();

  /* If: '<S922>/If' incorporates:
   *  Inport: '<S935>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S922>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S922>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S922>/NewValue' incorporates:
     *  ActionPort: '<S935>/Action Port'
     */
    rtb_LogicalOperator6_b = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S922>/NewValue' */
  } else {
  }

  /* End of If: '<S922>/If' */

  /* Logic: '<S808>/Logical Operator' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_df[i] = (rtb_LogicalOperator6_b && rtb_AND1[i] &&
      rtb_LogicalOperator_df[i]);
  }

  /* End of Logic: '<S808>/Logical Operator' */
  /* If: '<S921>/If' incorporates:
   *  Inport: '<S933>/In1'
   *  Inport: '<S934>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S921>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S921>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S921>/NewValue' incorporates:
     *  ActionPort: '<S933>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s921_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S921>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S921>/OldValue' incorporates:
     *  ActionPort: '<S934>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s921_Merge[i] = rtb_LogicalOperator_df[i];
    }

    /* End of Outputs for SubSystem: '<S921>/OldValue' */
  }

  /* End of If: '<S921>/If' */

  /* S-Function Block: <S808>/Injector Sequence */
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
      enable = ((BaseEngineController_LS_B.s921_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s808_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s808_DataTypeConversion5);
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
              ((&BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_LS_ConstB.s808_DataTypeConversion5) !=
              (BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_LS_ConstB.s808_DataTypeConversion5);
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
            ((&BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s808_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s808_DataTypeConversion5);
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

    BaseEngineController_LS_DWork.s808_InjectorSequence_DWORK2 =
      BaseEngineController_LS_ConstB.s808_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_LS_B.s808_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_43[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_43[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S915>/==' incorporates:
   *  Constant: '<S915>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_df[i] =
      (BaseEngineController_LS_B.s808_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S915>/==' */
  /* S-Function Block: <S915>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S915>/<1' incorporates:
   *  Constant: '<S915>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S915>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_b = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S915>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator_df[i] && rtb_LogicalOperator6_b &&
                   BaseEngineController_LS_B.s921_Merge[i]);
  }

  /* End of Logic: '<S915>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_AND1[0]);
    UpdateFault(86);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_AND1[1]);
    UpdateFault(87);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_AND1[2]);
    UpdateFault(88);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_AND1[3]);
    UpdateFault(89);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_AND1[4]);
    UpdateFault(90);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_AND1[5]);
    UpdateFault(91);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_AND1[6]);
    UpdateFault(92);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S915>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(93, rtb_AND1[7]);
    UpdateFault(93);
  }

  /* Logic: '<S809>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S809>/motohawk_fault_action'
   */
  rtb_RelationalOperator5_fz = !GetFaultActionStatus(8);

  /* Product: '<S809>/Product' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s92_WASTEGATE * (real_T)
    rtb_RelationalOperator5_fz;

  /* If: '<S939>/If' incorporates:
   *  Inport: '<S940>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S939>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S939>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S939>/NewValue' incorporates:
     *  ActionPort: '<S940>/Action Port'
     */
    rtb_DataTypeConversion1_e = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S939>/NewValue' */
  } else {
  }

  /* End of If: '<S939>/If' */

  /* Product: '<S937>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S937>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (WASTEGATEGain_DataStore());

  /* Sum: '<S937>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S937>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S938>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S937>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_co :
    (WASTEGATEMinLimit_DataStore());

  /* MinMax: '<S938>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S937>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s938_MinMax1 = (rtb_Abs_co <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_co : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S937>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s938_MinMax1;

  /* DataTypeConversion: '<S937>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_e = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_e = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_e = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S937>/Data Type Conversion3' */
  /* Gain: '<S937>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S937>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S937>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_p = 0U;
    }
  } else {
    rtb_DataTypeConversion2_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S937>/Data Type Conversion2' */

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

  /* UnitDelay: '<S489>/Unit Delay' */
  rtb_UnitDelay_lk = BaseEngineController_LS_DWork.s489_UnitDelay_DSTATE;

  /* Sum: '<S489>/Sum' incorporates:
   *  Constant: '<S489>/Constant1'
   */
  rtb_Switch_kj = 1U + rtb_UnitDelay_lk;
  if (rtb_Switch_kj < 1U) {
    rtb_Switch_kj = MAX_uint32_T;
  }

  rtb_Sum_hh = rtb_Switch_kj;

  /* End of Sum: '<S489>/Sum' */

  /* RelationalOperator: '<S489>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_jv = (rtb_Sum_hh >= 5U);

  /* S-Function Block: <S487>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s450_CollectAverage.s412_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s450_CollectAverage.s412_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (IAT_KeyUp09Idx_DataStore());
  }

  /* S-Function Block: <S406>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_APP1;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_APP1,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (App05Idx_DataStore());
  }

  /* S-Function Block: <S443>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_B.s567_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s567_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (RPM05Idx_DataStore());
  }

  /* Sum: '<S454>/Sum3' incorporates:
   *  Constant: '<S454>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_B.s454_Sum3 = (BaseEngineController_LS_B.s602_Merge +
    100.0) - BaseEngineController_LS_B.s618_Merge;

  /* DataTypeConversion: '<S497>/Data Type Conversion8' */
  if (rtIsNaN(BaseEngineController_LS_B.s497_ReadCANMessage2_o5) || rtIsInf
      (BaseEngineController_LS_B.s497_ReadCANMessage2_o5)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s497_ReadCANMessage2_o5), 256.0);
  }

  BaseEngineController_LS_B.s497_GPS_SatelliteCount = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S497>/Data Type Conversion8' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S497>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9014p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9014p0001,
      &messageObj);
    if ((BaseEngineController_LS_B.s497_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s497_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s497_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_B.s497_GPS_Latitude = (real_T) tmp0;
      BaseEngineController_LS_B.s497_GPS_Longitude = (real_T) tmp1;
      BaseEngineController_LS_B.s497_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S497>/Data Type Conversion5' */
  if (rtIsNaN(BaseEngineController_LS_B.s497_ReadCANMessage_o8) || rtIsInf
      (BaseEngineController_LS_B.s497_ReadCANMessage_o8)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s497_ReadCANMessage_o8), 256.0);
  }

  BaseEngineController_LS_B.s497_GPS_SecondsUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S497>/Data Type Conversion5' */

  /* DataTypeConversion: '<S497>/Data Type Conversion4' */
  if (rtIsNaN(BaseEngineController_LS_B.s497_ReadCANMessage_o7) || rtIsInf
      (BaseEngineController_LS_B.s497_ReadCANMessage_o7)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s497_ReadCANMessage_o7), 256.0);
  }

  BaseEngineController_LS_B.s497_GPS_MinutesUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S497>/Data Type Conversion4' */

  /* DataTypeConversion: '<S497>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_B.s497_ReadCANMessage_o6) || rtIsInf
      (BaseEngineController_LS_B.s497_ReadCANMessage_o6)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s497_ReadCANMessage_o6), 256.0);
  }

  BaseEngineController_LS_B.s497_GPS_HoursUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S497>/Data Type Conversion3' */

  /* DataTypeConversion: '<S497>/Data Type Conversion2' */
  if (rtIsNaN(BaseEngineController_LS_B.s497_ReadCANMessage_o5) || rtIsInf
      (BaseEngineController_LS_B.s497_ReadCANMessage_o5)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s497_ReadCANMessage_o5), 256.0);
  }

  BaseEngineController_LS_B.s497_GPS_DayUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S497>/Data Type Conversion2' */

  /* DataTypeConversion: '<S497>/Data Type Conversion1' */
  if (rtIsNaN(BaseEngineController_LS_B.s497_ReadCANMessage_o4) || rtIsInf
      (BaseEngineController_LS_B.s497_ReadCANMessage_o4)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s497_ReadCANMessage_o4), 256.0);
  }

  BaseEngineController_LS_B.s497_GPS_MonthUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S497>/Data Type Conversion1' */

  /* DataTypeConversion: '<S497>/Data Type Conversion' */
  if (rtIsNaN(BaseEngineController_LS_B.s497_ReadCANMessage_o3) || rtIsInf
      (BaseEngineController_LS_B.s497_ReadCANMessage_o3)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s497_ReadCANMessage_o3), 256.0);
  }

  BaseEngineController_LS_B.s497_GPS_YearUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S497>/Data Type Conversion' */

  /* DataTypeConversion: '<S498>/Data Type Conversion5' */
  BaseEngineController_LS_B.s498_SensorFaultState =
    ((BaseEngineController_LS_B.s498_ReadCANMessage1_o10 != 0.0));

  /* DataTypeConversion: '<S498>/Data Type Conversion9' */
  if (rtIsNaN(BaseEngineController_LS_B.s498_ReadCANMessage1_o9) || rtIsInf
      (BaseEngineController_LS_B.s498_ReadCANMessage1_o9)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s498_ReadCANMessage1_o9), 256.0);
  }

  BaseEngineController_LS_B.s498_SensorStatus = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S498>/Data Type Conversion9' */

  /* DataTypeConversion: '<S498>/Data Type Conversion7' */
  BaseEngineController_LS_B.s498_UsingFreeAreCalState =
    ((BaseEngineController_LS_B.s498_ReadCANMessage1_o7 != 0.0));

  /* DataTypeConversion: '<S498>/Data Type Conversion8' */
  BaseEngineController_LS_B.s498_SensorDetectedStatus =
    ((BaseEngineController_LS_B.s498_ReadCANMessage1_o6 != 0.0));

  /* DataTypeConversion: '<S498>/Data Type Conversion4' */
  BaseEngineController_LS_B.s498_SensorFaultState_m =
    ((BaseEngineController_LS_B.s498_ReadCANMessage_o10 != 0.0));

  /* DataTypeConversion: '<S498>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_B.s498_ReadCANMessage_o9) || rtIsInf
      (BaseEngineController_LS_B.s498_ReadCANMessage_o9)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_B.s498_ReadCANMessage_o9), 256.0);
  }

  BaseEngineController_LS_B.s498_SensorStatus_e = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S498>/Data Type Conversion3' */

  /* DataTypeConversion: '<S498>/Data Type Conversion1' */
  BaseEngineController_LS_B.s498_UsingFreeAreCalState_o =
    ((BaseEngineController_LS_B.s498_ReadCANMessage_o7 != 0.0));

  /* DataTypeConversion: '<S498>/Data Type Conversion' */
  BaseEngineController_LS_B.s498_SensorDetectedStatus_m =
    ((BaseEngineController_LS_B.s498_ReadCANMessage_o6 != 0.0));

  /* S-Function Block: <S632>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s632_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_co = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S632>/Product' incorporates:
   *  MinMax: '<S632>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration'
   */
  rtb_Abs_co /= (rtb_Abs_co >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_co :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S575>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S575>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S575>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(138) || IsFaultActive(139));

  /* Logic: '<S575>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S575>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S575>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S575>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(138) || IsFaultSuspected(139));

  /* S-Function Block: <S494>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s494_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S575>/Data Type Conversion' */
  rtb_Abs_k = (real_T)BaseEngineController_LS_B.s494_motohawk_ain3;

  /* Product: '<S575>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S575>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_Abs_k * (SensVoltGain_DataStore());

  /* Sum: '<S575>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S575>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s575_Sum1 = rtb_DataTypeConversion1_e +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S575>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_LS_DWork.s575_UnitDelay1_DSTATE;

  /* If: '<S575>/If' incorporates:
   *  Logic: '<S575>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S575>/If Action Subsystem' incorporates:
     *  ActionPort: '<S633>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_c, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S575>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S575>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S634>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S575>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S575>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S635>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s575_Sum1, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S575>/If Action Subsystem2' */
  }

  /* End of If: '<S575>/If' */

  /* Sum: '<S637>/Sum1' incorporates:
   *  Constant: '<S637>/Constant'
   *  Product: '<S637>/Product'
   *  Product: '<S637>/Product1'
   *  Sum: '<S637>/Sum'
   *  UnitDelay: '<S637>/Unit Delay'
   */
  rtb_Sum1_m3 = (1.0 - rtb_Abs_co) *
    BaseEngineController_LS_DWork.s637_UnitDelay_DSTATE + rtb_Merge_ht *
    rtb_Abs_co;

  /* If: '<S636>/If' incorporates:
   *  Inport: '<S638>/In1'
   *  Inport: '<S639>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S636>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S636>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S636>/NewValue' incorporates:
     *  ActionPort: '<S638>/Action Port'
     */
    BaseEngineController_LS_B.s636_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S636>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S636>/OldValue' incorporates:
     *  ActionPort: '<S639>/Action Port'
     */
    BaseEngineController_LS_B.s636_Merge = rtb_Sum1_m3;

    /* End of Outputs for SubSystem: '<S636>/OldValue' */
  }

  /* End of If: '<S636>/If' */

  /* Outputs for Enabled SubSystem: '<S489>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S490>/Enable'
   */
  if (rtb_RelationalOperator_jv) {
    if (!BaseEngineController_LS_DWork.s489_TriggeredSubsystem_MODE) {
      BaseEngineController_LS_DWork.s489_TriggeredSubsystem_MODE = TRUE;
    }

    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* RelationalOperator: '<S311>/RelOp' incorporates:
     *  Constant: '<S311>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S297>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s581_Merge >= (real_T)
                               ((uint16_T)(ACHighPressureDisable_DataStore())));

    /* Logic: '<S297>/Logical Operator4' incorporates:
     *  Logic: '<S297>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S297>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S297>/motohawk_fault_status4'
     */
    rtb_RelOp_d = !(IsFaultActive(2) || IsFaultActive(3));

    /* Logic: '<S297>/Logical Operator' */
    rtb_LogicalOperator_ct = ((rtb_LogicalOperator6_b && rtb_LogicalOperator1_er
      && rtb_RelOp_d));

    /* S-Function (motohawk_sfun_fault_def): '<S297>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_LogicalOperator_ct);
      UpdateFault(0);
    }

    /* Logic: '<S297>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_o = ((rtb_LogicalOperator6_b &&
      (BaseEngineController_LS_B.s581_Merge <= (real_T)((uint16_T)
      (ACLowPressureDisable_DataStore()))) && rtb_RelOp_d &&
      BaseEngineController_LS_B.s92_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S297>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator1_o);
      UpdateFault(1);
    }

    /* Logic: '<S298>/Logical Operator1' incorporates:
     *  Logic: '<S298>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status7'
     */
    rtb_Switch1_pb = !(IsFaultActive(120) || IsFaultActive(121) || IsFaultActive
                       (118) || IsFaultActive(119));

    /* Logic: '<S298>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S298>/Logical Operator6' incorporates:
     *  Logic: '<S298>/Logical Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S298>/motohawk_calibration3'
     */
    rtb_LogicalOperator6_b = !(rtb_LogicalOperator6_b &&
      (AirflowDiag_MAPIRDiagEnable_DataStore()));

    /* Logic: '<S298>/Logical Operator9' incorporates:
     *  Logic: '<S298>/Logical Operator2'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S298>/motohawk_fault_status9'
     */
    rtb_LogicalOperator1_al = !(IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* Abs: '<S298>/Abs' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
     *  Sum: '<S298>/Sum'
     */
    rtb_DataTypeConversion1_e = fabs(BaseEngineController_LS_B.s537_Merge -
      VEModelMAF_DataStore());

    /* S-Function Block: <S298>/motohawk_interpolation_2d */
    {
      extern int8_T TableInterpolation2D_int8_T(uint16_T row_in, uint16_T col_in,
        int8_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_m0 = TableInterpolation2D_int8_T
        (BaseEngineController_LS_B.s443_motohawk_prelookup1,
         BaseEngineController_LS_B.s441_motohawk_prelookup1, (int8_T *)
         ((AirflowMimatchThreshMap_DataStore())), 9, 9);
      (AirflowMimatchThresh_DataStore()) = rtb_motohawk_interpolation_2d_m0;
    }

    /* RelationalOperator: '<S298>/Relational Operator' */
    rtb_RelOp_d = (rtb_DataTypeConversion1_e >= (real_T)
                   rtb_motohawk_interpolation_2d_m0);

    /* Logic: '<S298>/Logical Operator4' incorporates:
     *  Constant: '<S312>/Constant'
     *  Logic: '<S298>/Logical Operator8'
     *  RelationalOperator: '<S312>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_mg = ((rtb_Switch1_pb && rtb_LogicalOperator6_b &&
      rtb_LogicalOperator1_al && rtb_RelOp_d && (((uint8_T)EngineState_DataStore
                                  ()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S298>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AirflowMismatch_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_LogicalOperator4_mg);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S313>/RelOp' incorporates:
     *  Constant: '<S313>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
     */
    rtb_RelOp_d = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S299>/kPa to PSI' */
    rtb_DataTypeConversion1_e = 0.145038 * BaseEngineController_LS_B.s610_Merge;

    /* RelationalOperator: '<S299>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S299>/motohawk_calibration'
     */
    rtb_Switch1_pb = (rtb_DataTypeConversion1_e >= (SoftOverBoostLimit_DataStore
                       ()));

    /* Logic: '<S299>/Logical Operator3' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status4'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(120) || IsFaultActive(121));

    /* Logic: '<S299>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status5'
     */
    rtb_LogicalOperator1_al = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S299>/Logical Operator8' incorporates:
     *  Logic: '<S299>/Logical Operator4'
     *  Logic: '<S299>/Logical Operator6'
     *  Logic: '<S299>/Logical Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S299>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_er = ((!rtb_LogicalOperator6_b) &&
      (!(rtb_LogicalOperator1_al && (BoostDiag_MAPIRDiagEnable_DataStore()))));

    /* Logic: '<S299>/Logical Operator' */
    rtb_LogicalOperator_bx = ((rtb_RelOp_d && rtb_Switch1_pb &&
      rtb_LogicalOperator1_er));

    /* S-Function (motohawk_sfun_fault_def): '<S299>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(140, rtb_LogicalOperator_bx);
      UpdateFault(140);
    }

    /* Logic: '<S299>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S299>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S299>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_joj = ((rtb_RelOp_d && (rtb_DataTypeConversion1_e >=
      (HardOverBoostLimit_DataStore())) && rtb_LogicalOperator1_er));

    /* S-Function (motohawk_sfun_fault_def): '<S299>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(82, rtb_LogicalOperator1_joj);
      UpdateFault(82);
    }

    /* Logic: '<S299>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S299>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S299>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_bv = ((rtb_RelOp_d &&
      (BaseEngineController_LS_B.s92_WASTEGATE >=
       (WastegateLossOfControl_DataStore())) && rtb_LogicalOperator1_er));

    /* S-Function (motohawk_sfun_fault_def): '<S299>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(161, rtb_LogicalOperator2_bv);
      UpdateFault(161);
    }

    /* S-Function Block: <S314>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s314_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S314>/Switch' incorporates:
     *  Constant: '<S314>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S314>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S314>/motohawk_delta_time'
     *  Sum: '<S314>/Sum'
     */
    if (BaseEngineController_LS_B.s543_Merge) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_k +
        ScrambleTime_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S314>/Switch' */
    /* Logic: '<S300>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S300>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S300>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_pp = (((rtb_DataTypeConversion1_e >=
      (DigDiag_ScrambleStuckTime_DataStore())) &&
      BaseEngineController_LS_B.s543_Merge));

    /* S-Function (motohawk_sfun_fault_def): '<S300>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ScrambleStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(137, rtb_LogicalOperator1_pp);
      UpdateFault(137);
    }

    /* S-Function Block: <S315>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s315_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fn = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S315>/Switch' incorporates:
     *  Constant: '<S315>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S315>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S315>/motohawk_delta_time'
     *  Sum: '<S315>/Sum'
     */
    if (BaseEngineController_LS_B.s527_Merge) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_fn +
        ClutchTime_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S315>/Switch' */
    /* Logic: '<S300>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S300>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S300>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_di3 = (((rtb_DataTypeConversion_b2 >=
      (DigDiag_ClutchStuckTime_DataStore())) &&
      BaseEngineController_LS_B.s527_Merge));

    /* S-Function (motohawk_sfun_fault_def): '<S300>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: ClutchStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(31, rtb_LogicalOperator2_di3);
      UpdateFault(31);
    }

    /* Saturate: '<S314>/Saturation' */
    rtb_Saturation_j = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S314>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ScrambleTime */
    {
      ScrambleTime_DataStore() = rtb_Saturation_j;
    }

    /* Saturate: '<S315>/Saturation' */
    rtb_Saturation_cp = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S315>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ClutchTime */
    {
      ClutchTime_DataStore() = rtb_Saturation_cp;
    }

    /* Product: '<S303>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status2'
     */
    rtb_Product_nv = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(25) : 0);

    /* Product: '<S303>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status3'
     */
    rtb_Product1_mc = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(26) : 0);

    /* Logic: '<S303>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = ((rtb_Product_nv != 0) || (rtb_Product1_mc != 0) ||
      IsFaultActive(23) || IsFaultActive(24) ||
      BaseEngineController_LS_B.s530_Merge);

    /* RelationalOperator: '<S303>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s498_MultiportSwitch <
                               (LeanProtect_Threshold_DataStore()));

    /* Logic: '<S303>/Logical Operator4' incorporates:
     *  Constant: '<S321>/Constant'
     *  Logic: '<S303>/Logical Operator3'
     *  RelationalOperator: '<S321>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_l = (((!rtb_LogicalOperator6_b) &&
      rtb_LogicalOperator1_al && (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S303>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: LeanProtect_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(117, rtb_LogicalOperator4_l);
      UpdateFault(117);
    }

    /* Logic: '<S305>/Logical Operator1' incorporates:
     *  Logic: '<S305>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status4'
     */
    rtb_RelOp_d = !(IsFaultActive(142) || IsFaultActive(143));

    /* RelationalOperator: '<S305>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S305>/motohawk_calibration'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s644_Merge <=
      (LVDiag_AltInop_DataStore()));

    /* Logic: '<S305>/Logical Operator4' incorporates:
     *  Constant: '<S323>/Constant'
     *  RelationalOperator: '<S323>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S305>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_le = ((rtb_RelOp_d && rtb_LogicalOperator6_b &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AltInop_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_LogicalOperator4_le);
      UpdateFault(22);
    }

    /* RelationalOperator: '<S305>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S305>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s644_Merge >=
      (LVDiag_VoltTooHigh_DataStore()));

    /* Logic: '<S305>/Logical Operator2' incorporates:
     *  Constant: '<S324>/Constant'
     *  RelationalOperator: '<S324>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S305>/motohawk_data_read2'
     */
    rtb_LogicalOperator2_e = ((rtb_RelOp_d && rtb_LogicalOperator6_b &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: VoltTooHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(160, rtb_LogicalOperator2_e);
      UpdateFault(160);
    }

    /* RelationalOperator: '<S305>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S305>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s644_Merge <=
      (LVDiag_VoltLow_DataStore()));

    /* Logic: '<S305>/Logical Operator5' incorporates:
     *  Constant: '<S325>/Constant'
     *  Constant: '<S326>/Constant'
     *  Logic: '<S305>/Logical Operator'
     *  RelationalOperator: '<S325>/RelOp'
     *  RelationalOperator: '<S326>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S305>/motohawk_data_read3'
     */
    rtb_LogicalOperator5_kw = ((rtb_RelOp_d && rtb_LogicalOperator6_b &&
      ((((uint8_T)EngineState_DataStore()) == 3) || (((uint8_T)
      EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(159, rtb_LogicalOperator5_kw);
      UpdateFault(159);
    }

    /* Logic: '<S306>/Logical Operator3' incorporates:
     *  Logic: '<S306>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status5'
     */
    rtb_RelOp_d = !(IsFaultActive(148) || IsFaultActive(154) || IsFaultActive
                    (149) || IsFaultActive(155) || IsFaultActive(120) ||
                    IsFaultActive(121));

    /* RelationalOperator: '<S327>/RelOp' incorporates:
     *  Constant: '<S327>/Constant'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s474_State == 3);

    /* RelationalOperator: '<S306>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s458_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Logic: '<S306>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S306>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration4'
     */
    rtb_LogicalOperator4_kk = ((rtb_RelOp_d && rtb_LogicalOperator1_er &&
      rtb_LogicalOperator6_b && (BaseEngineController_LS_B.s610_Merge >
      (MAP_IR_HI_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(124, rtb_LogicalOperator4_kk);
      UpdateFault(124);
    }

    /* RelationalOperator: '<S306>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s458_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Logic: '<S306>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S306>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration5'
     */
    rtb_LogicalOperator2_ip = ((rtb_RelOp_d && rtb_LogicalOperator1_er &&
      rtb_LogicalOperator6_b && (BaseEngineController_LS_B.s610_Merge <
      (MAP_IR_LO_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(125, rtb_LogicalOperator2_ip);
      UpdateFault(125);
    }

    /* RelationalOperator: '<S306>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s458_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S306>/Add' */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s411_Sum -
      BaseEngineController_LS_B.s610_Merge;

    /* Logic: '<S306>/Logical Operator5' incorporates:
     *  RelationalOperator: '<S306>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration7'
     */
    rtb_LogicalOperator5_oa = ((rtb_RelOp_d && rtb_LogicalOperator1_er &&
      rtb_LogicalOperator6_b && (rtb_DataTypeConversion1_e <
      (MAP_STUCK_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(126, rtb_LogicalOperator5_oa);
      UpdateFault(126);
    }

    /* Logic: '<S307>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status3'
     */
    rtb_RelationalOperator2_py = (IsFaultActive(43) || IsFaultActive(44) ||
      IsFaultActive(120) || IsFaultActive(121));

    /* Logic: '<S307>/Logical Operator4' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status7'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status9'
     */
    rtb_RelationalOperator3_bp = (IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* Logic: '<S307>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S307>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S307>/Logical Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration8'
     */
    rtb_LogicalOperator1_al = (rtb_LogicalOperator6_b &&
      (MisfireDiag_MAPIRDiagEnable_DataStore()));

    /* RelationalOperator: '<S329>/RelOp' incorporates:
     *  Constant: '<S329>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S307>/motohawk_data_read1'
     */
    rtb_Switch1_pb = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S307>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration'
     */
    rtb_RelOp_d = (BaseEngineController_LS_B.s677_Merge >= (real_T)((int16_T)
      (MisfireDiag_ECTLowEnbl_DataStore())));

    /* RelationalOperator: '<S307>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s677_Merge <= (real_T)
                               ((int16_T)(MisfireDiag_ECTHighEnbl_DataStore())));

    /* RelationalOperator: '<S307>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s610_Merge >= (real_T)
      ((int16_T)(MisfireDiag_MAPLowEnbl_DataStore())));

    /* RelationalOperator: '<S307>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration3'
     */
    rtb_BelowLoTarget_p = (BaseEngineController_LS_B.s610_Merge <= (real_T)
      ((int16_T)(MisfireDiag_MAPHighEnbl_DataStore())));

    /* RelationalOperator: '<S307>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration4'
     */
    rtb_Overspeed2 = (BaseEngineController_LS_B.s567_Sum1 >= (real_T)((int16_T)
      (MisfireDiag_RPMLowEnbl_DataStore())));

    /* RelationalOperator: '<S307>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration5'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s567_Sum1 <= (real_T)((int16_T)
      (MisfireDiag_RPMHighEnbl_DataStore())));

    /* RelationalOperator: '<S307>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration6'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s483_Switch >= (real_T)
                               ((int16_T)(MisfireDiag_TimeSinceRunEnbl_DataStore
                                 ())));

    /* Outputs for Enabled SubSystem: '<S307>/MisfireDiagSub' incorporates:
     *  EnablePort: '<S328>/Enable'
     */
    /* Logic: '<S307>/Logical Operator9' incorporates:
     *  Logic: '<S307>/Logical Operator'
     *  Logic: '<S307>/Logical Operator2'
     *  Logic: '<S307>/Logical Operator3'
     *  Logic: '<S307>/Logical Operator6'
     *  Logic: '<S307>/Logical Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration7'
     */
    if ((!rtb_RelationalOperator2_py) && (!rtb_RelationalOperator3_bp) &&
        (!rtb_LogicalOperator1_al) && (rtb_Switch1_pb && rtb_RelOp_d &&
         rtb_LogicalOperator1_er && rtb_LogicalOperator6_b &&
         rtb_BelowLoTarget_p && rtb_Overspeed2 && rtb_RelOp_mp &&
         rtb_LogicalOperator3_cj && (MisfireDiag_Enbl_DataStore()))) {
      if (!BaseEngineController_LS_DWork.s307_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S328>/motohawk_trigger' (motohawk_sfun_trigger) */

        /* Enable for Trigger_FGND_HIRES_6521p0004 */
        BaseEngineController_LS_DWork.s328_motohawk_trigger_DWORK1 = 1;
        BaseEngineController_LS_DWork.s307_MisfireDiagSub_MODE = TRUE;
      }

      /* S-Function (motohawk_sfun_trigger): '<S328>/motohawk_trigger' */
      /* Enable for Trigger_FGND_HIRES_6521p0004 */
      if (BaseEngineController_LS_DWork.s328_motohawk_trigger_DWORK1 == 0) {
        BaseEngineController_LS_DWork.s328_motohawk_trigger_DWORK1 = 1;
      }
    } else {
      if (BaseEngineController_LS_DWork.s307_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S328>/motohawk_trigger' (motohawk_sfun_trigger) */
        /* Disable for Trigger_FGND_HIRES_6521p0004 */

        /* Disable for function-call system: '<S328>/MisfireDiagFunc' */
        BaseEngineController_LS_DWork.s347_If_ActiveSubsystem = -1;
        BaseEngineController_LS_DWork.s328_motohawk_trigger_DWORK1 = 0;
        BaseEngineController_LS_DWork.s307_MisfireDiagSub_MODE = FALSE;
      }
    }

    /* End of Logic: '<S307>/Logical Operator9' */
    /* End of Outputs for SubSystem: '<S307>/MisfireDiagSub' */

    /* Logic: '<S362>/Logical Operator34' incorporates:
     *  Logic: '<S362>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S362>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S362>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S362>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S362>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S362>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(43) || IsFaultActive(44) ||
      IsFaultActive(114) || IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S365>/RelOp' incorporates:
     *  Constant: '<S365>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S362>/motohawk_data_read1'
     */
    rtb_LogicalOperator1_al = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S362>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S362>/motohawk_calibration'
     */
    rtb_Switch1_pb = (BaseEngineController_LS_B.s483_Switch >=
                      (O2Diag_Bank2Bank_MinRunTime_DataStore()));

    /* RelationalOperator: '<S362>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S362>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s677_Merge >= (real_T)
                               ((int16_T)(O2Diag_Bank2Bank_MinECT_DataStore())));

    /* Logic: '<S362>/Logical Operator1' */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s498_DataValidState &&
      BaseEngineController_LS_B.s498_DataValidState_f);

    /* RelationalOperator: '<S362>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S362>/motohawk_calibration2'
     */
    rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s151_Product1 >=
      (O2Diag_Bank2Bank_MinDesEquivRatio_DataStore()));

    /* RelationalOperator: '<S362>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S362>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s151_Product1 <=
      (O2Diag_Bank2Bank_MaxDesEquivRatio_DataStore()));

    /* Abs: '<S362>/Abs' incorporates:
     *  Sum: '<S362>/Sum'
     */
    rtb_DataTypeConversion_b2 = fabs
      (BaseEngineController_LS_B.s498_MultiportSwitch -
       BaseEngineController_LS_B.s513_Merge);

    /* S-Function Block: <S362>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_m = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s443_motohawk_prelookup1,
         BaseEngineController_LS_B.s441_motohawk_prelookup1, (real_T *)
         ((O2Diag_Bank2Bank_DiffAlwdMap_DataStore())), 9, 9);
      (O2Diag_Bank2Bank_DiffAlwd_DataStore()) = rtb_motohawk_interpolation_2d_m;
    }

    /* Logic: '<S362>/Logical Operator' incorporates:
     *  Logic: '<S362>/Logical Operator10'
     *  RelationalOperator: '<S362>/Relational Operator4'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S362>/motohawk_interpolation_2d'
     */
    rtb_LogicalOperator_dn = (((!rtb_LogicalOperator6_b) &&
      rtb_LogicalOperator1_al && rtb_Switch1_pb && rtb_LogicalOperator3_cj &&
      rtb_RelationalOperator2_py && rtb_RelationalOperator3_bp &&
      rtb_LogicalOperator1_er && (rtb_DataTypeConversion_b2 >=
      rtb_motohawk_interpolation_2d_m)));

    /* S-Function (motohawk_sfun_fault_def): '<S362>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda_Bank2Bank_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(116, rtb_LogicalOperator_dn);
      UpdateFault(116);
    }

    /* Logic: '<S363>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = !IsFaultActive(114);

    /* S-Function Block: <S382>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s382_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ff = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S366>/RelOp' incorporates:
     *  Constant: '<S366>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s498_SensorStatus_e ==
      0);

    /* Switch: '<S382>/Switch' incorporates:
     *  Constant: '<S382>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S382>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S382>/motohawk_delta_time'
     *  Sum: '<S382>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_ff +
        Lam1ResetTime_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S382>/Switch' */
    /* Logic: '<S363>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S363>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S363>/motohawk_calibration'
     */
    rtb_LogicalOperator4_bm = ((rtb_LogicalOperator6_b &&
      (rtb_DataTypeConversion_b2 >= (O2Diag_Lam1_StuckInResetThresh_DataStore()))
      && rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(100, rtb_LogicalOperator4_bm);
      UpdateFault(100);
    }

    /* Logic: '<S363>/Logical Operator36' incorporates:
     *  Logic: '<S363>/Logical Operator35'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read1'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status10'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S385>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s385_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ks = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S367>/RelOp' incorporates:
     *  Constant: '<S367>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s498_SensorStatus == 1);

    /* Switch: '<S385>/Switch' incorporates:
     *  Constant: '<S385>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S385>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S385>/motohawk_delta_time'
     *  Sum: '<S385>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_ks +
        Lam2WarmupTime_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S385>/Switch' */
    /* Logic: '<S363>/Logical Operator26' incorporates:
     *  Logic: '<S363>/Logical Operator25'
     *  RelationalOperator: '<S363>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S363>/motohawk_calibration3'
     */
    rtb_LogicalOperator26 = (((!rtb_LogicalOperator6_b) &&
      (rtb_DataTypeConversion1_e >= (O2Diag_Lam2_StuckInWarmup_DataStore())) &&
      rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Lambda2StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(111, rtb_LogicalOperator26);
      UpdateFault(111);
    }

    /* Logic: '<S363>/Logical Operator29' incorporates:
     *  Constant: '<S368>/Constant'
     *  Logic: '<S363>/Logical Operator28'
     *  Logic: '<S363>/Logical Operator37'
     *  Logic: '<S363>/Logical Operator38'
     *  RelationalOperator: '<S368>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read2'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status11'
     */
    rtb_LogicalOperator29 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s498_SensorStatus == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Lambda2Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(109, rtb_LogicalOperator29);
      UpdateFault(109);
    }

    /* Logic: '<S363>/Logical Operator31' incorporates:
     *  Logic: '<S363>/Logical Operator30'
     *  Logic: '<S363>/Logical Operator47'
     *  Logic: '<S363>/Logical Operator48'
     *  RelationalOperator: '<S369>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read7'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status16'
     */
    rtb_LogicalOperator31 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && BaseEngineController_LS_B.s498_SensorFaultState));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Lambda2Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(105, rtb_LogicalOperator31);
      UpdateFault(105);
    }

    /* Logic: '<S363>/Logical Operator18' incorporates:
     *  Constant: '<S370>/Constant'
     *  Logic: '<S363>/Logical Operator32'
     *  Logic: '<S363>/Logical Operator39'
     *  Logic: '<S363>/Logical Operator40'
     *  RelationalOperator: '<S370>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read3'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status12'
     */
    rtb_LogicalOperator18 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s498_SensorStatus == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def13' */

    /* Set Fault Suspected Status: Lambda2Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(108, rtb_LogicalOperator18);
      UpdateFault(108);
    }

    /* Logic: '<S363>/Logical Operator20' incorporates:
     *  Constant: '<S371>/Constant'
     *  Logic: '<S363>/Logical Operator19'
     *  Logic: '<S363>/Logical Operator41'
     *  Logic: '<S363>/Logical Operator42'
     *  RelationalOperator: '<S371>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read4'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status13'
     */
    rtb_LogicalOperator20 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s498_SensorStatus == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def14' */

    /* Set Fault Suspected Status: Lambda2HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(107, rtb_LogicalOperator20);
      UpdateFault(107);
    }

    /* Logic: '<S363>/Logical Operator22' incorporates:
     *  Constant: '<S372>/Constant'
     *  Logic: '<S363>/Logical Operator21'
     *  Logic: '<S363>/Logical Operator43'
     *  Logic: '<S363>/Logical Operator44'
     *  RelationalOperator: '<S372>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status14'
     */
    rtb_LogicalOperator22 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s498_SensorStatus == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def15' */

    /* Set Fault Suspected Status: Lambda2HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(106, rtb_LogicalOperator22);
      UpdateFault(106);
    }

    /* Logic: '<S363>/Logical Operator24' incorporates:
     *  Constant: '<S373>/Constant'
     *  Logic: '<S363>/Logical Operator23'
     *  Logic: '<S363>/Logical Operator45'
     *  Logic: '<S363>/Logical Operator46'
     *  RelationalOperator: '<S373>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read6'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status15'
     */
    rtb_LogicalOperator24 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s498_SensorStatus == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def16' */

    /* Set Fault Suspected Status: Lambda2Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(104, rtb_LogicalOperator24);
      UpdateFault(104);
    }

    /* Logic: '<S363>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status2'
     */
    rtb_LogicalOperator6_b = !IsFaultActive(114);

    /* S-Function Block: <S383>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s383_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bi2 = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S374>/RelOp' incorporates:
     *  Constant: '<S374>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s498_SensorStatus_e ==
      1);

    /* Switch: '<S383>/Switch' incorporates:
     *  Constant: '<S383>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S383>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S383>/motohawk_delta_time'
     *  Sum: '<S383>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_Product1_gw = rtb_motohawk_delta_time_bi2 + Lam1WarmupTime_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S383>/Switch' */
    /* Logic: '<S363>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S363>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S363>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_cx = ((rtb_LogicalOperator6_b && (rtb_Product1_gw >=
      (O2Diag_Lam1_StuckInWarmup_DataStore())) && rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(101, rtb_LogicalOperator3_cx);
      UpdateFault(101);
    }

    /* Logic: '<S363>/Logical Operator6' incorporates:
     *  Constant: '<S375>/Constant'
     *  Logic: '<S363>/Logical Operator5'
     *  RelationalOperator: '<S375>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status3'
     */
    rtb_LogicalOperator6_dq = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_B.s498_SensorStatus_e == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda1Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(99, rtb_LogicalOperator6_dq);
      UpdateFault(99);
    }

    /* Logic: '<S363>/Logical Operator8' incorporates:
     *  Logic: '<S363>/Logical Operator7'
     *  RelationalOperator: '<S376>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status4'
     */
    rtb_LogicalOperator8_d = (((!IsFaultActive(114)) &&
      BaseEngineController_LS_B.s498_SensorFaultState_m));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda1Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(95, rtb_LogicalOperator8_d);
      UpdateFault(95);
    }

    /* Logic: '<S363>/Logical Operator10' incorporates:
     *  Constant: '<S377>/Constant'
     *  Logic: '<S363>/Logical Operator9'
     *  RelationalOperator: '<S377>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status5'
     */
    rtb_LogicalOperator10_k = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_B.s498_SensorStatus_e == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Lambda1Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(98, rtb_LogicalOperator10_k);
      UpdateFault(98);
    }

    /* Logic: '<S363>/Logical Operator12' incorporates:
     *  Constant: '<S378>/Constant'
     *  Logic: '<S363>/Logical Operator11'
     *  RelationalOperator: '<S378>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status6'
     */
    rtb_LogicalOperator12 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_B.s498_SensorStatus_e == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda1HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(97, rtb_LogicalOperator12);
      UpdateFault(97);
    }

    /* Logic: '<S363>/Logical Operator14' incorporates:
     *  Constant: '<S379>/Constant'
     *  Logic: '<S363>/Logical Operator13'
     *  RelationalOperator: '<S379>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status7'
     */
    rtb_LogicalOperator14 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_B.s498_SensorStatus_e == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Lambda1HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(96, rtb_LogicalOperator14);
      UpdateFault(96);
    }

    /* Logic: '<S363>/Logical Operator16' incorporates:
     *  Constant: '<S380>/Constant'
     *  Logic: '<S363>/Logical Operator15'
     *  RelationalOperator: '<S380>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status8'
     */
    rtb_LogicalOperator16 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_B.s498_SensorStatus_e == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Lambda1Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(94, rtb_LogicalOperator16);
      UpdateFault(94);
    }

    /* Logic: '<S363>/Logical Operator34' incorporates:
     *  Logic: '<S363>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S363>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S384>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s384_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ou = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S381>/RelOp' incorporates:
     *  Constant: '<S381>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s498_SensorStatus == 0);

    /* Switch: '<S384>/Switch' incorporates:
     *  Constant: '<S384>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S384>/motohawk_delta_time'
     *  Sum: '<S384>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_ou +
        Lam2ResetTime_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S384>/Switch' */
    /* Logic: '<S363>/Logical Operator27' incorporates:
     *  Logic: '<S363>/Logical Operator17'
     *  RelationalOperator: '<S363>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S363>/motohawk_calibration2'
     */
    rtb_LogicalOperator27 = (((!rtb_LogicalOperator6_b) &&
      (rtb_motohawk_interpolation_1d3_a >=
       (O2Diag_Lam21_StuckInResetThresh_DataStore())) && rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S363>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Lambda2StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(110, rtb_LogicalOperator27);
      UpdateFault(110);
    }

    /* Saturate: '<S382>/Saturation' */
    rtb_Saturation_d = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S382>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1ResetTime */
    {
      Lam1ResetTime_DataStore() = rtb_Saturation_d;
    }

    /* Saturate: '<S383>/Saturation' */
    rtb_Saturation_p = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S383>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1WarmupTime */
    {
      Lam1WarmupTime_DataStore() = rtb_Saturation_p;
    }

    /* Saturate: '<S384>/Saturation' */
    rtb_Saturation_bz = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S384>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2ResetTime */
    {
      Lam2ResetTime_DataStore() = rtb_Saturation_bz;
    }

    /* Saturate: '<S385>/Saturation' */
    rtb_Saturation_ks = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S385>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2WarmupTime */
    {
      Lam2WarmupTime_DataStore() = rtb_Saturation_ks;
    }

    /* Logic: '<S364>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = !IsFaultActive(114);

    /* RelationalOperator: '<S364>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S364>/motohawk_calibration'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s498_SystemVolts <=
      (Lambda1_VoltLowThresh_DataStore()));

    /* Logic: '<S364>/Logical Operator4' incorporates:
     *  Constant: '<S386>/Constant'
     *  Constant: '<S387>/Constant'
     *  Logic: '<S364>/Logical Operator'
     *  RelationalOperator: '<S386>/RelOp'
     *  RelationalOperator: '<S387>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_lf = ((rtb_LogicalOperator6_b &&
      rtb_LogicalOperator1_al && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S364>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(103, rtb_LogicalOperator4_lf);
      UpdateFault(103);
    }

    /* Logic: '<S364>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status4'
     */
    rtb_LogicalOperator6_b = !IsFaultActive(114);

    /* RelationalOperator: '<S364>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S364>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s498_SystemVolts >=
      (Lambda1_VoltHighThresh_DataStore()));

    /* Logic: '<S364>/Logical Operator7' incorporates:
     *  Constant: '<S388>/Constant'
     *  Constant: '<S389>/Constant'
     *  Logic: '<S364>/Logical Operator3'
     *  RelationalOperator: '<S388>/RelOp'
     *  RelationalOperator: '<S389>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read2'
     */
    rtb_LogicalOperator7_j = ((rtb_LogicalOperator6_b && rtb_LogicalOperator1_al
      && ((((uint8_T)EngineState_DataStore()) == 3) || (((uint8_T)
      EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S364>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(102, rtb_LogicalOperator7_j);
      UpdateFault(102);
    }

    /* Logic: '<S364>/Logical Operator15' incorporates:
     *  Logic: '<S364>/Logical Operator14'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S364>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S364>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s498_SystemVolts_k >=
      (Lambda2_VoltHighThresh_DataStore()));

    /* Logic: '<S364>/Logical Operator8' incorporates:
     *  Constant: '<S390>/Constant'
     *  Constant: '<S391>/Constant'
     *  Logic: '<S364>/Logical Operator2'
     *  Logic: '<S364>/Logical Operator6'
     *  RelationalOperator: '<S390>/RelOp'
     *  RelationalOperator: '<S391>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read3'
     */
    rtb_LogicalOperator8_h = (((!rtb_LogicalOperator6_b) &&
      rtb_LogicalOperator1_al && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S364>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda2VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(112, rtb_LogicalOperator8_h);
      UpdateFault(112);
    }

    /* Logic: '<S364>/Logical Operator13' incorporates:
     *  Logic: '<S364>/Logical Operator12'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S364>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S364>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s498_SystemVolts_k <=
      (Lambda2_VoltLowThresh_DataStore()));

    /* Logic: '<S364>/Logical Operator11' incorporates:
     *  Constant: '<S392>/Constant'
     *  Constant: '<S393>/Constant'
     *  Logic: '<S364>/Logical Operator10'
     *  Logic: '<S364>/Logical Operator9'
     *  RelationalOperator: '<S392>/RelOp'
     *  RelationalOperator: '<S393>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read4'
     */
    rtb_LogicalOperator11_b = (((!rtb_LogicalOperator6_b) &&
      rtb_LogicalOperator1_al && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S364>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda2VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(113, rtb_LogicalOperator11_b);
      UpdateFault(113);
    }

    /* Logic: '<S309>/Logical Operator5' incorporates:
     *  Logic: '<S309>/Logical Operator4'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status4'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* DataTypeConversion: '<S309>/Data Type Conversion' */
    if (rtIsNaN(BaseEngineController_LS_B.s493_RPMInst) || rtIsInf
        (BaseEngineController_LS_B.s493_RPMInst)) {
      u = 0.0;
    } else {
      u = fmod(floor(BaseEngineController_LS_B.s493_RPMInst), 65536.0);
    }

    rtb_DataTypeConversion_ol = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
      -u : (int16_T)(uint16_T)u);

    /* End of DataTypeConversion: '<S309>/Data Type Conversion' */
    /* RelationalOperator: '<S395>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration'
     */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol >= ((int16_T)
      (BaseRevLimit_DataStore())));

    /* Sum: '<S394>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration1'
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

    /* End of Sum: '<S394>/Sum2' */

    /* RelationalOperator: '<S395>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol <= rtb_Sum4_e);

    /* CombinatorialLogic: '<S398>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_o[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_o[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S398>/Switch1' incorporates:
     *  UnitDelay: '<S398>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_o[1]) {
      rtb_RelationalOperator2_py = rtb_CombinatorialLogic_o[0];
    } else {
      rtb_RelationalOperator2_py =
        BaseEngineController_LS_DWork.s398_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S398>/Switch1' */

    /* Switch: '<S395>/Switch2' incorporates:
     *  Logic: '<S395>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration'
     */
    if (!rtb_RelationalOperator2_py) {
      rtb_Sum4_e = ((int16_T)(BaseRevLimit_DataStore()));
    }

    /* End of Switch: '<S395>/Switch2' */

    /* RelationalOperator: '<S394>/Overspeed' */
    rtb_LogicalOperator6_b = (rtb_DataTypeConversion_ol > rtb_Sum4_e);

    /* Sum: '<S394>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration2'
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

    /* End of Sum: '<S394>/Sum3' */

    /* RelationalOperator: '<S396>/LT' */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol >= rtb_Sum4_e);

    /* Sum: '<S394>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration1'
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

    /* End of Sum: '<S394>/Sum1' */

    /* RelationalOperator: '<S396>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol <= rtb_Switch2_i);

    /* CombinatorialLogic: '<S399>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_o[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_o[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S399>/Switch1' incorporates:
     *  UnitDelay: '<S399>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_o[1]) {
      rtb_RelationalOperator3_bp = rtb_CombinatorialLogic_o[0];
    } else {
      rtb_RelationalOperator3_bp =
        BaseEngineController_LS_DWork.s399_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S399>/Switch1' */

    /* Switch: '<S396>/Switch2' incorporates:
     *  Logic: '<S396>/Logical Operator'
     */
    if (rtb_RelationalOperator3_bp) {
      rtb_Sum4_e = rtb_Switch2_i;
    }

    /* End of Switch: '<S396>/Switch2' */

    /* RelationalOperator: '<S394>/Overspeed1' */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol > rtb_Sum4_e);

    /* Logic: '<S309>/Logical Operator1' incorporates:
     *  Logic: '<S394>/Logical Operator3'
     *  Logic: '<S394>/Logical Operator4'
     */
    rtb_LogicalOperator1_g5 = ((rtb_LogicalOperator3_cj &&
      (rtb_LogicalOperator6_b && (!rtb_RelOp_mp))));

    /* S-Function (motohawk_sfun_fault_def): '<S309>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(141, rtb_LogicalOperator1_g5);
      UpdateFault(141);
    }

    /* Sum: '<S394>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration4'
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

    /* End of Sum: '<S394>/Sum5' */

    /* RelationalOperator: '<S397>/LT' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol >= rtb_Switch2_i);

    /* Sum: '<S394>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S394>/motohawk_calibration1'
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

    /* End of Sum: '<S394>/Sum4' */

    /* RelationalOperator: '<S397>/LT1' */
    rtb_BelowLoTarget_p = (rtb_DataTypeConversion_ol <= rtb_Sum4_e);

    /* CombinatorialLogic: '<S400>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_p != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_o[0] =
        BaseEngineController_LS_ConstP.pooled893[rowidx];
      rtb_CombinatorialLogic_o[1] =
        BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
    }

    /* Switch: '<S400>/Switch1' incorporates:
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_o[1]) {
      rtb_Switch1_pb = rtb_CombinatorialLogic_o[0];
    } else {
      rtb_Switch1_pb = BaseEngineController_LS_DWork.s400_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S400>/Switch1' */

    /* Switch: '<S397>/Switch2' incorporates:
     *  Logic: '<S397>/Logical Operator'
     */
    if (rtb_Switch1_pb) {
      rtb_Switch2_i = rtb_Sum4_e;
    }

    /* End of Switch: '<S397>/Switch2' */

    /* RelationalOperator: '<S394>/Overspeed2' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol > rtb_Switch2_i);

    /* Logic: '<S309>/Logical Operator2' incorporates:
     *  Logic: '<S394>/Logical Operator5'
     *  Logic: '<S394>/Logical Operator6'
     */
    rtb_LogicalOperator2_bl = ((rtb_LogicalOperator3_cj && (rtb_RelOp_mp &&
      (!rtb_Overspeed2))));

    /* S-Function (motohawk_sfun_fault_def): '<S309>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(127, rtb_LogicalOperator2_bl);
      UpdateFault(127);
    }

    /* Logic: '<S309>/Logical Operator3' */
    rtb_LogicalOperator3_eo = ((rtb_LogicalOperator3_cj && rtb_Overspeed2));

    /* S-Function (motohawk_sfun_fault_def): '<S309>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(83, rtb_LogicalOperator3_eo);
      UpdateFault(83);
    }

    /* Logic: '<S310>/Logical Operator3' incorporates:
     *  Logic: '<S310>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S310>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S310>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(73) || IsFaultActive(74) ||
      BaseEngineController_LS_B.s530_Merge);

    /* Sum: '<S310>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_LS_B.s454_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Logic: '<S310>/Logical Operator4' incorporates:
     *  Gain: '<S310>/invert'
     *  RelationalOperator: '<S310>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_j = ((rtb_LogicalOperator3_cj &&
      (rtb_motohawk_interpolation_1d3_a < -(FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S310>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(72, rtb_LogicalOperator4_j);
      UpdateFault(72);
    }

    /* Logic: '<S310>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S310>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration3'
     */
    rtb_LogicalOperator2_o4 = ((rtb_LogicalOperator3_cj &&
      (rtb_motohawk_interpolation_1d3_a > (FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S310>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(71, rtb_LogicalOperator2_o4);
      UpdateFault(71);
    }

    /* Logic: '<S301>/Logical Operator3' incorporates:
     *  Logic: '<S301>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S301>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S301>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(43) || IsFaultActive(44));

    /* RelationalOperator: '<S316>/RelOp' incorporates:
     *  Constant: '<S316>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read'
     */
    rtb_RelOp_mp = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S301>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S301>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_ie = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s677_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(42, rtb_LogicalOperator2_ie);
      UpdateFault(42);
    }

    /* Logic: '<S301>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S301>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_jz = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s677_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(45, rtb_LogicalOperator4_jz);
      UpdateFault(45);
    }

    /* S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* Gain: '<S302>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S302>/Data Type Conversion'
     *  Product: '<S302>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S302>/Number of Combustion Events Per Revolution'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s567_Sum1 * (real_T)
      ((uint8_T)CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S317>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_LS_B.s589_Merge;

    /* Gain: '<S302>/g to mg' incorporates:
     *  Constant: '<S317>/ '
     *  Constant: '<S317>/ Ethanol density (g//ml)'
     *  Constant: '<S317>/ Gasoline density (g//ml)'
     *  Product: '<S317>/Product1'
     *  Product: '<S317>/Product2'
     *  Sum: '<S317>/Add'
     *  Sum: '<S317>/Add1'
     */
    rtb_DataTypeConversion_b2 = ((1.0 - rtb_motohawk_interpolation_1d3_a) *
      0.737 + 0.789 * rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S302>/ml//hr to gal//hr' incorporates:
       *  Product: '<S302>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S302>/inj//hr to mg//hr'
       */
      u = rtb_DataTypeConversion1_e * BaseEngineController_LS_B.s92_FPC[i] /
        rtb_DataTypeConversion_b2 * 0.00026417205263729591;

      /* RelationalOperator: '<S302>/Relational Operator7' incorporates:
       *  Constant: '<S302>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator_df[i] = (u > 0.1);

      /* Gain: '<S302>/ml//hr to gal//hr' */
      rtb_Product1_fj[i] = u;
    }

    /* Outputs for Enabled SubSystem: '<S302>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S319>/Enable'
     */
    if (rtb_LogicalOperator_df[0] || rtb_LogicalOperator_df[1] ||
        rtb_LogicalOperator_df[2] || rtb_LogicalOperator_df[3] ||
        rtb_LogicalOperator_df[4] || rtb_LogicalOperator_df[5] ||
        rtb_LogicalOperator_df[6] || rtb_LogicalOperator_df[7]) {
      /* Product: '<S319>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s319_chargemass[i] =
          BaseEngineController_LS_B.s462_Switch2 / rtb_Product1_fj[i];
      }

      /* End of Product: '<S319>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S302>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S302>/Default (if no flow)' incorporates:
     *  Constant: '<S302>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator_df[i]) {
        BaseEngineController_LS_B.s302_Defaultifnoflow[i] =
          BaseEngineController_LS_B.s319_chargemass[i];
      } else {
        BaseEngineController_LS_B.s302_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S302>/Default (if no flow)' */

    /* S-Function Block: <S318>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s318_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S318>/Product' incorporates:
     *  MinMax: '<S318>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S318>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S320>/Sum' incorporates:
     *  Constant: '<S320>/Constant'
     */
    rtb_DataTypeConversion1_e = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S320>/Sum1' incorporates:
     *  Product: '<S320>/Product'
     *  Product: '<S320>/Product1'
     *  UnitDelay: '<S320>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s320_Sum1[i] =
        BaseEngineController_LS_B.s302_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_DataTypeConversion1_e *
        BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S320>/Sum1' */

    /* Logic: '<S304>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S304>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S304>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(135) || IsFaultActive(136));

    /* RelationalOperator: '<S322>/RelOp' incorporates:
     *  Constant: '<S322>/Constant'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s474_State == 3);

    /* S-Function Block: <S304>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_ne = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_ne;
    }

    /* Logic: '<S304>/Logical Operator4' incorporates:
     *  Logic: '<S304>/Logical Operator3'
     *  RelationalOperator: '<S304>/Relational Operator2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S304>/motohawk_interpolation_1d'
     */
    rtb_LogicalOperator4_mv = (((!rtb_LogicalOperator6_b) &&
      rtb_LogicalOperator1_al && (BaseEngineController_LS_B.s628_Merge <
      rtb_motohawk_interpolation_1d_ne)));

    /* S-Function (motohawk_sfun_fault_def): '<S304>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(128, rtb_LogicalOperator4_mv);
      UpdateFault(128);
    }

    /* S-Function Block: <S304>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S398>/Unit Delay' */
    BaseEngineController_LS_DWork.s398_UnitDelay_DSTATE =
      rtb_RelationalOperator2_py;

    /* Update for UnitDelay: '<S399>/Unit Delay' */
    BaseEngineController_LS_DWork.s399_UnitDelay_DSTATE =
      rtb_RelationalOperator3_bp;

    /* Update for UnitDelay: '<S400>/Unit Delay' */
    BaseEngineController_LS_DWork.s400_UnitDelay_DSTATE = rtb_Switch1_pb;

    /* Update for UnitDelay: '<S320>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_LS_B.s320_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  } else {
    if (BaseEngineController_LS_DWork.s489_TriggeredSubsystem_MODE) {
      /* Disable for Function Call SubSystem: '<S11>/Diagnostics' */
      /* Disable for Enabled SubSystem: '<S307>/MisfireDiagSub' */

      /* Level2 S-Function Block: '<S328>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_HIRES_6521p0004 */

      /* Disable for function-call system: '<S328>/MisfireDiagFunc' */
      BaseEngineController_LS_DWork.s347_If_ActiveSubsystem = -1;
      BaseEngineController_LS_DWork.s328_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_DWork.s307_MisfireDiagSub_MODE = FALSE;

      /* End of Disable for SubSystem: '<S307>/MisfireDiagSub' */
      /* End of Disable for SubSystem: '<S11>/Diagnostics' */
      BaseEngineController_LS_DWork.s489_TriggeredSubsystem_MODE = FALSE;
    }
  }

  /* Saturate: '<S414>/Saturation' */
  rtb_Saturation_k2 = rtb_Switch_fz >= 16000.0 ? 16000.0 : rtb_Switch_fz <= 0.0 ?
    0.0 : rtb_Switch_fz;

  /* S-Function (motohawk_sfun_data_write): '<S414>/motohawk_data_write' */
  /* Write to Data Storage as scalar: BaroLearnTmr */
  {
    BaroLearnTmr_DataStore() = rtb_Saturation_k2;
  }

  /* Switch: '<S419>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S401>/motohawk_data_read'
   */
  if ((VEAdpatSource_DataStore())) {
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s537_Merge;
  } else {
    rtb_DataTypeConversion1_e = DFCODesEquivRatio_DataStore();
  }

  /* End of Switch: '<S419>/Switch' */

  /* Switch: '<S419>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration'
   */
  if ((VEAdpatSource_DataStore())) {
    rtb_DataTypeConversion_b2 =
      BaseEngineController_LS_B.s410_ModelAirMassFlowRate;
  } else {
    rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s456_Sum1;
  }

  /* End of Switch: '<S419>/Switch1' */

  /* RelationalOperator: '<S417>/Compare' incorporates:
   *  Constant: '<S417>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s474_State == 3);

  /* Logic: '<S410>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S410>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_al = !GetFaultActionStatus(7);

  /* RelationalOperator: '<S410>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration2'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s677_Merge >=
                    (VEAdaptTemp_DataStore()));

  /* RelationalOperator: '<S410>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration3'
   */
  rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s483_Switch >=
    (VEAdaptTime_DataStore()));

  /* Switch: '<S418>/Switch' incorporates:
   *  Constant: '<S418>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S418>/motohawk_data_read'
   */
  if (VEAdpatSource_DataStore()) {
    /* Switch: '<S418>/Switch1' incorporates:
     *  Logic: '<S418>/Logical Operator'
     *  S-Function (motohawk_sfun_data_read): '<S418>/motohawk_data_read1'
     */
    if (BankB_Enbl_DataStore()) {
      rtb_RelationalOperator5_fz =
        (BaseEngineController_LS_B.s498_DataValidState &&
         BaseEngineController_LS_B.s498_DataValidState_f);
    } else {
      rtb_RelationalOperator5_fz = BaseEngineController_LS_B.s498_DataValidState;
    }

    /* End of Switch: '<S418>/Switch1' */
  } else {
    rtb_RelationalOperator5_fz = TRUE;
  }

  /* End of Switch: '<S418>/Switch' */

  /* Logic: '<S410>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s410_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_al && BaseEngineController_LS_B.s428_LogicalOperator &&
    rtb_Switch1_pb && rtb_RelationalOperator2_py && (VEAdaptEnable_DataStore()) &&
    rtb_RelationalOperator5_fz));

  /* Outputs for Enabled SubSystem: '<S410>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S415>/Enable'
   */
  if (BaseEngineController_LS_B.s410_LogicalOperator) {
    /* Product: '<S415>/Divide' incorporates:
     *  Sum: '<S415>/Add'
     */
    rtb_Divide_p = (rtb_DataTypeConversion1_e - rtb_DataTypeConversion_b2) /
      rtb_DataTypeConversion_b2;

    /* S-Function Block: <S420>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_p;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_p,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_jn = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S420>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kd = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_jn, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_kd;
    }

    /* Product: '<S415>/Divide1' incorporates:
     *  Product: '<S415>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S420>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S420>/motohawk_prelookup'
     */
    rtb_Divide1 = BaseEngineController_LS_B.s410_Sum * rtb_Divide_p *
      rtb_motohawk_interpolation_1d_kd;

    /* S-Function Block: <S415>/motohawk_adapt_table */
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

  /* End of Outputs for SubSystem: '<S410>/Adapt VolEff Map' */

  /* Outputs for Enabled SubSystem: '<S402>/FuelLevelWrite' incorporates:
   *  EnablePort: '<S424>/Enable'
   */
  if (rtb_RelationalOperator_hl) {
    /* S-Function (motohawk_sfun_data_write): '<S424>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelLvl_NVM */
    {
      FuelLvl_NVM_DataStore() = BaseEngineController_LS_B.s423_Sum1;
    }
  }

  /* End of Outputs for SubSystem: '<S402>/FuelLevelWrite' */

  /* UnitDelay: '<S429>/Unit Delay1' */
  rtb_DesiredLambda_idx = BaseEngineController_LS_DWork.s429_UnitDelay1_DSTATE;

  /* UnitDelay: '<S429>/Unit Delay3' */
  rtb_DesiredLambda_idx_0 = BaseEngineController_LS_DWork.s429_UnitDelay3_DSTATE;

  /* UnitDelay: '<S429>/Unit Delay4' */
  rtb_DesiredLambda_idx_1 = BaseEngineController_LS_DWork.s429_UnitDelay4_DSTATE;

  /* UnitDelay: '<S430>/Unit Delay1' */
  rtb_UnitDelay1_k = BaseEngineController_LS_DWork.s430_UnitDelay1_DSTATE;

  /* UnitDelay: '<S430>/Unit Delay3' */
  rtb_UnitDelay3_j = BaseEngineController_LS_DWork.s430_UnitDelay3_DSTATE;

  /* UnitDelay: '<S430>/Unit Delay4' */
  rtb_UnitDelay4_ie = BaseEngineController_LS_DWork.s430_UnitDelay4_DSTATE;

  /* Sum: '<S447>/Sum' */
  rtb_Abs_co = rtb_APP1 - rtb_APP2;

  /* Abs: '<S447>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S447>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_h = ((rtb_Abs_co > (APP1_APP2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S447>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_RelationalOperator3_h);
    UpdateFault(20);
  }

  /* RelationalOperator: '<S477>/RelOp' incorporates:
   *  Constant: '<S477>/Constant'
   */
  rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s474_State == 2);

  /* Outputs for Enabled SubSystem: '<S475>/WritePulseState' incorporates:
   *  EnablePort: '<S479>/Enable'
   */
  /* Logic: '<S478>/Logical Operator' incorporates:
   *  Logic: '<S478>/Logical Operator1'
   *  UnitDelay: '<S478>/Unit Delay'
   */
  if (rtb_LogicalOperator1_er &&
      (!BaseEngineController_LS_DWork.s478_UnitDelay_DSTATE)) {
    /* S-Function (motohawk_sfun_data_write): '<S479>/motohawk_data_write' incorporates:
     *  Constant: '<S479>/Constant'
     */
    /* Write to Data Storage as scalar: FuelPulseState */
    {
      FuelPulseState_DataStore() = ((uint8_T)1U);
    }
  }

  /* End of Logic: '<S478>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S475>/WritePulseState' */

  /* S-Function (motohawk_sfun_data_write): '<S453>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_B.s474_State;
  }

  /* S-Function (motohawk_sfun_data_read): '<S453>/motohawk_data_read' */
  BaseEngineController_LS_B.s453_motohawk_data_read = FuelPulseState_DataStore();

  /* Sum: '<S458>/Sum' */
  rtb_Abs_co = BaseEngineController_LS_B.s780_Merge -
    BaseEngineController_LS_B.s797_Merge;

  /* Abs: '<S458>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S458>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S458>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_or = ((rtb_Abs_co > (TPS1_TPS2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S458>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(156, rtb_RelationalOperator3_or);
    UpdateFault(156);
  }

  /* Saturate: '<S481>/Saturation' */
  rtb_Saturation_ah = BaseEngineController_LS_B.s481_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s481_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s481_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S481>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_ah;
  }

  /* Saturate: '<S483>/Saturation' */
  rtb_Saturation_m = BaseEngineController_LS_B.s483_Switch >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s483_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s483_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S483>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S485>/Saturation' */
  rtb_Saturation_kf = BaseEngineController_LS_B.s485_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_LS_B.s485_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s485_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S485>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_kf;
  }

  /* Switch: '<S489>/Switch' incorporates:
   *  Constant: '<S489>/Constant2'
   */
  if (rtb_RelationalOperator_jv) {
    rtb_Switch_kj = 0U;
  } else {
    rtb_Switch_kj = rtb_Sum_hh;
  }

  /* End of Switch: '<S489>/Switch' */
  /* RelationalOperator: '<S497>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S497>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s497_ReadCANMessage1_o1 >= (uint32_T)((uint16_T)
      (GPS_LatLong_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S497>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: GPS_LatLong_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_RelationalOperator5_fz);
    UpdateFault(80);
  }

  /* RelationalOperator: '<S497>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S497>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s497_ReadCANMessage_o1
    >= (uint32_T)((uint16_T)(GPS_DateTime_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S497>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: GPS_DateTime_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_RelationalOperator5_fz);
    UpdateFault(79);
  }

  /* RelationalOperator: '<S497>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S497>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s497_ReadCANMessage2_o1 >= (uint32_T)((uint16_T)
      (GPS_SpeedDir_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S497>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: GPS_SpeedDir_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_RelationalOperator5_fz);
    UpdateFault(81);
  }

  /* RelationalOperator: '<S498>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s498_ReadCANMessage1_o1 >= (uint32_T)((uint16_T)
      (Lambda_2_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S498>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(115, rtb_RelationalOperator5_fz);
    UpdateFault(115);
  }

  /* RelationalOperator: '<S498>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s498_ReadCANMessage_o1
    >= (uint32_T)((uint16_T)(Lambda_1_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S498>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(114, rtb_RelationalOperator5_fz);
    UpdateFault(114);
  }

  /* Logic: '<S499>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s498_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_n);
    UpdateFault(23);
  }

  /* Logic: '<S499>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_hv = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s498_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_hv);
    UpdateFault(24);
  }

  /* Logic: '<S500>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S500>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S500>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_b = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s498_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S500>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_LogicalOperator2_b);
    UpdateFault(25);
  }

  /* Logic: '<S500>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S500>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S500>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_od = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s498_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S500>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_LogicalOperator3_od);
    UpdateFault(26);
  }

  /* Logic: '<S520>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S520>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S520>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S520>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p5 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s492_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S520>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(118, rtb_LogicalOperator2_p5);
    UpdateFault(118);
  }

  /* Logic: '<S520>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S520>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S520>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S520>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s492_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S520>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(119, rtb_LogicalOperator3_k);
    UpdateFault(119);
  }

  /* Saturate: '<S544>/Saturation' */
  rtb_Saturation_b = rtb_Switch_bn >= 86400.0 ? 86400.0 : rtb_Switch_bn <= 0.0 ?
    0.0 : rtb_Switch_bn;

  /* S-Function (motohawk_sfun_data_write): '<S544>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_b;
  }

  /* Logic: '<S522>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S522>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S522>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s492_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S522>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(157, rtb_LogicalOperator2_m);
    UpdateFault(157);
  }

  /* Logic: '<S522>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S522>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S522>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_jn = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s492_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S522>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(158, rtb_LogicalOperator3_jn);
    UpdateFault(158);
  }

  /* S-Function Block: <S558>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s558_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ec = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S558>/Switch' incorporates:
   *  Constant: '<S558>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S558>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S558>/motohawk_delta_time'
   *  Sum: '<S558>/Sum'
   */
  if (rtb_Logic_j[0]) {
    rtb_Abs_co = rtb_motohawk_delta_time_ec + TimeSinceVSPDReject_DataStore();
  } else {
    rtb_Abs_co = 0.0;
  }

  /* End of Switch: '<S558>/Switch' */
  /* RelationalOperator: '<S523>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration6'
   */
  rtb_RelOp_d = (rtb_Abs_co >= (real_T)((uint8_T)(VSPD_RejectHoldTime_DataStore())));

  /* Saturate: '<S558>/Saturation' */
  rtb_Saturation_l = rtb_Abs_co >= 16000.0 ? 16000.0 : rtb_Abs_co <= 0.0 ? 0.0 :
    rtb_Abs_co;

  /* S-Function (motohawk_sfun_data_write): '<S558>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceVSPDReject */
  {
    TimeSinceVSPDReject_DataStore() = rtb_Saturation_l;
  }

  /* RelationalOperator: '<S493>/Relational Operator' incorporates:
   *  Constant: '<S493>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration'
   */
  rtb_RelationalOperator_l = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S493>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S493>/Data Type Conversion3' incorporates:
   *  Gain: '<S493>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration1'
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

  /* End of DataTypeConversion: '<S493>/Data Type Conversion3' */
  /* S-Function Block: <S493>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_dm;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S563>/RelOp' incorporates:
   *  Constant: '<S563>/Constant'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s566_Sum > 100U);

  /* S-Function Block: <S493>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_B.s493_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S559>/Logical Operator' incorporates:
   *  Constant: '<S565>/Constant'
   *  RelationalOperator: '<S565>/RelOp'
   */
  rtb_LogicalOperator_f0 = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s493_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator_f0);
    UpdateFault(33);
  }

  /* Logic: '<S559>/Logical Operator1' incorporates:
   *  Constant: '<S564>/Constant'
   *  RelationalOperator: '<S564>/RelOp'
   */
  rtb_LogicalOperator1_dw = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s493_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator1_dw);
    UpdateFault(32);
  }

  /* Logic: '<S559>/Logical Operator2' incorporates:
   *  Constant: '<S561>/Constant'
   *  RelationalOperator: '<S561>/RelOp'
   */
  rtb_LogicalOperator2_g = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s493_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_LogicalOperator2_g);
    UpdateFault(29);
  }

  /* Logic: '<S559>/Logical Operator3' incorporates:
   *  Constant: '<S562>/Constant'
   *  RelationalOperator: '<S562>/RelOp'
   */
  rtb_LogicalOperator3_nz = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s493_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator3_nz);
    UpdateFault(30);
  }

  /* S-Function Block: <S493>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_LS_B.s493_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S568>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S568>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S568>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S568>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kx = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik >
    (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S568>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kx);
    UpdateFault(2);
  }

  /* Logic: '<S568>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S568>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S568>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S568>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_mz = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik <
    (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S568>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_mz);
    UpdateFault(3);
  }

  /* Logic: '<S569>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S569>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S569>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S569>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S569>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_LogicalOperator2_j);
    UpdateFault(75);
  }

  /* Logic: '<S569>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S569>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S569>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S569>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ij = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S569>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_LogicalOperator3_ij);
    UpdateFault(76);
  }

  /* Logic: '<S570>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S570>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S570>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S570>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_f4 = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S570>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_LogicalOperator2_f4);
    UpdateFault(73);
  }

  /* Logic: '<S570>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S570>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S570>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S570>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ns = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S570>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_LogicalOperator3_ns);
    UpdateFault(74);
  }

  /* Logic: '<S571>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S571>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S571>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S571>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fw = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s573_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S571>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(120, rtb_LogicalOperator2_fw);
    UpdateFault(120);
  }

  /* Logic: '<S571>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S571>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S571>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S571>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_l = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s573_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S571>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(121, rtb_LogicalOperator3_l);
    UpdateFault(121);
  }

  /* Logic: '<S572>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S572>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S572>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S572>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S572>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(122, rtb_LogicalOperator2_a);
    UpdateFault(122);
  }

  /* Logic: '<S572>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S572>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S572>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S572>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S572>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(123, rtb_LogicalOperator3_d);
    UpdateFault(123);
  }

  /* Logic: '<S574>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S574>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S574>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S574>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fm = ((MPRD_DataStore() && (rtb_Switch4_i >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S574>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(135, rtb_LogicalOperator2_fm);
    UpdateFault(135);
  }

  /* Logic: '<S574>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S574>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S574>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S574>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_Switch4_i <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S574>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(136, rtb_LogicalOperator3_a);
    UpdateFault(136);
  }

  /* Logic: '<S575>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S575>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S575>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S575>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gc = ((MPRD_DataStore() && (rtb_Abs_k >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S575>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(138, rtb_LogicalOperator2_gc);
    UpdateFault(138);
  }

  /* Logic: '<S575>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S575>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S575>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S575>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_e = ((MPRD_DataStore() && (rtb_Abs_k <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S575>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(139, rtb_LogicalOperator3_e);
    UpdateFault(139);
  }

  /* Logic: '<S576>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S576>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S576>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S576>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bm = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 >
    (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S576>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(142, rtb_LogicalOperator2_bm);
    UpdateFault(142);
  }

  /* Logic: '<S576>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S576>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S576>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S576>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 <
    (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S576>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(143, rtb_LogicalOperator3_g);
    UpdateFault(143);
  }

  /* Logic: '<S700>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S700>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S700>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ob = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S700>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_ob);
    UpdateFault(4);
  }

  /* Logic: '<S700>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S700>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S700>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_in = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd <
    (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S700>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_in);
    UpdateFault(5);
  }

  /* S-Function (motohawk_sfun_trigger): '<S701>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  if (BaseEngineController_LS_DWork.s701_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s701_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S701>/Logical Operator' incorporates:
   *  RelationalOperator: '<S701>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S701>/motohawk_data_read1'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s718_LogicalOperator &&
                    (APP1_AdaptADC_DataStore() <
                     (APP1LowAdaptADCThresh_DataStore())));

  /* Logic: '<S701>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S701>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S701>/motohawk_data_read1'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s718_LogicalOperator &&
    (APP1_AdaptADC_DataStore() > (APP1HiAdaptADCThresh_DataStore())));

  /* Logic: '<S702>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S702>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S702>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_il = ((MPRD_DataStore() && (rtb_DataTypeConversion_fc >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S702>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator2_il);
    UpdateFault(12);
  }

  /* Logic: '<S702>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S702>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S702>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_dk = ((MPRD_DataStore() && (rtb_DataTypeConversion_fc <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S702>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_LogicalOperator3_dk);
    UpdateFault(13);
  }

  /* S-Function (motohawk_sfun_trigger): '<S703>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  if (BaseEngineController_LS_DWork.s703_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s703_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S703>/Logical Operator' incorporates:
   *  RelationalOperator: '<S703>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S703>/motohawk_data_read1'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s730_LogicalOperator &&
                                (APP2_AdaptADC_DataStore() <
    (APP2LowAdaptADCThresh_DataStore())));

  /* Logic: '<S703>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S703>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S703>/motohawk_data_read1'
   */
  rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s730_LogicalOperator &&
                                (APP2_AdaptADC_DataStore() >
    (APP2HiAdaptADCThresh_DataStore())));

  /* RelationalOperator: '<S733>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S733>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_l = ((BaseEngineController_LS_B.s704_Switch >
    (APP1_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S733>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP1_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator5_l);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S733>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S733>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_bl = ((BaseEngineController_LS_B.s704_Switch <
    (APP1_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S733>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP1_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator4_bl);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S733>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration9'
   */
  rtb_RelationalOperator_c1 = ((BaseEngineController_LS_B.s732_MinMax >
    (APP1_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S733>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_c1);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S733>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_p4 = ((BaseEngineController_LS_B.s732_MinMax1 >
    (APP1_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S733>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_p4);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S733>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_k2 = ((BaseEngineController_LS_B.s732_MinMax1 <
    (APP1_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S733>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator2_k2);
    UpdateFault(7);
  }

  /* RelationalOperator: '<S733>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_n = ((BaseEngineController_LS_B.s732_MinMax <
    (APP1_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S733>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator1_n);
    UpdateFault(9);
  }

  /* UnitDelay: '<S739>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s739_UnitDelay1_DSTATE;

  /* UnitDelay: '<S739>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s739_UnitDelay_DSTATE;

  /* UnitDelay: '<S739>/Unit Delay3' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s739_UnitDelay3_DSTATE;

  /* UnitDelay: '<S739>/Unit Delay4' */
  rtb_Product1_gw = BaseEngineController_LS_DWork.s739_UnitDelay4_DSTATE;

  /* MinMax: '<S739>/MinMax1' incorporates:
   *  UnitDelay: '<S739>/Unit Delay'
   *  UnitDelay: '<S739>/Unit Delay3'
   *  UnitDelay: '<S739>/Unit Delay4'
   */
  u = (rtb_Abs_co <= BaseEngineController_LS_DWork.s739_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s739_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s739_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s739_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s739_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_DWork.s739_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s739_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s739_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_DWork.s739_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_B.s704_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s704_Switch) ? u :
    BaseEngineController_LS_B.s704_Switch;

  /* RelationalOperator: '<S737>/Relational Operator9' incorporates:
   *  MinMax: '<S739>/MinMax1'
   */
  rtb_LogicalOperator1_al = (u > BaseEngineController_LS_B.s732_MinMax1);

  /* RelationalOperator: '<S737>/Relational Operator5' incorporates:
   *  MinMax: '<S739>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (APP1_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S737>/Relational Operator6' incorporates:
   *  MinMax: '<S739>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (u >= (APP1_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S737>/Sum2' incorporates:
   *  MinMax: '<S739>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s732_MinMax1;

  /* Abs: '<S737>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S737>/Store Current Position' incorporates:
   *  EnablePort: '<S740>/Enable'
   */
  /* Logic: '<S737>/Logical Operator2' incorporates:
   *  Logic: '<S737>/Logical Operator1'
   *  Logic: '<S737>/Logical Operator4'
   *  RelationalOperator: '<S737>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S732>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S732>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator1_al && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP1_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP1_AdaptAdaptHiEnable_DataStore()) && rtb_LogicalOperator6_b)) {
    /* DataTypeConversion: '<S740>/Data Type Conversion2' incorporates:
     *  MinMax: '<S739>/MinMax1'
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

    /* End of DataTypeConversion: '<S740>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S740>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Hi */
    {
      APP1_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_d;
    }
  }

  /* End of Logic: '<S737>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S737>/Store Current Position' */

  /* MinMax: '<S739>/MinMax' */
  u = (BaseEngineController_LS_B.s704_Switch >= rtb_Product1_gw) || rtIsNaN
    (rtb_Product1_gw) ? BaseEngineController_LS_B.s704_Switch : rtb_Product1_gw;
  u = (u >= rtb_DataTypeConversion_b2) || rtIsNaN(rtb_DataTypeConversion_b2) ? u
    : rtb_DataTypeConversion_b2;
  u = (u >= rtb_DataTypeConversion1_e) || rtIsNaN(rtb_DataTypeConversion1_e) ? u
    : rtb_DataTypeConversion1_e;
  rtb_Abs_k = (u >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? u : rtb_Abs_co;

  /* RelationalOperator: '<S738>/Relational Operator9' incorporates:
   *  MinMax: '<S739>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s732_MinMax);

  /* RelationalOperator: '<S738>/Relational Operator5' incorporates:
   *  MinMax: '<S739>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP1_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S738>/Relational Operator6' incorporates:
   *  MinMax: '<S739>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (APP1_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S738>/Sum2' incorporates:
   *  MinMax: '<S739>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s732_MinMax;

  /* Abs: '<S738>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S738>/Store Current Position' incorporates:
   *  EnablePort: '<S741>/Enable'
   */
  /* Logic: '<S738>/Logical Operator2' incorporates:
   *  Logic: '<S738>/Logical Operator1'
   *  Logic: '<S738>/Logical Operator4'
   *  RelationalOperator: '<S738>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S732>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S732>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP1_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP1_AdaptAdaptLoEnable_DataStore()) && rtb_Switch1_pb)) {
    /* DataTypeConversion: '<S741>/Data Type Conversion2' incorporates:
     *  MinMax: '<S739>/MinMax'
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

    /* End of DataTypeConversion: '<S741>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S741>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Low */
    {
      APP1_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_hr;
    }
  }

  /* End of Logic: '<S738>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S738>/Store Current Position' */

  /* RelationalOperator: '<S750>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S750>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((BaseEngineController_LS_B.s705_Switch >
    (APP2_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S750>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP2_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_RelationalOperator5_a);
    UpdateFault(18);
  }

  /* RelationalOperator: '<S750>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S750>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d = ((BaseEngineController_LS_B.s705_Switch <
    (APP2_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S750>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP2_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator4_d);
    UpdateFault(19);
  }

  /* RelationalOperator: '<S750>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_LS_B.s749_MinMax >
    (APP2_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S750>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator_f);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S750>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_n3 = ((BaseEngineController_LS_B.s749_MinMax1 >
    (APP2_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S750>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator3_n3);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S750>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ma = ((BaseEngineController_LS_B.s749_MinMax1 <
    (APP2_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S750>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator2_ma);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S750>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_gr = ((BaseEngineController_LS_B.s749_MinMax <
    (APP2_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S750>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator1_gr);
    UpdateFault(17);
  }

  /* UnitDelay: '<S756>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s756_UnitDelay1_DSTATE;

  /* UnitDelay: '<S756>/Unit Delay' */
  rtb_Switch3_p = BaseEngineController_LS_DWork.s756_UnitDelay_DSTATE;

  /* UnitDelay: '<S756>/Unit Delay3' */
  rtb_Switch2_a = BaseEngineController_LS_DWork.s756_UnitDelay3_DSTATE;

  /* UnitDelay: '<S756>/Unit Delay4' */
  rtb_Switch1_f = BaseEngineController_LS_DWork.s756_UnitDelay4_DSTATE;

  /* MinMax: '<S756>/MinMax1' incorporates:
   *  UnitDelay: '<S756>/Unit Delay'
   *  UnitDelay: '<S756>/Unit Delay3'
   *  UnitDelay: '<S756>/Unit Delay4'
   */
  u = (rtb_Abs_co <= BaseEngineController_LS_DWork.s756_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s756_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s756_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s756_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s756_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_DWork.s756_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s756_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s756_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_DWork.s756_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_B.s705_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s705_Switch) ? u :
    BaseEngineController_LS_B.s705_Switch;

  /* RelationalOperator: '<S754>/Relational Operator9' incorporates:
   *  MinMax: '<S756>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s749_MinMax1);

  /* RelationalOperator: '<S754>/Relational Operator5' incorporates:
   *  MinMax: '<S756>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (APP2_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S754>/Relational Operator6' incorporates:
   *  MinMax: '<S756>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (u >= (APP2_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S754>/Sum2' incorporates:
   *  MinMax: '<S756>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s749_MinMax1;

  /* Abs: '<S754>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S754>/Store Current Position' incorporates:
   *  EnablePort: '<S757>/Enable'
   */
  /* Logic: '<S754>/Logical Operator2' incorporates:
   *  Logic: '<S754>/Logical Operator1'
   *  Logic: '<S754>/Logical Operator4'
   *  RelationalOperator: '<S754>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S749>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S749>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP2_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP2_AdaptAdaptHiEnable_DataStore()) && rtb_RelationalOperator2_py)) {
    /* DataTypeConversion: '<S757>/Data Type Conversion2' incorporates:
     *  MinMax: '<S756>/MinMax1'
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

    /* End of DataTypeConversion: '<S757>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S757>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Hi */
    {
      APP2_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S754>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S754>/Store Current Position' */

  /* MinMax: '<S756>/MinMax' */
  u = (BaseEngineController_LS_B.s705_Switch >= rtb_Switch1_f) || rtIsNaN
    (rtb_Switch1_f) ? BaseEngineController_LS_B.s705_Switch : rtb_Switch1_f;
  u = (u >= rtb_Switch2_a) || rtIsNaN(rtb_Switch2_a) ? u : rtb_Switch2_a;
  u = (u >= rtb_Switch3_p) || rtIsNaN(rtb_Switch3_p) ? u : rtb_Switch3_p;
  rtb_Abs_k = (u >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? u : rtb_Abs_co;

  /* RelationalOperator: '<S755>/Relational Operator9' incorporates:
   *  MinMax: '<S756>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s749_MinMax);

  /* RelationalOperator: '<S755>/Relational Operator5' incorporates:
   *  MinMax: '<S756>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP2_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S755>/Relational Operator6' incorporates:
   *  MinMax: '<S756>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (APP2_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S755>/Sum2' incorporates:
   *  MinMax: '<S756>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s749_MinMax;

  /* Abs: '<S755>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S755>/Store Current Position' incorporates:
   *  EnablePort: '<S758>/Enable'
   */
  /* Logic: '<S755>/Logical Operator2' incorporates:
   *  Logic: '<S755>/Logical Operator1'
   *  Logic: '<S755>/Logical Operator4'
   *  RelationalOperator: '<S755>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S749>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S749>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP2_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP2_AdaptAdaptLoEnable_DataStore()) && rtb_RelationalOperator3_bp)) {
    /* DataTypeConversion: '<S758>/Data Type Conversion2' incorporates:
     *  MinMax: '<S756>/MinMax'
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

    /* End of DataTypeConversion: '<S758>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S758>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Low */
    {
      APP2_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_p2;
    }
  }

  /* End of Logic: '<S755>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S755>/Store Current Position' */

  /* RelationalOperator: '<S767>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((BaseEngineController_LS_B.s706_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S767>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(148, rtb_RelationalOperator5_k);
    UpdateFault(148);
  }

  /* RelationalOperator: '<S767>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_p = ((BaseEngineController_LS_B.s706_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S767>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(149, rtb_RelationalOperator4_p);
    UpdateFault(149);
  }

  /* RelationalOperator: '<S767>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration9'
   */
  rtb_RelationalOperator_cz = ((BaseEngineController_LS_B.s766_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S767>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(146, rtb_RelationalOperator_cz);
    UpdateFault(146);
  }

  /* RelationalOperator: '<S767>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_kn = ((BaseEngineController_LS_B.s766_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S767>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(144, rtb_RelationalOperator3_kn);
    UpdateFault(144);
  }

  /* RelationalOperator: '<S767>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_id = ((BaseEngineController_LS_B.s766_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S767>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(145, rtb_RelationalOperator2_id);
    UpdateFault(145);
  }

  /* RelationalOperator: '<S767>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_px = ((BaseEngineController_LS_B.s766_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S767>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(147, rtb_RelationalOperator1_px);
    UpdateFault(147);
  }

  /* UnitDelay: '<S773>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s773_UnitDelay1_DSTATE;

  /* UnitDelay: '<S773>/Unit Delay' */
  rtb_Switch_om = BaseEngineController_LS_DWork.s773_UnitDelay_DSTATE;

  /* UnitDelay: '<S773>/Unit Delay3' */
  rtb_Switch4_i = BaseEngineController_LS_DWork.s773_UnitDelay3_DSTATE;

  /* UnitDelay: '<S773>/Unit Delay4' */
  rtb_Multiplyby10ifnotyetenabled_c =
    BaseEngineController_LS_DWork.s773_UnitDelay4_DSTATE;

  /* MinMax: '<S773>/MinMax1' incorporates:
   *  UnitDelay: '<S773>/Unit Delay'
   *  UnitDelay: '<S773>/Unit Delay3'
   *  UnitDelay: '<S773>/Unit Delay4'
   */
  u = (rtb_Abs_co <= BaseEngineController_LS_DWork.s773_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s773_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s773_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s773_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s773_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_DWork.s773_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s773_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s773_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_DWork.s773_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_B.s706_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s706_Switch) ? u :
    BaseEngineController_LS_B.s706_Switch;

  /* RelationalOperator: '<S771>/Relational Operator9' incorporates:
   *  MinMax: '<S773>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s766_MinMax1);

  /* RelationalOperator: '<S771>/Relational Operator5' incorporates:
   *  MinMax: '<S773>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S771>/Relational Operator6' incorporates:
   *  MinMax: '<S773>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (u >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S771>/Sum2' incorporates:
   *  MinMax: '<S773>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s766_MinMax1;

  /* Abs: '<S771>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S771>/Store Current Position' incorporates:
   *  EnablePort: '<S774>/Enable'
   */
  /* Logic: '<S771>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S771>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_k
       > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S774>/Data Type Conversion2' incorporates:
     *  MinMax: '<S773>/MinMax1'
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

    /* End of DataTypeConversion: '<S774>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S774>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_k;
    }
  }

  /* End of Logic: '<S771>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S771>/Store Current Position' */

  /* MinMax: '<S773>/MinMax' */
  u = (BaseEngineController_LS_B.s706_Switch >=
       rtb_Multiplyby10ifnotyetenabled_c) || rtIsNaN
    (rtb_Multiplyby10ifnotyetenabled_c) ? BaseEngineController_LS_B.s706_Switch :
    rtb_Multiplyby10ifnotyetenabled_c;
  u = (u >= rtb_Switch4_i) || rtIsNaN(rtb_Switch4_i) ? u : rtb_Switch4_i;
  u = (u >= rtb_Switch_om) || rtIsNaN(rtb_Switch_om) ? u : rtb_Switch_om;
  rtb_Abs_k = (u >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? u : rtb_Abs_co;

  /* RelationalOperator: '<S772>/Relational Operator9' incorporates:
   *  MinMax: '<S773>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s766_MinMax);

  /* RelationalOperator: '<S772>/Relational Operator5' incorporates:
   *  MinMax: '<S773>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S772>/Relational Operator6' incorporates:
   *  MinMax: '<S773>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S772>/Sum2' incorporates:
   *  MinMax: '<S773>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s766_MinMax;

  /* Abs: '<S772>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Logic: '<S772>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S772>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_b = (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz
    && rtb_RelationalOperator6_h && (TPS1AdaptLoEnable_DataStore()) &&
    (rtb_Abs_co > (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S772>/Store Current Position' incorporates:
   *  EnablePort: '<S775>/Enable'
   */
  /* Logic: '<S772>/Logical Operator2' incorporates:
   *  Logic: '<S772>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S496>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_b || (rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S775>/Data Type Conversion2' incorporates:
     *  MinMax: '<S773>/MinMax'
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

    /* End of DataTypeConversion: '<S775>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S775>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S772>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S772>/Store Current Position' */

  /* RelationalOperator: '<S784>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_g = ((BaseEngineController_LS_B.s707_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S784>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(154, rtb_RelationalOperator5_g);
    UpdateFault(154);
  }

  /* RelationalOperator: '<S784>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d1 = ((BaseEngineController_LS_B.s707_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S784>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(155, rtb_RelationalOperator4_d1);
    UpdateFault(155);
  }

  /* RelationalOperator: '<S784>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration9'
   */
  rtb_RelationalOperator_fa = ((BaseEngineController_LS_B.s783_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S784>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(152, rtb_RelationalOperator_fa);
    UpdateFault(152);
  }

  /* RelationalOperator: '<S784>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_jk = ((BaseEngineController_LS_B.s783_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S784>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(150, rtb_RelationalOperator3_jk);
    UpdateFault(150);
  }

  /* RelationalOperator: '<S784>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_or = ((BaseEngineController_LS_B.s783_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S784>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(151, rtb_RelationalOperator2_or);
    UpdateFault(151);
  }

  /* RelationalOperator: '<S784>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_d = ((BaseEngineController_LS_B.s783_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S784>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(153, rtb_RelationalOperator1_d);
    UpdateFault(153);
  }

  /* UnitDelay: '<S790>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s790_UnitDelay1_DSTATE;

  /* UnitDelay: '<S790>/Unit Delay' */
  rtb_Switch_fz = BaseEngineController_LS_DWork.s790_UnitDelay_DSTATE;

  /* UnitDelay: '<S790>/Unit Delay3' */
  rtb_DataTypeConversion_ik =
    BaseEngineController_LS_DWork.s790_UnitDelay3_DSTATE;

  /* UnitDelay: '<S790>/Unit Delay4' */
  rtb_APP2 = BaseEngineController_LS_DWork.s790_UnitDelay4_DSTATE;

  /* MinMax: '<S790>/MinMax1' incorporates:
   *  UnitDelay: '<S790>/Unit Delay'
   *  UnitDelay: '<S790>/Unit Delay3'
   *  UnitDelay: '<S790>/Unit Delay4'
   */
  u = (rtb_Abs_co <= BaseEngineController_LS_DWork.s790_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s790_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s790_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s790_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s790_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_DWork.s790_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_DWork.s790_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s790_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_DWork.s790_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_B.s707_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s707_Switch) ? u :
    BaseEngineController_LS_B.s707_Switch;

  /* RelationalOperator: '<S788>/Relational Operator9' incorporates:
   *  MinMax: '<S790>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s783_MinMax1);

  /* RelationalOperator: '<S788>/Relational Operator5' incorporates:
   *  MinMax: '<S790>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S788>/Relational Operator6' incorporates:
   *  MinMax: '<S790>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (u >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S788>/Sum2' incorporates:
   *  MinMax: '<S790>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s783_MinMax1;

  /* Abs: '<S788>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S788>/Store Current Position' incorporates:
   *  EnablePort: '<S791>/Enable'
   */
  /* Logic: '<S788>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S788>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S783>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S783>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_k
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S791>/Data Type Conversion2' incorporates:
     *  MinMax: '<S790>/MinMax1'
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

    /* End of DataTypeConversion: '<S791>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S791>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_jn;
    }
  }

  /* End of Logic: '<S788>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S788>/Store Current Position' */

  /* MinMax: '<S790>/MinMax' */
  u = (BaseEngineController_LS_B.s707_Switch >= rtb_APP2) || rtIsNaN(rtb_APP2) ?
    BaseEngineController_LS_B.s707_Switch : rtb_APP2;
  u = (u >= rtb_DataTypeConversion_ik) || rtIsNaN(rtb_DataTypeConversion_ik) ? u
    : rtb_DataTypeConversion_ik;
  u = (u >= rtb_Switch_fz) || rtIsNaN(rtb_Switch_fz) ? u : rtb_Switch_fz;
  rtb_Abs_k = (u >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? u : rtb_Abs_co;

  /* RelationalOperator: '<S789>/Relational Operator9' incorporates:
   *  MinMax: '<S790>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s783_MinMax);

  /* RelationalOperator: '<S789>/Relational Operator5' incorporates:
   *  MinMax: '<S790>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S789>/Relational Operator6' incorporates:
   *  MinMax: '<S790>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S707>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S789>/Sum2' incorporates:
   *  MinMax: '<S790>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s783_MinMax;

  /* Abs: '<S789>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S789>/Store Current Position' incorporates:
   *  EnablePort: '<S792>/Enable'
   */
  /* Logic: '<S789>/Logical Operator2' incorporates:
   *  Logic: '<S789>/Logical Operator1'
   *  Logic: '<S789>/Logical Operator4'
   *  RelationalOperator: '<S789>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S783>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S783>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S496>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S792>/Data Type Conversion2' incorporates:
     *  MinMax: '<S790>/MinMax'
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

    /* End of DataTypeConversion: '<S792>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S792>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_o;
    }
  }

  /* End of Logic: '<S789>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S789>/Store Current Position' */

  /* Update for S-Function (motohawk_sfun_dout): '<S800>/motohawk_dout' */

  /* S-Function Block: DOut10176p0004 */
  {
    DOut10176p0004_DiscreteOutput_Set
      (BaseEngineController_LS_B.s810_LogicalOperator);
  }

  /* Update for UnitDelay: '<S702>/Unit Delay' incorporates:
   *  MinMax: '<S725>/MinMax1'
   */
  BaseEngineController_LS_DWork.s702_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S727>/Unit Delay' */
  BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE = rtb_Sum1_nb;

  /* Update for UnitDelay: '<S759>/Unit Delay' */
  BaseEngineController_LS_DWork.s759_UnitDelay_DSTATE = rtb_Sum1_b4;

  /* Update for UnitDelay: '<S752>/Unit Delay1' */
  BaseEngineController_LS_DWork.s752_UnitDelay1_DSTATE = rtb_Merge_m;

  /* Update for UnitDelay: '<S700>/Unit Delay' incorporates:
   *  MinMax: '<S713>/MinMax1'
   */
  BaseEngineController_LS_DWork.s700_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S715>/Unit Delay' */
  BaseEngineController_LS_DWork.s715_UnitDelay_DSTATE = rtb_Sum1_m;

  /* Update for UnitDelay: '<S742>/Unit Delay' */
  BaseEngineController_LS_DWork.s742_UnitDelay_DSTATE = rtb_Sum1_h1;

  /* Update for UnitDelay: '<S735>/Unit Delay1' */
  BaseEngineController_LS_DWork.s735_UnitDelay1_DSTATE = rtb_Merge_ao;

  /* Update for UnitDelay: '<S568>/Unit Delay1' */
  BaseEngineController_LS_DWork.s568_UnitDelay1_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S582>/Unit Delay' */
  BaseEngineController_LS_DWork.s582_UnitDelay_DSTATE = rtb_Sum1_li;

  /* Update for UnitDelay: '<S453>/Unit Delay' */
  BaseEngineController_LS_DWork.s453_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s474_State;

  /* Update for UnitDelay: '<S567>/Unit Delay' */
  BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s567_Sum1;

  /* Update for UnitDelay: '<S776>/Unit Delay' */
  BaseEngineController_LS_DWork.s776_UnitDelay_DSTATE = rtb_Sum1_hw;

  /* Update for UnitDelay: '<S769>/Unit Delay1' */
  BaseEngineController_LS_DWork.s769_UnitDelay1_DSTATE = rtb_Merge_li;

  /* Update for UnitDelay: '<S793>/Unit Delay' */
  BaseEngineController_LS_DWork.s793_UnitDelay_DSTATE = rtb_Sum1_lp;

  /* Update for UnitDelay: '<S786>/Unit Delay1' */
  BaseEngineController_LS_DWork.s786_UnitDelay1_DSTATE = rtb_Merge_mv;

  /* Update for UnitDelay: '<S594>/Unit Delay' */
  BaseEngineController_LS_DWork.s594_UnitDelay_DSTATE = rtb_Sum2_gr;

  /* Update for UnitDelay: '<S569>/Unit Delay1' */
  BaseEngineController_LS_DWork.s569_UnitDelay1_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S593>/Unit Delay' */
  BaseEngineController_LS_DWork.s593_UnitDelay_DSTATE = rtb_Sum1_mz;

  /* Update for UnitDelay: '<S591>/Unit Delay' */
  BaseEngineController_LS_DWork.s591_UnitDelay_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S591>/Unit Delay1' */
  BaseEngineController_LS_DWork.s591_UnitDelay1_DSTATE = rtb_UnitDelay_nd;

  /* Update for UnitDelay: '<S591>/Unit Delay2' */
  BaseEngineController_LS_DWork.s591_UnitDelay2_DSTATE = rtb_UnitDelay1_h;

  /* Update for UnitDelay: '<S523>/Unit Delay' */
  BaseEngineController_LS_DWork.s523_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s523_Switch;

  /* Update for UnitDelay: '<S556>/Unit Delay' */
  BaseEngineController_LS_DWork.s556_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s551_Merge;

  /* Update for UnitDelay: '<S522>/Unit Delay' */
  BaseEngineController_LS_DWork.s522_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S553>/Unit Delay' */
  BaseEngineController_LS_DWork.s553_UnitDelay_DSTATE = rtb_Sum1_g3;

  /* Update for UnitDelay: '<S523>/Unit Delay1' */
  BaseEngineController_LS_DWork.s523_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s551_Merge;

  /* Update for UnitDelay: '<S523>/Unit Delay2' */
  BaseEngineController_LS_DWork.s523_UnitDelay2_DSTATE = rtb_RelOp_d;

  /* Update for Memory: '<S557>/Memory' */
  BaseEngineController_LS_DWork.s557_Memory_PreviousInput = rtb_Logic_j[0];

  /* Update for UnitDelay: '<S523>/Unit Delay3' */
  BaseEngineController_LS_DWork.s523_UnitDelay3_DSTATE =
    BaseEngineController_LS_B.s551_Merge;

  /* Update for UnitDelay: '<S456>/Unit Delay' */
  BaseEngineController_LS_DWork.s456_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s498_MultiportSwitch;

  /* Update for UnitDelay: '<S499>/Unit Delay1' */
  BaseEngineController_LS_DWork.s499_UnitDelay1_DSTATE = rtb_Merge_ox;

  /* Update for UnitDelay: '<S506>/Unit Delay' */
  BaseEngineController_LS_DWork.s506_UnitDelay_DSTATE = rtb_Sum1_ir;

  /* Update for UnitDelay: '<S500>/Unit Delay1' */
  BaseEngineController_LS_DWork.s500_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S514>/Unit Delay' */
  BaseEngineController_LS_DWork.s514_UnitDelay_DSTATE = rtb_Sum1_du;

  /* Update for UnitDelay: '<S456>/Unit Delay1' */
  BaseEngineController_LS_DWork.s456_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s513_Merge;

  /* Update for UnitDelay: '<S576>/Unit Delay1' */
  BaseEngineController_LS_DWork.s576_UnitDelay1_DSTATE = rtb_Merge_f;

  /* Update for UnitDelay: '<S645>/Unit Delay' */
  BaseEngineController_LS_DWork.s645_UnitDelay_DSTATE = rtb_Sum1_nl;

  /* Update for UnitDelay: '<S571>/Unit Delay1' */
  BaseEngineController_LS_DWork.s571_UnitDelay1_DSTATE = rtb_Merge_in;

  /* Update for UnitDelay: '<S611>/Unit Delay' */
  BaseEngineController_LS_DWork.s611_UnitDelay_DSTATE = rtb_Sum1_d4;

  /* Update for UnitDelay: '<S572>/Unit Delay1' */
  BaseEngineController_LS_DWork.s572_UnitDelay1_DSTATE = rtb_Merge_jq;

  /* Update for UnitDelay: '<S411>/Unit Delay' */
  BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE = rtb_Merge_b3;

  /* Update for UnitDelay: '<S520>/Unit Delay' */
  BaseEngineController_LS_DWork.s520_UnitDelay_DSTATE = rtb_Merge_dv;

  /* Update for UnitDelay: '<S539>/Unit Delay' */
  BaseEngineController_LS_DWork.s539_UnitDelay_DSTATE = rtb_Sum1_fm;

  /* Update for UnitDelay: '<S429>/Unit Delay2' */
  BaseEngineController_LS_DWork.s429_UnitDelay2_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S432>/Unit Delay' */
  BaseEngineController_LS_DWork.s432_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s432_Sum1;

  /* Update for UnitDelay: '<S430>/Unit Delay2' */
  BaseEngineController_LS_DWork.s430_UnitDelay2_DSTATE = rtb_UnitDelay1_k;

  /* Update for UnitDelay: '<S435>/Unit Delay' */
  BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s435_Sum1;

  /* Update for UnitDelay: '<S471>/Unit Delay' */
  BaseEngineController_LS_DWork.s471_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s567_Sum1;

  /* Update for UnitDelay: '<S473>/Unit Delay' */
  BaseEngineController_LS_DWork.s473_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s473_Sum1;

  /* Update for UnitDelay: '<S619>/Unit Delay' */
  BaseEngineController_LS_DWork.s619_UnitDelay_DSTATE = rtb_Sum1_mzy;

  /* Update for UnitDelay: '<S427>/Unit Delay' */
  BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE = rtb_LogicalOperator_c2;

  /* Update for UnitDelay: '<S423>/Unit Delay' */
  BaseEngineController_LS_DWork.s423_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s423_Sum1;

  /* Update for UnitDelay: '<S829>/Unit Delay' */
  BaseEngineController_LS_DWork.s829_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s829_Sum1;

  /* Update for UnitDelay: '<S827>/Unit Delay' */
  BaseEngineController_LS_DWork.s827_UnitDelay_DSTATE = rtb_Sum1_hu;

  /* Update for UnitDelay: '<S833>/Unit Delay2' */
  BaseEngineController_LS_DWork.s833_UnitDelay2_DSTATE = rtb_UnitDelay1_ad;

  /* Update for UnitDelay: '<S833>/Unit Delay5' */
  BaseEngineController_LS_DWork.s833_UnitDelay5_DSTATE =
    BaseEngineController_LS_B.s498_DataValidState;

  /* Update for UnitDelay: '<S839>/Unit Delay' */
  BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for UnitDelay: '<S834>/Unit Delay2' */
  BaseEngineController_LS_DWork.s834_UnitDelay2_DSTATE = rtb_UnitDelay1_pn;

  /* Update for UnitDelay: '<S834>/Unit Delay5' */
  BaseEngineController_LS_DWork.s834_UnitDelay5_DSTATE =
    BaseEngineController_LS_B.s498_DataValidState_f;

  /* Update for UnitDelay: '<S842>/Unit Delay' */
  BaseEngineController_LS_DWork.s842_UnitDelay_DSTATE = rtb_Sum1_lm;

  /* Update for UnitDelay: '<S835>/Unit Delay' */
  BaseEngineController_LS_DWork.s835_UnitDelay_DSTATE = rtb_Sum1_p3;

  /* Update for UnitDelay: '<S836>/Unit Delay' */
  BaseEngineController_LS_DWork.s836_UnitDelay_DSTATE = rtb_Sum1_a;

  /* Update for UnitDelay: '<S837>/Unit Delay' */
  BaseEngineController_LS_DWork.s837_UnitDelay_DSTATE = rtb_Sum1_j2;

  /* Update for UnitDelay: '<S833>/Unit Delay1' */
  BaseEngineController_LS_DWork.s833_UnitDelay1_DSTATE = rtb_UnitDelay3_m;

  /* Update for UnitDelay: '<S833>/Unit Delay3' */
  BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE = rtb_UnitDelay4_b;

  /* Update for UnitDelay: '<S833>/Unit Delay4' */
  BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s498_MultiportSwitch;

  /* Update for UnitDelay: '<S834>/Unit Delay1' */
  BaseEngineController_LS_DWork.s834_UnitDelay1_DSTATE = rtb_UnitDelay3_p;

  /* Update for UnitDelay: '<S834>/Unit Delay3' */
  BaseEngineController_LS_DWork.s834_UnitDelay3_DSTATE = rtb_UnitDelay4_a;

  /* Update for UnitDelay: '<S834>/Unit Delay4' */
  BaseEngineController_LS_DWork.s834_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s513_Merge;

  /* Update for UnitDelay: '<S850>/Unit Delay' */
  BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE = rtb_Sum1_cn;

  /* Update for UnitDelay: '<S570>/Unit Delay1' */
  BaseEngineController_LS_DWork.s570_UnitDelay1_DSTATE = rtb_Merge_b3f;

  /* Update for UnitDelay: '<S603>/Unit Delay' */
  BaseEngineController_LS_DWork.s603_UnitDelay_DSTATE = rtb_Sum1_cs;

  /* Update for UnitDelay: '<S851>/Unit Delay' */
  BaseEngineController_LS_DWork.s851_UnitDelay_DSTATE = rtb_Sum1_ay;

  /* Update for UnitDelay: '<S574>/Unit Delay1' */
  BaseEngineController_LS_DWork.s574_UnitDelay1_DSTATE = rtb_Merge_ol;

  /* Update for UnitDelay: '<S629>/Unit Delay' */
  BaseEngineController_LS_DWork.s629_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S852>/Unit Delay' */
  BaseEngineController_LS_DWork.s852_UnitDelay_DSTATE = rtb_Sum1_co;

  /* Update for UnitDelay: '<S854>/Unit Delay' */
  BaseEngineController_LS_DWork.s854_UnitDelay_DSTATE = rtb_Sum1_kv;

  /* Update for UnitDelay: '<S858>/Unit Delay' */
  BaseEngineController_LS_DWork.s858_UnitDelay_DSTATE = rtb_Sum1_mn;

  /* Update for UnitDelay: '<S857>/Unit Delay' */
  BaseEngineController_LS_DWork.s857_UnitDelay_DSTATE = rtb_Sum1_mw;

  /* Update for S-Function (motohawk_sfun_pwm): '<S804>/motohawk_pwm' */

  /* S-Function Block: FAN1Pin_PWM_PWMOutput */
  FAN1Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_j,
    rtb_DataTypeConversion3_c, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S804>/motohawk_pwm1' */

  /* S-Function Block: FAN2Pin_PWM_PWMOutput */
  FAN2Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_e,
    rtb_DataTypeConversion3_k, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S805>/motohawk_dout' */

  /* S-Function Block: DOut11001p0004 */
  {
    DOut11001p0004_DiscreteOutput_Set
      (BaseEngineController_LS_B.s897_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S806>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_j,
    rtb_DataTypeConversion4_m, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S807>/motohawk_pwm' */

  /* S-Function Block: IAC_PPin_PWMOutput */
  IAC_PPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_l,
    rtb_DataTypeConversion3_p, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S807>/motohawk_pwm1' */

  /* S-Function Block: IAC_SPin_PWMOutput */
  IAC_SPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_i,
    rtb_DataTypeConversion3_d, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S809>/motohawk_pwm' */

  /* S-Function Block: WASTEGATE_PWMOutput */
  WASTEGATE_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_p,
    rtb_DataTypeConversion3_e, 0, 1);

  /* Update for UnitDelay: '<S489>/Unit Delay' */
  BaseEngineController_LS_DWork.s489_UnitDelay_DSTATE = rtb_Switch_kj;

  /* Update for UnitDelay: '<S575>/Unit Delay1' */
  BaseEngineController_LS_DWork.s575_UnitDelay1_DSTATE = rtb_Merge_ht;

  /* Update for UnitDelay: '<S637>/Unit Delay' */
  BaseEngineController_LS_DWork.s637_UnitDelay_DSTATE = rtb_Sum1_m3;

  /* Update for UnitDelay: '<S429>/Unit Delay1' */
  BaseEngineController_LS_DWork.s429_UnitDelay1_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S429>/Unit Delay3' */
  BaseEngineController_LS_DWork.s429_UnitDelay3_DSTATE = rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S429>/Unit Delay4' */
  BaseEngineController_LS_DWork.s429_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s567_Sum1;

  /* Update for UnitDelay: '<S430>/Unit Delay1' */
  BaseEngineController_LS_DWork.s430_UnitDelay1_DSTATE = rtb_UnitDelay3_j;

  /* Update for UnitDelay: '<S430>/Unit Delay3' */
  BaseEngineController_LS_DWork.s430_UnitDelay3_DSTATE = rtb_UnitDelay4_ie;

  /* Update for UnitDelay: '<S430>/Unit Delay4' */
  BaseEngineController_LS_DWork.s430_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s610_Merge;

  /* Update for UnitDelay: '<S478>/Unit Delay' */
  BaseEngineController_LS_DWork.s478_UnitDelay_DSTATE = rtb_LogicalOperator1_er;

  /* Update for UnitDelay: '<S739>/Unit Delay1' */
  BaseEngineController_LS_DWork.s739_UnitDelay1_DSTATE =
    rtb_DataTypeConversion1_e;

  /* Update for UnitDelay: '<S739>/Unit Delay' */
  BaseEngineController_LS_DWork.s739_UnitDelay_DSTATE =
    rtb_DataTypeConversion_b2;

  /* Update for UnitDelay: '<S739>/Unit Delay3' */
  BaseEngineController_LS_DWork.s739_UnitDelay3_DSTATE = rtb_Product1_gw;

  /* Update for UnitDelay: '<S739>/Unit Delay4' */
  BaseEngineController_LS_DWork.s739_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s704_Switch;

  /* Update for UnitDelay: '<S756>/Unit Delay1' */
  BaseEngineController_LS_DWork.s756_UnitDelay1_DSTATE = rtb_Switch3_p;

  /* Update for UnitDelay: '<S756>/Unit Delay' */
  BaseEngineController_LS_DWork.s756_UnitDelay_DSTATE = rtb_Switch2_a;

  /* Update for UnitDelay: '<S756>/Unit Delay3' */
  BaseEngineController_LS_DWork.s756_UnitDelay3_DSTATE = rtb_Switch1_f;

  /* Update for UnitDelay: '<S756>/Unit Delay4' */
  BaseEngineController_LS_DWork.s756_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s705_Switch;

  /* Update for UnitDelay: '<S773>/Unit Delay1' */
  BaseEngineController_LS_DWork.s773_UnitDelay1_DSTATE = rtb_Switch_om;

  /* Update for UnitDelay: '<S773>/Unit Delay' */
  BaseEngineController_LS_DWork.s773_UnitDelay_DSTATE = rtb_Switch4_i;

  /* Update for UnitDelay: '<S773>/Unit Delay3' */
  BaseEngineController_LS_DWork.s773_UnitDelay3_DSTATE =
    rtb_Multiplyby10ifnotyetenabled_c;

  /* Update for UnitDelay: '<S773>/Unit Delay4' */
  BaseEngineController_LS_DWork.s773_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s706_Switch;

  /* Update for UnitDelay: '<S790>/Unit Delay1' */
  BaseEngineController_LS_DWork.s790_UnitDelay1_DSTATE = rtb_Switch_fz;

  /* Update for UnitDelay: '<S790>/Unit Delay' */
  BaseEngineController_LS_DWork.s790_UnitDelay_DSTATE =
    rtb_DataTypeConversion_ik;

  /* Update for UnitDelay: '<S790>/Unit Delay3' */
  BaseEngineController_LS_DWork.s790_UnitDelay3_DSTATE = rtb_APP2;

  /* Update for UnitDelay: '<S790>/Unit Delay4' */
  BaseEngineController_LS_DWork.s790_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s707_Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
