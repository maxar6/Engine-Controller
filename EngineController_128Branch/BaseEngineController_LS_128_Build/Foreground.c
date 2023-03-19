/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS_128'.
 *
 * Model version                  : 1.2189
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 22 13:22:09 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Foreground.h"

/* Include model header file for global data */
#include "BaseEngineController_LS_128.h"
#include "BaseEngineController_LS_128_private.h"

/* Named constants for Stateflow: '<S20>/ETC Test  Manager' */
#define BaseEngineController_LS_128_IN_ForcedShutdown (1U)
#define BaseEngineController_LS_128_IN_LowAdapt (2U)
#define BaseEngineController_LS_128_IN_PassThrough (3U)
#define BaseEngineController_LS_128_IN_SpringTest (4U)
#define BaseEngineController_LS_128_IN_SpringTestComplete (5U)
#define BaseEngineController_LS_128_IN_SpringTestSetpoint (6U)

/* Named constants for Stateflow: '<S283>/Ice Break' */
#define BaseEngineController_LS_128_IN_Init (1U)
#define BaseEngineController_LS_128_IN_Open (2U)
#define BaseEngineController_LS_128_IN_Wait (3U)

/* Named constants for Stateflow: '<S397>/Baro Stall State Delay' */
#define BaseEngineController_LS_128_IN_CrankRun (1U)
#define BaseEngineController_LS_128_IN_Stall (2U)
#define BaseEngineController_LS_128_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S447>/Engine State Machine' */
#define BaseEngineController_LS_128_IN_Crank (1U)
#define BaseEngineController_LS_128_IN_Run (2U)
#define BaseEngineController_LS_128_IN_Stall_k (3U)

/*
 * Initial conditions for enable system:
 *    '<S404>/Collect Average'
 *    '<S443>/Collect Average'
 *    '<S444>/Collect Average'
 */
void BaseEngineController_LS_128_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS_128 *localDW)
{
  /* InitializeConditions for UnitDelay: '<S408>/Unit Delay1' */
  localDW->s408_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S404>/Collect Average'
 *    '<S443>/Collect Average'
 *    '<S444>/Collect Average'
 */
void BaseEngineController_LS_128_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS_128 *localDW)
{
  localDW->s404_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S404>/Collect Average'
 *    '<S443>/Collect Average'
 *    '<S444>/Collect Average'
 */
void BaseEngineController_LS_128_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS_128 *localDW)
{
  BaseEngineController_LS_128_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S404>/Collect Average'
 *    '<S443>/Collect Average'
 *    '<S444>/Collect Average'
 */
void BaseEngineController_LS_128_CollectAverage(boolean_T rtu_0, int8_T
  rtu_Count, real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS_128
  *localB, rtDW_CollectAverage_BaseEngineController_LS_128 *localDW)
{
  real_T rtb_Sum1_mq;

  /* Outputs for Enabled SubSystem: '<S404>/Collect Average' incorporates:
   *  EnablePort: '<S408>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s404_CollectAverage_MODE) {
      BaseEngineController_LS_128_CollectAverage_Init(localDW);
      localDW->s404_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S408>/Sum1' incorporates:
     *  UnitDelay: '<S408>/Unit Delay1'
     */
    rtb_Sum1_mq = rtu_Signal + localDW->s408_UnitDelay1_DSTATE;

    /* Product: '<S408>/Product' incorporates:
     *  DataTypeConversion: '<S408>/Data Type Conversion'
     */
    localB->s408_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_mq;

    /* Update for UnitDelay: '<S408>/Unit Delay1' */
    localDW->s408_UnitDelay1_DSTATE = rtb_Sum1_mq;
  } else {
    if (localDW->s404_CollectAverage_MODE) {
      BaseEngineController_LS_128_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S404>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S442>/PassThrough1'
 *    '<S442>/PassThrough2'
 */
void BaseEngineController_LS_128_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S458>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S442>/PassThrough1'
 *    '<S442>/PassThrough2'
 */
void BaseEngineController_LS_128_PassThrough1(boolean_T rtu_0, real_T rtu_1,
  real_T *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S442>/PassThrough1' incorporates:
   *  EnablePort: '<S458>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S458>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S442>/PassThrough1' */
}

/*
 * Output and update for enable system:
 *    '<S344>/GetInstRPM'
 *    '<S345>/GetInstRPM'
 */
void BaseEngineController_LS_128_GetInstRPM(boolean_T rtu_0,
  rtB_GetInstRPM_BaseEngineController_LS_128 *localB)
{
  /* Outputs for Enabled SubSystem: '<S344>/GetInstRPM' incorporates:
   *  EnablePort: '<S352>/Enable'
   */
  if (rtu_0) {
    /* S-Function Block: <S352>/motohawk_encoder_instant_rpm */
    {
      localB->s352_motohawk_encoder_instant_rpm = GetEncoderResourceInstantRPM();
    }
  }

  /* End of Outputs for SubSystem: '<S344>/GetInstRPM' */
}

/*
 * Output and update for enable system:
 *    '<S344>/SafeDivide'
 *    '<S345>/SafeDivide'
 */
void BaseEngineController_LS_128_SafeDivide(boolean_T rtu_0, uint8_T rtu_Count,
  uint16_T rtu_RPMSum, rtB_SafeDivide_BaseEngineController_LS_128 *localB)
{
  uint32_T u;

  /* Outputs for Enabled SubSystem: '<S344>/SafeDivide' incorporates:
   *  EnablePort: '<S354>/Enable'
   */
  if (rtu_0) {
    /* MinMax: '<S354>/MinMax' incorporates:
     *  Constant: '<S354>/Constant'
     */
    u = rtu_Count;

    /* Product: '<S354>/Product' incorporates:
     *  Constant: '<S354>/Constant'
     *  MinMax: '<S354>/MinMax'
     */
    localB->s354_Product = (uint16_T)((uint32_T)rtu_RPMSum / (uint32_T)(int32_T)
                                      (u >= 1U ? u : 1U));
  }

  /* End of Outputs for SubSystem: '<S344>/SafeDivide' */
}

/*
 * Output and update for action system:
 *    '<S489>/If Action Subsystem'
 *    '<S489>/If Action Subsystem1'
 *    '<S489>/If Action Subsystem2'
 *    '<S490>/If Action Subsystem'
 *    '<S490>/If Action Subsystem1'
 *    '<S490>/If Action Subsystem2'
 *    '<S510>/If Action Subsystem'
 *    '<S510>/If Action Subsystem1'
 *    '<S510>/If Action Subsystem2'
 *    '<S512>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_128_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S492>/In' */
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
void BaseEngineController_LS_128_Foreground_Init(void)
{
  /* Initial conditions for function-call system: '<S485>/Temp Sensors' */

  /* S-Function Block: <S663>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s663_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S681>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s681_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S672>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s672_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s654_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S710>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s710_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S741>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s741_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S698>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s698_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s724_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s471_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S567>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s567_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S447>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S468>:4' */
  BaseEngineController_LS_128_DWork.s468_is_c2_BaseEngineController_LS_128 =
    BaseEngineController_LS_128_IN_Stall_k;

  /* Entry 'Stall': '<S468>:1' */
  BaseEngineController_LS_128_B.s468_State = 1U;

  /* S-Function Block: <S550>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s550_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S758>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s758_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S775>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s775_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S584>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s584_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S580>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s580_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S537>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s537_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s546_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* InitializeConditions for Atomic SubSystem: '<S401>/Base TPS Request' */

  /* S-Function Block: <S460>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s460_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S442>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s442_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S401>/Base TPS Request' */

  /* S-Function Block: <S491>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s491_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S499>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s499_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s473_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S630>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s630_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s596_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S397>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s397_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S397>/Baro Stall State Delay' */
  BaseEngineController_LS_128_DWork.s403_TOld = 0.0;
  BaseEngineController_LS_128_B.s403_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S403>:4' */
  BaseEngineController_LS_128_DWork.s403_is_c19_BaseEngineController_LS_128 =
    BaseEngineController_LS_128_IN_Stall;

  /* Entry 'Stall': '<S403>:1' */
  BaseEngineController_LS_128_B.s403_Enable = TRUE;

  /* S-Function Block: <S410>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s410_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s523_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S465>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s465_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S534>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s534_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S604>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s604_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S485>/Fuel Level' */

  /* S-Function Block: <S641>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s641_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S398>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s398_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s818_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S815>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s815_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s820_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S821>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s821_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S822>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s822_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s837_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S588>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s588_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S838>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s838_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S614>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s614_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S839>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s839_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s843_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S846>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s846_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s845_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S891>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s891_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s475_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S622>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s622_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S548>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s548_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* Initial conditions for function-call system: '<S691>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S709>/Initial Condition is True' */
  BaseEngineController_LS_128_DWork.s709_InitialConditionisTrue_DSTATE = TRUE;

  /* Initial conditions for function-call system: '<S693>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S721>/Initial Condition is True' */
  BaseEngineController_LS_128_DWork.s721_InitialConditionisTrue_DSTATE = TRUE;
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_128_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S485>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_128_DWork.s485_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S447>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_128_DWork.s447_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S563>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_128_DWork.s563_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S485>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_128_DWork.s485_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_128_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_128_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S849>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S854>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_128_DWork.s854_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S849>/EST Enable TDC Counter' */
  BaseEngineController_LS_128_DWork.s13_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S691>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_128_DWork.s691_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S693>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_128_DWork.s693_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_128_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S485>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_128_DWork.s485_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S447>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_128_DWork.s447_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  /* Disable for Stateflow: '<S283>/Ice Break' */
  BaseEngineController_LS_128_DWork.s291_presentTicks =
    BaseEngineController_LS_128_M->Timing.clockTick0;
  BaseEngineController_LS_128_DWork.s291_elapsedTicks =
    BaseEngineController_LS_128_DWork.s291_presentTicks -
    BaseEngineController_LS_128_DWork.s291_previousTicks;
  BaseEngineController_LS_128_DWork.s291_previousTicks =
    BaseEngineController_LS_128_DWork.s291_presentTicks;
  BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 =
    BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 +
    BaseEngineController_LS_128_DWork.s291_elapsedTicks;
  BaseEngineController_LS_128_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_LS_128_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Level2 S-Function Block: '<S563>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_128_DWork.s563_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S397>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S404>/Collect Average' */
  BaseEngineController_LS_128_CollectAverage_Disable
    (&BaseEngineController_LS_128_DWork.s404_CollectAverage);

  /* End of Disable for SubSystem: '<S404>/Collect Average' */
  BaseEngineController_LS_128_DWork.s397_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S397>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S401>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S443>/Collect Average' */
  BaseEngineController_LS_128_CollectAverage_Disable
    (&BaseEngineController_LS_128_DWork.s443_CollectAverage);

  /* End of Disable for SubSystem: '<S443>/Collect Average' */
  BaseEngineController_LS_128_DWork.s401_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S401>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
  BaseEngineController_LS_128_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S107>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S165>/ECT Transient Fueling' */
  /* Disable for Outport: '<S169>/Mult' */
  BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_128_DWork.s165_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S165>/ECT Transient Fueling' */

  /* Disable for Enabled SubSystem: '<S165>/OXY Transient Fueling' */
  /* Disable for Outport: '<S172>/Mult' */
  BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_128_DWork.s165_OXYTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S165>/OXY Transient Fueling' */

  /* Disable for Outport: '<S165>/DeltaTPSMult' */
  BaseEngineController_LS_128_B.s165_Product1 = 1.0;
  BaseEngineController_LS_128_DWork.s160_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S160>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S107>/Injector Manager' */
  /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
  BaseEngineController_LS_128_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S485>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_128_DWork.s485_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_128_DWork.s22_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S67>/Out1' */
    BaseEngineController_LS_128_B.s22_Merge1[i] = 0;

    /* Disable for Outport: '<S69>/Out1' */
    BaseEngineController_LS_128_B.s22_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_128_DWork.s22_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_869p0001 */
  BaseEngineController_LS_128_DWork.s72_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_128_DWork.s22_SequenceCutMachine_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/SequenceCutMachine' */

  /* Disable for Enabled SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_128_DWork.s22_PassThrough5_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S71>/Out1' */
    BaseEngineController_LS_128_B.s71_DataTypeConversion1[i] = FALSE;

    /* Disable for Outport: '<S70>/Out1' */
    BaseEngineController_LS_128_B.s70_DataTypeConversion[i] = FALSE;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_128_DWork.s22_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough4' */

  /* Disable for Enabled SubSystem: '<S401>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S444>/Collect Average' */
  BaseEngineController_LS_128_CollectAverage_Disable
    (&BaseEngineController_LS_128_DWork.s444_CollectAverage);

  /* End of Disable for SubSystem: '<S444>/Collect Average' */
  BaseEngineController_LS_128_DWork.s401_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S401>/Capture IAT At Startup' */

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_128_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_128_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S849>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S854>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_128_DWork.s854_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S849>/EST Enable TDC Counter' */
  BaseEngineController_LS_128_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
  /* Disable for Outport: '<S52>/Out1' */
  BaseEngineController_LS_128_B.s52_In1 = 10.0;
  BaseEngineController_LS_128_DWork.s31_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S31>/PassThrough' */
  BaseEngineController_LS_128_DWork.s14_ElectronicThrottleController_MODE =
    FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S479>/Triggered Subsystem' incorporates:
   *  Disable for S-Function (fcncallgen): '<S480>/Function-Call Generator'
   *  Disable for SubSystem: '<S11>/Diagnostics'
   *  Disable for SubSystem: '<S303>/MisfireDiagSub'
   */

  /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_HIRES_6521p0004 */

  /* Disable for function-call system: '<S324>/MisfireDiagFunc' */
  BaseEngineController_LS_128_DWork.s343_If_ActiveSubsystem = -1;
  BaseEngineController_LS_128_DWork.s324_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_128_DWork.s303_MisfireDiagSub_MODE = FALSE;
  BaseEngineController_LS_128_DWork.s479_TriggeredSubsystem_MODE = FALSE;

  /* Level2 S-Function Block: '<S691>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_128_DWork.s691_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S693>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_128_DWork.s693_motohawk_trigger_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_128_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S485>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_128_DWork.s485_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S447>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_128_DWork.s447_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S287>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s287_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S288>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s288_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S289>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s289_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s290_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S292>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s292_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S283>/Ice Break' */
  BaseEngineController_LS_128_DWork.s291_is_active_c3_BaseEngineController_LS_128
    = 0U;
  BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128 = 0U;
  BaseEngineController_LS_128_B.s291_etc = 0.0;
  BaseEngineController_LS_128_DWork.s291_presentTicks = 0U;
  BaseEngineController_LS_128_DWork.s291_elapsedTicks = 0U;
  BaseEngineController_LS_128_DWork.s291_previousTicks = 0U;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Atomic SubSystem: '<S401>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S442>/PassThrough1' */
  BaseEngineController_LS_128_PassThrough1_Start
    (&BaseEngineController_LS_128_B.s442_Merge);

  /* End of Start for SubSystem: '<S442>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S442>/PassThrough2' */
  BaseEngineController_LS_128_PassThrough1_Start
    (&BaseEngineController_LS_128_B.s442_Merge);

  /* End of Start for SubSystem: '<S442>/PassThrough2' */

  /* End of Start for SubSystem: '<S401>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S563>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_128_DWork.s563_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S397>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S404>/Collect Average' */
  BaseEngineController_LS_128_CollectAverage_Start
    (&BaseEngineController_LS_128_DWork.s404_CollectAverage);

  /* End of Start for SubSystem: '<S404>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S404>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s404_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S397>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S423>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S427>/Out1' */
  BaseEngineController_LS_128_B.s423_Merge = 0.005;

  /* End of Start for SubSystem: '<S423>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S423>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S425>/Out1' */
  BaseEngineController_LS_128_B.s423_Merge = 0.005;

  /* End of Start for SubSystem: '<S423>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S424>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S430>/Out1' */
  BaseEngineController_LS_128_B.s424_Merge = 0.005;

  /* End of Start for SubSystem: '<S424>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S424>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S428>/Out1' */
  BaseEngineController_LS_128_B.s424_Merge = 0.005;

  /* End of Start for SubSystem: '<S424>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S401>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S443>/Collect Average' */
  BaseEngineController_LS_128_CollectAverage_Start
    (&BaseEngineController_LS_128_DWork.s443_CollectAverage);

  /* End of Start for SubSystem: '<S443>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S443>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s443_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S401>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
  BaseEngineController_LS_128_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */

  /* Start for InitialCondition: '<S243>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_128_DWork.s243_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S111>/O2 PID Controller Bank A' */

  /* Start for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */

  /* Start for InitialCondition: '<S244>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_128_DWork.s244_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S111>/O2 PID Controller Bank B' */

  /* End of Start for SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S93>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S107>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S165>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S169>/Mult' */
  BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S165>/ECT Transient Fueling' */

  /* Start for Enabled SubSystem: '<S165>/OXY Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S172>/Mult' */
  BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S165>/OXY Transient Fueling' */

  /* S-Function Block: <S171>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s171_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S174>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s174_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S170>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s170_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S173>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s173_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S165>/DeltaTPSMult' */
  BaseEngineController_LS_128_B.s165_Product1 = 1.0;

  /* End of Start for SubSystem: '<S160>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S107>/Injector Manager' */

  /* End of Start for SubSystem: '<S93>/Fuel System Manager' */

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
    /* Initial conditions for function-call system: '<S93>/DFCO' */

    /* S-Function Block: <S150>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_128_DWork.s150_motohawk_delta_time_DWORK1 = now -
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
      BaseEngineController_LS_128_DWork.s148_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
    /* Initial conditions for function-call system: '<S93>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S206>/IdleStateMachine' */
    BaseEngineController_LS_128_IdleStateMachine_Init();

    /* S-Function Block: <S205>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_128_DWork.s205_motohawk_delta_time_DWORK1 = now -
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
      BaseEngineController_LS_128_DWork.s209_motohawk_delta_time_DWORK1 = now -
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
      BaseEngineController_LS_128_DWork.s212_motohawk_delta_time_DWORK1 = now -
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
      BaseEngineController_LS_128_DWork.s237_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
    /* Initial conditions for function-call system: '<S93>/Boost Control' */

    /* S-Function Block: <S133>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_128_DWork.s133_motohawk_delta_time_DWORK1 = now -
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
      BaseEngineController_LS_128_DWork.s143_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
    /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

    /* S-Function Block: <S188>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_128_DWork.s188_motohawk_delta_time_DWORK1 = now -
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
      BaseEngineController_LS_128_DWork.s199_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
    /* Initial conditions for function-call system: '<S93>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S278>/Initial Condition is True' */
    BaseEngineController_LS_128_DWork.s278_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */
  /* InitializeConditions for UnitDelay: '<S257>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s257_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s254_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S253>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s253_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S254>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s254_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s250_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S258>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s258_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s250_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S260>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s260_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s250_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S259>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s259_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank A' */

  /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */
  /* InitializeConditions for UnitDelay: '<S269>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s269_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s266_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s265_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S266>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s266_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s262_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S270>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s270_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s262_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S272>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s272_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s262_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S271>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s271_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank B' */
  /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S485>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_128_DWork.s485_motohawk_trigger1_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S823>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S830>/Out1' */
  BaseEngineController_LS_128_B.s823_Merge = 0.005;

  /* End of Start for SubSystem: '<S823>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S823>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S828>/Out1' */
  BaseEngineController_LS_128_B.s823_Merge = 0.005;

  /* End of Start for SubSystem: '<S823>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S824>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S833>/Out1' */
  BaseEngineController_LS_128_B.s824_Merge = 0.005;

  /* End of Start for SubSystem: '<S824>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S824>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S831>/Out1' */
  BaseEngineController_LS_128_B.s824_Merge = 0.005;

  /* End of Start for SubSystem: '<S824>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S72>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S82>/CycleCounter' */
  BaseEngineController_LS_128_B.s82_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S82>/CycleNumber' */
  BaseEngineController_LS_128_B.s82_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_869p0001 */
  BaseEngineController_LS_128_DWork.s72_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s72_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s72_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for Enabled SubSystem: '<S401>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S444>/Collect Average' */
  BaseEngineController_LS_128_CollectAverage_Start
    (&BaseEngineController_LS_128_DWork.s444_CollectAverage);

  /* End of Start for SubSystem: '<S444>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S444>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s444_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S401>/Capture IAT At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_128_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_128_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S849>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S854>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_128_DWork.s854_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S849>/EST Enable TDC Counter' */

  /* S-Function Block: <S792>/Spark Sequence */
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
        if ((EST_InitialPin_DataStore()) + i <= 51) {
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
        if ((EST_InitialPin_DataStore()) + i <= 51) {
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
          if ((EST_InitialPin_DataStore()) + pin <= 51) {
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
  BaseEngineController_LS_128_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S31>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S52>/Out1' */
  BaseEngineController_LS_128_B.s52_In1 = 10.0;

  /* End of Start for SubSystem: '<S31>/PassThrough' */

  /* S-Function Block: <S63>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s63_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S20>/ETC Test  Manager' */
  BaseEngineController_LS_128_DWork.s27_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S27>:7' */
  BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
    BaseEngineController_LS_128_IN_PassThrough;

  /* Entry 'PassThrough': '<S27>:1' */
  BaseEngineController_LS_128_B.s27_DC_Override = 0;
  BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
  BaseEngineController_LS_128_B.s27_SetpointMode = 0;
  BaseEngineController_LS_128_B.s27_TestTime = 0.0;

  /* S-Function Block: <S55>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s55_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s43_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s48_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* S-Function Block: <S798>/Injector Sequence */
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

    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S479>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S480>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S479>/Triggered Subsystem' incorporates:
   *  Start for SubSystem: '<S303>/MisfireDiagSub'
   */

  /* Start for function-call system: '<S324>/MisfireDiagFunc' */

  /* Start for If: '<S343>/If' */
  BaseEngineController_LS_128_DWork.s343_If_ActiveSubsystem = -1;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_HIRES_6521p0004 */
  BaseEngineController_LS_128_DWork.s324_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S479>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S480>/Function-Call Generator'
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
    BaseEngineController_LS_128_DWork.s310_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s311_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s378_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S381>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s381_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s379_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S380>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s380_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_128_DWork.s314_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Start for S-Function (motohawk_sfun_trigger): '<S691>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_128_DWork.s691_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S693>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_128_DWork.s693_motohawk_trigger_DWORK1 = 0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_128_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion_kg;
  real_T rtb_UnitDelay_b3;
  real_T rtb_Merge_fq;
  real_T rtb_Sum1_j3;
  real_T rtb_UnitDelay1_c;
  real_T rtb_Merge_cq;
  real_T rtb_DataTypeConversion_c;
  real_T rtb_UnitDelay_k3;
  real_T rtb_Merge_hq;
  real_T rtb_Sum1_gn;
  real_T rtb_UnitDelay1_l;
  real_T rtb_Merge_k;
  real_T rtb_APP1;
  real_T rtb_motohawk_delta_time_l;
  real_T rtb_UnitDelay1_g;
  real_T rtb_Merge_fr;
  real_T rtb_Sum1_bc;
  real_T rtb_UnitDelay1_n;
  real_T rtb_Merge_p;
  real_T rtb_Sum1_ly;
  real_T rtb_UnitDelay1_b2;
  real_T rtb_Merge_ho;
  real_T rtb_motohawk_delta_time_ly;
  real_T rtb_Saturation_pm;
  real_T rtb_UnitDelay1_f;
  real_T rtb_Merge_n;
  real_T rtb_UnitDelay_ag;
  real_T rtb_Merge_fv;
  real_T rtb_motohawk_delta_time_ni;
  real_T rtb_UnitDelay1_i;
  real_T rtb_Merge_o;
  real_T rtb_UnitDelay1_ec;
  real_T rtb_Merge_g;
  real_T rtb_motohawk_delta_time_oq;
  real_T rtb_UnitDelay1_gd;
  real_T rtb_Merge_g0;
  real_T rtb_UnitDelay1_c3;
  real_T rtb_Merge_e;
  real_T rtb_UnitDelay1_g4;
  real_T rtb_Merge_fo;
  real_T rtb_motohawk_delta_time_px;
  real_T rtb_motohawk_interpolation_2d_i;
  real_T rtb_Saturation1_c;
  real_T rtb_motohawk_interpolation_1d1_o;
  real_T rtb_motohawk_interpolation_2d1_g;
  real_T rtb_UnitDelay_cwg;
  real_T rtb_Merge_fh;
  real_T rtb_motohawk_delta_time_pc;
  real_T rtb_motohawk_delta_time_ny;
  real_T rtb_motohawk_delta_time_ih;
  real_T rtb_Sum1_nn;
  real_T rtb_motohawk_delta_time_kj;
  real_T rtb_motohawk_delta_time_he;
  real_T rtb_Gain_a;
  real_T rtb_Sum1_oe;
  real_T rtb_Sum1_jq;
  real_T rtb_Sum1_in;
  real_T rtb_motohawk_data_read_p;
  real_T rtb_UnitDelay1_g4e;
  real_T rtb_Merge_i;
  real_T rtb_Sum1_kq;
  real_T rtb_UnitDelay1_fc;
  real_T rtb_Merge_oo;
  real_T rtb_Sum1_mk;
  real_T rtb_MathFunction;
  real_T rtb_Product_fp;
  real_T rtb_motohawk_data_read2_n;
  real_T rtb_motohawk_data_read1_bj;
  real_T rtb_motohawk_data_read_d;
  real_T rtb_Sum1_j4;
  real_T rtb_motohawk_data_read_g0;
  real_T rtb_motohawk_data_read2_f;
  real_T rtb_Sum1_jh;
  real_T rtb_Sum1_f3;
  real_T rtb_motohawk_delta_time_hr;
  real_T rtb_motohawk_delta_time_nz;
  real_T rtb_Saturation_d;
  real_T rtb_motohawk_interpolation_1d3_n;
  real_T rtb_motohawk_interpolation_1d4_k;
  real_T rtb_motohawk_interpolation_1d1_md;
  real_T rtb_UnitDelay1_o;
  real_T rtb_Merge_l;
  real_T rtb_Saturation_ng;
  real_T rtb_Saturation_o;
  real_T rtb_Saturation_h5;
  real_T rtb_Saturation_oe;
  real_T rtb_Saturation_pn;
  real_T rtb_motohawk_delta_time_gh;
  real_T rtb_Saturation_jq;
  real_T rtb_motohawk_delta_time_m;
  real_T rtb_Saturation_a;
  real_T rtb_motohawk_interpolation_1d_f;
  real_T rtb_motohawk_delta_time_b;
  real_T rtb_motohawk_delta_time_e;
  real_T rtb_Saturation_dp;
  real_T rtb_Saturation_g;
  real_T rtb_motohawk_interpolation_2d_n;
  real_T rtb_motohawk_delta_time_ge;
  real_T rtb_motohawk_delta_time_i0;
  real_T rtb_motohawk_delta_time_c2;
  real_T rtb_motohawk_delta_time_db;
  real_T rtb_Saturation_jb;
  real_T rtb_Saturation_dpy;
  real_T rtb_Saturation_hl;
  real_T rtb_Saturation_ag;
  real_T rtb_motohawk_interpolation_1d_fg;
  real_T rtb_motohawk_interpolation_2d_ny;
  real_T rtb_motohawk_delta_time_br;
  real_T rtb_Divide_g;
  real_T rtb_motohawk_interpolation_1d_k;
  real_T rtb_Divide1;
  real_T rtb_motohawk_delta_time_df;
  real_T rtb_motohawk_delta_time_hj;
  real_T rtb_Saturation_hq;
  real_T rtb_motohawk_interpolation_1d_b;
  real_T rtb_motohawk_interpolation_1d1_ol;
  real_T rtb_motohawk_interpolation_1d2_jf;
  real_T rtb_motohawk_interpolation_1d_jg;
  real_T rtb_RichEquivRatioTargetDelta_f;
  real_T rtb_LeanEquivRatioTargetDelta;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_g;
  real_T rtb_motohawk_interpolation_1d1_ov;
  real_T rtb_motohawk_delta_time_ka;
  real_T rtb_motohawk_delta_time_gl;
  real_T rtb_motohawk_delta_time_gq;
  real_T rtb_motohawk_delta_time_g3;
  real_T rtb_motohawk_delta_time_al;
  real_T rtb_Saturation_gq;
  real_T rtb_Saturation_ez;
  real_T rtb_Saturation_np;
  real_T rtb_motohawk_delta_time_gho;
  real_T rtb_motohawk_delta_time_hev;
  real_T rtb_motohawk_delta_time_me;
  real_T rtb_motohawk_delta_time_pg;
  real_T rtb_motohawk_delta_time_lq;
  real_T rtb_Saturation_pj;
  real_T rtb_Saturation_hi;
  real_T rtb_Saturation_fa;
  real_T rtb_motohawk_interpolation_1d1_e;
  real_T rtb_motohawk_interpolation_2d2_a;
  real_T rtb_motohawk_interpolation_1d2_a;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_motohawk_interpolation_2d1_i;
  real_T rtb_motohawk_delta_time_g4;
  real_T rtb_Saturation_i;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d2_b;
  real_T rtb_motohawk_interpolation_2d1_c;
  real_T rtb_motohawk_interpolation_1d_id;
  real_T rtb_motohawk_interpolation_2d3_k;
  real_T rtb_WarmUptimeRatio;
  real_T rtb_Product_oys;
  real_T rtb_motohawk_interpolation_2d_f;
  real_T rtb_motohawk_interpolation_1d_p;
  real_T rtb_motohawk_interpolation_1d1_mm;
  real_T rtb_motohawk_interpolation_2d_j;
  real_T rtb_motohawk_interpolation_2d1_p;
  real_T rtb_motohawk_interpolation_1d4_f;
  real_T rtb_motohawk_interpolation_1d5;
  real_T rtb_motohawk_interpolation_1d1_f;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_interpolation_1d_jm;
  real_T rtb_motohawk_interpolation_2d_k;
  real_T rtb_motohawk_delta_time_p3;
  real_T rtb_motohawk_delta_time_b3;
  real_T rtb_motohawk_delta_time_oh;
  real_T rtb_motohawk_interpolation_1d_l;
  real_T rtb_motohawk_delta_time_p5;
  real_T rtb_motohawk_delta_time_dq;
  real_T rtb_motohawk_delta_time_ko;
  real_T rtb_Add_d;
  real_T rtb_motohawk_interpolation_1d_jp;
  real_T rtb_motohawk_interpolation_1d_o;
  real_T rtb_motohawk_delta_time_aj;
  real_T rtb_Saturation_jm;
  real_T rtb_Saturation_c;
  real_T rtb_motohawk_interpolation_2d_h;
  real_T rtb_motohawk_interpolation_1d2_lh;
  real_T rtb_motohawk_interpolation_1d1_h;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_p;
  real_T rtb_Product_pi;
  real_T rtb_UnitDelay_ik;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_al;
  real_T rtb_DataTypeConversion_o;
  real_T rtb_motohawk_interpolation_1d3_nj;
  real_T rtb_Product5_iu;
  real_T rtb_Switch_ic;
  real_T rtb_DataTypeConversion_hs;
  real_T rtb_DataTypeConversion_p;
  real_T rtb_Abs_eu;
  real_T rtb_Switch_bx;
  uint32_T rtb_DataTypeConversion2_o;
  uint32_T rtb_DataTypeConversion2_p;
  uint32_T rtb_DataTypeConversion3_i;
  uint32_T rtb_DataTypeConversion2_j;
  uint32_T rtb_DataTypeConversion2_g;
  uint32_T rtb_DataTypeConversion2_pa;
  uint32_T rtb_DataTypeConversion1_j;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_ig;
  uint32_T rtb_UnitDelay_ev;
  uint32_T rtb_DataTypeConversion6;
  int16_T rtb_motohawk_data_read_ma;
  int16_T rtb_DataTypeConversion3_j;
  int16_T rtb_DataTypeConversion3_p;
  int16_T rtb_DataTypeConversion4_i;
  int16_T rtb_DataTypeConversion3_m;
  int16_T rtb_DataTypeConversion3_e;
  int16_T rtb_DataTypeConversion3_n;
  int16_T rtb_DataTypeConversion3_g;
  int16_T rtb_DataTypeConversion7;
  int16_T rtb_DataTypeConversion2_bp;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain5_o;
  uint16_T rtb_RPM;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain9;
  uint16_T rtb_motohawk_ain1;
  uint16_T rtb_motohawk_ain6_k;
  uint16_T rtb_motohawk_ain_read_d;
  uint16_T rtb_motohawk_encoder_average_rpm;
  uint16_T rtb_motohawk_ain_read_g;
  uint16_T rtb_motohawk_ain_read_o;
  uint16_T rtb_DataTypeConversion2_bf;
  uint16_T rtb_DataTypeConversion2_i;
  uint16_T rtb_DataTypeConversion2_gq;
  uint16_T rtb_DataTypeConversion2_m;
  uint16_T rtb_DataTypeConversion2_gz;
  uint16_T rtb_DataTypeConversion2_f;
  uint16_T rtb_DataTypeConversion2_k;
  uint16_T rtb_DataTypeConversion2_bh;
  uint16_T rtb_DataTypeConversion_iy;
  uint16_T rtb_Product_ij;
  index_T rtb_motohawk_prelookup_cs;
  index_T rtb_motohawk_prelookup_a;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup_p;
  index_T rtb_motohawk_prelookup1_m;
  index_T rtb_motohawk_prelookup1_a;
  index_T rtb_motohawk_prelookup_k;
  index_T rtb_motohawk_prelookup2_d;
  index_T rtb_motohawk_prelookup1_nd;
  index_T rtb_motohawk_prelookup2_l;
  index_T rtb_motohawk_prelookup_d;
  index_T rtb_motohawk_prelookup_a3;
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_TimeSinceRun09;
  index_T rtb_motohawk_prelookup1_gl;
  index_T rtb_motohawk_prelookup_du;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_h;
  index_T rtb_motohawk_prelookup_kf;
  index_T rtb_motohawk_prelookup13;
  index_T rtb_motohawk_prelookup1_b;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup1_h;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup1_ad;
  index_T rtb_motohawk_prelookup_iy;
  index_T rtb_motohawk_prelookup2_m;
  index_T rtb_motohawk_prelookup3_g;
  index_T rtb_motohawk_prelookup2_h;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup_pa;
  int8_T rtb_Add1_e;
  int8_T rtb_Add1_h;
  int8_T rtb_Add1_o;
  int8_T rtb_motohawk_interpolation_2d_i3;
  uint8_T rtb_Compare_f1;
  uint8_T rtb_Compare_o;
  uint8_T rtb_Compare_h;
  uint8_T rtb_motohawk_data_read1_iv;
  boolean_T rtb_Logic_b[2];
  boolean_T rtb_RelOp_g;
  boolean_T rtb_motohawk_data_read2_j4;
  boolean_T rtb_motohawk_fault_action_l;
  boolean_T rtb_motohawk_fault_action1_m;
  boolean_T rtb_motohawk_fault_status2_c0;
  boolean_T rtb_motohawk_fault_status1_n2;
  boolean_T rtb_motohawk_fault_action1_o;
  boolean_T rtb_motohawk_fault_action2;
  boolean_T rtb_motohawk_fault_action3;
  boolean_T rtb_motohawk_fault_status3_c5;
  boolean_T rtb_motohawk_fault_status4_iw;
  boolean_T rtb_motohawk_fault_status9;
  boolean_T rtb_LogicalOperator3_kc;
  boolean_T rtb_LogicalOperator1_fq;
  boolean_T rtb_LogicalOperator2_bo;
  boolean_T rtb_LogicalOperator4_n;
  boolean_T rtb_LogicalOperator5_fy;
  boolean_T rtb_motohawk_data_read1_j;
  boolean_T rtb_motohawk_fault_status12;
  boolean_T rtb_LogicalOperator_d3;
  boolean_T rtb_LogicalOperator1_bp;
  boolean_T rtb_LogicalOperator2_k;
  boolean_T rtb_LogicalOperator3_i;
  boolean_T rtb_LogicalOperator4_j;
  boolean_T rtb_LogicalOperator5_mo;
  boolean_T rtb_RelationalOperator5_g;
  boolean_T rtb_RelationalOperator_jf;
  boolean_T rtb_RelationalOperator3_cb;
  boolean_T rtb_RelationalOperator3_a3;
  boolean_T rtb_LogicalOperator2_jg;
  boolean_T rtb_LogicalOperator3_o1;
  boolean_T rtb_LogicalOperator2_c;
  boolean_T rtb_LogicalOperator3_h;
  boolean_T rtb_LogicalOperator2_a;
  boolean_T rtb_LogicalOperator3_k0;
  boolean_T rtb_LogicalOperator2_o;
  boolean_T rtb_LogicalOperator3_jl;
  boolean_T rtb_RelationalOperator_f0;
  boolean_T rtb_LogicalOperator_ku;
  boolean_T rtb_LogicalOperator1_aq;
  boolean_T rtb_LogicalOperator2_bz;
  boolean_T rtb_LogicalOperator3_m;
  boolean_T rtb_LogicalOperator2_kz;
  boolean_T rtb_LogicalOperator3_d;
  boolean_T rtb_LogicalOperator2_i;
  boolean_T rtb_LogicalOperator3_ah;
  boolean_T rtb_LogicalOperator2_p;
  boolean_T rtb_LogicalOperator3_n;
  boolean_T rtb_LogicalOperator2_gw;
  boolean_T rtb_LogicalOperator3_ha;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_LogicalOperator2_g1;
  boolean_T rtb_LogicalOperator3_cn;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_LogicalOperator3_b;
  boolean_T rtb_LogicalOperator2_ji;
  boolean_T rtb_LogicalOperator3_hk;
  boolean_T rtb_LogicalOperator2_ie;
  boolean_T rtb_LogicalOperator3_me;
  boolean_T rtb_LogicalOperator2_az;
  boolean_T rtb_LogicalOperator3_bf;
  boolean_T rtb_RelationalOperator5_a;
  boolean_T rtb_RelationalOperator4_kv;
  boolean_T rtb_RelationalOperator_lu;
  boolean_T rtb_RelationalOperator3_gq;
  boolean_T rtb_RelationalOperator2_lg;
  boolean_T rtb_RelationalOperator1_f;
  boolean_T rtb_RelationalOperator5_go;
  boolean_T rtb_RelationalOperator4_h;
  boolean_T rtb_RelationalOperator_i;
  boolean_T rtb_RelationalOperator3_fw;
  boolean_T rtb_RelationalOperator2_d2;
  boolean_T rtb_RelationalOperator1_dq;
  boolean_T rtb_RelationalOperator5_h;
  boolean_T rtb_RelationalOperator4_l;
  boolean_T rtb_RelationalOperator_d;
  boolean_T rtb_RelationalOperator3_k0;
  boolean_T rtb_RelationalOperator2_ks;
  boolean_T rtb_RelationalOperator1_k3;
  boolean_T rtb_RelationalOperator5_h4;
  boolean_T rtb_RelationalOperator4_o;
  boolean_T rtb_RelationalOperator_mz;
  boolean_T rtb_RelationalOperator3_md;
  boolean_T rtb_RelationalOperator2_ats;
  boolean_T rtb_RelationalOperator1_dg;
  boolean_T rtb_RelationalOperator1_f4;
  boolean_T rtb_RelationalOperator2_nx;
  boolean_T rtb_LogicalOperator_ax;
  boolean_T rtb_LogicalOperator1_dv;
  boolean_T rtb_LogicalOperator4_k5;
  boolean_T rtb_LogicalOperator_oa;
  boolean_T rtb_LogicalOperator1_ce;
  boolean_T rtb_LogicalOperator2_io;
  boolean_T rtb_LogicalOperator1_bwv;
  boolean_T rtb_LogicalOperator2_b3;
  boolean_T rtb_LogicalOperator4_nc;
  boolean_T rtb_LogicalOperator4_l5;
  boolean_T rtb_LogicalOperator2_eq;
  boolean_T rtb_LogicalOperator5_gc;
  boolean_T rtb_LogicalOperator4_nx;
  boolean_T rtb_LogicalOperator2_bb;
  boolean_T rtb_LogicalOperator5_jq;
  boolean_T rtb_LogicalOperator_aw;
  boolean_T rtb_LogicalOperator4_cr;
  boolean_T rtb_LogicalOperator26;
  boolean_T rtb_LogicalOperator29;
  boolean_T rtb_LogicalOperator31;
  boolean_T rtb_LogicalOperator18;
  boolean_T rtb_LogicalOperator20;
  boolean_T rtb_LogicalOperator22;
  boolean_T rtb_LogicalOperator24;
  boolean_T rtb_LogicalOperator3_hou;
  boolean_T rtb_LogicalOperator6_o2;
  boolean_T rtb_LogicalOperator8_br;
  boolean_T rtb_LogicalOperator10_e;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_LogicalOperator14;
  boolean_T rtb_LogicalOperator16;
  boolean_T rtb_LogicalOperator27;
  boolean_T rtb_LogicalOperator4_nz1;
  boolean_T rtb_LogicalOperator7_b;
  boolean_T rtb_LogicalOperator8_f;
  boolean_T rtb_LogicalOperator11_g;
  boolean_T rtb_LogicalOperator1_mk;
  boolean_T rtb_LogicalOperator2_mc;
  boolean_T rtb_LogicalOperator3_bz;
  boolean_T rtb_LogicalOperator4_g;
  boolean_T rtb_LogicalOperator2_ako;
  boolean_T rtb_LogicalOperator2_i2;
  boolean_T rtb_LogicalOperator4_es;
  boolean_T rtb_LogicalOperator4_f;
  boolean_T rtb_LogicalOperator_jp;
  boolean_T rtb_LogicalOperator_cd;
  boolean_T rtb_RelationalOperator2_de;
  boolean_T rtb_LogicalOperator_a2;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_LT3_n;
  boolean_T rtb_LT2_k;
  boolean_T rtb_LT4_j;
  boolean_T rtb_RelationalOperator2_kb;
  boolean_T rtb_RelationalOperator1_kq;
  boolean_T rtb_RelationalOperator2_iq;
  boolean_T rtb_RelationalOperator1_dy;
  boolean_T rtb_LogicalOperator_du;
  boolean_T rtb_LogicalOperator_jw;
  boolean_T rtb_RelationalOperator1_ja;
  boolean_T rtb_motohawk_data_read1_k;
  boolean_T rtb_motohawk_data_read1_kz;
  boolean_T rtb_AboveRich;
  boolean_T rtb_CombinatorialLogic_i[2];
  boolean_T rtb_AboveRich_d;
  boolean_T rtb_CombinatorialLogic_ir[2];
  boolean_T rtb_BelowLoTarget_e;
  boolean_T rtb_CombinatorialLogic_c[2];
  boolean_T rtb_AND1[8];
  boolean_T rtb_LogicalOperator_go;
  boolean_T rtb_BelowLoTarget_o;
  boolean_T rtb_LogicalOperator2_jh;
  boolean_T rtb_LogicalOperator2_au;
  boolean_T rtb_AboveHiTarget_j;
  boolean_T rtb_CombinatorialLogic_a[2];
  boolean_T rtb_CombinatorialLogic_f[2];
  boolean_T rtb_RelationalOperator2_gk;
  boolean_T rtb_Overspeed2;
  boolean_T rtb_RelOp_et4;
  boolean_T rtb_Switch_edx;
  boolean_T rtb_RelationalOperator6_c;
  boolean_T rtb_LogicalOperator1_o0;
  boolean_T rtb_RelationalOperator5_k;
  real_T minV;
  real_T minV_0;
  int32_T maxV;
  boolean_T rtb_LogicalOperator6_as;
  boolean_T rtb_LogicalOperator1_j;
  real_T rtb_DataTypeConversion1_g;
  real_T rtb_DataTypeConversion_j;
  real_T rtb_UnitDelay_cwr;
  real_T rtb_UnitDelay1_k;
  real_T rtb_Sum2_is;
  real_T rtb_Sum1_c;
  real_T rtb_Switch_l;
  real_T rtb_Merge_hqf;
  boolean_T rtb_RelOp_cx;
  boolean_T rtb_RelationalOperator_g;
  boolean_T rtb_LogicalOperator_n;
  real_T rtb_Sum1_bv;
  real_T rtb_UnitDelay1_ct;
  real_T rtb_UnitDelay3_a;
  real_T rtb_UnitDelay4_o;
  real_T rtb_UnitDelay1_gb;
  real_T rtb_UnitDelay3_i;
  real_T rtb_UnitDelay4_a;
  real_T rtb_Abs_i;
  real_T rtb_UnitDelay1_m;
  real_T rtb_UnitDelay3_n;
  real_T rtb_UnitDelay4_b;
  real_T rtb_APP2;
  real_T rtb_Sum1_fj;
  real_T rtb_Sum1_gk;
  real_T rtb_Sum1_ha;
  real_T rtb_Sum1_fs;
  real_T rtb_Sum1_gr;
  real_T rtb_Sum1_f1;
  real_T rtb_Sum1_oj;
  real_T rtb_Sum1_g1;
  real_T rtb_Sum1_n4;
  real_T rtb_Sum1_du;
  real_T rtb_Sum1_p;
  real_T rtb_Sum1_fy;
  real_T rtb_Sum1_a5;
  real_T rtb_Sum1_c0;
  uint32_T rtb_Switch_oq;
  real_T rtb_Sum1_ou;
  boolean_T rtb_RelationalOperator3_i2;
  uint16_T rtb_Product2_h;
  boolean_T rtb_Switch1_jh;
  int8_T rtb_Add_n;
  int8_T rtb_Sum_c5;
  real_T rtb_Switch_g4;
  real_T rtb_Switch1_m;
  real_T rtb_Switch2_m;
  real_T rtb_Switch3_l;
  real_T rtb_Switch4_k;
  boolean_T rtb_LogicalOperator_my;
  boolean_T rtb_LogicalOperator1_ow;
  boolean_T rtb_LogicalOperator_l2[8];
  real_T rtb_Product1_fv[8];
  real_T rtb_DataTypeConversion_cy;
  real_T rtb_Multiplyby10ifnotyetenabled_a;
  real_T rtb_Divide_l[8];
  uint16_T rtb_Product1_ijj;
  boolean_T rtb_LogicalOperator3_mg;
  int16_T rtb_DataTypeConversion_b2;
  int16_T rtb_Sum4_l;
  int16_T rtb_Switch2_h2;
  real_T rtb_Product1_es;
  uint8_T rtb_Gain5;
  uint8_T rtb_Gain4;
  uint8_T rtb_Gain3_k;
  uint8_T rtb_Gain2_h;
  uint8_T rtb_Gain1_i;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  real_T u;

  /* S-Function (motohawk_sfun_trigger): '<S485>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  if (BaseEngineController_LS_128_DWork.s485_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s485_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S692>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S692>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S692>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(12) || IsFaultActive(13));

  /* Logic: '<S692>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S692>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S692>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S692>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(12) || IsFaultSuspected(13));

  /* S-Function Block: <S486>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_128_B.s486_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S692>/Data Type Conversion' */
  rtb_DataTypeConversion_kg = (real_T)
    BaseEngineController_LS_128_B.s486_motohawk_ain2;

  /* S-Function Block: <S716>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_kg,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_cs = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S716>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_128_B.s716_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_cs, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S692>/Unit Delay' */
  rtb_UnitDelay_b3 = BaseEngineController_LS_128_DWork.s692_UnitDelay_DSTATE;

  /* If: '<S692>/If' incorporates:
   *  Logic: '<S692>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S692>/If Action Subsystem' incorporates:
     *  ActionPort: '<S711>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay_b3,
      &rtb_Merge_fq);

    /* End of Outputs for SubSystem: '<S692>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S692>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S712>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_fq);

    /* End of Outputs for SubSystem: '<S692>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S692>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S713>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s716_motohawk_interpolation_1d,
       &rtb_Merge_fq);

    /* End of Outputs for SubSystem: '<S692>/If Action Subsystem2' */
  }

  /* End of If: '<S692>/If' */

  /* MinMax: '<S715>/MinMax' incorporates:
   *  Constant: '<S692>/Constant1'
   */
  rtb_DataTypeConversion_p = rtb_Merge_fq >= 0.0 ? rtb_Merge_fq : 0.0;

  /* MinMax: '<S715>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_p <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_p :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S710>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s710_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S710>/Product' incorporates:
   *  MinMax: '<S710>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_p : (APP2FiltConst_DataStore());

  /* Sum: '<S717>/Sum1' incorporates:
   *  Constant: '<S717>/Constant'
   *  MinMax: '<S715>/MinMax1'
   *  Product: '<S717>/Product'
   *  Product: '<S717>/Product1'
   *  Sum: '<S717>/Sum'
   *  UnitDelay: '<S717>/Unit Delay'
   */
  rtb_Sum1_fj = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s717_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_p;

  /* If: '<S714>/If' incorporates:
   *  Inport: '<S718>/In1'
   *  Inport: '<S719>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S714>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S714>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S714>/NewValue' incorporates:
     *  ActionPort: '<S718>/Action Port'
     */
    BaseEngineController_LS_128_B.s714_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S714>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S714>/OldValue' incorporates:
     *  ActionPort: '<S719>/Action Port'
     */
    BaseEngineController_LS_128_B.s714_Merge = rtb_Sum1_fj;

    /* End of Outputs for SubSystem: '<S714>/OldValue' */
  }

  /* End of If: '<S714>/If' */

  /* Logic: '<S742>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S742>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S742>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(18) || IsFaultActive(19));

  /* Logic: '<S742>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S742>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S742>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S742>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(18) || IsFaultSuspected(19));

  /* DataTypeConversion: '<S695>/Data Type Conversion1' */
  rtb_DataTypeConversion1_g = (real_T)
    BaseEngineController_LS_128_B.s486_motohawk_ain2;

  /* Switch: '<S695>/Switch' incorporates:
   *  Fcn: '<S695>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration2'
   */
  if ((APP2_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_128_B.s695_Switch = 1023.0 -
      rtb_DataTypeConversion1_g;
  } else {
    BaseEngineController_LS_128_B.s695_Switch = rtb_DataTypeConversion1_g;
  }

  /* End of Switch: '<S695>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S739>/motohawk_data_read' */
  rtb_DataTypeConversion_iy = APP2_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S739>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iy;
  BaseEngineController_LS_128_B.s739_MinMax = (u <=
    (APP2_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP2_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S695>/Sum2' */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s695_Switch -
    BaseEngineController_LS_128_B.s739_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S739>/motohawk_data_read1' */
  rtb_DataTypeConversion_iy = APP2_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S739>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iy;
  BaseEngineController_LS_128_B.s739_MinMax1 = (u >=
    (APP2_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP2_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S695>/Gain2' incorporates:
   *  Product: '<S695>/Product1'
   *  Sum: '<S695>/Sum1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion1_g /
    (BaseEngineController_LS_128_B.s739_MinMax1 -
     BaseEngineController_LS_128_B.s739_MinMax) * 100.0;

  /* MinMax: '<S743>/MinMax' incorporates:
   *  Constant: '<S695>/Constant1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion_p >= 0.0 ?
    rtb_DataTypeConversion_p : 0.0;

  /* MinMax: '<S743>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration1'
   */
  BaseEngineController_LS_128_B.s743_MinMax1 = (rtb_DataTypeConversion_p <=
    (APP2_AdaptMaxLimit_DataStore())) || rtIsNaN((APP2_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_p : (APP2_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S741>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s741_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S741>/Product' incorporates:
   *  MinMax: '<S741>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S741>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (APP2_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP2_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_p :
    (APP2_AdaptFilterConst_DataStore());

  /* Sum: '<S749>/Sum1' incorporates:
   *  Constant: '<S749>/Constant'
   *  Product: '<S749>/Product'
   *  Product: '<S749>/Product1'
   *  Sum: '<S749>/Sum'
   *  UnitDelay: '<S749>/Unit Delay'
   */
  rtb_Sum1_j3 = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s749_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s743_MinMax1 * rtb_DataTypeConversion_p;

  /* UnitDelay: '<S742>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_LS_128_DWork.s742_UnitDelay1_DSTATE;

  /* If: '<S742>/If' incorporates:
   *  Logic: '<S742>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S742>/If Action Subsystem' incorporates:
     *  ActionPort: '<S750>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_c,
      &rtb_Merge_cq);

    /* End of Outputs for SubSystem: '<S742>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S742>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S751>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((APP2_AdaptDfltValue_DataStore
      ()), &rtb_Merge_cq);

    /* End of Outputs for SubSystem: '<S742>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S742>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S752>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_Sum1_j3, &rtb_Merge_cq);

    /* End of Outputs for SubSystem: '<S742>/If Action Subsystem2' */
  }

  /* End of If: '<S742>/If' */

  /* If: '<S753>/If' incorporates:
   *  Inport: '<S754>/In1'
   *  Inport: '<S755>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S753>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S753>/override_enable'
   */
  if ((APP2_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S753>/NewValue' incorporates:
     *  ActionPort: '<S754>/Action Port'
     */
    BaseEngineController_LS_128_B.s753_Merge = (APP2_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S753>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S753>/OldValue' incorporates:
     *  ActionPort: '<S755>/Action Port'
     */
    BaseEngineController_LS_128_B.s753_Merge = rtb_Merge_cq;

    /* End of Outputs for SubSystem: '<S753>/OldValue' */
  }

  /* End of If: '<S753>/If' */

  /* Switch: '<S486>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S486>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP2 = BaseEngineController_LS_128_B.s753_Merge;
  } else {
    rtb_APP2 = BaseEngineController_LS_128_B.s714_Merge;
  }

  /* End of Switch: '<S486>/Switch1' */
  /* Logic: '<S690>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S690>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S690>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S486>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_128_B.s486_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S690>/Data Type Conversion' */
  rtb_DataTypeConversion_c = (real_T)
    BaseEngineController_LS_128_B.s486_motohawk_ain1;

  /* S-Function Block: <S704>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_c,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_a = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S704>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_128_B.s704_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S690>/Unit Delay' */
  rtb_UnitDelay_k3 = BaseEngineController_LS_128_DWork.s690_UnitDelay_DSTATE;

  /* If: '<S690>/If' incorporates:
   *  Logic: '<S690>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S690>/If Action Subsystem' incorporates:
     *  ActionPort: '<S699>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay_k3,
      &rtb_Merge_hq);

    /* End of Outputs for SubSystem: '<S690>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S690>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S700>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_hq);

    /* End of Outputs for SubSystem: '<S690>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S690>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S701>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s704_motohawk_interpolation_1d,
       &rtb_Merge_hq);

    /* End of Outputs for SubSystem: '<S690>/If Action Subsystem2' */
  }

  /* End of If: '<S690>/If' */

  /* MinMax: '<S703>/MinMax' incorporates:
   *  Constant: '<S690>/Constant1'
   */
  rtb_DataTypeConversion_p = rtb_Merge_hq >= 0.0 ? rtb_Merge_hq : 0.0;

  /* MinMax: '<S703>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_p <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_p :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S698>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s698_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S698>/Product' incorporates:
   *  MinMax: '<S698>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S698>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_p : (APP1FiltConst_DataStore());

  /* Sum: '<S705>/Sum1' incorporates:
   *  Constant: '<S705>/Constant'
   *  MinMax: '<S703>/MinMax1'
   *  Product: '<S705>/Product'
   *  Product: '<S705>/Product1'
   *  Sum: '<S705>/Sum'
   *  UnitDelay: '<S705>/Unit Delay'
   */
  rtb_Sum1_gk = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s705_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_p;

  /* If: '<S702>/If' incorporates:
   *  Inport: '<S706>/In1'
   *  Inport: '<S707>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S702>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S702>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S702>/NewValue' incorporates:
     *  ActionPort: '<S706>/Action Port'
     */
    BaseEngineController_LS_128_B.s702_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S702>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S702>/OldValue' incorporates:
     *  ActionPort: '<S707>/Action Port'
     */
    BaseEngineController_LS_128_B.s702_Merge = rtb_Sum1_gk;

    /* End of Outputs for SubSystem: '<S702>/OldValue' */
  }

  /* End of If: '<S702>/If' */

  /* Logic: '<S725>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S725>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S725>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(10) || IsFaultActive(11));

  /* Logic: '<S725>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S725>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S725>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S725>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(10) || IsFaultSuspected(11));

  /* DataTypeConversion: '<S694>/Data Type Conversion1' */
  rtb_DataTypeConversion1_g = (real_T)
    BaseEngineController_LS_128_B.s486_motohawk_ain1;

  /* Switch: '<S694>/Switch' incorporates:
   *  Fcn: '<S694>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration2'
   */
  if ((APP1_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_128_B.s694_Switch = 1023.0 -
      rtb_DataTypeConversion1_g;
  } else {
    BaseEngineController_LS_128_B.s694_Switch = rtb_DataTypeConversion1_g;
  }

  /* End of Switch: '<S694>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S722>/motohawk_data_read' */
  rtb_DataTypeConversion_iy = APP1_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S722>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iy;
  BaseEngineController_LS_128_B.s722_MinMax = (u <=
    (APP1_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP1_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S694>/Sum2' */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s694_Switch -
    BaseEngineController_LS_128_B.s722_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S722>/motohawk_data_read1' */
  rtb_DataTypeConversion_iy = APP1_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S722>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iy;
  BaseEngineController_LS_128_B.s722_MinMax1 = (u >=
    (APP1_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP1_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S694>/Gain2' incorporates:
   *  Product: '<S694>/Product1'
   *  Sum: '<S694>/Sum1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion1_g /
    (BaseEngineController_LS_128_B.s722_MinMax1 -
     BaseEngineController_LS_128_B.s722_MinMax) * 100.0;

  /* MinMax: '<S726>/MinMax' incorporates:
   *  Constant: '<S694>/Constant1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion_p >= 0.0 ?
    rtb_DataTypeConversion_p : 0.0;

  /* MinMax: '<S726>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration1'
   */
  BaseEngineController_LS_128_B.s726_MinMax1 = (rtb_DataTypeConversion_p <=
    (APP1_AdaptMaxLimit_DataStore())) || rtIsNaN((APP1_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_p : (APP1_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S724>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s724_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S724>/Product' incorporates:
   *  MinMax: '<S724>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S724>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (APP1_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP1_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_p :
    (APP1_AdaptFilterConst_DataStore());

  /* Sum: '<S732>/Sum1' incorporates:
   *  Constant: '<S732>/Constant'
   *  Product: '<S732>/Product'
   *  Product: '<S732>/Product1'
   *  Sum: '<S732>/Sum'
   *  UnitDelay: '<S732>/Unit Delay'
   */
  rtb_Sum1_gn = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s732_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s726_MinMax1 * rtb_DataTypeConversion_p;

  /* UnitDelay: '<S725>/Unit Delay1' */
  rtb_UnitDelay1_l = BaseEngineController_LS_128_DWork.s725_UnitDelay1_DSTATE;

  /* If: '<S725>/If' incorporates:
   *  Logic: '<S725>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S725>/If Action Subsystem' incorporates:
     *  ActionPort: '<S733>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_l, &rtb_Merge_k);

    /* End of Outputs for SubSystem: '<S725>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S725>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S734>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((APP1_AdaptDfltValue_DataStore
      ()), &rtb_Merge_k);

    /* End of Outputs for SubSystem: '<S725>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S725>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S735>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_Sum1_gn, &rtb_Merge_k);

    /* End of Outputs for SubSystem: '<S725>/If Action Subsystem2' */
  }

  /* End of If: '<S725>/If' */

  /* If: '<S736>/If' incorporates:
   *  Inport: '<S737>/In1'
   *  Inport: '<S738>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S736>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S736>/override_enable'
   */
  if ((APP1_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S736>/NewValue' incorporates:
     *  ActionPort: '<S737>/Action Port'
     */
    BaseEngineController_LS_128_B.s736_Merge = (APP1_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S736>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S736>/OldValue' incorporates:
     *  ActionPort: '<S738>/Action Port'
     */
    BaseEngineController_LS_128_B.s736_Merge = rtb_Merge_k;

    /* End of Outputs for SubSystem: '<S736>/OldValue' */
  }

  /* End of If: '<S736>/If' */

  /* Switch: '<S486>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S486>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP1 = BaseEngineController_LS_128_B.s736_Merge;
  } else {
    rtb_APP1 = BaseEngineController_LS_128_B.s702_Merge;
  }

  /* End of Switch: '<S486>/Switch' */
  /* Logic: '<S441>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S441>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S441>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_as = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S441>/Logical Operator6' incorporates:
   *  Logic: '<S441>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S441>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S441>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (rtb_LogicalOperator6_as && (IsFaultActive(12) ||
    IsFaultActive(13)));

  /* Switch: '<S441>/Switch2' incorporates:
   *  Logic: '<S441>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S441>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_j || IsFaultActive(20)) {
    /* MinMax: '<S441>/MinMax' */
    rtb_DataTypeConversion1_g = (rtb_APP2 <= rtb_APP1) || rtIsNaN(rtb_APP1) ?
      rtb_APP2 : rtb_APP1;
  } else {
    /* Switch: '<S441>/Switch1' */
    if (rtb_LogicalOperator6_as) {
      rtb_DataTypeConversion1_g = rtb_APP2;
    } else {
      rtb_DataTypeConversion1_g = rtb_APP1;
    }

    /* End of Switch: '<S441>/Switch1' */
  }

  /* End of Switch: '<S441>/Switch2' */
  /* Switch: '<S445>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S445>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* DataTypeConversion: '<S445>/Data Type Conversion' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S445>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_cy = (real_T)((uint8_T)(Overheat_MaxAPP_DataStore()));

    /* MinMax: '<S464>/MinMax' incorporates:
     *  Constant: '<S445>/Constant1'
     *  Product: '<S445>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S445>/motohawk_calibration2'
     */
    u = (Overheat_ScaleAPP_DataStore()) * rtb_DataTypeConversion1_g;
    u = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S464>/MinMax1' incorporates:
     *  Constant: '<S445>/Constant1'
     *  MinMax: '<S464>/MinMax'
     */
    BaseEngineController_LS_128_B.s445_Switch1 = u <= rtb_DataTypeConversion_cy ?
      u : rtb_DataTypeConversion_cy;
  } else {
    BaseEngineController_LS_128_B.s445_Switch1 = rtb_DataTypeConversion1_g;
  }

  /* End of Switch: '<S445>/Switch1' */
  /* S-Function Block: <S471>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s471_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S471>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S471>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S471>/motohawk_delta_time'
   */
  BaseEngineController_LS_128_B.s471_Sum = rtb_motohawk_delta_time_l +
    TimeSinceKeyOnTimer_DataStore();

  /* S-Function Block: <S433>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_128_B.s667_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s667_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_128_B.s433_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S434>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_128_B.s685_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s685_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_128_B.s434_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S567>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s567_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S567>/Product' incorporates:
   *  MinMax: '<S567>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_p : (ACPresFilterConst_DataStore());

  /* Logic: '<S558>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S558>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S558>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S484>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get(&BaseEngineController_LS_128_B.s484_motohawk_ain4,
      NULL);
  }

  /* DataTypeConversion: '<S558>/Data Type Conversion' */
  rtb_DataTypeConversion_j = (real_T)
    BaseEngineController_LS_128_B.s484_motohawk_ain4;

  /* Product: '<S558>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = rtb_DataTypeConversion_j * (ACPresGain_DataStore());

  /* Sum: '<S558>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s558_Sum1 = rtb_DataTypeConversion1_g +
    (ACPresOfst_DataStore());

  /* UnitDelay: '<S558>/Unit Delay1' */
  rtb_UnitDelay1_g = BaseEngineController_LS_128_DWork.s558_UnitDelay1_DSTATE;

  /* If: '<S558>/If' incorporates:
   *  Logic: '<S558>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S558>/If Action Subsystem' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_g,
      &rtb_Merge_fr);

    /* End of Outputs for SubSystem: '<S558>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S558>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_fr);

    /* End of Outputs for SubSystem: '<S558>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S558>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s558_Sum1, &rtb_Merge_fr);

    /* End of Outputs for SubSystem: '<S558>/If Action Subsystem2' */
  }

  /* End of If: '<S558>/If' */

  /* Sum: '<S572>/Sum1' incorporates:
   *  Constant: '<S572>/Constant'
   *  Product: '<S572>/Product'
   *  Product: '<S572>/Product1'
   *  Sum: '<S572>/Sum'
   *  UnitDelay: '<S572>/Unit Delay'
   */
  rtb_Sum1_ha = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s572_UnitDelay_DSTATE + rtb_Merge_fr *
    rtb_DataTypeConversion_p;

  /* If: '<S571>/If' incorporates:
   *  Inport: '<S573>/In1'
   *  Inport: '<S574>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S571>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S571>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S571>/NewValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    BaseEngineController_LS_128_B.s571_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S571>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S571>/OldValue' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    BaseEngineController_LS_128_B.s571_Merge = rtb_Sum1_ha;

    /* End of Outputs for SubSystem: '<S571>/OldValue' */
  }

  /* End of If: '<S571>/If' */

  /* S-Function Block: <S431>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_128_B.s571_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s571_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    BaseEngineController_LS_128_B.s431_motohawk_prelookup =
      (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S483>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S483>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S483>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_128_B.s483_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S447>/Data Type Conversion' */
  if (BaseEngineController_LS_128_B.s483_RPMInst < 65536.0) {
    if (BaseEngineController_LS_128_B.s483_RPMInst >= 0.0) {
      rtb_DataTypeConversion_iy = (uint16_T)
        BaseEngineController_LS_128_B.s483_RPMInst;
    } else {
      rtb_DataTypeConversion_iy = 0U;
    }
  } else {
    rtb_DataTypeConversion_iy = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S447>/Data Type Conversion' */
  /* Sum: '<S447>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_Product_ij = (uint16_T)i;

  /* End of Sum: '<S447>/Sum' */

  /* RelationalOperator: '<S447>/Relational Operator1' */
  BaseEngineController_LS_128_B.s447_Stall = ((rtb_DataTypeConversion_iy <
    rtb_Product_ij));

  /* RelationalOperator: '<S447>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration4'
   */
  BaseEngineController_LS_128_B.s447_Crank = ((rtb_DataTypeConversion_iy >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S447>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_as = (rtb_DataTypeConversion_iy > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S447>/Unit Delay' */
  BaseEngineController_LS_128_B.s447_UnitDelay =
    BaseEngineController_LS_128_DWork.s447_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S447>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_8437p0004 */
  if (BaseEngineController_LS_128_DWork.s447_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s447_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S447>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S447>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration2'
   */
  BaseEngineController_LS_128_B.s447_Run = ((rtb_LogicalOperator6_as &&
    (BaseEngineController_LS_128_B.s469_Switch >= ((uint8_T)
    (RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S447>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch
    (BaseEngineController_LS_128_DWork.s468_is_c2_BaseEngineController_LS_128) {
   case BaseEngineController_LS_128_IN_Crank:
    /* During 'Crank': '<S468>:3' */
    if (BaseEngineController_LS_128_B.s447_Stall) {
      /* Transition: '<S468>:8' */
      BaseEngineController_LS_128_DWork.s468_is_c2_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_Stall_k;

      /* Entry 'Stall': '<S468>:1' */
      BaseEngineController_LS_128_B.s468_State = 1U;
    } else {
      if (BaseEngineController_LS_128_B.s447_Run) {
        /* Transition: '<S468>:6' */
        BaseEngineController_LS_128_DWork.s468_is_c2_BaseEngineController_LS_128
          = BaseEngineController_LS_128_IN_Run;

        /* Entry 'Run': '<S468>:2' */
        BaseEngineController_LS_128_B.s468_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_128_IN_Run:
    /* During 'Run': '<S468>:2' */
    if (BaseEngineController_LS_128_B.s447_Stall) {
      /* Transition: '<S468>:7' */
      BaseEngineController_LS_128_DWork.s468_is_c2_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_Stall_k;

      /* Entry 'Stall': '<S468>:1' */
      BaseEngineController_LS_128_B.s468_State = 1U;
    }
    break;

   case BaseEngineController_LS_128_IN_Stall_k:
    /* During 'Stall': '<S468>:1' */
    if (BaseEngineController_LS_128_B.s447_Crank) {
      /* Transition: '<S468>:5' */
      BaseEngineController_LS_128_DWork.s468_is_c2_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_Crank;

      /* Entry 'Crank': '<S468>:3' */
      BaseEngineController_LS_128_B.s468_State = 2U;
    }
    break;

   default:
    /* Transition: '<S468>:4' */
    BaseEngineController_LS_128_DWork.s468_is_c2_BaseEngineController_LS_128 =
      BaseEngineController_LS_128_IN_Stall_k;

    /* Entry 'Stall': '<S468>:1' */
    BaseEngineController_LS_128_B.s468_State = 1U;
    break;
  }

  /* End of Stateflow: '<S447>/Engine State Machine' */

  /* RelationalOperator: '<S96>/RelOp' incorporates:
   *  Constant: '<S96>/Constant'
   */
  rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s468_State == 1);

  /* S-Function Block: <S482>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_o, NULL);
  }

  /* DataTypeConversion: '<S507>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S482>/motohawk_ain5'
   */
  BaseEngineController_LS_128_B.s507_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_o;

  /* RelationalOperator: '<S507>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S507>/SwitchPoint'
   */
  rtb_LogicalOperator6_as =
    (BaseEngineController_LS_128_B.s507_DataTypeConversion >
     (ACSwSwitchPt_DataStore()));

  /* Logic: '<S507>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S507>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_as ^= (ACSwPolarity_DataStore());

  /* If: '<S514>/If' incorporates:
   *  Inport: '<S515>/In1'
   *  Inport: '<S516>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S514>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S514>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S514>/NewValue' incorporates:
     *  ActionPort: '<S515>/Action Port'
     */
    BaseEngineController_LS_128_B.s514_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S514>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S514>/OldValue' incorporates:
     *  ActionPort: '<S516>/Action Port'
     */
    BaseEngineController_LS_128_B.s514_Merge = rtb_LogicalOperator6_as;

    /* End of Outputs for SubSystem: '<S514>/OldValue' */
  }

  /* End of If: '<S514>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (rtb_LogicalOperator1_j) {
    if (!BaseEngineController_LS_128_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S287>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s287_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S288>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s288_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S289>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s289_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s290_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S292>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s292_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for Stateflow: '<S283>/Ice Break' */
      BaseEngineController_LS_128_DWork.s291_is_active_c3_BaseEngineController_LS_128
        = 0U;
      BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128 =
        0U;
      BaseEngineController_LS_128_B.s291_etc = 0.0;
      BaseEngineController_LS_128_DWork.s291_presentTicks = 0U;
      BaseEngineController_LS_128_DWork.s291_elapsedTicks = 0U;
      BaseEngineController_LS_128_DWork.s291_previousTicks = 0U;

      /* Enable for Stateflow: '<S283>/Ice Break' */
      BaseEngineController_LS_128_DWork.s291_presentTicks =
        BaseEngineController_LS_128_M->Timing.clockTick0;
      BaseEngineController_LS_128_DWork.s291_previousTicks =
        BaseEngineController_LS_128_DWork.s291_presentTicks;
      BaseEngineController_LS_128_DWork.s15_Stall_MODE = TRUE;
    }

    /* DataTypeConversion: '<S95>/Data Type Conversion' incorporates:
     *  Constant: '<S95>/OFF'
     */
    BaseEngineController_LS_128_B.s92_WASTEGATE = 0.0;

    /* DataTypeConversion: '<S95>/Data Type Conversion1' incorporates:
     *  Constant: '<S95>/OFF1'
     */
    BaseEngineController_LS_128_B.s92_IACS = 0.0;

    /* DataTypeConversion: '<S95>/Data Type Conversion2' incorporates:
     *  Constant: '<S95>/OFF2'
     */
    BaseEngineController_LS_128_B.s92_IACP = 0.0;

    /* RelationalOperator: '<S284>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_gk = (BaseEngineController_LS_128_B.s667_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S284>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration'
     */
    rtb_Switch_edx = (BaseEngineController_LS_128_B.s667_Merge <=
                      (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S287>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_gk != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_edx != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_f[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_f[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S287>/Switch1' incorporates:
     *  UnitDelay: '<S287>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_f[1]) {
      rtb_LogicalOperator6_as = rtb_CombinatorialLogic_f[0];
    } else {
      rtb_LogicalOperator6_as =
        BaseEngineController_LS_128_DWork.s287_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S287>/Switch1' */
    /* RelationalOperator: '<S285>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration3'
     */
    rtb_Switch_edx = (BaseEngineController_LS_128_B.s685_Merge >=
                      (IATFanOn_DataStore()));

    /* RelationalOperator: '<S285>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_gk = (BaseEngineController_LS_128_B.s685_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S288>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_edx != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_gk != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_f[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_f[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S288>/Switch1' incorporates:
     *  UnitDelay: '<S288>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_f[1]) {
      rtb_LogicalOperator1_j = rtb_CombinatorialLogic_f[0];
    } else {
      rtb_LogicalOperator1_j =
        BaseEngineController_LS_128_DWork.s288_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S288>/Switch1' */
    /* RelationalOperator: '<S286>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration5'
     */
    rtb_Switch_edx = (BaseEngineController_LS_128_B.s571_Merge >=
                      (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S286>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration4'
     */
    rtb_RelationalOperator2_gk = (BaseEngineController_LS_128_B.s571_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S289>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_edx != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_gk != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_f[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_f[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S289>/Switch1' incorporates:
     *  UnitDelay: '<S289>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_f[1]) {
      rtb_Switch1_jh = rtb_CombinatorialLogic_f[0];
    } else {
      rtb_Switch1_jh = BaseEngineController_LS_128_DWork.s289_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S289>/Switch1' */
    /* Switch: '<S281>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch_g4 = (real_T)rtb_LogicalOperator6_as;
    } else {
      /* S-Function Block: <S281>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_b = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
           ((ECTFanSpeed_StallTbl_DataStore())), 5);
        (ECTFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d_b;
      }

      rtb_Switch_g4 = rtb_motohawk_interpolation_1d_b;
    }

    /* End of Switch: '<S281>/Switch' */

    /* Switch: '<S281>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d1'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch1_m = (real_T)rtb_LogicalOperator1_j;
    } else {
      /* S-Function Block: <S281>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_ol = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s434_motohawk_prelookup, (real_T *)
           ((IATFanSpeed_StallTbl_DataStore())), 5);
        (IATFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d1_ol;
      }

      rtb_Switch1_m = rtb_motohawk_interpolation_1d1_ol;
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Switch: '<S281>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d2'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch2_m = (real_T)rtb_Switch1_jh;
    } else {
      /* S-Function Block: <S281>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_jf = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s431_motohawk_prelookup, (real_T *)
           ((ACPresFanSpeed_StallTbl_DataStore())), 5);
        (ACPresFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d2_jf;
      }

      rtb_Switch2_m = rtb_motohawk_interpolation_1d2_jf;
    }

    /* End of Switch: '<S281>/Switch2' */

    /* Switch: '<S281>/Switch3' incorporates:
     *  Product: '<S281>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch3_l = (real_T)BaseEngineController_LS_128_B.s514_Merge;
    } else {
      rtb_Switch3_l = (real_T)BaseEngineController_LS_128_B.s514_Merge *
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
      rtb_Switch_edx = GetFaultActionStatus(5);
    }

    /* Switch: '<S281>/Switch4' incorporates:
     *  Constant: '<S281>/Constant'
     */
    if (rtb_Switch_edx) {
      rtb_Switch4_k = 0.0;
    } else {
      /* Product: '<S281>/Product3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration9'
       */
      rtb_DataTypeConversion1_g = rtb_Switch3_l * (real_T)(Fan1ACSw_DataStore());

      /* Product: '<S281>/Product2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration8'
       */
      rtb_DataTypeConversion_cy = rtb_Switch2_m * (real_T)(Fan1ACPres_DataStore());

      /* Product: '<S281>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration7'
       */
      rtb_Product1_es = rtb_Switch1_m * (real_T)(Fan1IAT_DataStore());

      /* MinMax: '<S281>/MinMax' incorporates:
       *  Product: '<S281>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration6'
       */
      u = rtb_Switch_g4 * (real_T)(Fan1ECT_DataStore());
      u = (u >= rtb_Product1_es) || rtIsNaN(rtb_Product1_es) ? u :
        rtb_Product1_es;
      u = (u >= rtb_DataTypeConversion_cy) || rtIsNaN(rtb_DataTypeConversion_cy)
        ? u : rtb_DataTypeConversion_cy;
      rtb_Switch4_k = (u >= rtb_DataTypeConversion1_g) || rtIsNaN
        (rtb_DataTypeConversion1_g) ? u : rtb_DataTypeConversion1_g;
    }

    /* End of Switch: '<S281>/Switch4' */

    /* Switch: '<S281>/Switch5' incorporates:
     *  Constant: '<S281>/Constant1'
     */
    if (rtb_Switch_edx) {
      rtb_DataTypeConversion1_g = 0.0;
    } else {
      /* Product: '<S281>/Product7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration13'
       */
      rtb_Product1_es = rtb_Switch3_l * (real_T)(Fan2ACSw_DataStore());

      /* Product: '<S281>/Product6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration12'
       */
      rtb_DataTypeConversion_cy = rtb_Switch2_m * (real_T)(Fan2ACPres_DataStore());

      /* Product: '<S281>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration11'
       */
      rtb_DataTypeConversion1_g = rtb_Switch1_m * (real_T)(Fan2IAT_DataStore());

      /* MinMax: '<S281>/MinMax1' incorporates:
       *  Product: '<S281>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration10'
       */
      u = rtb_Switch_g4 * (real_T)(Fan2ECT_DataStore());
      u = (u >= rtb_DataTypeConversion1_g) || rtIsNaN(rtb_DataTypeConversion1_g)
        ? u : rtb_DataTypeConversion1_g;
      u = (u >= rtb_DataTypeConversion_cy) || rtIsNaN(rtb_DataTypeConversion_cy)
        ? u : rtb_DataTypeConversion_cy;
      rtb_DataTypeConversion1_g = (u >= rtb_Product1_es) || rtIsNaN
        (rtb_Product1_es) ? u : rtb_Product1_es;
    }

    /* End of Switch: '<S281>/Switch5' */

    /* UnitDelay: '<S290>/Unit Delay' */
    BaseEngineController_LS_128_B.s290_UnitDelay =
      BaseEngineController_LS_128_DWork.s290_UnitDelay_DSTATE;

    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S282>/Constant'
     *  RelationalOperator: '<S282>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore())) {
      rtb_Switch_edx = TRUE;
    } else {
      rtb_Switch_edx = (BaseEngineController_LS_128_B.s290_UnitDelay <
                        (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S282>/Switch' */
    /* S-Function Block: <S290>/motohawk_delta_time */
    rtb_motohawk_delta_time_df = 0.005;

    /* Sum: '<S290>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S290>/motohawk_delta_time'
     */
    rtb_DataTypeConversion_cy = rtb_motohawk_delta_time_df +
      BaseEngineController_LS_128_B.s290_UnitDelay;

    /* S-Function Block: <S292>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s292_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_hj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S283>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration3'
     */
    rtb_RelationalOperator2_gk = (BaseEngineController_LS_128_B.s445_Switch1 >=
                                  (ETC_StallAppOvrThesh_DataStore()));

    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S292>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S292>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S292>/motohawk_delta_time'
     *  Sum: '<S292>/Sum'
     */
    if (rtb_RelationalOperator2_gk) {
      rtb_Product1_es = rtb_motohawk_delta_time_hj + AppStallOvrTmr_DataStore();
    } else {
      rtb_Product1_es = 0.0;
    }

    /* End of Switch: '<S292>/Switch' */
    /* RelationalOperator: '<S283>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_i2 = (rtb_Product1_es >=
      (ETC_StallAppOvrTm_DataStore()));

    /* Product: '<S283>/Product1' */
    BaseEngineController_LS_128_B.s283_Product1 = (rtb_RelationalOperator3_i2 ?
      (real_T)rtb_RelationalOperator2_gk : 0.0) *
      BaseEngineController_LS_128_B.s445_Switch1;

    /* Product: '<S283>/Product2' */
    rtb_Product2_h = (uint16_T)(rtb_RelationalOperator3_i2 ?
      rtb_RelationalOperator2_gk : 0);

    /* Stateflow: '<S283>/Ice Break' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration2'
     */
    BaseEngineController_LS_128_DWork.s291_presentTicks =
      BaseEngineController_LS_128_M->Timing.clockTick0;
    BaseEngineController_LS_128_DWork.s291_elapsedTicks =
      BaseEngineController_LS_128_DWork.s291_presentTicks -
      BaseEngineController_LS_128_DWork.s291_previousTicks;
    BaseEngineController_LS_128_DWork.s291_previousTicks =
      BaseEngineController_LS_128_DWork.s291_presentTicks;
    BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 =
      BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 +
      BaseEngineController_LS_128_DWork.s291_elapsedTicks;

    /* Gateway: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    /* During: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    if (BaseEngineController_LS_128_DWork.s291_is_active_c3_BaseEngineController_LS_128
        == 0) {
      /* Entry: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
      BaseEngineController_LS_128_DWork.s291_is_active_c3_BaseEngineController_LS_128
        = 1U;

      /* Transition: '<S291>:2' */
      BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_Init;
    } else {
      switch
        (BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128)
      {
       case BaseEngineController_LS_128_IN_Init:
        /* During 'Init': '<S291>:1' */
        if (BaseEngineController_LS_128_B.s471_Sum <
            (ETC_IceBreakEnblTm_DataStore())) {
          /* Transition: '<S291>:5' */
          BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128
            = BaseEngineController_LS_128_IN_Open;
          BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 = 0U;
        } else {
          BaseEngineController_LS_128_B.s291_etc = 0.0;
        }
        break;

       case BaseEngineController_LS_128_IN_Open:
        /* During 'Open': '<S291>:4' */
        if (BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 >=
            (uint32_T)ceil((ETC_IceBreakHoldTm_DataStore()) / 0.2 - 2.0E-9)) {
          /* Transition: '<S291>:14' */
          BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128
            = BaseEngineController_LS_128_IN_Wait;
        } else {
          BaseEngineController_LS_128_B.s291_etc = (ETC_IceBreakPos_DataStore());
        }
        break;

       case BaseEngineController_LS_128_IN_Wait:
        /* During 'Wait': '<S291>:15' */
        if (BaseEngineController_LS_128_B.s471_Sum >
            (ETC_IceBreakEnblTm_DataStore())) {
          /* Transition: '<S291>:16' */
          BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128
            = BaseEngineController_LS_128_IN_Init;
        } else {
          BaseEngineController_LS_128_B.s291_etc = 0.0;
        }
        break;

       default:
        /* Transition: '<S291>:2' */
        BaseEngineController_LS_128_DWork.s291_is_c3_BaseEngineController_LS_128
          = BaseEngineController_LS_128_IN_Init;
        break;
      }
    }

    /* End of Stateflow: '<S283>/Ice Break' */

    /* Switch: '<S283>/Switch' */
    if (rtb_Product2_h != 0) {
      BaseEngineController_LS_128_B.s283_Switch =
        BaseEngineController_LS_128_B.s283_Product1;
    } else {
      BaseEngineController_LS_128_B.s283_Switch =
        BaseEngineController_LS_128_B.s291_etc;
    }

    /* End of Switch: '<S283>/Switch' */

    /* Saturate: '<S292>/Saturation' */
    rtb_Saturation_hq = rtb_Product1_es >= 16000.0 ? 16000.0 : rtb_Product1_es <=
      0.0 ? 0.0 : rtb_Product1_es;

    /* S-Function (motohawk_sfun_data_write): '<S292>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AppStallOvrTmr */
    {
      AppStallOvrTmr_DataStore() = rtb_Saturation_hq;
    }

    /* ZeroOrderHold: '<S95>/Zero-Order Hold12' */
    BaseEngineController_LS_128_B.s92_FAN1 = rtb_Switch4_k;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold13' */
    BaseEngineController_LS_128_B.s92_FAN2 = rtb_DataTypeConversion1_g;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold14' incorporates:
     *  Constant: '<S95>/OFF3'
     */
    BaseEngineController_LS_128_B.s92_AC = FALSE;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold3' */
    BaseEngineController_LS_128_B.s92_SparkAdv =
      BaseEngineController_LS_128_ConstB.s95_motohawk_replicate2;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold4' incorporates:
     *  Constant: '<S95>/No Spark'
     */
    BaseEngineController_LS_128_B.s92_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold5' incorporates:
     *  Constant: '<S95>/No Start EOI'
     */
    BaseEngineController_LS_128_B.s92_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_128_B.s92_FPC[0]), (void *)
           (&BaseEngineController_LS_128_ConstB.s95_motohawk_replicate[0]),
           sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S95>/Zero-Order Hold7' */
    BaseEngineController_LS_128_B.s92_FUELP = rtb_Switch_edx;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold8' incorporates:
     *  Constant: '<S95>/No Start Fuel Timing'
     */
    BaseEngineController_LS_128_B.s92_SOI = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold9' */
    BaseEngineController_LS_128_B.s92_Throttle =
      BaseEngineController_LS_128_B.s283_Switch;

    /* Update for UnitDelay: '<S287>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s287_UnitDelay_DSTATE =
      rtb_LogicalOperator6_as;

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s288_UnitDelay_DSTATE =
      rtb_LogicalOperator1_j;

    /* Update for UnitDelay: '<S289>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s289_UnitDelay_DSTATE = rtb_Switch1_jh;

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s290_UnitDelay_DSTATE =
      rtb_DataTypeConversion_cy;
  } else {
    if (BaseEngineController_LS_128_DWork.s15_Stall_MODE) {
      /* Disable for Stateflow: '<S283>/Ice Break' */
      BaseEngineController_LS_128_DWork.s291_presentTicks =
        BaseEngineController_LS_128_M->Timing.clockTick0;
      BaseEngineController_LS_128_DWork.s291_elapsedTicks =
        BaseEngineController_LS_128_DWork.s291_presentTicks -
        BaseEngineController_LS_128_DWork.s291_previousTicks;
      BaseEngineController_LS_128_DWork.s291_previousTicks =
        BaseEngineController_LS_128_DWork.s291_presentTicks;
      BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 =
        BaseEngineController_LS_128_DWork.s291_temporalCounter_i1 +
        BaseEngineController_LS_128_DWork.s291_elapsedTicks;
      BaseEngineController_LS_128_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* S-Function Block: <S483>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S557>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S483>/motohawk_encoder_average_rpm'
   */
  rtb_DataTypeConversion1_g = (real_T)rtb_RPM;

  /* S-Function Block: <S550>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s550_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S550>/Product' incorporates:
   *  MinMax: '<S550>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S550>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_p : (RPMFiltConst_DataStore());

  /* Sum: '<S557>/Sum1' incorporates:
   *  Constant: '<S557>/Constant'
   *  Product: '<S557>/Product'
   *  Product: '<S557>/Product1'
   *  Sum: '<S557>/Sum'
   *  UnitDelay: '<S557>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s557_Sum1 = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s557_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_g * rtb_DataTypeConversion_p;

  /* Logic: '<S759>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(148) || IsFaultActive(149));

  /* Logic: '<S759>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S759>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(148) || IsFaultSuspected(149));

  /* S-Function Block: <S486>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S696>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S486>/motohawk_ain6'
   */
  rtb_DataTypeConversion1_g = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S696>/Switch' incorporates:
   *  Fcn: '<S696>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_LS_128_B.s696_Switch = 1023.0 -
      rtb_DataTypeConversion1_g;
  } else {
    BaseEngineController_LS_128_B.s696_Switch = rtb_DataTypeConversion1_g;
  }

  /* End of Switch: '<S696>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S756>/motohawk_data_read' */
  rtb_Product_ij = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S756>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration9'
   */
  u = (real_T)rtb_Product_ij;
  BaseEngineController_LS_128_B.s756_MinMax = (u <= (TPS1Adapt_Low_Max_DataStore
    ())) || rtIsNaN((TPS1Adapt_Low_Max_DataStore())) ? u :
    (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S696>/Sum2' */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s696_Switch -
    BaseEngineController_LS_128_B.s756_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S756>/motohawk_data_read1' */
  rtb_Product_ij = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S756>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration11'
   */
  u = (real_T)rtb_Product_ij;
  BaseEngineController_LS_128_B.s756_MinMax1 = (u >= (TPS1Adapt_Hi_Min_DataStore
    ())) || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ? u :
    (TPS1Adapt_Hi_Min_DataStore());

  /* Gain: '<S696>/Gain2' incorporates:
   *  Product: '<S696>/Product1'
   *  Sum: '<S696>/Sum1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion1_g /
    (BaseEngineController_LS_128_B.s756_MinMax1 -
     BaseEngineController_LS_128_B.s756_MinMax) * 100.0;

  /* MinMax: '<S760>/MinMax' incorporates:
   *  Constant: '<S696>/Constant1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion_p >= 0.0 ?
    rtb_DataTypeConversion_p : 0.0;

  /* MinMax: '<S760>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration1'
   */
  BaseEngineController_LS_128_B.s760_MinMax1 = (rtb_DataTypeConversion_p <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_p : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S758>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s758_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S758>/Product' incorporates:
   *  MinMax: '<S758>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_p : (TPS1FilterConst_DataStore());

  /* Sum: '<S766>/Sum1' incorporates:
   *  Constant: '<S766>/Constant'
   *  Product: '<S766>/Product'
   *  Product: '<S766>/Product1'
   *  Sum: '<S766>/Sum'
   *  UnitDelay: '<S766>/Unit Delay'
   */
  rtb_Sum1_bc = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s766_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s760_MinMax1 * rtb_DataTypeConversion_p;

  /* UnitDelay: '<S759>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_LS_128_DWork.s759_UnitDelay1_DSTATE;

  /* If: '<S759>/If' incorporates:
   *  Logic: '<S759>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S759>/If Action Subsystem' incorporates:
     *  ActionPort: '<S767>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_p);

    /* End of Outputs for SubSystem: '<S759>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S759>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S768>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_p);

    /* End of Outputs for SubSystem: '<S759>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S759>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_Sum1_bc, &rtb_Merge_p);

    /* End of Outputs for SubSystem: '<S759>/If Action Subsystem2' */
  }

  /* End of If: '<S759>/If' */

  /* If: '<S770>/If' incorporates:
   *  Inport: '<S771>/In1'
   *  Inport: '<S772>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S770>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S770>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S770>/NewValue' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    BaseEngineController_LS_128_B.s770_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S770>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S770>/OldValue' incorporates:
     *  ActionPort: '<S772>/Action Port'
     */
    BaseEngineController_LS_128_B.s770_Merge = rtb_Merge_p;

    /* End of Outputs for SubSystem: '<S770>/OldValue' */
  }

  /* End of If: '<S770>/If' */

  /* Logic: '<S776>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S776>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S776>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(154) || IsFaultActive(155));

  /* Logic: '<S776>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S776>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S776>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S776>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(154) || IsFaultSuspected(155));

  /* S-Function Block: <S486>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S697>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S486>/motohawk_ain9'
   */
  rtb_DataTypeConversion1_g = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S697>/Switch' incorporates:
   *  Fcn: '<S697>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_LS_128_B.s697_Switch = 1023.0 -
      rtb_DataTypeConversion1_g;
  } else {
    BaseEngineController_LS_128_B.s697_Switch = rtb_DataTypeConversion1_g;
  }

  /* End of Switch: '<S697>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S773>/motohawk_data_read' */
  rtb_Product_ij = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S773>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration9'
   */
  u = (real_T)rtb_Product_ij;
  BaseEngineController_LS_128_B.s773_MinMax = (u <= (TPS2Adapt_Low_Max_DataStore
    ())) || rtIsNaN((TPS2Adapt_Low_Max_DataStore())) ? u :
    (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S697>/Sum2' */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s697_Switch -
    BaseEngineController_LS_128_B.s773_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S773>/motohawk_data_read1' */
  rtb_Product_ij = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S773>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration11'
   */
  u = (real_T)rtb_Product_ij;
  BaseEngineController_LS_128_B.s773_MinMax1 = (u >= (TPS2Adapt_Hi_Min_DataStore
    ())) || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ? u :
    (TPS2Adapt_Hi_Min_DataStore());

  /* Gain: '<S697>/Gain2' incorporates:
   *  Product: '<S697>/Product1'
   *  Sum: '<S697>/Sum1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion1_g /
    (BaseEngineController_LS_128_B.s773_MinMax1 -
     BaseEngineController_LS_128_B.s773_MinMax) * 100.0;

  /* MinMax: '<S777>/MinMax' incorporates:
   *  Constant: '<S697>/Constant1'
   */
  rtb_DataTypeConversion_p = rtb_DataTypeConversion_p >= 0.0 ?
    rtb_DataTypeConversion_p : 0.0;

  /* MinMax: '<S777>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration1'
   */
  BaseEngineController_LS_128_B.s777_MinMax1 = (rtb_DataTypeConversion_p <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_p : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S775>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s775_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S775>/Product' incorporates:
   *  MinMax: '<S775>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S775>/motohawk_calibration'
   */
  rtb_DataTypeConversion_p /= (rtb_DataTypeConversion_p >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_p : (TPS2FilterConst_DataStore());

  /* Sum: '<S783>/Sum1' incorporates:
   *  Constant: '<S783>/Constant'
   *  Product: '<S783>/Product'
   *  Product: '<S783>/Product1'
   *  Sum: '<S783>/Sum'
   *  UnitDelay: '<S783>/Unit Delay'
   */
  rtb_Sum1_ly = (1.0 - rtb_DataTypeConversion_p) *
    BaseEngineController_LS_128_DWork.s783_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s777_MinMax1 * rtb_DataTypeConversion_p;

  /* UnitDelay: '<S776>/Unit Delay1' */
  rtb_UnitDelay1_b2 = BaseEngineController_LS_128_DWork.s776_UnitDelay1_DSTATE;

  /* If: '<S776>/If' incorporates:
   *  Logic: '<S776>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S776>/If Action Subsystem' incorporates:
     *  ActionPort: '<S784>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_b2,
      &rtb_Merge_ho);

    /* End of Outputs for SubSystem: '<S776>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S776>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S785>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_ho);

    /* End of Outputs for SubSystem: '<S776>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S776>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S786>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_Sum1_ly, &rtb_Merge_ho);

    /* End of Outputs for SubSystem: '<S776>/If Action Subsystem2' */
  }

  /* End of If: '<S776>/If' */

  /* If: '<S787>/If' incorporates:
   *  Inport: '<S788>/In1'
   *  Inport: '<S789>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S787>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S787>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S787>/NewValue' incorporates:
     *  ActionPort: '<S788>/Action Port'
     */
    BaseEngineController_LS_128_B.s787_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S787>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S787>/OldValue' incorporates:
     *  ActionPort: '<S789>/Action Port'
     */
    BaseEngineController_LS_128_B.s787_Merge = rtb_Merge_ho;

    /* End of Outputs for SubSystem: '<S787>/OldValue' */
  }

  /* End of If: '<S787>/If' */

  /* Logic: '<S452>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_as = (IsFaultActive(148) || IsFaultActive(149));

  /* Logic: '<S452>/Logical Operator6' incorporates:
   *  Logic: '<S452>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (rtb_LogicalOperator6_as && (IsFaultActive(154) ||
    IsFaultActive(155)));

  /* Switch: '<S452>/Switch2' incorporates:
   *  Logic: '<S452>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_j || IsFaultActive(156)) {
    /* MinMax: '<S452>/MinMax' */
    BaseEngineController_LS_128_B.s452_Switch2 =
      (BaseEngineController_LS_128_B.s787_Merge >=
       BaseEngineController_LS_128_B.s770_Merge) || rtIsNaN
      (BaseEngineController_LS_128_B.s770_Merge) ?
      BaseEngineController_LS_128_B.s787_Merge :
      BaseEngineController_LS_128_B.s770_Merge;
  } else {
    /* Switch: '<S452>/Switch1' */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s452_Switch2 =
        BaseEngineController_LS_128_B.s787_Merge;
    } else {
      BaseEngineController_LS_128_B.s452_Switch2 =
        BaseEngineController_LS_128_B.s770_Merge;
    }

    /* End of Switch: '<S452>/Switch1' */
  }

  /* End of Switch: '<S452>/Switch2' */

  /* RelationalOperator: '<S91>/RelOp' incorporates:
   *  Constant: '<S91>/Constant'
   */
  rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s468_State == 2);

  /* S-Function Block: <S584>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s584_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ly = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S584>/Unit Delay' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s584_UnitDelay_DSTATE;

  /* Logic: '<S559>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(75) || IsFaultActive(76));

  /* Logic: '<S559>/Logical Operator6' */
  rtb_LogicalOperator1_j = !rtb_LogicalOperator1_o0;

  /* Logic: '<S559>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status3'
   */
  rtb_Switch1_jh = (IsFaultSuspected(75) || IsFaultSuspected(76));

  /* S-Function Block: <S484>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_LS_128_B.s484_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S559>/Data Type Conversion' */
  rtb_DataTypeConversion_p = (real_T)
    BaseEngineController_LS_128_B.s484_motohawk_frequency_in;

  /* Product: '<S559>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_cy = rtb_DataTypeConversion_p * (FuelSensGain_DataStore
    ());

  /* Sum: '<S559>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s559_Sum1 = rtb_DataTypeConversion_cy +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S559>/Saturation' */
  rtb_Saturation_pm = BaseEngineController_LS_128_B.s559_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_128_B.s559_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_128_B.s559_Sum1;

  /* UnitDelay: '<S559>/Unit Delay1' */
  rtb_UnitDelay1_f = BaseEngineController_LS_128_DWork.s559_UnitDelay1_DSTATE;

  /* If: '<S559>/If' incorporates:
   *  Logic: '<S559>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_j && rtb_Switch1_jh) {
    /* Outputs for IfAction SubSystem: '<S559>/If Action Subsystem' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S559>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S559>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S577>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S559>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S559>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_Saturation_pm,
      &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S559>/If Action Subsystem2' */
  }

  /* End of If: '<S559>/If' */

  /* Product: '<S584>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S584>/motohawk_delta_time'
   *  Sum: '<S584>/Sum3'
   */
  rtb_DataTypeConversion_o = 1.0 / rtb_motohawk_delta_time_ly * (rtb_Merge_n -
    rtb_DataTypeConversion1_g);

  /* MinMax: '<S585>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S582>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_o = (rtb_DataTypeConversion_o >= (Fall_Rate_DataStore()))
    || rtIsNaN((Fall_Rate_DataStore())) ? rtb_DataTypeConversion_o :
    (Fall_Rate_DataStore());

  /* Sum: '<S584>/Sum2' incorporates:
   *  MinMax: '<S585>/MinMax1'
   *  Product: '<S584>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S582>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S584>/motohawk_delta_time'
   */
  rtb_Sum2_is = ((rtb_DataTypeConversion_o <= (Rise_Rate_DataStore())) ||
                 rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_o :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_ly +
    rtb_DataTypeConversion1_g;

  /* S-Function Block: <S580>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s580_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S580>/Product' incorporates:
   *  MinMax: '<S580>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S580>/motohawk_calibration'
   */
  rtb_DataTypeConversion_o /= (rtb_DataTypeConversion_o >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_o : (FuelSensFilterConst_DataStore());

  /* Sum: '<S583>/Sum1' incorporates:
   *  Constant: '<S583>/Constant'
   *  Product: '<S583>/Product'
   *  Product: '<S583>/Product1'
   *  Sum: '<S583>/Sum'
   *  UnitDelay: '<S583>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_DataTypeConversion_o) *
    BaseEngineController_LS_128_DWork.s583_UnitDelay_DSTATE + rtb_Merge_n *
    rtb_DataTypeConversion_o;

  /* UnitDelay: '<S581>/Unit Delay' */
  rtb_UnitDelay_cwr = BaseEngineController_LS_128_DWork.s581_UnitDelay_DSTATE;

  /* UnitDelay: '<S581>/Unit Delay1' */
  rtb_UnitDelay1_k = BaseEngineController_LS_128_DWork.s581_UnitDelay1_DSTATE;

  /* UnitDelay: '<S581>/Unit Delay2' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s581_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S575>/Multiport Switch' incorporates:
   *  Product: '<S581>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S575>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S581>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 0:
    rtb_DataTypeConversion1_g = rtb_Sum2_is;
    break;

   case 1:
    rtb_DataTypeConversion1_g = rtb_Sum1_c;
    break;

   default:
    /* Product: '<S581>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S581>/motohawk_calibration3'
     */
    rtb_DataTypeConversion1_g *= (Gain3_DataStore());

    /* Sum: '<S581>/Sum2' incorporates:
     *  Product: '<S581>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S581>/motohawk_calibration2'
     */
    rtb_DataTypeConversion1_g += (Gain2_DataStore()) * rtb_UnitDelay1_k;

    /* Sum: '<S581>/Sum' incorporates:
     *  Product: '<S581>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S581>/motohawk_calibration1'
     *  Sum: '<S581>/Sum1'
     */
    rtb_DataTypeConversion1_g = ((Gain1_DataStore()) * rtb_UnitDelay_cwr +
      rtb_DataTypeConversion1_g) + rtb_Merge_n;
    rtb_DataTypeConversion1_g *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S575>/Multiport Switch' */
  /* If: '<S579>/If' incorporates:
   *  Inport: '<S586>/In1'
   *  Inport: '<S587>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S579>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S579>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S579>/NewValue' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    BaseEngineController_LS_128_B.s579_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S579>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S579>/OldValue' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    BaseEngineController_LS_128_B.s579_Merge = rtb_DataTypeConversion1_g;

    /* End of Outputs for SubSystem: '<S579>/OldValue' */
  }

  /* End of If: '<S579>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Crank' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_LogicalOperator6_as) {
    if (!BaseEngineController_LS_128_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_128_DWork.s15_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S97>/Multiport Switch2' incorporates:
     *  Constant: '<S97>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_DataTypeConversion1_g = 0.0;
    } else {
      rtb_DataTypeConversion1_g = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S97>/Multiport Switch2' */

    /* MultiPortSwitch: '<S97>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_APP1;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_LS_128_B.s452_Switch2;
    }

    /* End of MultiPortSwitch: '<S97>/Multiport Switch1' */

    /* Sum: '<S97>/Add' incorporates:
     *  Constant: '<S97>/ClearFloodFueling1'
     *  Gain: '<S97>/Gain'
     *  Product: '<S97>/Product1'
     */
    rtb_DataTypeConversion1_g = 0.01 * rtb_motohawk_replicate1 *
      rtb_DataTypeConversion1_g + 1.0;

    /* RelationalOperator: '<S97>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_as = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S90>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s667_Merge, (CrankECT05IdxArr_DataStore()),
         5, (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_ad = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_128_B.s557_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s557_Sum1, (CrankRPM05IdxArr_DataStore()),
         5, (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_iy = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s685_Merge, (CrankIAT05IdxArr_DataStore()),
         5, (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_m = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_LS_128_B.s579_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s579_Merge, (CrankOXY05IdxArr_DataStore()),
         5, (CrankOXY05Idx_DataStore()));
      rtb_motohawk_prelookup3_g = (CrankOXY05Idx_DataStore());
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
    if (rtb_LogicalOperator6_as) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S97>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup3_g, (real_T *) ((CrankFPC_OXYMultTbl_DataStore
             ())), 5);
        (CrankFPC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_j;
      }

      /* S-Function Block: <S97>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_jm = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup2_m, (real_T *) ((CrankFPC_IATMultTbl_DataStore
             ())), 5);
        (CrankFPC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_jm;
      }

      /* S-Function Block: <S97>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_k = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup1_ad, rtb_motohawk_prelookup_iy, (real_T *)
           ((CrankFPCMap_DataStore())), 5, 5);
        (CrankFPC_DataStore()) = rtb_motohawk_interpolation_2d_k;
      }

      rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_k *
        rtb_motohawk_interpolation_1d_jm * rtb_motohawk_interpolation_1d1_j;
    }

    /* End of Switch: '<S97>/Switch' */

    /* Product: '<S97>/Product' */
    rtb_Product_oys = rtb_DataTypeConversion1_g * rtb_motohawk_replicate1;

    /* S-Function Block: <S98>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_f = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_ad, rtb_motohawk_prelookup_iy, (real_T *)
         ((CrankIACMap_DataStore())), 5, 5);
      (CrankIAC_DataStore()) = rtb_motohawk_interpolation_2d_f;
    }

    /* S-Function Block: <S98>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_m, (real_T *) ((CrankIAC_IATMultTbl_DataStore())),
         5);
      (CrankIAC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_p;
    }

    /* S-Function Block: <S98>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_mm = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup3_g, (real_T *) ((CrankIAC_OXYMultTbl_DataStore())),
         5);
      (CrankIAC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_mm;
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
    rtb_DataTypeConversion1_g = rtb_motohawk_interpolation_2d_f *
      rtb_motohawk_interpolation_1d_p * rtb_motohawk_interpolation_1d1_mm;

    /* Switch: '<S99>/Switch' */
    rtb_motohawk_replicate1 = rtb_DataTypeConversion1_g;

    /* DataTypeConversion: '<S90>/Data Type Conversion' */
    BaseEngineController_LS_128_B.s92_IACP = rtb_motohawk_replicate1;

    /* Switch: '<S99>/Switch1' incorporates:
     *  Constant: '<S99>/Constant'
     *  Constant: '<S99>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S99>/motohawk_data_read'
     *  Sum: '<S99>/Sum'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      rtb_motohawk_replicate1 = 100.0 - rtb_DataTypeConversion1_g;
    } else {
      rtb_motohawk_replicate1 = 0.0;
    }

    /* End of Switch: '<S99>/Switch1' */

    /* DataTypeConversion: '<S90>/Data Type Conversion1' */
    BaseEngineController_LS_128_B.s92_IACS = rtb_motohawk_replicate1;

    /* DataTypeConversion: '<S90>/Data Type Conversion2' incorporates:
     *  Constant: '<S90>/OFF'
     */
    BaseEngineController_LS_128_B.s92_WASTEGATE = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold12' incorporates:
     *  Constant: '<S90>/Mult1'
     */
    BaseEngineController_LS_128_B.s92_FAN1 = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold13' incorporates:
     *  Constant: '<S90>/Mult2'
     */
    BaseEngineController_LS_128_B.s92_FAN2 = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold14' incorporates:
     *  Constant: '<S90>/OFF3'
     */
    BaseEngineController_LS_128_B.s92_AC = FALSE;

    /* S-Function Block: <S90>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_j = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_ad, rtb_motohawk_prelookup_iy, (real_T *)
         ((CrankSparkMap_DataStore())), 5, 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_2d_j;
    }

    /* S-Function (motohawk_sfun_replicate): '<S90>/motohawk_replicate1' */

    /* S-Function Block: <S90>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_j;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold3' */
    BaseEngineController_LS_128_B.s92_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S90>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_p = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_ad, rtb_motohawk_prelookup_iy, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_p;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S90>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    BaseEngineController_LS_128_B.s92_SparkEnergy =
      rtb_motohawk_interpolation_2d1_p;

    /* S-Function Block: <S90>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_iy, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_f;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     */
    BaseEngineController_LS_128_B.s92_SOI = rtb_motohawk_interpolation_1d4_f;

    /* S-Function (motohawk_sfun_replicate): '<S90>/motohawk_replicate' */

    /* S-Function Block: <S90>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_oys;
      }
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_128_B.s92_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S90>/Zero-Order Hold7' incorporates:
     *  Constant: '<S90>/ON'
     */
    BaseEngineController_LS_128_B.s92_FUELP = TRUE;

    /* S-Function Block: <S90>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_iy, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     */
    BaseEngineController_LS_128_B.s92_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S90>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_ad, (real_T *) ((CrankAirflowSetPtTbl_DataStore
           ())), 5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_f;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    BaseEngineController_LS_128_B.s92_Throttle =
      rtb_motohawk_interpolation_1d1_f;
  } else {
    if (BaseEngineController_LS_128_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_128_DWork.s15_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Crank' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S488>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9123p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9123p0002,
      &messageObj);
    if ((BaseEngineController_LS_128_B.s488_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_128_B.s488_ReadCANMessage_o1)
      BaseEngineController_LS_128_B.s488_ReadCANMessage_o1++;
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
      BaseEngineController_LS_128_B.s488_Lambda = ((real_T) tmp0) / ((real_T)
        10000);
      BaseEngineController_LS_128_B.s488_OxygenConcentratio = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_128_B.s488_SystemVolts = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_128_B.s488_HeaterVolts = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_128_B.s488_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_128_B.s488_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_128_B.s488_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_128_B.s488_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_128_B.s488_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_128_B.s488_ReadCANMessage_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S488>/Data Type Conversion2' */
  BaseEngineController_LS_128_B.s488_DataValidState =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage_o8 != 0.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S488>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9124p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9124p0001,
      &messageObj);
    if ((BaseEngineController_LS_128_B.s488_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_128_B.s488_ReadCANMessage1_o1)
      BaseEngineController_LS_128_B.s488_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_128_B.s488_Lambda_o = ((real_T) tmp0) / ((real_T)
        10000);
      BaseEngineController_LS_128_B.s488_OxygenConcentratio_n = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_128_B.s488_SystemVolts_a = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_128_B.s488_HeaterVolts_d = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_128_B.s488_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_128_B.s488_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_128_B.s488_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_128_B.s488_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_128_B.s488_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_128_B.s488_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S488>/Data Type Conversion6' */
  BaseEngineController_LS_128_B.s488_DataValidState_a =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage1_o8 != 0.0));

  /* S-Function Block: <S439>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_128_B.s452_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s452_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S487>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9015p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9015p0001,
      &messageObj);
    if ((BaseEngineController_LS_128_B.s487_ReadCANMessage2_o1 + 1) >
        BaseEngineController_LS_128_B.s487_ReadCANMessage2_o1)
      BaseEngineController_LS_128_B.s487_ReadCANMessage2_o1++;
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
      BaseEngineController_LS_128_B.s487_GPS_Speed = ((real_T) tmp0) / ((real_T)
        62.1373);
      BaseEngineController_LS_128_B.s487_GPS_Altitude = ((real_T) tmp1) /
        ((real_T) 3.28084);
      BaseEngineController_LS_128_B.s487_GPS_Course = ((real_T) tmp2) / ((real_T)
        100);
      BaseEngineController_LS_128_B.s487_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_LS_128_B.s487_ReadCANMessage2_o1 = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S487>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9013p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9013p0001,
      &messageObj);
    if ((BaseEngineController_LS_128_B.s487_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_128_B.s487_ReadCANMessage_o1)
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o1++;
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
      BaseEngineController_LS_128_B.s487_GPS_Valid = (boolean_T) tmp0;
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) 2000);
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o4 = (real_T) tmp2;
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o5 = (real_T) tmp3;
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_128_B.s487_ReadCANMessage_o1 = 0;
    }
  }

  /* Logic: '<S456>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S456>/motohawk_fault_status2'
   */
  rtb_LogicalOperator6_as = !IsFaultActive(79);

  /* Logic: '<S456>/Logical Operator' incorporates:
   *  Logic: '<S456>/Logical Operator2'
   *  S-Function (motohawk_sfun_fault_status): '<S456>/motohawk_fault_status1'
   */
  rtb_Switch1_jh = (BaseEngineController_LS_128_B.s487_GPS_Valid &&
                    rtb_LogicalOperator6_as && (!IsFaultActive(81)));

  /* Logic: '<S456>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S456>/motohawk_calibration1'
   */
  rtb_RelationalOperator3_i2 = ((VSPD_GPSPreferred_DataStore()) &&
    rtb_Switch1_jh);

  /* UnitDelay: '<S513>/Unit Delay' */
  rtb_DataTypeConversion_cy =
    BaseEngineController_LS_128_DWork.s513_UnitDelay_DSTATE;

  /* UnitDelay: '<S546>/Unit Delay' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s546_UnitDelay_DSTATE;

  /* S-Function Block: <S537>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s537_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S537>/Product' incorporates:
   *  MinMax: '<S537>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration'
   */
  rtb_DataTypeConversion_o /= (rtb_DataTypeConversion_o >=
    (VSPDFiltConst_DataStore())) || rtIsNaN((VSPDFiltConst_DataStore())) ?
    rtb_DataTypeConversion_o : (VSPDFiltConst_DataStore());

  /* Logic: '<S512>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_o0 = (IsFaultActive(157) || IsFaultActive(158));

  /* Logic: '<S512>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_LogicalOperator1_o0;

  /* Logic: '<S512>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(157) || IsFaultSuspected(158));

  /* S-Function Block: <S482>/motohawk_frequency_in1 Frequency Input Get: VSPD_Pin */
  {
    extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    VSPD_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_bp);
  }

  /* DataTypeConversion: '<S482>/Data Type Conversion1' */
  rtb_DataTypeConversion_hs = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S482>/Gain1' */
  BaseEngineController_LS_128_B.s482_Gain1 = 0.01 * rtb_DataTypeConversion_hs;

  /* S-Function Block: <S542>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s482_Gain1, (VSPDIdxArr_DataStore()), 5,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_p = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S542>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_128_B.s542_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_p, (real_T *)
      ((VSPDTbl_DataStore())), 5);
  }

  /* UnitDelay: '<S512>/Unit Delay' */
  rtb_UnitDelay_ag = BaseEngineController_LS_128_DWork.s512_UnitDelay_DSTATE;

  /* If: '<S512>/If' incorporates:
   *  Logic: '<S512>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S512>/If Action Subsystem' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay_ag,
      &rtb_Merge_fv);

    /* End of Outputs for SubSystem: '<S512>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_o0) {
    /* Outputs for IfAction SubSystem: '<S512>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_fv);

    /* End of Outputs for SubSystem: '<S512>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S512>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s542_motohawk_interpolation_1d,
       &rtb_Merge_fv);

    /* End of Outputs for SubSystem: '<S512>/If Action Subsystem2' */
  }

  /* End of If: '<S512>/If' */

  /* Sum: '<S543>/Sum1' incorporates:
   *  Constant: '<S543>/Constant'
   *  Product: '<S543>/Product'
   *  Product: '<S543>/Product1'
   *  Sum: '<S543>/Sum'
   *  UnitDelay: '<S543>/Unit Delay'
   */
  rtb_Sum1_fs = (1.0 - rtb_DataTypeConversion_o) *
    BaseEngineController_LS_128_DWork.s543_UnitDelay_DSTATE + rtb_Merge_fv *
    rtb_DataTypeConversion_o;

  /* If: '<S541>/If' incorporates:
   *  Inport: '<S544>/In1'
   *  Inport: '<S545>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S541>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S541>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S541>/NewValue' incorporates:
     *  ActionPort: '<S544>/Action Port'
     */
    BaseEngineController_LS_128_B.s541_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S541>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S541>/OldValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    BaseEngineController_LS_128_B.s541_Merge = rtb_Sum1_fs;

    /* End of Outputs for SubSystem: '<S541>/OldValue' */
  }

  /* End of If: '<S541>/If' */

  /* Sum: '<S546>/Sum2' */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s541_Merge -
    rtb_DataTypeConversion1_g;

  /* S-Function Block: <S546>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s546_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ni = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S546>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S546>/motohawk_delta_time'
   */
  rtb_DataTypeConversion_hs = rtb_DataTypeConversion1_g /
    rtb_motohawk_delta_time_ni;

  /* Abs: '<S513>/Abs' */
  rtb_DataTypeConversion_hs = fabs(rtb_DataTypeConversion_hs);

  /* RelationalOperator: '<S513>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S513>/motohawk_calibration2'
   */
  rtb_LogicalOperator6_as = (rtb_DataTypeConversion_hs >=
    (VSPD_RateReject_DataStore()));

  /* Logic: '<S513>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S513>/motohawk_calibration1'
   */
  BaseEngineController_LS_128_B.s513_LogicalOperator = ((rtb_LogicalOperator6_as
    && (VSPD_RateReject_Enable_DataStore())));

  /* Sum: '<S513>/Sum' incorporates:
   *  UnitDelay: '<S513>/Unit Delay1'
   */
  rtb_DataTypeConversion_hs = BaseEngineController_LS_128_B.s541_Merge -
    BaseEngineController_LS_128_DWork.s513_UnitDelay1_DSTATE;

  /* Abs: '<S513>/Abs2' */
  rtb_DataTypeConversion_hs = fabs(rtb_DataTypeConversion_hs);

  /* RelationalOperator: '<S513>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S513>/motohawk_calibration4'
   */
  rtb_LogicalOperator6_as = (rtb_DataTypeConversion_hs >=
    (VPSD_ChangeReject_DataStore()));

  /* Abs: '<S513>/Abs1' */
  rtb_DataTypeConversion_hs = fabs(BaseEngineController_LS_128_B.s541_Merge);

  /* RelationalOperator: '<S513>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S513>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_j = (rtb_DataTypeConversion_hs <=
    (VSPD_ZeroSpeed_DataStore()));

  /* Logic: '<S513>/Logical Operator3' incorporates:
   *  Logic: '<S513>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S513>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s513_LogicalOperator3 =
    ((rtb_LogicalOperator6_as && rtb_LogicalOperator1_j &&
      (VSPD_ChangeReject_Enable_DataStore())));

  /* Logic: '<S513>/Logical Operator1' */
  rtb_LogicalOperator1_o0 = (BaseEngineController_LS_128_B.s513_LogicalOperator ||
    BaseEngineController_LS_128_B.s513_LogicalOperator3);

  /* UnitDelay: '<S513>/Unit Delay2' */
  rtb_RelationalOperator6_c =
    BaseEngineController_LS_128_DWork.s513_UnitDelay2_DSTATE;

  /* Memory: '<S547>/Memory' */
  rtb_RelationalOperator5_k =
    BaseEngineController_LS_128_DWork.s547_Memory_PreviousInput;

  /* CombinatorialLogic: '<S547>/Logic' */
  {
    uint_T rowidx= 0;

    /* Compute the truth table row index corresponding to the input */
    rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_o0 != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator6_c != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator5_k != 0);

    /* Copy the appropriate row of the table into the block output vector */
    rtb_Logic_b[0] = BaseEngineController_LS_128_ConstP.pooled889[rowidx];
    rtb_Logic_b[1] = BaseEngineController_LS_128_ConstP.pooled889[rowidx + 8];
  }

  /* Switch: '<S513>/Switch' incorporates:
   *  Logic: '<S513>/Logical Operator5'
   *  UnitDelay: '<S513>/Unit Delay3'
   */
  if (rtb_Logic_b[0] || rtb_LogicalOperator1_o0) {
    BaseEngineController_LS_128_B.s513_Switch = rtb_DataTypeConversion_cy;
  } else {
    BaseEngineController_LS_128_B.s513_Switch =
      BaseEngineController_LS_128_DWork.s513_UnitDelay3_DSTATE;
  }

  /* End of Switch: '<S513>/Switch' */

  /* Switch: '<S456>/Switch2' */
  if (rtb_RelationalOperator3_i2) {
    /* Switch: '<S456>/Switch1' incorporates:
     *  Constant: '<S456>/Constant1'
     */
    if (rtb_Switch1_jh) {
      BaseEngineController_LS_128_B.s456_Switch2 =
        BaseEngineController_LS_128_B.s487_GPS_Speed;
    } else {
      BaseEngineController_LS_128_B.s456_Switch2 = 0.0;
    }

    /* End of Switch: '<S456>/Switch1' */
  } else {
    /* Switch: '<S456>/Switch' incorporates:
     *  Constant: '<S456>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S456>/motohawk_calibration'
     */
    if ((VSPD_DigitalPresent_DataStore())) {
      BaseEngineController_LS_128_B.s456_Switch2 =
        BaseEngineController_LS_128_B.s513_Switch;
    } else {
      BaseEngineController_LS_128_B.s456_Switch2 = 0.0;
    }

    /* End of Switch: '<S456>/Switch' */
  }

  /* End of Switch: '<S456>/Switch2' */
  /* S-Function Block: <S440>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD17In_DataStore()) = BaseEngineController_LS_128_B.s456_Switch2;
    (VSPD17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s456_Switch2, (VSPD17IdxArr_DataStore()),
       17, (VSPD17Idx_DataStore()));
    rtb_motohawk_prelookup1_m = (VSPD17Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S401>/Base TPS Request' */

  /* UnitDelay: '<S442>/Unit Delay2' */
  rtb_UnitDelay_ik = BaseEngineController_LS_128_DWork.s442_UnitDelay2_DSTATE;

  /* S-Function Block: <S442>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_128_B.s445_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s445_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_du = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S442>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_ny = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1_m, rtb_motohawk_prelookup_du, (real_T *)
       ((ETCRequestMap_DataStore())), 17, 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_2d_ny;
  }

  /* RelationalOperator: '<S442>/Relational Operator3' */
  BaseEngineController_LS_128_B.s442_RelationalOperator3 = ((rtb_UnitDelay_ik <
    rtb_motohawk_interpolation_2d_ny));

  /* Outputs for Enabled SubSystem: '<S442>/PassThrough1' */
  BaseEngineController_LS_128_PassThrough1
    (BaseEngineController_LS_128_B.s442_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_128_B.s442_Merge);

  /* End of Outputs for SubSystem: '<S442>/PassThrough1' */

  /* RelationalOperator: '<S442>/Relational Operator2' */
  rtb_RelationalOperator2_de = (rtb_UnitDelay_ik >
    rtb_motohawk_interpolation_2d_ny);

  /* Outputs for Enabled SubSystem: '<S442>/PassThrough2' */
  BaseEngineController_LS_128_PassThrough1(rtb_RelationalOperator2_de,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_128_B.s442_Merge);

  /* End of Outputs for SubSystem: '<S442>/PassThrough2' */

  /* S-Function Block: <S460>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s460_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_br = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S442>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s442_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_ik = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S442>/Product' incorporates:
   *  MinMax: '<S442>/MinMax'
   */
  rtb_UnitDelay_ik /= (rtb_UnitDelay_ik >=
                       BaseEngineController_LS_128_B.s442_Merge) || rtIsNaN
    (BaseEngineController_LS_128_B.s442_Merge) ? rtb_UnitDelay_ik :
    BaseEngineController_LS_128_B.s442_Merge;

  /* Product: '<S457>/Product' */
  rtb_DataTypeConversion1_g = rtb_motohawk_interpolation_2d_ny *
    rtb_UnitDelay_ik;

  /* Sum: '<S457>/Sum' incorporates:
   *  Constant: '<S457>/Constant'
   */
  rtb_DataTypeConversion_cy = 1.0 - rtb_UnitDelay_ik;

  /* UnitDelay: '<S457>/Unit Delay' */
  rtb_UnitDelay_ik = BaseEngineController_LS_128_DWork.s457_UnitDelay_DSTATE;

  /* Sum: '<S457>/Sum1' incorporates:
   *  Product: '<S457>/Product1'
   */
  rtb_DataTypeConversion_cy = rtb_DataTypeConversion_cy * rtb_UnitDelay_ik +
    rtb_DataTypeConversion1_g;

  /* UnitDelay: '<S460>/Unit Delay' */
  rtb_UnitDelay_ik = BaseEngineController_LS_128_DWork.s460_UnitDelay_DSTATE;

  /* Product: '<S460>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S460>/motohawk_delta_time'
   *  Sum: '<S460>/Sum3'
   */
  rtb_DataTypeConversion1_g = 1.0 / rtb_motohawk_delta_time_br *
    (rtb_DataTypeConversion_cy - rtb_UnitDelay_ik);

  /* S-Function Block: <S442>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_p = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_p;
  }

  /* MinMax: '<S461>/MinMax' */
  rtb_Abs_i = (rtb_DataTypeConversion1_g >= rtb_motohawk_interpolation_1d1_p) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_p) ? rtb_DataTypeConversion1_g :
    rtb_motohawk_interpolation_1d1_p;

  /* S-Function Block: <S442>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_p = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_p;
  }

  /* Sum: '<S460>/Sum2' incorporates:
   *  MinMax: '<S461>/MinMax'
   *  MinMax: '<S461>/MinMax1'
   *  Product: '<S460>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S460>/motohawk_delta_time'
   */
  BaseEngineController_LS_128_B.s460_Sum2 = ((rtb_Abs_i <=
    rtb_motohawk_interpolation_1d1_p) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_p) ? rtb_Abs_i :
    rtb_motohawk_interpolation_1d1_p) * rtb_motohawk_delta_time_br +
    rtb_UnitDelay_ik;

  /* Update for UnitDelay: '<S442>/Unit Delay2' incorporates:
   *  UnitDelay: '<S442>/Unit Delay1'
   */
  BaseEngineController_LS_128_DWork.s442_UnitDelay2_DSTATE =
    BaseEngineController_LS_128_DWork.s442_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S457>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s457_UnitDelay_DSTATE =
    rtb_DataTypeConversion_cy;

  /* Update for UnitDelay: '<S460>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s460_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s460_Sum2;

  /* Update for UnitDelay: '<S442>/Unit Delay1' incorporates:
   *  UnitDelay: '<S442>/Unit Delay3'
   */
  BaseEngineController_LS_128_DWork.s442_UnitDelay1_DSTATE =
    BaseEngineController_LS_128_DWork.s442_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S442>/Unit Delay3' incorporates:
   *  UnitDelay: '<S442>/Unit Delay4'
   */
  BaseEngineController_LS_128_DWork.s442_UnitDelay3_DSTATE =
    BaseEngineController_LS_128_DWork.s442_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S442>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s442_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_2d_ny;

  /* End of Outputs for SubSystem: '<S401>/Base TPS Request' */

  /* UnitDelay: '<S450>/Unit Delay' */
  rtb_DataTypeConversion_cy =
    BaseEngineController_LS_128_DWork.s450_UnitDelay_DSTATE;

  /* Sum: '<S450>/Sum' incorporates:
   *  Constant: '<S450>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S450>/motohawk_calibration'
   */
  rtb_Product1_es = 1.0 - (O2BankA_DelagFilterConst_DataStore());

  /* S-Function Block: <S491>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s491_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_hs = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S491>/Product' incorporates:
   *  MinMax: '<S491>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S491>/motohawk_calibration'
   */
  rtb_DataTypeConversion_hs /= (rtb_DataTypeConversion_hs >=
    (Bank1_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_hs :
    (Bank1_EquivRatioFilterConst_DataStore());

  /* Logic: '<S489>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S489>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S489>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* Math: '<S488>/Math Function' incorporates:
   *  Saturate: '<S488>/Saturation'
   *
   * About '<S488>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_128_B.s488_MathFunction = 1.0 /
    (BaseEngineController_LS_128_B.s488_Lambda >= 0.1 ?
     BaseEngineController_LS_128_B.s488_Lambda : 0.1);

  /* Product: '<S489>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s488_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S489>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s489_Sum1 = rtb_DataTypeConversion1_g +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S489>/Unit Delay1' */
  rtb_UnitDelay1_i = BaseEngineController_LS_128_DWork.s489_UnitDelay1_DSTATE;

  /* If: '<S489>/If' incorporates:
   *  Logic: '<S489>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem' incorporates:
     *  ActionPort: '<S492>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_i, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S489>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S493>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S489>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S494>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s489_Sum1, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S489>/If Action Subsystem2' */
  }

  /* End of If: '<S489>/If' */

  /* Sum: '<S496>/Sum1' incorporates:
   *  Constant: '<S496>/Constant'
   *  Product: '<S496>/Product'
   *  Product: '<S496>/Product1'
   *  Sum: '<S496>/Sum'
   *  UnitDelay: '<S496>/Unit Delay'
   */
  rtb_Sum1_gr = (1.0 - rtb_DataTypeConversion_hs) *
    BaseEngineController_LS_128_DWork.s496_UnitDelay_DSTATE + rtb_Merge_o *
    rtb_DataTypeConversion_hs;

  /* If: '<S495>/If' incorporates:
   *  Inport: '<S497>/In1'
   *  Inport: '<S498>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S495>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S495>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S495>/NewValue' incorporates:
     *  ActionPort: '<S497>/Action Port'
     */
    BaseEngineController_LS_128_B.s495_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S495>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S495>/OldValue' incorporates:
     *  ActionPort: '<S498>/Action Port'
     */
    BaseEngineController_LS_128_B.s495_Merge = rtb_Sum1_gr;

    /* End of Outputs for SubSystem: '<S495>/OldValue' */
  }

  /* End of If: '<S495>/If' */

  /* S-Function Block: <S499>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s499_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_hs = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S499>/Product' incorporates:
   *  MinMax: '<S499>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration'
   */
  rtb_DataTypeConversion_hs /= (rtb_DataTypeConversion_hs >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_hs :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S490>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S490>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S490>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(25) || IsFaultActive(26));

  /* Logic: '<S490>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S490>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S490>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S490>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(25) || IsFaultSuspected(26));

  /* Math: '<S488>/Math Function1' incorporates:
   *  Saturate: '<S488>/Saturation1'
   *
   * About '<S488>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_128_B.s488_MathFunction1 = 1.0 /
    (BaseEngineController_LS_128_B.s488_Lambda_o >= 0.1 ?
     BaseEngineController_LS_128_B.s488_Lambda_o : 0.1);

  /* Product: '<S490>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S490>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s488_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S490>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S490>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s490_Sum1 = rtb_DataTypeConversion1_g +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S490>/Unit Delay1' */
  rtb_UnitDelay1_ec = BaseEngineController_LS_128_DWork.s490_UnitDelay1_DSTATE;

  /* If: '<S490>/If' incorporates:
   *  Logic: '<S490>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S490>/If Action Subsystem' incorporates:
     *  ActionPort: '<S500>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_ec,
      &rtb_Merge_g);

    /* End of Outputs for SubSystem: '<S490>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S490>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S501>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_g);

    /* End of Outputs for SubSystem: '<S490>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S490>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S502>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s490_Sum1, &rtb_Merge_g);

    /* End of Outputs for SubSystem: '<S490>/If Action Subsystem2' */
  }

  /* End of If: '<S490>/If' */

  /* Sum: '<S504>/Sum1' incorporates:
   *  Constant: '<S504>/Constant'
   *  Product: '<S504>/Product'
   *  Product: '<S504>/Product1'
   *  Sum: '<S504>/Sum'
   *  UnitDelay: '<S504>/Unit Delay'
   */
  rtb_Sum1_f1 = (1.0 - rtb_DataTypeConversion_hs) *
    BaseEngineController_LS_128_DWork.s504_UnitDelay_DSTATE + rtb_Merge_g *
    rtb_DataTypeConversion_hs;

  /* If: '<S503>/If' incorporates:
   *  Inport: '<S505>/In1'
   *  Inport: '<S506>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S503>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S503>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S503>/NewValue' incorporates:
     *  ActionPort: '<S505>/Action Port'
     */
    BaseEngineController_LS_128_B.s503_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S503>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S503>/OldValue' incorporates:
     *  ActionPort: '<S506>/Action Port'
     */
    BaseEngineController_LS_128_B.s503_Merge = rtb_Sum1_f1;

    /* End of Outputs for SubSystem: '<S503>/OldValue' */
  }

  /* End of If: '<S503>/If' */

  /* MultiPortSwitch: '<S488>/Multiport Switch' incorporates:
   *  Gain: '<S488>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration2'
   *  Sum: '<S488>/Add'
   */
  if ((BankB_Avg_Enable_DataStore()) == FALSE) {
    BaseEngineController_LS_128_B.s488_MultiportSwitch =
      BaseEngineController_LS_128_B.s495_Merge;
  } else {
    BaseEngineController_LS_128_B.s488_MultiportSwitch =
      (BaseEngineController_LS_128_B.s495_Merge +
       BaseEngineController_LS_128_B.s503_Merge) * 0.5;
  }

  /* End of MultiPortSwitch: '<S488>/Multiport Switch' */

  /* Sum: '<S450>/Sum1' incorporates:
   *  Product: '<S450>/Product'
   *  Product: '<S450>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S450>/motohawk_calibration'
   */
  BaseEngineController_LS_128_B.s450_Sum1 = rtb_DataTypeConversion_cy *
    rtb_Product1_es + (O2BankA_DelagFilterConst_DataStore()) *
    BaseEngineController_LS_128_B.s488_MultiportSwitch;

  /* UnitDelay: '<S450>/Unit Delay1' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s450_UnitDelay1_DSTATE;

  /* Sum: '<S450>/Sum3' incorporates:
   *  Constant: '<S450>/Constant1'
   *  Product: '<S450>/Product2'
   *  Product: '<S450>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S450>/motohawk_calibration1'
   *  Sum: '<S450>/Sum2'
   */
  BaseEngineController_LS_128_B.s450_Sum3 = (1.0 -
    (O2BankB_DelagFiltConst_DataStore())) * rtb_DataTypeConversion1_g +
    (O2BankB_DelagFiltConst_DataStore()) *
    BaseEngineController_LS_128_B.s503_Merge;

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s473_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oq = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S473>/Switch' incorporates:
   *  Constant: '<S472>/Constant'
   *  Constant: '<S473>/Constant'
   *  RelationalOperator: '<S472>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S454>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S473>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S473>/motohawk_delta_time'
   *  Sum: '<S473>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_128_B.s473_Switch = rtb_motohawk_delta_time_oq +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_128_B.s473_Switch = 0.0;
  }

  /* End of Switch: '<S473>/Switch' */
  /* S-Function Block: <S437>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_128_B.s557_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s557_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_128_B.s437_motohawk_prelookup1 = (RPM09Idx_DataStore
      ());
  }

  /* S-Function Block: <S437>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_128_B.s557_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s557_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_128_B.s437_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S433>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT07In_DataStore()) = BaseEngineController_LS_128_B.s667_Merge;
    (ECT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s667_Merge, (ECT07IdxArr_DataStore()), 7,
       (ECT07Idx_DataStore()));
    BaseEngineController_LS_128_B.s433_motohawk_prelookup2 = (ECT07Idx_DataStore
      ());
  }

  /* S-Function Block: <S433>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_128_B.s667_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s667_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_a = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S434>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT07In_DataStore()) = BaseEngineController_LS_128_B.s685_Merge;
    (IAT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s685_Merge, (IAT07IdxArr_DataStore()), 7,
       (IAT07Idx_DataStore()));
    BaseEngineController_LS_128_B.s434_motohawk_prelookup1 = (IAT07Idx_DataStore
      ());
  }

  /* S-Function Block: <S630>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s630_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_hs = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S630>/Product' incorporates:
   *  MinMax: '<S630>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration'
   */
  rtb_DataTypeConversion_hs /= (rtb_DataTypeConversion_hs >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_hs : (SysVoltFilterConst_DataStore());

  /* Logic: '<S566>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(142) || IsFaultActive(143));

  /* Logic: '<S566>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S566>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(142) || IsFaultSuspected(143));

  /* S-Function Block: <S484>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get
      (&BaseEngineController_LS_128_B.s484_motohawk_ain14, NULL);
  }

  /* DataTypeConversion: '<S566>/Data Type Conversion' */
  rtb_DataTypeConversion_o = (real_T)
    BaseEngineController_LS_128_B.s484_motohawk_ain14;

  /* Product: '<S566>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = rtb_DataTypeConversion_o * (SysVoltGain_DataStore());

  /* Sum: '<S566>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s566_Sum1 = rtb_DataTypeConversion1_g +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S566>/Unit Delay1' */
  rtb_UnitDelay1_gd = BaseEngineController_LS_128_DWork.s566_UnitDelay1_DSTATE;

  /* If: '<S566>/If' incorporates:
   *  Logic: '<S566>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S566>/If Action Subsystem' incorporates:
     *  ActionPort: '<S631>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_gd,
      &rtb_Merge_g0);

    /* End of Outputs for SubSystem: '<S566>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S566>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S632>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_g0);

    /* End of Outputs for SubSystem: '<S566>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S566>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S633>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s566_Sum1, &rtb_Merge_g0);

    /* End of Outputs for SubSystem: '<S566>/If Action Subsystem2' */
  }

  /* End of If: '<S566>/If' */

  /* Sum: '<S635>/Sum1' incorporates:
   *  Constant: '<S635>/Constant'
   *  Product: '<S635>/Product'
   *  Product: '<S635>/Product1'
   *  Sum: '<S635>/Sum'
   *  UnitDelay: '<S635>/Unit Delay'
   */
  rtb_Sum1_oj = (1.0 - rtb_DataTypeConversion_hs) *
    BaseEngineController_LS_128_DWork.s635_UnitDelay_DSTATE + rtb_Merge_g0 *
    rtb_DataTypeConversion_hs;

  /* If: '<S634>/If' incorporates:
   *  Inport: '<S636>/In1'
   *  Inport: '<S637>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S634>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S634>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S634>/NewValue' incorporates:
     *  ActionPort: '<S636>/Action Port'
     */
    BaseEngineController_LS_128_B.s634_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S634>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S634>/OldValue' incorporates:
     *  ActionPort: '<S637>/Action Port'
     */
    BaseEngineController_LS_128_B.s634_Merge = rtb_Sum1_oj;

    /* End of Outputs for SubSystem: '<S634>/OldValue' */
  }

  /* End of If: '<S634>/If' */

  /* S-Function Block: <S438>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_128_B.s634_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s634_Merge, (SysVolt09IdxArr_DataStore()),
       9, (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_128_B.s438_motohawk_prelookup =
      (SysVolt09Idx_DataStore());
  }

  /* S-Function Block: <S431>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres07In_DataStore()) = BaseEngineController_LS_128_B.s571_Merge;
    (ACPres07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s571_Merge, (ACPres07IdxArr_DataStore()), 7,
       (ACPres07Idx_DataStore()));
    BaseEngineController_LS_128_B.s431_motohawk_prelookup1 =
      (ACPres07Idx_DataStore());
  }

  /* S-Function Block: <S596>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s596_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_hs = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S596>/Product' incorporates:
   *  MinMax: '<S596>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S596>/motohawk_calibration'
   */
  rtb_DataTypeConversion_hs /= (rtb_DataTypeConversion_hs >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_hs : (MAPFilterConst_DataStore());

  /* Logic: '<S561>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(120) || IsFaultActive(121));

  /* Logic: '<S561>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S561>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(120) || IsFaultSuspected(121));

  /* S-Function (motohawk_sfun_trigger): '<S563>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  if (BaseEngineController_LS_128_DWork.s563_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s563_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S561>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s563_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S561>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s561_Sum1 = rtb_DataTypeConversion1_g +
    (MAPOfst_DataStore());

  /* UnitDelay: '<S561>/Unit Delay1' */
  rtb_UnitDelay1_c3 = BaseEngineController_LS_128_DWork.s561_UnitDelay1_DSTATE;

  /* If: '<S561>/If' incorporates:
   *  Logic: '<S561>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S561>/If Action Subsystem' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_c3,
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S561>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S561>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S598>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S561>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S561>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s561_Sum1, &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S561>/If Action Subsystem2' */
  }

  /* End of If: '<S561>/If' */

  /* Sum: '<S601>/Sum1' incorporates:
   *  Constant: '<S601>/Constant'
   *  Product: '<S601>/Product'
   *  Product: '<S601>/Product1'
   *  Sum: '<S601>/Sum'
   *  UnitDelay: '<S601>/Unit Delay'
   */
  rtb_Sum1_g1 = (1.0 - rtb_DataTypeConversion_hs) *
    BaseEngineController_LS_128_DWork.s601_UnitDelay_DSTATE + rtb_Merge_e *
    rtb_DataTypeConversion_hs;

  /* If: '<S600>/If' incorporates:
   *  Inport: '<S602>/In1'
   *  Inport: '<S603>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S600>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S600>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S600>/NewValue' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    BaseEngineController_LS_128_B.s600_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S600>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S600>/OldValue' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    BaseEngineController_LS_128_B.s600_Merge = rtb_Sum1_g1;

    /* End of Outputs for SubSystem: '<S600>/OldValue' */
  }

  /* End of If: '<S600>/If' */

  /* S-Function Block: <S435>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_128_B.s600_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s600_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_k = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S435>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_128_B.s600_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s600_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_128_B.s435_motohawk_prelookup1 = (MAP09Idx_DataStore
      ());
  }

  /* S-Function Block: <S435>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_128_B.s600_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s600_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_128_B.s435_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S440>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_128_B.s456_Switch2;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s456_Switch2, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    BaseEngineController_LS_128_B.s440_motohawk_prelookup = (VSPD09Idx_DataStore
      ());
  }

  /* S-Function Block: <S440>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD07In_DataStore()) = BaseEngineController_LS_128_B.s456_Switch2;
    (VSPD07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s456_Switch2, (VSPD07IdxArr_DataStore()), 7,
       (VSPD07Idx_DataStore()));
    BaseEngineController_LS_128_B.s440_motohawk_prelookup2 =
      (VSPD07Idx_DataStore());
  }

  /* S-Function Block: <S432>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = BaseEngineController_LS_128_B.s658_Merge;
    (CAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s658_Merge, (CAT05IdxArr_DataStore()), 5,
       (CAT05Idx_DataStore()));
    BaseEngineController_LS_128_B.s432_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function Block: <S436>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (OXY05In_DataStore()) = BaseEngineController_LS_128_B.s579_Merge;
    (OXY05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s579_Merge, (OXY05IdxArr_DataStore()), 5,
       (OXY05Idx_DataStore()));
    BaseEngineController_LS_128_B.s436_motohawk_prelookup = (OXY05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S397>/motohawk_data_read1' */
  BaseEngineController_LS_128_B.s397_motohawk_data_read1 = EngineState_DataStore
    ();

  /* S-Function Block: <S397>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s397_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_128_B.s397_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S397>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S397>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch
    (BaseEngineController_LS_128_DWork.s403_is_c19_BaseEngineController_LS_128)
  {
   case BaseEngineController_LS_128_IN_CrankRun:
    /* During 'CrankRun': '<S403>:2' */
    if (BaseEngineController_LS_128_B.s397_motohawk_data_read1 == 1) {
      /* Transition: '<S403>:6' */
      BaseEngineController_LS_128_DWork.s403_is_c19_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_StallDelay;

      /* Entry 'StallDelay': '<S403>:3' */
      BaseEngineController_LS_128_B.s403_Enable = FALSE;
      BaseEngineController_LS_128_B.s403_Timer = 0.0;
      BaseEngineController_LS_128_DWork.s403_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_128_IN_Stall:
    /* During 'Stall': '<S403>:1' */
    if (BaseEngineController_LS_128_B.s397_motohawk_data_read1 > 1) {
      /* Transition: '<S403>:5' */
      BaseEngineController_LS_128_DWork.s403_is_c19_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_CrankRun;

      /* Entry 'CrankRun': '<S403>:2' */
      BaseEngineController_LS_128_B.s403_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_128_IN_StallDelay:
    /* During 'StallDelay': '<S403>:3' */
    if (BaseEngineController_LS_128_B.s397_motohawk_data_read1 > 1) {
      /* Transition: '<S403>:8' */
      BaseEngineController_LS_128_DWork.s403_is_c19_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_CrankRun;

      /* Entry 'CrankRun': '<S403>:2' */
      BaseEngineController_LS_128_B.s403_Enable = FALSE;
    } else if (((BaseEngineController_LS_128_B.s397_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_128_B.s403_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S403>:7' */
      BaseEngineController_LS_128_DWork.s403_is_c19_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_Stall;

      /* Entry 'Stall': '<S403>:1' */
      BaseEngineController_LS_128_B.s403_Enable = TRUE;
    } else {
      BaseEngineController_LS_128_B.s403_Timer =
        BaseEngineController_LS_128_DWork.s403_TOld +
        BaseEngineController_LS_128_B.s397_motohawk_delta_time;
      BaseEngineController_LS_128_DWork.s403_TOld =
        BaseEngineController_LS_128_B.s403_Timer;
    }
    break;

   default:
    /* Transition: '<S403>:4' */
    BaseEngineController_LS_128_DWork.s403_is_c19_BaseEngineController_LS_128 =
      BaseEngineController_LS_128_IN_Stall;

    /* Entry 'Stall': '<S403>:1' */
    BaseEngineController_LS_128_B.s403_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S397>/Baro Stall State Delay' */
  /* RelationalOperator: '<S405>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S405>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S405>/motohawk_data_read'
   */
  rtb_LogicalOperator6_as = (TPSFinal_DataStore() >= (BaroLearn_TPSPos_DataStore
                              ()));

  /* Logic: '<S562>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(122) || IsFaultActive(123));

  /* Logic: '<S562>/Logical Operator6' */
  rtb_LogicalOperator1_j = !rtb_RelationalOperator5_k;

  /* Logic: '<S562>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status3'
   */
  rtb_Switch1_jh = (IsFaultSuspected(122) || IsFaultSuspected(123));

  /* S-Function Block: <S484>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_128_B.s484_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S562>/Data Type Conversion' */
  rtb_DataTypeConversion_hs = (real_T)
    BaseEngineController_LS_128_B.s484_motohawk_ain_read1;

  /* Product: '<S562>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = rtb_DataTypeConversion_hs * (MAPTimeGain_DataStore
    ());

  /* Sum: '<S562>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s562_Sum1 = rtb_DataTypeConversion1_g +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S562>/Unit Delay1' */
  rtb_UnitDelay1_g4 = BaseEngineController_LS_128_DWork.s562_UnitDelay1_DSTATE;

  /* If: '<S562>/If' incorporates:
   *  Logic: '<S562>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_j && rtb_Switch1_jh) {
    /* Outputs for IfAction SubSystem: '<S562>/If Action Subsystem' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_g4,
      &rtb_Merge_fo);

    /* End of Outputs for SubSystem: '<S562>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S562>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_fo);

    /* End of Outputs for SubSystem: '<S562>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S562>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s562_Sum1, &rtb_Merge_fo);

    /* End of Outputs for SubSystem: '<S562>/If Action Subsystem2' */
  }

  /* End of If: '<S562>/If' */

  /* Logic: '<S405>/Logical Operator' incorporates:
   *  Constant: '<S409>/Constant'
   *  RelationalOperator: '<S405>/Relational Operator1'
   *  RelationalOperator: '<S409>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S405>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_k = (rtb_LogicalOperator6_as && (rtb_Merge_fo >=
    (BaroLearn_MAP_DataStore())) &&
    (BaseEngineController_LS_128_B.s397_motohawk_data_read1 > 1));

  /* S-Function Block: <S410>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s410_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_px = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S410>/Switch' incorporates:
   *  Constant: '<S410>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S410>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S410>/motohawk_delta_time'
   *  Sum: '<S410>/Sum'
   */
  if (rtb_RelationalOperator5_k) {
    rtb_Switch_l = rtb_motohawk_delta_time_px + BaroLearnTmr_DataStore();
  } else {
    rtb_Switch_l = 0.0;
  }

  /* End of Switch: '<S410>/Switch' */
  /* Product: '<S405>/Product' incorporates:
   *  RelationalOperator: '<S405>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S405>/motohawk_calibration'
   */
  rtb_Product_ij = (uint16_T)(rtb_RelationalOperator5_k ? rtb_Switch_l >=
    (BaroLearn_Tm_DataStore()) : 0);

  /* DataTypeConversion: '<S405>/Data Type Conversion' */
  rtb_RelationalOperator5_k = (rtb_Product_ij != 0);

  /* Outputs for Enabled SubSystem: '<S397>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S404>/Enable'
   */
  /* Logic: '<S397>/Logical Operator' */
  if (BaseEngineController_LS_128_B.s403_Enable || rtb_RelationalOperator5_k) {
    if (!BaseEngineController_LS_128_DWork.s397_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S404>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s404_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_128_DWork.s397_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S404>/Add' incorporates:
     *  Constant: '<S404>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration'
     */
    rtb_Add_n = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S404>/Sum' incorporates:
     *  Constant: '<S404>/Constant'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    rtb_Sum_c5 = (int8_T)
      (BaseEngineController_LS_128_DWork.s404_UnitDelay_DSTATE + 1);

    /* RelationalOperator: '<S404>/Relational Operator' */
    rtb_LogicalOperator6_as = (rtb_Sum_c5 <= rtb_Add_n);

    /* Switch: '<S404>/Switch' */
    if (rtb_LogicalOperator6_as) {
      rtb_Add_n = rtb_Sum_c5;
    }

    /* End of Switch: '<S404>/Switch' */

    /* Sum: '<S404>/Add1' incorporates:
     *  Constant: '<S404>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_o = (int8_T)(rtb_Add_n - 2);

    /* Logic: '<S404>/Logical Operator' incorporates:
     *  Constant: '<S404>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S404>/Relational Operator1'
     */
    rtb_LogicalOperator_a2 = (rtb_LogicalOperator6_as && (rtb_Sum_c5 > 2));

    /* Outputs for Enabled SubSystem: '<S404>/Collect Average' */
    BaseEngineController_LS_128_CollectAverage(rtb_LogicalOperator_a2,
      rtb_Add1_o, rtb_Merge_fo,
      &BaseEngineController_LS_128_B.s404_CollectAverage,
      &BaseEngineController_LS_128_DWork.s404_CollectAverage);

    /* End of Outputs for SubSystem: '<S404>/Collect Average' */

    /* Update for UnitDelay: '<S404>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s404_UnitDelay_DSTATE = rtb_Add_n;
  } else {
    if (BaseEngineController_LS_128_DWork.s397_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S404>/Collect Average' */
      BaseEngineController_LS_128_CollectAverage_Disable
        (&BaseEngineController_LS_128_DWork.s404_CollectAverage);

      /* End of Disable for SubSystem: '<S404>/Collect Average' */
      BaseEngineController_LS_128_DWork.s397_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Logic: '<S397>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S397>/Capture Signal At Startup' */

  /* If: '<S407>/If' incorporates:
   *  Inport: '<S415>/In1'
   *  Inport: '<S416>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S407>/override_enable'
   *  UnitDelay: '<S407>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S407>/NewValue' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    rtb_Merge_hqf = BaseEngineController_LS_128_DWork.s407_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S407>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S407>/OldValue' incorporates:
     *  ActionPort: '<S416>/Action Port'
     */
    rtb_Merge_hqf =
      BaseEngineController_LS_128_B.s404_CollectAverage.s408_Product;

    /* End of Outputs for SubSystem: '<S407>/OldValue' */
  }

  /* End of If: '<S407>/If' */

  /* Sum: '<S407>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/offset'
   */
  BaseEngineController_LS_128_B.s407_Sum = rtb_Merge_hqf +
    (BARO_offset_DataStore());

  /* S-Function Block: <S406>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEMapIn_DataStore()) = BaseEngineController_LS_128_B.s600_Merge;
    (VEMapIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s600_Merge, (VEMapIdxArr_DataStore()), 17,
       (VEMapIdx_DataStore()));
    rtb_motohawk_prelookup2_d = (VEMapIdx_DataStore());
  }

  /* S-Function Block: <S406>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_i = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_d, BaseEngineController_LS_128_B.s437_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d_i;
  }

  /* S-Function Block: <S406>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BaseEngineController_LS_128_B.s406_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2_d,
      BaseEngineController_LS_128_B.s437_Indexes, (real_T *)
      ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) =
      BaseEngineController_LS_128_B.s406_motohawk_interpolation_2d2;
  }

  /* Sum: '<S406>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S406>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S406>/motohawk_prelookup2'
   */
  BaseEngineController_LS_128_B.s406_Sum = rtb_motohawk_interpolation_2d_i +
    BaseEngineController_LS_128_B.s406_motohawk_interpolation_2d2;

  /* Saturate: '<S397>/Saturation1' */
  rtb_Saturation1_c = BaseEngineController_LS_128_B.s407_Sum >= 1.0 ?
    BaseEngineController_LS_128_B.s407_Sum : 1.0;

  /* S-Function Block: <S406>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1_c,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_nd = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S406>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_nd, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_o;
  }

  /* S-Function Block: <S434>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_128_B.s685_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s685_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_l = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S406>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_g = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_l, rtb_motohawk_prelookup1_a, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_g;
  }

  /* Product: '<S406>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S406>/Gas Const [J//kg-K]'
   *  Constant: '<S406>/Units Equivalency Factor'
   *  DataTypeConversion: '<S406>/Data Type Conversion'
   *  Fcn: '<S412>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S406>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S406>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S406>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S406>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S406>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S433>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S434>/motohawk_prelookup2'
   *  Saturate: '<S397>/Saturation1'
   */
  BaseEngineController_LS_128_B.s406_NominalAirFlowRate =
    BaseEngineController_LS_128_B.s557_Sum1 *
    BaseEngineController_LS_128_B.s600_Merge * rtb_motohawk_interpolation_1d1_o *
    rtb_motohawk_interpolation_2d1_g * CylSweptVol_DataStore() * (real_T)
    ((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_128_B.s685_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S406>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_128_B.s406_ModelAirMassFlowRate =
    BaseEngineController_LS_128_B.s406_Sum *
    BaseEngineController_LS_128_B.s406_NominalAirFlowRate;

  /* S-Function Block: <S523>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s523_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_al = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S523>/Product' incorporates:
   *  MinMax: '<S523>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration'
   */
  rtb_DataTypeConversion_al /= (rtb_DataTypeConversion_al >=
    (MAFFiltConst_DataStore())) || rtIsNaN((MAFFiltConst_DataStore())) ?
    rtb_DataTypeConversion_al : (MAFFiltConst_DataStore());

  /* Logic: '<S510>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(118) || IsFaultActive(119));

  /* Logic: '<S510>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S510>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(118) || IsFaultSuspected(119));

  /* S-Function Block: <S482>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_bp);
  }

  /* DataTypeConversion: '<S482>/Data Type Conversion' */
  rtb_Switch_ic = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S482>/Gain' */
  BaseEngineController_LS_128_B.s482_Gain = 0.01 * rtb_Switch_ic;

  /* S-Function Block: <S528>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s482_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_d = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S528>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_128_B.s528_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_d, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S510>/Unit Delay' */
  rtb_UnitDelay_cwg = BaseEngineController_LS_128_DWork.s510_UnitDelay_DSTATE;

  /* If: '<S510>/If' incorporates:
   *  Logic: '<S510>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay_cwg,
      &rtb_Merge_fh);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_fh);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S526>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s528_motohawk_interpolation_1d,
       &rtb_Merge_fh);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem2' */
  }

  /* End of If: '<S510>/If' */

  /* Sum: '<S529>/Sum1' incorporates:
   *  Constant: '<S529>/Constant'
   *  Product: '<S529>/Product'
   *  Product: '<S529>/Product1'
   *  Sum: '<S529>/Sum'
   *  UnitDelay: '<S529>/Unit Delay'
   */
  rtb_Sum1_n4 = (1.0 - rtb_DataTypeConversion_al) *
    BaseEngineController_LS_128_DWork.s529_UnitDelay_DSTATE + rtb_Merge_fh *
    rtb_DataTypeConversion_al;

  /* If: '<S527>/If' incorporates:
   *  Inport: '<S530>/In1'
   *  Inport: '<S531>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S527>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S527>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S527>/NewValue' incorporates:
     *  ActionPort: '<S530>/Action Port'
     */
    BaseEngineController_LS_128_B.s527_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S527>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S527>/OldValue' incorporates:
     *  ActionPort: '<S531>/Action Port'
     */
    BaseEngineController_LS_128_B.s527_Merge = rtb_Sum1_n4;

    /* End of Outputs for SubSystem: '<S527>/OldValue' */
  }

  /* End of If: '<S527>/If' */

  /* MultiPortSwitch: '<S406>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S406>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_128_B.s406_MultiportSwitch =
      BaseEngineController_LS_128_B.s406_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_128_B.s406_MultiportSwitch =
      BaseEngineController_LS_128_B.s527_Merge;
  }

  /* End of MultiPortSwitch: '<S406>/Multiport Switch' */
  /* S-Function Block: <S423>/motohawk_delta_time */
  rtb_Switch_ic = 0.005;

  /* UnitDelay: '<S423>/Unit Delay2' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s423_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S423>/Relational Operator4' incorporates:
   *  UnitDelay: '<S423>/Unit Delay2'
   */
  BaseEngineController_LS_128_B.s423_RelationalOperator4 =
    ((BaseEngineController_LS_128_DWork.s423_UnitDelay2_DSTATE <
      BaseEngineController_LS_128_B.s557_Sum1));

  /* Outputs for Enabled SubSystem: '<S423>/IncreasingFilter' incorporates:
   *  EnablePort: '<S427>/Enable'
   */
  if (BaseEngineController_LS_128_B.s423_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S427>/motohawk_calibration1' */
    BaseEngineController_LS_128_B.s423_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S423>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S423>/DecreasingFilter' incorporates:
   *  EnablePort: '<S425>/Enable'
   */
  /* RelationalOperator: '<S423>/Relational Operator3' */
  if (rtb_DataTypeConversion1_g > BaseEngineController_LS_128_B.s557_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S425>/motohawk_calibration2' */
    BaseEngineController_LS_128_B.s423_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S423>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S423>/DecreasingFilter' */

  /* Product: '<S423>/Product' incorporates:
   *  MinMax: '<S423>/MinMax'
   */
  rtb_Switch_ic /= (rtb_Switch_ic >= BaseEngineController_LS_128_B.s423_Merge) ||
    rtIsNaN(BaseEngineController_LS_128_B.s423_Merge) ? rtb_Switch_ic :
    BaseEngineController_LS_128_B.s423_Merge;

  /* Sum: '<S426>/Sum1' incorporates:
   *  Constant: '<S426>/Constant'
   *  Product: '<S426>/Product'
   *  Product: '<S426>/Product1'
   *  Sum: '<S426>/Sum'
   *  UnitDelay: '<S426>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s426_Sum1 = (1.0 - rtb_Switch_ic) *
    BaseEngineController_LS_128_DWork.s426_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s557_Sum1 * rtb_Switch_ic;

  /* Sum: '<S422>/Sum1' */
  rtb_Switch_ic = BaseEngineController_LS_128_B.s557_Sum1 -
    BaseEngineController_LS_128_B.s426_Sum1;

  /* Abs: '<S422>/Abs1' */
  rtb_Switch_ic = fabs(rtb_Switch_ic);

  /* RelationalOperator: '<S422>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S422>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_as = (rtb_Switch_ic <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S422>/Relational Operator2' incorporates:
   *  Constant: '<S422>/Constant'
   */
  rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s557_Sum1 > 0.0);

  /* S-Function Block: <S424>/motohawk_delta_time */
  rtb_Switch_ic = 0.005;

  /* UnitDelay: '<S424>/Unit Delay2' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s424_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S424>/Relational Operator4' incorporates:
   *  UnitDelay: '<S424>/Unit Delay2'
   */
  BaseEngineController_LS_128_B.s424_RelationalOperator4 =
    ((BaseEngineController_LS_128_DWork.s424_UnitDelay2_DSTATE <
      BaseEngineController_LS_128_B.s600_Merge));

  /* Outputs for Enabled SubSystem: '<S424>/IncreasingFilter' incorporates:
   *  EnablePort: '<S430>/Enable'
   */
  if (BaseEngineController_LS_128_B.s424_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S430>/motohawk_calibration1' */
    BaseEngineController_LS_128_B.s424_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S424>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S424>/DecreasingFilter' incorporates:
   *  EnablePort: '<S428>/Enable'
   */
  /* RelationalOperator: '<S424>/Relational Operator3' */
  if (rtb_DataTypeConversion1_g > BaseEngineController_LS_128_B.s600_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S428>/motohawk_calibration2' */
    BaseEngineController_LS_128_B.s424_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S424>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S424>/DecreasingFilter' */

  /* Product: '<S424>/Product' incorporates:
   *  MinMax: '<S424>/MinMax'
   */
  rtb_Switch_ic /= (rtb_Switch_ic >= BaseEngineController_LS_128_B.s424_Merge) ||
    rtIsNaN(BaseEngineController_LS_128_B.s424_Merge) ? rtb_Switch_ic :
    BaseEngineController_LS_128_B.s424_Merge;

  /* Sum: '<S429>/Sum1' incorporates:
   *  Constant: '<S429>/Constant'
   *  Product: '<S429>/Product'
   *  Product: '<S429>/Product1'
   *  Sum: '<S429>/Sum'
   *  UnitDelay: '<S429>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s429_Sum1 = (1.0 - rtb_Switch_ic) *
    BaseEngineController_LS_128_DWork.s429_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s600_Merge * rtb_Switch_ic;

  /* Sum: '<S422>/Sum' */
  rtb_Switch_ic = BaseEngineController_LS_128_B.s600_Merge -
    BaseEngineController_LS_128_B.s429_Sum1;

  /* Abs: '<S422>/Abs' */
  rtb_Switch_ic = fabs(rtb_Switch_ic);

  /* Logic: '<S422>/Logical Operator' incorporates:
   *  RelationalOperator: '<S422>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S422>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_128_B.s422_LogicalOperator = ((rtb_LogicalOperator6_as
    && rtb_LogicalOperator1_j && (rtb_Switch_ic <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S478>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) =
      BaseEngineController_LS_128_B.s406_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s406_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_a3 = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S451>/RelOp' incorporates:
   *  Constant: '<S451>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S401>/motohawk_data_read'
   */
  rtb_RelOp_cx = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S401>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S443>/Enable'
   */
  if (rtb_RelOp_cx) {
    if (!BaseEngineController_LS_128_DWork.s401_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S443>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s443_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_128_DWork.s401_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S443>/Sum' incorporates:
     *  Constant: '<S443>/Constant'
     *  UnitDelay: '<S443>/Unit Delay'
     */
    rtb_Add_n = (int8_T)(BaseEngineController_LS_128_DWork.s443_UnitDelay_DSTATE
                         + 1);

    /* Sum: '<S443>/Add' incorporates:
     *  Constant: '<S443>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S443>/motohawk_calibration'
     */
    rtb_Sum_c5 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S443>/Relational Operator' */
    rtb_LogicalOperator6_as = (rtb_Add_n <= rtb_Sum_c5);

    /* Switch: '<S443>/Switch' */
    if (rtb_LogicalOperator6_as) {
      rtb_Sum_c5 = rtb_Add_n;
    }

    /* End of Switch: '<S443>/Switch' */

    /* Sum: '<S443>/Add1' incorporates:
     *  Constant: '<S443>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_h = (int8_T)(rtb_Sum_c5 - 2);

    /* Logic: '<S443>/Logical Operator' incorporates:
     *  Constant: '<S443>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S443>/Relational Operator1'
     */
    rtb_LogicalOperator_cd = (rtb_LogicalOperator6_as && (rtb_Add_n > 2));

    /* Outputs for Enabled SubSystem: '<S443>/Collect Average' */
    BaseEngineController_LS_128_CollectAverage(rtb_LogicalOperator_cd,
      rtb_Add1_h, BaseEngineController_LS_128_B.s651_Merge,
      &BaseEngineController_LS_128_B.s443_CollectAverage,
      &BaseEngineController_LS_128_DWork.s443_CollectAverage);

    /* End of Outputs for SubSystem: '<S443>/Collect Average' */

    /* Update for UnitDelay: '<S443>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s443_UnitDelay_DSTATE = rtb_Sum_c5;
  } else {
    if (BaseEngineController_LS_128_DWork.s401_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S443>/Collect Average' */
      BaseEngineController_LS_128_CollectAverage_Disable
        (&BaseEngineController_LS_128_DWork.s443_CollectAverage);

      /* End of Disable for SubSystem: '<S443>/Collect Average' */
      BaseEngineController_LS_128_DWork.s401_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S401>/Capture ECT At Startup' */
  /* S-Function Block: <S476>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_128_B.s443_CollectAverage.s408_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s443_CollectAverage.s408_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_j = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S465>/Sum2' incorporates:
   *  UnitDelay: '<S465>/Unit Delay'
   */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s557_Sum1 -
    BaseEngineController_LS_128_DWork.s465_UnitDelay_DSTATE;

  /* S-Function Block: <S465>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s465_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_pc = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S465>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S465>/motohawk_delta_time'
   */
  rtb_DataTypeConversion1_g /= rtb_motohawk_delta_time_pc;

  /* S-Function Block: <S466>/motohawk_delta_time */
  rtb_Switch_ic = 0.005;

  /* Product: '<S466>/Product' incorporates:
   *  MinMax: '<S466>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S466>/motohawk_calibration'
   */
  rtb_Switch_ic /= (rtb_Switch_ic >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_ic :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S467>/Sum1' incorporates:
   *  Constant: '<S467>/Constant'
   *  Product: '<S467>/Product'
   *  Product: '<S467>/Product1'
   *  Sum: '<S467>/Sum'
   *  UnitDelay: '<S467>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s467_Sum1 = (1.0 - rtb_Switch_ic) *
    BaseEngineController_LS_128_DWork.s467_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_g * rtb_Switch_ic;

  /* S-Function Block: <S402>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_128_B.s467_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s467_Sum1, (RPMAccel17IdxArr_DataStore()),
       17, (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_128_B.s402_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S402>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_128_B.s473_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s473_Switch,
       (TimeSinceRun09IdxArr_DataStore()), 9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* RelationalOperator: '<S94>/RelOp' incorporates:
   *  Constant: '<S94>/Constant'
   */
  rtb_RelOp_g = (BaseEngineController_LS_128_B.s468_State == 3);

  /* S-Function Block: <S482>/motohawk_ain1 Resource: ClutchSw_Pin */
  {
    extern NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ClutchSw_Pin_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S508>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S482>/motohawk_ain1'
   */
  BaseEngineController_LS_128_B.s508_DataTypeConversion = (real_T)
    rtb_motohawk_ain1;

  /* RelationalOperator: '<S508>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S508>/SwitchPoint'
   */
  rtb_LogicalOperator6_as =
    (BaseEngineController_LS_128_B.s508_DataTypeConversion >
     (ClutchSwSwitchPt_DataStore()));

  /* Logic: '<S508>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S508>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_as ^= (ClutchSwPolarity_DataStore());

  /* If: '<S517>/If' incorporates:
   *  Inport: '<S518>/In1'
   *  Inport: '<S519>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S517>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S517>/override_enable'
   */
  if ((ClutchSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S517>/NewValue' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */
    BaseEngineController_LS_128_B.s517_Merge = (ClutchSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S517>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S517>/OldValue' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_LS_128_B.s517_Merge = rtb_LogicalOperator6_as;

    /* End of Outputs for SubSystem: '<S517>/OldValue' */
  }

  /* End of If: '<S517>/If' */

  /* S-Function Block: <S482>/motohawk_ain6 Resource: ScramblePin */
  {
    extern NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ScramblePin_AnalogInput_Get(&rtb_motohawk_ain6_k, NULL);
  }

  /* DataTypeConversion: '<S511>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S482>/motohawk_ain6'
   */
  BaseEngineController_LS_128_B.s511_DataTypeConversion = (real_T)
    rtb_motohawk_ain6_k;

  /* RelationalOperator: '<S511>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/SwitchPoint'
   */
  rtb_LogicalOperator6_as =
    (BaseEngineController_LS_128_B.s511_DataTypeConversion >
     (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S511>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator5_k = rtb_LogicalOperator6_as ^
    (ScramblePolarity_DataStore());

  /* S-Function Block: <S534>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s534_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ny = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S534>/Switch' incorporates:
   *  Constant: '<S534>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S534>/motohawk_delta_time'
   *  Sum: '<S534>/Sum'
   */
  if (rtb_RelationalOperator5_k) {
    rtb_Switch_ic = rtb_motohawk_delta_time_ny + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_ic = 0.0;
  }

  /* End of Switch: '<S534>/Switch' */
  /* Logic: '<S532>/Logical Operator' incorporates:
   *  RelationalOperator: '<S532>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_as = (rtb_RelationalOperator5_k && (rtb_Switch_ic >=
    (ScrambleDebounceDelay_DataStore())));

  /* If: '<S533>/If' incorporates:
   *  Inport: '<S535>/In1'
   *  Inport: '<S536>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S533>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S533>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S533>/NewValue' incorporates:
     *  ActionPort: '<S535>/Action Port'
     */
    BaseEngineController_LS_128_B.s533_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S533>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S533>/OldValue' incorporates:
     *  ActionPort: '<S536>/Action Port'
     */
    BaseEngineController_LS_128_B.s533_Merge = rtb_LogicalOperator6_as;

    /* End of Outputs for SubSystem: '<S533>/OldValue' */
  }

  /* End of If: '<S533>/If' */

  /* S-Function Block: <S604>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s604_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_al = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S604>/Product' incorporates:
   *  MinMax: '<S604>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S604>/motohawk_calibration'
   */
  rtb_DataTypeConversion_al /= (rtb_DataTypeConversion_al >=
    (MAPTimeFilterConst_DataStore())) || rtIsNaN((MAPTimeFilterConst_DataStore()))
    ? rtb_DataTypeConversion_al : (MAPTimeFilterConst_DataStore());

  /* Sum: '<S609>/Sum1' incorporates:
   *  Constant: '<S609>/Constant'
   *  Product: '<S609>/Product'
   *  Product: '<S609>/Product1'
   *  Sum: '<S609>/Sum'
   *  UnitDelay: '<S609>/Unit Delay'
   */
  rtb_Sum1_du = (1.0 - rtb_DataTypeConversion_al) *
    BaseEngineController_LS_128_DWork.s609_UnitDelay_DSTATE + rtb_Merge_fo *
    rtb_DataTypeConversion_al;

  /* If: '<S608>/If' incorporates:
   *  Inport: '<S610>/In1'
   *  Inport: '<S611>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S608>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S608>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S608>/NewValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    BaseEngineController_LS_128_B.s608_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S608>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S608>/OldValue' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    BaseEngineController_LS_128_B.s608_Merge = rtb_Sum1_du;

    /* End of Outputs for SubSystem: '<S608>/OldValue' */
  }

  /* End of If: '<S608>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Run' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!BaseEngineController_LS_128_DWork.s15_Run_MODE) {
      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
        /* Initial conditions for function-call system: '<S93>/DFCO' */

        /* S-Function Block: <S150>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_128_DWork.s150_motohawk_delta_time_DWORK1 =
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
          BaseEngineController_LS_128_DWork.s148_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
        /* Initial conditions for function-call system: '<S93>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S206>/IdleStateMachine' */
        BaseEngineController_LS_128_IdleStateMachine_Init();

        /* S-Function Block: <S205>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_128_DWork.s205_motohawk_delta_time_DWORK1 =
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
          BaseEngineController_LS_128_DWork.s209_motohawk_delta_time_DWORK1 =
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
          BaseEngineController_LS_128_DWork.s212_motohawk_delta_time_DWORK1 =
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
          BaseEngineController_LS_128_DWork.s237_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
        /* Initial conditions for function-call system: '<S93>/Boost Control' */

        /* S-Function Block: <S133>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_128_DWork.s133_motohawk_delta_time_DWORK1 =
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
          BaseEngineController_LS_128_DWork.s143_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
        /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

        /* S-Function Block: <S188>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_128_DWork.s188_motohawk_delta_time_DWORK1 =
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
          BaseEngineController_LS_128_DWork.s199_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
        /* Initial conditions for function-call system: '<S93>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S278>/Initial Condition is True' */
        BaseEngineController_LS_128_DWork.s278_InitialConditionisTrue_DSTATE =
          TRUE;
      }

      /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */
      /* InitializeConditions for UnitDelay: '<S257>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s257_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s254_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S253>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s253_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S254>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s254_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay1' */
      BaseEngineController_LS_128_DWork.s250_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S258>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s258_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s250_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S260>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s260_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay2' */
      BaseEngineController_LS_128_DWork.s250_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S259>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s259_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank A' */

      /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */
      /* InitializeConditions for UnitDelay: '<S269>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s269_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s266_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s265_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S266>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s266_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S262>/Unit Delay1' */
      BaseEngineController_LS_128_DWork.s262_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S270>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s270_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S262>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s262_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S272>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s272_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S262>/Unit Delay2' */
      BaseEngineController_LS_128_DWork.s262_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S271>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_128_DWork.s271_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank B' */
      /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
      BaseEngineController_LS_128_DWork.s93_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_LS_128_DWork.s15_Run_MODE = TRUE;
    }

    /* Outputs for Atomic SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function Block: <S103>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_128_B.s103_WarmUpRatio =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_k,
        rtb_motohawk_prelookup1_a, (real_T *) ((WarmUpEqRatioMap_DataStore())),
        5, 9);
      (WarmUpEqRatio_DataStore()) =
        BaseEngineController_LS_128_B.s103_WarmUpRatio;
    }

    /* S-Function Block: <S127>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_id = TableInterpolation1D_real_T
        (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_id;
    }

    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S127>/Constant'
     *  RelationalOperator: '<S127>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S127>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S103>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S402>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_128_B.s473_Switch >=
        rtb_motohawk_interpolation_1d_id) {
      /* S-Function Block: <S103>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeRatio = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
          ((WarmUpTimeRatioMap_DataStore())), 9, 5);
        (WarmUpTimeRatio_DataStore()) = rtb_WarmUptimeRatio;
      }

      BaseEngineController_LS_128_B.s127_Switch = rtb_WarmUptimeRatio;
    } else {
      BaseEngineController_LS_128_B.s127_Switch = 1.0;
    }

    /* End of Switch: '<S127>/Switch' */
    /* S-Function Block: <S103>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_128_B.s103_IATEnrichment =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_k,
        BaseEngineController_LS_128_B.s434_motohawk_prelookup, (real_T *)
        ((IntakeAirTempEnrichmentMap_DataStore())), 5, 5);
      (IntakeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_128_B.s103_IATEnrichment;
    }

    /* S-Function Block: <S103>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_128_B.s103_CATEnrichment =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_k,
        BaseEngineController_LS_128_B.s432_motohawk_prelookup, (real_T *)
        ((ChargeAirTempEnrichmentMap_DataStore())), 5, 5);
      (ChargeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_128_B.s103_CATEnrichment;
    }

    /* S-Function Block: <S103>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3_k = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_Indexes,
         BaseEngineController_LS_128_B.s437_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3_k;
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
      rtb_DataTypeConversion1_g = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S128>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S128>/OldValue' incorporates:
       *  ActionPort: '<S130>/Action Port'
       */
      rtb_DataTypeConversion1_g = rtb_motohawk_interpolation_2d3_k;

      /* End of Outputs for SubSystem: '<S128>/OldValue' */
    }

    /* End of If: '<S128>/If' */

    /* MinMax: '<S103>/MinMax' */
    u = (rtb_DataTypeConversion1_g >=
         BaseEngineController_LS_128_B.s103_WarmUpRatio) || rtIsNaN
      (BaseEngineController_LS_128_B.s103_WarmUpRatio) ?
      rtb_DataTypeConversion1_g : BaseEngineController_LS_128_B.s103_WarmUpRatio;
    u = (u >= BaseEngineController_LS_128_B.s127_Switch) || rtIsNaN
      (BaseEngineController_LS_128_B.s127_Switch) ? u :
      BaseEngineController_LS_128_B.s127_Switch;
    u = (u >= BaseEngineController_LS_128_B.s103_IATEnrichment) || rtIsNaN
      (BaseEngineController_LS_128_B.s103_IATEnrichment) ? u :
      BaseEngineController_LS_128_B.s103_IATEnrichment;
    BaseEngineController_LS_128_B.s103_DesEquivRatio = (u >=
      BaseEngineController_LS_128_B.s103_CATEnrichment) || rtIsNaN
      (BaseEngineController_LS_128_B.s103_CATEnrichment) ? u :
      BaseEngineController_LS_128_B.s103_CATEnrichment;

    /* End of Outputs for SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
    if (BaseEngineController_LS_128_DWork.s93_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_128_DWork.s93_motohawk_trigger1_DWORK1 = 1;
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
    rtb_DataTypeConversion1_g =
      BaseEngineController_LS_128_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_LS_128_B.s110_MinGovAirPID;

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
          rtb_motohawk_interpolation_1d2_lh = TableInterpolation1D_real_T
            (BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_lh;
        }

        /* S-Function Block: <S102>/motohawk_interpolation_1d1 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d1_h = TableInterpolation1D_real_T
            (BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
             ((MinETCSetPtLimitTbl_DataStore())), 9);
          (MinETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d1_h;
        }

        /* Switch: '<S102>/Switch2' */
        if (BaseEngineController_LS_128_B.s187_MultiportSwitch) {
          rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s190_Switch;
        } else {
          /* Switch: '<S102>/Switch4' incorporates:
           *  Logic: '<S102>/Logical Operator'
           *  Sum: '<S102>/Sum1'
           */
          if (!BaseEngineController_LS_128_B.s222_RelOp) {
            rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s460_Sum2
              + BaseEngineController_LS_128_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S102>/Switch4' */
        }

        /* End of Switch: '<S102>/Switch2' */

        /* MinMax: '<S125>/MinMax' */
        u = (rtb_DataTypeConversion1_g >= rtb_motohawk_interpolation_1d1_h) ||
          rtIsNaN(rtb_motohawk_interpolation_1d1_h) ? rtb_DataTypeConversion1_g :
          rtb_motohawk_interpolation_1d1_h;

        /* MinMax: '<S125>/MinMax1' incorporates:
         *  MinMax: '<S125>/MinMax'
         */
        rtb_DataTypeConversion1_g = (u <= rtb_motohawk_interpolation_1d2_lh) ||
          rtIsNaN(rtb_motohawk_interpolation_1d2_lh) ? u :
          rtb_motohawk_interpolation_1d2_lh;
      } else {
        rtb_DataTypeConversion1_g = rtb_APP1;
      }

      /* End of Switch: '<S102>/Switch1' */
      BaseEngineController_LS_128_B.s102_MultiportSwitch =
        rtb_DataTypeConversion1_g;
    } else {
      BaseEngineController_LS_128_B.s102_MultiportSwitch =
        rtb_DataTypeConversion1_g;
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
    rtb_LogicalOperator1_j = !BaseEngineController_LS_128_B.s488_DataValidState;

    /* Logic: '<S246>/Logical Operator1' */
    rtb_LogicalOperator6_as =
      !BaseEngineController_LS_128_B.s488_DataValidState_a;

    /* Logic: '<S246>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration'
     */
    rtb_LogicalOperator6_as = (rtb_LogicalOperator6_as && (BankB_Enbl_DataStore()));

    /* Logic: '<S246>/Logical Operator3' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S246>/motohawk_fault_action'
     */
    BaseEngineController_LS_128_B.s246_LogicalOperator3 =
      ((rtb_LogicalOperator1_j || rtb_LogicalOperator6_as ||
        GetFaultActionStatus(6)));

    /* S-Function (motohawk_sfun_data_write): '<S111>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() =
        BaseEngineController_LS_128_B.s246_LogicalOperator3;
    }

    /* Inport: '<S111>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_LS_128_B.s147_Product1;
    rtb_DesiredLambda_idx_0 = BaseEngineController_LS_128_B.s105_EquivRatioInfo
      [1];
    rtb_DesiredLambda_idx_1 = BaseEngineController_LS_128_B.s105_EquivRatioInfo
      [2];

    /* Logic: '<S241>/Logical Operator' incorporates:
     *  Constant: '<S241>/Constant'
     *  RelationalOperator: '<S241>/Relational Operator'
     *  RelationalOperator: '<S241>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration1'
     *  Sum: '<S241>/Sum'
     *  Sum: '<S241>/Sum1'
     */
    BaseEngineController_LS_128_B.s241_LogicalOperator =
      (((rtb_DesiredLambda_idx <= (EquivRatioDelta_DataStore()) + 1.0) &&
        (rtb_DesiredLambda_idx >= 1.0 - (EquivRatioDelta_DataStore()))));

    /* Logic: '<S241>/Logical Operator3' */
    BaseEngineController_LS_128_B.s241_LogicalOperator3 =
      !BaseEngineController_LS_128_B.s246_LogicalOperator3;

    /* S-Function Block: <S241>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_jg = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_j, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_jg;
    }

    /* RelationalOperator: '<S241>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S241>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S476>/motohawk_prelookup'
     */
    BaseEngineController_LS_128_B.s241_RelationalOperator5 =
      ((BaseEngineController_LS_128_B.s473_Switch >=
        rtb_motohawk_interpolation_1d_jg));

    /* Logic: '<S241>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration2'
     */
    BaseEngineController_LS_128_B.s241_LogicalOperator2 =
      ((BaseEngineController_LS_128_B.s422_LogicalOperator &&
        BaseEngineController_LS_128_B.s241_LogicalOperator &&
        BaseEngineController_LS_128_B.s241_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_LS_128_B.s241_RelationalOperator5));

    /* Logic: '<S111>/Logical Operator' */
    rtb_LogicalOperator_my =
      !BaseEngineController_LS_128_B.s241_LogicalOperator2;

    /* Logic: '<S111>/Logical Operator1' */
    rtb_LogicalOperator1_ow = !rtb_RelOp_g;

    /* S-Function Block: <S248>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_f = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((RichTargetDeltaMap_DataStore())), 9, 9);
      (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_f;
    }

    /* S-Function Block: <S248>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((LeanTargetDeltaMap_DataStore())), 9, 9);
      (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
    }

    /* S-Function Block: <S248>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S248>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S247>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_g = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_a, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_g;
    }

    /* S-Function Block: <S247>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_ov = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_a3, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_ov;
    }

    /* Product: '<S247>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S247>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S247>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S433>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S478>/motohawk_prelookup'
     */
    rtb_Switch2_m = rtb_motohawk_interpolation_1d_g *
      rtb_motohawk_interpolation_1d1_ov;

    /* Outputs for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */
    /* RelationalOperator: '<S250>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d2'
     *  Sum: '<S250>/Sum3'
     */
    rtb_AboveRich_d = (BaseEngineController_LS_128_B.s450_Sum1 >=
                       rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S250>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d3'
     *  Sum: '<S250>/Sum4'
     */
    rtb_LogicalOperator2_au = (BaseEngineController_LS_128_B.s450_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S257>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich_d != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_au != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_ir[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_ir[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S257>/Switch1' incorporates:
     *  UnitDelay: '<S257>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_ir[1]) {
      rtb_LogicalOperator1_j = rtb_CombinatorialLogic_ir[0];
    } else {
      rtb_LogicalOperator1_j =
        BaseEngineController_LS_128_DWork.s257_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S257>/Switch1' */

    /* Switch: '<S243>/Switch' */
    if (rtb_LogicalOperator_my) {
      BaseEngineController_LS_128_B.s243_Switch =
        BaseEngineController_LS_128_B.s450_Sum1;
    } else {
      /* Switch: '<S250>/Switch2' incorporates:
       *  Logic: '<S250>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d1'
       *  Sum: '<S250>/Sum1'
       *  Sum: '<S250>/Sum2'
       */
      if (!rtb_LogicalOperator1_j) {
        BaseEngineController_LS_128_B.s243_Switch =
          rtb_RichEquivRatioTargetDelta_f + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_128_B.s243_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S250>/Switch2' */
    }

    /* End of Switch: '<S243>/Switch' */

    /* Sum: '<S252>/Sum2' */
    BaseEngineController_LS_128_B.s252_Sum2 =
      BaseEngineController_LS_128_B.s243_Switch -
      BaseEngineController_LS_128_B.s450_Sum1;

    /* Product: '<S252>/Product5' */
    rtb_Switch3_l = BaseEngineController_LS_128_B.s252_Sum2 * rtb_Switch2_m;

    /* Product: '<S252>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration5'
     */
    BaseEngineController_LS_128_B.s252_Product2 = rtb_Switch3_l *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S254>/Switch1' incorporates:
     *  Constant: '<S249>/Constant'
     *  UnitDelay: '<S254>/Unit Delay'
     */
    if (rtb_LogicalOperator1_ow) {
      BaseEngineController_LS_128_B.s254_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_128_B.s254_Switch1 =
        BaseEngineController_LS_128_DWork.s254_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S254>/Switch1' */

    /* Product: '<S252>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration7'
     */
    rtb_Switch1_m = rtb_Switch3_l * (O2CtrlDGain_DataStore());

    /* Sum: '<S253>/Sum2' incorporates:
     *  UnitDelay: '<S253>/Unit Delay'
     */
    rtb_DataTypeConversion1_g = rtb_Switch1_m -
      BaseEngineController_LS_128_DWork.s253_UnitDelay_DSTATE;

    /* S-Function Block: <S253>/motohawk_delta_time */
    rtb_motohawk_delta_time_gho = 0.005;

    /* Product: '<S253>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S253>/motohawk_delta_time'
     */
    BaseEngineController_LS_128_B.s253_Product = rtb_DataTypeConversion1_g /
      rtb_motohawk_delta_time_gho;

    /* MinMax: '<S251>/MinMax' incorporates:
     *  Constant: '<S249>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration11'
     *  Sum: '<S249>/Sum'
     *  Sum: '<S252>/Sum1'
     */
    u = ((BaseEngineController_LS_128_B.s252_Product2 +
          BaseEngineController_LS_128_B.s253_Product) +
         BaseEngineController_LS_128_B.s254_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S251>/MinMax1' incorporates:
     *  MinMax: '<S251>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration10'
     */
    rtb_Multiplyby10ifnotyetenabled_a = (u <= (O2CtrlPIDOutUpperLimit_DataStore()))
      || rtIsNaN((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S252>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_g = rtb_Switch3_l * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S254>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s254_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_hev = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S256>/MinMax' incorporates:
     *  Product: '<S254>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S254>/motohawk_delta_time'
     *  Sum: '<S254>/Sum'
     */
    u = rtb_DataTypeConversion1_g * rtb_motohawk_delta_time_hev +
      BaseEngineController_LS_128_B.s254_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S256>/MinMax1' incorporates:
     *  MinMax: '<S256>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration9'
     */
    u = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S250>/Unit Delay1' */
    rtb_Switch3_l = BaseEngineController_LS_128_DWork.s250_UnitDelay1_DSTATE;

    /* Logic: '<S250>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (rtb_LogicalOperator2_au &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S258>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s258_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_me = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S250>/Logical Operator4' */
    rtb_Switch1_jh = !rtb_LogicalOperator_my;

    /* Logic: '<S250>/Logical Operator6' */
    rtb_RelationalOperator3_i2 = !rtb_LogicalOperator1_ow;

    /* Switch: '<S258>/Switch' incorporates:
     *  Constant: '<S258>/Constant'
     *  Logic: '<S250>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S258>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S258>/motohawk_delta_time'
     *  Sum: '<S258>/Sum'
     */
    if (rtb_LogicalOperator2_au && rtb_Switch1_jh && rtb_RelationalOperator3_i2)
    {
      rtb_DataTypeConversion1_g = rtb_motohawk_delta_time_me +
        O2LeanTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion1_g = 0.0;
    }

    /* End of Switch: '<S258>/Switch' */

    /* Switch: '<S250>/Switch3' */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s250_Switch3 = rtb_Switch3_l;
    } else {
      BaseEngineController_LS_128_B.s250_Switch3 = rtb_DataTypeConversion1_g;
    }

    /* End of Switch: '<S250>/Switch3' */
    /* RelationalOperator: '<S250>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration2'
     */
    rtb_LT3_n = ((BaseEngineController_LS_128_B.s250_Switch3 >=
                  (O2LeanTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(129, rtb_LT3_n);
      UpdateFault(129);
    }

    /* UnitDelay: '<S250>/Unit Delay' */
    rtb_Switch3_l = BaseEngineController_LS_128_DWork.s250_UnitDelay_DSTATE;

    /* Logic: '<S250>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (rtb_AboveRich_d && DisableO2FaultAction_DataStore
                               ());

    /* S-Function Block: <S260>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s260_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_pg = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S260>/Constant'
     *  Logic: '<S250>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S260>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S260>/motohawk_delta_time'
     *  Sum: '<S260>/Sum'
     */
    if (rtb_AboveRich_d && rtb_Switch1_jh && rtb_RelationalOperator3_i2) {
      rtb_DataTypeConversion_cy = rtb_motohawk_delta_time_pg +
        O2RichTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion_cy = 0.0;
    }

    /* End of Switch: '<S260>/Switch' */

    /* Switch: '<S250>/Switch1' */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s250_Switch1 = rtb_Switch3_l;
    } else {
      BaseEngineController_LS_128_B.s250_Switch1 = rtb_DataTypeConversion_cy;
    }

    /* End of Switch: '<S250>/Switch1' */
    /* RelationalOperator: '<S250>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration1'
     */
    rtb_LT2_k = ((BaseEngineController_LS_128_B.s250_Switch1 >=
                  (O2RichTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(131, rtb_LT2_k);
      UpdateFault(131);
    }

    /* UnitDelay: '<S250>/Unit Delay2' */
    rtb_Switch3_l = BaseEngineController_LS_128_DWork.s250_UnitDelay2_DSTATE;

    /* Logic: '<S250>/Logical Operator2' incorporates:
     *  Logic: '<S250>/Logical Operator1'
     *  Logic: '<S250>/Logical Operator3'
     */
    rtb_LogicalOperator2_au = ((!rtb_LogicalOperator2_au) && (!rtb_AboveRich_d));

    /* Logic: '<S250>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (rtb_LogicalOperator2_au &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S259>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s259_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_lq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S259>/Switch' incorporates:
     *  Constant: '<S259>/Constant'
     *  Logic: '<S250>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S259>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S259>/motohawk_delta_time'
     *  Sum: '<S259>/Sum'
     */
    if (rtb_LogicalOperator2_au && rtb_Switch1_jh && rtb_RelationalOperator3_i2)
    {
      rtb_Product1_es = rtb_motohawk_delta_time_lq +
        O2ActiveTimer_BankA_DataStore();
    } else {
      rtb_Product1_es = 0.0;
    }

    /* End of Switch: '<S259>/Switch' */

    /* Switch: '<S250>/Switch4' */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s250_Switch4 = rtb_Switch3_l;
    } else {
      BaseEngineController_LS_128_B.s250_Switch4 = rtb_Product1_es;
    }

    /* End of Switch: '<S250>/Switch4' */
    /* RelationalOperator: '<S250>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration3'
     */
    rtb_LT4_j = ((BaseEngineController_LS_128_B.s250_Switch4 >=
                  (O2ActiveTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(133, rtb_LT4_j);
      UpdateFault(133);
    }

    /* Saturate: '<S258>/Saturation' */
    rtb_Saturation_pj = rtb_DataTypeConversion1_g >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_g <= 0.0 ? 0.0 : rtb_DataTypeConversion1_g;

    /* S-Function (motohawk_sfun_data_write): '<S258>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankA */
    {
      O2LeanTimer_BankA_DataStore() = rtb_Saturation_pj;
    }

    /* Saturate: '<S259>/Saturation' */
    rtb_Saturation_hi = rtb_Product1_es >= 16000.0 ? 16000.0 : rtb_Product1_es <=
      0.0 ? 0.0 : rtb_Product1_es;

    /* S-Function (motohawk_sfun_data_write): '<S259>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankA */
    {
      O2ActiveTimer_BankA_DataStore() = rtb_Saturation_hi;
    }

    /* Saturate: '<S260>/Saturation' */
    rtb_Saturation_fa = rtb_DataTypeConversion_cy >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_cy <= 0.0 ? 0.0 : rtb_DataTypeConversion_cy;

    /* S-Function (motohawk_sfun_data_write): '<S260>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankA */
    {
      O2RichTimer_BankA_DataStore() = rtb_Saturation_fa;
    }

    /* InitialCondition: '<S243>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_128_DWork.s243_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_128_DWork.s243_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Multiplyby10ifnotyetenabled_a = 1.0;
    }

    /* End of InitialCondition: '<S243>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S257>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s257_UnitDelay_DSTATE =
      rtb_LogicalOperator1_j;

    /* Update for UnitDelay: '<S254>/Unit Delay' incorporates:
     *  MinMax: '<S256>/MinMax1'
     */
    BaseEngineController_LS_128_DWork.s254_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S253>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s253_UnitDelay_DSTATE = rtb_Switch1_m;

    /* Update for UnitDelay: '<S250>/Unit Delay1' */
    BaseEngineController_LS_128_DWork.s250_UnitDelay1_DSTATE =
      BaseEngineController_LS_128_B.s250_Switch3;

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s250_UnitDelay_DSTATE =
      BaseEngineController_LS_128_B.s250_Switch1;

    /* Update for UnitDelay: '<S250>/Unit Delay2' */
    BaseEngineController_LS_128_DWork.s250_UnitDelay2_DSTATE =
      BaseEngineController_LS_128_B.s250_Switch4;

    /* End of Outputs for SubSystem: '<S111>/O2 PID Controller Bank A' */

    /* Outputs for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */
    /* RelationalOperator: '<S262>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d2'
     *  Sum: '<S262>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_128_B.s450_Sum3 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S262>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d3'
     *  Sum: '<S262>/Sum4'
     */
    rtb_LogicalOperator2_jh = (BaseEngineController_LS_128_B.s450_Sum3 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S269>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_jh != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_i[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S269>/Switch1' incorporates:
     *  UnitDelay: '<S269>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_RelationalOperator3_i2 = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_RelationalOperator3_i2 =
        BaseEngineController_LS_128_DWork.s269_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S269>/Switch1' */

    /* Switch: '<S244>/Switch' */
    if (rtb_LogicalOperator_my) {
      BaseEngineController_LS_128_B.s244_Switch =
        BaseEngineController_LS_128_B.s450_Sum3;
    } else {
      /* Switch: '<S262>/Switch2' incorporates:
       *  Logic: '<S262>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d1'
       *  Sum: '<S262>/Sum1'
       *  Sum: '<S262>/Sum2'
       */
      if (!rtb_RelationalOperator3_i2) {
        BaseEngineController_LS_128_B.s244_Switch =
          rtb_RichEquivRatioTargetDelta_f + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_128_B.s244_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S262>/Switch2' */
    }

    /* End of Switch: '<S244>/Switch' */

    /* Sum: '<S264>/Sum2' */
    BaseEngineController_LS_128_B.s264_Sum2 =
      BaseEngineController_LS_128_B.s244_Switch -
      BaseEngineController_LS_128_B.s450_Sum3;

    /* Product: '<S264>/Product5' */
    rtb_Switch3_l = BaseEngineController_LS_128_B.s264_Sum2 * rtb_Switch2_m;

    /* Product: '<S264>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration5'
     */
    BaseEngineController_LS_128_B.s264_Product2 = rtb_Switch3_l *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S266>/Switch1' incorporates:
     *  Constant: '<S261>/Constant'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    if (rtb_LogicalOperator1_ow) {
      BaseEngineController_LS_128_B.s266_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_128_B.s266_Switch1 =
        BaseEngineController_LS_128_DWork.s266_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S266>/Switch1' */

    /* Product: '<S264>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration7'
     */
    rtb_Switch2_m = rtb_Switch3_l * (O2CtrlDGain_DataStore());

    /* Sum: '<S265>/Sum2' incorporates:
     *  UnitDelay: '<S265>/Unit Delay'
     */
    rtb_DataTypeConversion1_g = rtb_Switch2_m -
      BaseEngineController_LS_128_DWork.s265_UnitDelay_DSTATE;

    /* S-Function Block: <S265>/motohawk_delta_time */
    rtb_motohawk_delta_time_ka = 0.005;

    /* Product: '<S265>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S265>/motohawk_delta_time'
     */
    BaseEngineController_LS_128_B.s265_Product = rtb_DataTypeConversion1_g /
      rtb_motohawk_delta_time_ka;

    /* MinMax: '<S263>/MinMax' incorporates:
     *  Constant: '<S261>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration11'
     *  Sum: '<S261>/Sum'
     *  Sum: '<S264>/Sum1'
     */
    u = ((BaseEngineController_LS_128_B.s264_Product2 +
          BaseEngineController_LS_128_B.s265_Product) +
         BaseEngineController_LS_128_B.s266_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S263>/MinMax1' incorporates:
     *  MinMax: '<S263>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration10'
     */
    rtb_Switch4_k = (u <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S264>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_g = rtb_Switch3_l * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S266>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s266_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_gl = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S268>/MinMax' incorporates:
     *  Product: '<S266>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S266>/motohawk_delta_time'
     *  Sum: '<S266>/Sum'
     */
    u = rtb_DataTypeConversion1_g * rtb_motohawk_delta_time_gl +
      BaseEngineController_LS_128_B.s266_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S268>/MinMax1' incorporates:
     *  MinMax: '<S268>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration9'
     */
    u = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S262>/Unit Delay1' */
    rtb_Switch3_l = BaseEngineController_LS_128_DWork.s262_UnitDelay1_DSTATE;

    /* Logic: '<S262>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S262>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (rtb_LogicalOperator2_jh &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S270>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s270_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_gq = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S262>/Logical Operator4' */
    rtb_Switch1_jh = !rtb_LogicalOperator_my;

    /* Logic: '<S262>/Logical Operator6' */
    rtb_LogicalOperator1_j = !rtb_LogicalOperator1_ow;

    /* Switch: '<S270>/Switch' incorporates:
     *  Constant: '<S270>/Constant'
     *  Logic: '<S262>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S270>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
     *  Sum: '<S270>/Sum'
     */
    if (rtb_LogicalOperator2_jh && rtb_Switch1_jh && rtb_LogicalOperator1_j) {
      rtb_DataTypeConversion1_g = rtb_motohawk_delta_time_gq +
        O2LeanTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion1_g = 0.0;
    }

    /* End of Switch: '<S270>/Switch' */

    /* Switch: '<S262>/Switch3' */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s262_Switch3 = rtb_Switch3_l;
    } else {
      BaseEngineController_LS_128_B.s262_Switch3 = rtb_DataTypeConversion1_g;
    }

    /* End of Switch: '<S262>/Switch3' */
    /* RelationalOperator: '<S262>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_LS_128_B.s262_Switch3 >=
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
    rtb_Switch3_l = BaseEngineController_LS_128_DWork.s262_UnitDelay_DSTATE;

    /* Logic: '<S262>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S262>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S272>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s272_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_g3 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S272>/Switch' incorporates:
     *  Constant: '<S272>/Constant'
     *  Logic: '<S262>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S272>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S272>/motohawk_delta_time'
     *  Sum: '<S272>/Sum'
     */
    if (rtb_AboveRich && rtb_Switch1_jh && rtb_LogicalOperator1_j) {
      rtb_DataTypeConversion_cy = rtb_motohawk_delta_time_g3 +
        O2RichTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion_cy = 0.0;
    }

    /* End of Switch: '<S272>/Switch' */

    /* Switch: '<S262>/Switch1' */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s262_Switch1 = rtb_Switch3_l;
    } else {
      BaseEngineController_LS_128_B.s262_Switch1 = rtb_DataTypeConversion_cy;
    }

    /* End of Switch: '<S262>/Switch1' */
    /* RelationalOperator: '<S262>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_LS_128_B.s262_Switch1 >=
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
    rtb_Switch3_l = BaseEngineController_LS_128_DWork.s262_UnitDelay2_DSTATE;

    /* Logic: '<S262>/Logical Operator2' incorporates:
     *  Logic: '<S262>/Logical Operator1'
     *  Logic: '<S262>/Logical Operator3'
     */
    rtb_LogicalOperator2_jh = ((!rtb_LogicalOperator2_jh) && (!rtb_AboveRich));

    /* Logic: '<S262>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S262>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (rtb_LogicalOperator2_jh &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S271>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s271_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_al = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S271>/Switch' incorporates:
     *  Constant: '<S271>/Constant'
     *  Logic: '<S262>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S271>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S271>/motohawk_delta_time'
     *  Sum: '<S271>/Sum'
     */
    if (rtb_LogicalOperator2_jh && rtb_Switch1_jh && rtb_LogicalOperator1_j) {
      rtb_Product1_es = rtb_motohawk_delta_time_al +
        O2ActiveTimer_BankB_DataStore();
    } else {
      rtb_Product1_es = 0.0;
    }

    /* End of Switch: '<S271>/Switch' */

    /* Switch: '<S262>/Switch4' */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s262_Switch4 = rtb_Switch3_l;
    } else {
      BaseEngineController_LS_128_B.s262_Switch4 = rtb_Product1_es;
    }

    /* End of Switch: '<S262>/Switch4' */
    /* RelationalOperator: '<S262>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_LS_128_B.s262_Switch4 >=
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
    rtb_Saturation_gq = rtb_DataTypeConversion1_g >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_g <= 0.0 ? 0.0 : rtb_DataTypeConversion1_g;

    /* S-Function (motohawk_sfun_data_write): '<S270>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankB */
    {
      O2LeanTimer_BankB_DataStore() = rtb_Saturation_gq;
    }

    /* Saturate: '<S271>/Saturation' */
    rtb_Saturation_ez = rtb_Product1_es >= 16000.0 ? 16000.0 : rtb_Product1_es <=
      0.0 ? 0.0 : rtb_Product1_es;

    /* S-Function (motohawk_sfun_data_write): '<S271>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankB */
    {
      O2ActiveTimer_BankB_DataStore() = rtb_Saturation_ez;
    }

    /* Saturate: '<S272>/Saturation' */
    rtb_Saturation_np = rtb_DataTypeConversion_cy >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_cy <= 0.0 ? 0.0 : rtb_DataTypeConversion_cy;

    /* S-Function (motohawk_sfun_data_write): '<S272>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankB */
    {
      O2RichTimer_BankB_DataStore() = rtb_Saturation_np;
    }

    /* InitialCondition: '<S244>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_128_DWork.s244_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_128_DWork.s244_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Switch4_k = 1.0;
    }

    /* End of InitialCondition: '<S244>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s269_UnitDelay_DSTATE =
      rtb_RelationalOperator3_i2;

    /* Update for UnitDelay: '<S266>/Unit Delay' incorporates:
     *  MinMax: '<S268>/MinMax1'
     */
    BaseEngineController_LS_128_DWork.s266_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S265>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s265_UnitDelay_DSTATE = rtb_Switch2_m;

    /* Update for UnitDelay: '<S262>/Unit Delay1' */
    BaseEngineController_LS_128_DWork.s262_UnitDelay1_DSTATE =
      BaseEngineController_LS_128_B.s262_Switch3;

    /* Update for UnitDelay: '<S262>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s262_UnitDelay_DSTATE =
      BaseEngineController_LS_128_B.s262_Switch1;

    /* Update for UnitDelay: '<S262>/Unit Delay2' */
    BaseEngineController_LS_128_DWork.s262_UnitDelay2_DSTATE =
      BaseEngineController_LS_128_B.s262_Switch4;

    /* End of Outputs for SubSystem: '<S111>/O2 PID Controller Bank B' */

    /* S-Function (motohawk_sfun_probe): '<S241>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* Switch: '<S245>/Switch' incorporates:
     *  Constant: '<S245>/Constant'
     */
    if (BaseEngineController_LS_128_B.s241_LogicalOperator2) {
      /* MultiPortSwitch: '<S240>/Multiport Switch' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration'
       */
      if ((O2Cyl1Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion1_g = rtb_Multiplyby10ifnotyetenabled_a;
      } else {
        rtb_DataTypeConversion1_g = rtb_Switch4_k;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch' */

      /* MultiPortSwitch: '<S240>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration1'
       */
      if ((O2Cyl2Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion_cy = rtb_Multiplyby10ifnotyetenabled_a;
      } else {
        rtb_DataTypeConversion_cy = rtb_Switch4_k;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch1' */

      /* MultiPortSwitch: '<S240>/Multiport Switch2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration2'
       */
      if ((O2Cyl3Select_DataStore()) == FALSE) {
        rtb_Product1_es = rtb_Multiplyby10ifnotyetenabled_a;
      } else {
        rtb_Product1_es = rtb_Switch4_k;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch2' */

      /* MultiPortSwitch: '<S240>/Multiport Switch3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration3'
       */
      if ((O2Cyl4Select_DataStore()) == FALSE) {
        rtb_Switch3_l = rtb_Multiplyby10ifnotyetenabled_a;
      } else {
        rtb_Switch3_l = rtb_Switch4_k;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch3' */

      /* MultiPortSwitch: '<S240>/Multiport Switch4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration4'
       */
      if ((O2Cyl5Select_DataStore()) == FALSE) {
        rtb_Switch2_m = rtb_Multiplyby10ifnotyetenabled_a;
      } else {
        rtb_Switch2_m = rtb_Switch4_k;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch4' */

      /* MultiPortSwitch: '<S240>/Multiport Switch5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration5'
       */
      if ((O2Cyl6Select_DataStore()) == FALSE) {
        rtb_Switch1_m = rtb_Multiplyby10ifnotyetenabled_a;
      } else {
        rtb_Switch1_m = rtb_Switch4_k;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch5' */

      /* MultiPortSwitch: '<S240>/Multiport Switch6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration6'
       */
      if ((O2Cyl7Select_DataStore()) == FALSE) {
        rtb_Switch_g4 = rtb_Multiplyby10ifnotyetenabled_a;
      } else {
        rtb_Switch_g4 = rtb_Switch4_k;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch6' */

      /* MultiPortSwitch: '<S240>/Multiport Switch7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration7'
       */
      if ((O2Cyl8Select_DataStore()) == FALSE) {
        rtb_Switch4_k = rtb_Multiplyby10ifnotyetenabled_a;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch7' */
      BaseEngineController_LS_128_B.s245_O2FuelMult[0] =
        rtb_DataTypeConversion1_g;
      BaseEngineController_LS_128_B.s245_O2FuelMult[1] =
        rtb_DataTypeConversion_cy;
      BaseEngineController_LS_128_B.s245_O2FuelMult[2] = rtb_Product1_es;
      BaseEngineController_LS_128_B.s245_O2FuelMult[3] = rtb_Switch3_l;
      BaseEngineController_LS_128_B.s245_O2FuelMult[4] = rtb_Switch2_m;
      BaseEngineController_LS_128_B.s245_O2FuelMult[5] = rtb_Switch1_m;
      BaseEngineController_LS_128_B.s245_O2FuelMult[6] = rtb_Switch_g4;
      BaseEngineController_LS_128_B.s245_O2FuelMult[7] = rtb_Switch4_k;
    } else {
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s245_O2FuelMult[i] = 1.0;
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
    rtb_LogicalOperator_l2[0] = !(O2Cyl1Select_DataStore());
    rtb_LogicalOperator_l2[1] = !(O2Cyl2Select_DataStore());
    rtb_LogicalOperator_l2[2] = !(O2Cyl3Select_DataStore());
    rtb_LogicalOperator_l2[3] = !(O2Cyl4Select_DataStore());
    rtb_LogicalOperator_l2[4] = !(O2Cyl5Select_DataStore());
    rtb_LogicalOperator_l2[5] = !(O2Cyl6Select_DataStore());
    rtb_LogicalOperator_l2[6] = !(O2Cyl7Select_DataStore());
    rtb_LogicalOperator_l2[7] = !(O2Cyl8Select_DataStore());

    /* Outputs for Atomic SubSystem: '<S107>/O2 Fuel Adapt' */

    /* S-Function Block: <S161>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankAIn_DataStore()) = BaseEngineController_LS_128_B.s254_Switch1;
      (O2ITerm_BankAIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s254_Switch1,
         (O2ITerm_BankAIdxArr_DataStore()), 5, (O2ITerm_BankAIdx_DataStore()));
      rtb_motohawk_prelookup13 = (O2ITerm_BankAIdx_DataStore());
    }

    /* S-Function Block: <S161>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup13, (real_T *) ((FuelAdaptGain_BankATbl_DataStore
           ())), 5);
      (FuelAdaptGain_BankA_DataStore()) = rtb_motohawk_interpolation_1d1_e;
    }

    /* Product: '<S161>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S161>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup13'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s254_Switch1 *
      rtb_motohawk_interpolation_1d1_e;

    /* MinMax: '<S184>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration'
     */
    rtb_Abs_i = (rtb_DataTypeConversion1_g >=
                 (FuelAdaptError_BankALwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankALwrLim_DataStore())) ? rtb_DataTypeConversion1_g :
      (FuelAdaptError_BankALwrLim_DataStore());

    /* MinMax: '<S184>/MinMax1' incorporates:
     *  MinMax: '<S184>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1'
     */
    BaseEngineController_LS_128_B.s184_MinMax1 = (rtb_Abs_i <=
      (FuelAdaptError_BankAUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankAUprLim_DataStore())) ? rtb_Abs_i :
      (FuelAdaptError_BankAUprLim_DataStore());

    /* S-Function Block: <S161>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2_a = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankAMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankA_DataStore()) = rtb_motohawk_interpolation_2d2_a;
    }

    /* Outputs for Atomic SubSystem: '<S161>/WarmUp Disable' */
    /* Logic: '<S182>/Logical Operator' incorporates:
     *  Constant: '<S182>/Constant'
     *  MinMax: '<S182>/MinMax'
     *  RelationalOperator: '<S182>/Relational Operator'
     *  Sum: '<S182>/Sum'
     */
    BaseEngineController_LS_128_B.s182_LogicalOperator =
      !(((rtb_DesiredLambda_idx_0 >= rtb_DesiredLambda_idx_1) || rtIsNaN
         (rtb_DesiredLambda_idx_1) ? rtb_DesiredLambda_idx_0 :
         rtb_DesiredLambda_idx_1) - rtb_DesiredLambda_idx > 0.01);

    /* End of Outputs for SubSystem: '<S161>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S161>/O2 Control Enable Delay' */

    /* S-Function Block: <S183>/motohawk_delta_time */
    rtb_motohawk_delta_time_g4 = 0.005;

    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S183>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S183>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
     *  Sum: '<S183>/Sum'
     */
    if (BaseEngineController_LS_128_B.s241_LogicalOperator2) {
      rtb_DataTypeConversion1_g = rtb_motohawk_delta_time_g4 +
        LiqDelayTime_DataStore();
    } else {
      rtb_DataTypeConversion1_g = 0.0;
    }

    /* End of Switch: '<S183>/Switch' */
    /* RelationalOperator: '<S179>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S179>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_as = (rtb_DataTypeConversion1_g >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S183>/Saturation' */
    rtb_Saturation_i = rtb_DataTypeConversion1_g >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_g <= 0.0 ? 0.0 : rtb_DataTypeConversion1_g;

    /* S-Function (motohawk_sfun_data_write): '<S183>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_i;
    }

    /* End of Outputs for SubSystem: '<S161>/O2 Control Enable Delay' */

    /* MinMax: '<S161>/MinMax' */
    rtb_Abs_i = (BaseEngineController_LS_128_B.s254_Switch1 >=
                 BaseEngineController_LS_128_B.s266_Switch1) || rtIsNaN
      (BaseEngineController_LS_128_B.s266_Switch1) ?
      BaseEngineController_LS_128_B.s254_Switch1 :
      BaseEngineController_LS_128_B.s266_Switch1;

    /* Logic: '<S161>/Logical Operator2' incorporates:
     *  Abs: '<S161>/Abs'
     *  MinMax: '<S161>/MinMax'
     *  RelationalOperator: '<S161>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration2'
     */
    BaseEngineController_LS_128_B.s161_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_128_B.s182_LogicalOperator &&
        rtb_LogicalOperator6_as && (fabs(rtb_Abs_i) <= (FuelAdaptDelta_DataStore
          ()))));

    /* Outputs for Enabled SubSystem: '<S161>/Adapt FuelFlowComp Map Bank A' incorporates:
     *  EnablePort: '<S177>/Enable'
     */
    if (BaseEngineController_LS_128_B.s161_LogicalOperator2) {
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
              BaseEngineController_LS_128_B.s184_MinMax1;
            if (_new > (FuelFlowCompMaxValue_BankA_DataStore()))
              _new = (FuelFlowCompMaxValue_BankA_DataStore());
            if (_new < (FuelFlowCompMinValue_BankA_DataStore()))
              _new = (FuelFlowCompMinValue_BankA_DataStore());
            (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_128_B.s184_MinMax1;
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
      rtb_RelationalOperator2_iq = ((rtb_motohawk_interpolation_2d2_a >=
        (FuelFlowCompMaxValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S177>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(67, rtb_RelationalOperator2_iq);
        UpdateFault(67);
      }

      /* RelationalOperator: '<S177>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_dy = ((rtb_motohawk_interpolation_2d2_a <=
        (FuelFlowCompMinValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S177>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(69, rtb_RelationalOperator1_dy);
        UpdateFault(69);
      }
    }

    /* End of Outputs for SubSystem: '<S161>/Adapt FuelFlowComp Map Bank A' */
    /* S-Function Block: <S161>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankBIn_DataStore()) = BaseEngineController_LS_128_B.s266_Switch1;
      (O2ITerm_BankBIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s266_Switch1,
         (O2ITerm_BankBIdxArr_DataStore()), 5, (O2ITerm_BankBIdx_DataStore()));
      rtb_motohawk_prelookup1_b = (O2ITerm_BankBIdx_DataStore());
    }

    /* S-Function Block: <S161>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_a = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_b, (real_T *)
         ((FuelAdaptGain_BankBTbl_DataStore())), 5);
      (FuelAdaptGain_BankB_DataStore()) = rtb_motohawk_interpolation_1d2_a;
    }

    /* Product: '<S161>/Product1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S161>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup1'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s266_Switch1 *
      rtb_motohawk_interpolation_1d2_a;

    /* MinMax: '<S185>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration'
     */
    rtb_Abs_i = (rtb_DataTypeConversion1_g >=
                 (FuelAdaptError_BankBLwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBLwrLim_DataStore())) ? rtb_DataTypeConversion1_g :
      (FuelAdaptError_BankBLwrLim_DataStore());

    /* MinMax: '<S185>/MinMax1' incorporates:
     *  MinMax: '<S185>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration1'
     */
    BaseEngineController_LS_128_B.s185_MinMax1 = (rtb_Abs_i <=
      (FuelAdaptError_BankBUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBUprLim_DataStore())) ? rtb_Abs_i :
      (FuelAdaptError_BankBUprLim_DataStore());

    /* S-Function Block: <S161>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankBMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankB_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* Outputs for Enabled SubSystem: '<S161>/Adapt FuelFlowComp Map Bank B' incorporates:
     *  EnablePort: '<S178>/Enable'
     */
    if (BaseEngineController_LS_128_B.s161_LogicalOperator2) {
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
              BaseEngineController_LS_128_B.s185_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_128_B.s185_MinMax1;
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
      rtb_RelationalOperator2_kb = ((rtb_motohawk_interpolation_2d3 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S178>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(68, rtb_RelationalOperator2_kb);
        UpdateFault(68);
      }

      /* RelationalOperator: '<S178>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d3'
       */
      rtb_RelationalOperator1_kq = ((rtb_motohawk_interpolation_2d3 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S178>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(70, rtb_RelationalOperator1_kq);
        UpdateFault(70);
      }
    }

    /* End of Outputs for SubSystem: '<S161>/Adapt FuelFlowComp Map Bank B' */

    /* S-Function Block: <S161>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_i = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_i;
    }

    /* Product: '<S161>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d2'
     */
    rtb_DataTypeConversion1_g = rtb_motohawk_interpolation_2d1_i *
      rtb_motohawk_interpolation_2d2_a;

    /* Product: '<S161>/Divide1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d3'
     */
    rtb_DataTypeConversion_cy = rtb_motohawk_interpolation_2d3 *
      rtb_motohawk_interpolation_2d1_i;

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
    rtb_Product1_fv[0] = (real_T)(O2Cyl1Select_DataStore()) *
      rtb_DataTypeConversion_cy;
    rtb_Product1_fv[1] = (real_T)(O2Cyl2Select_DataStore()) *
      rtb_DataTypeConversion_cy;
    rtb_Product1_fv[2] = (real_T)(O2Cyl3Select_DataStore()) *
      rtb_DataTypeConversion_cy;
    rtb_Product1_fv[3] = (real_T)(O2Cyl4Select_DataStore()) *
      rtb_DataTypeConversion_cy;
    rtb_Product1_fv[4] = (real_T)(O2Cyl5Select_DataStore()) *
      rtb_DataTypeConversion_cy;
    rtb_Product1_fv[5] = (real_T)(O2Cyl6Select_DataStore()) *
      rtb_DataTypeConversion_cy;
    rtb_Product1_fv[6] = (real_T)(O2Cyl7Select_DataStore()) *
      rtb_DataTypeConversion_cy;
    rtb_Product1_fv[7] = (real_T)(O2Cyl8Select_DataStore()) *
      rtb_DataTypeConversion_cy;

    /* S-Function Block: <S164>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_128_B.s579_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s579_Merge, (DesAFRatioIdxArr_DataStore()),
         11, (DesAFRatioIdx_DataStore()));
      rtb_motohawk_prelookup_kf = (DesAFRatioIdx_DataStore());
    }

    /* S-Function Block: <S164>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      BaseEngineController_LS_128_B.s164_motohawk_interpolation_1d =
        TableInterpolation1D_real_T(rtb_motohawk_prelookup_kf, (real_T *)
        ((DesAFRatioTbl_DataStore())), 11);
      (DesAFRatio_DataStore()) =
        BaseEngineController_LS_128_B.s164_motohawk_interpolation_1d;
    }

    /* Product: '<S162>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_LS_128_B.s162_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_LS_128_B.s406_MultiportSwitch *
      rtb_DesiredLambda_idx /
      BaseEngineController_LS_128_B.s164_motohawk_interpolation_1d;

    /* Product: '<S159>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S159>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S159>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_LS_128_B.s159_PerCylinderMassFlowRate =
      BaseEngineController_LS_128_B.s162_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S159>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s159_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = BaseEngineController_LS_128_B.s159_PerCylinderMassFlowRate *
        BaseEngineController_LS_128_B.s245_O2FuelMult[i];
    }

    /* End of Product: '<S159>/Apply Multipliers for O2, Knock Control, and Enrichment1' */

    /* Outputs for Atomic SubSystem: '<S107>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S165>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration1' */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_LS_128_DWork.s160_DeltaTPSTransientFueling_MODE)
      {
        /* S-Function Block: <S171>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_128_DWork.s171_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S174>/Unit Delay' */
        BaseEngineController_LS_128_DWork.s174_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S170>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_128_DWork.s170_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S173>/Unit Delay' */
        BaseEngineController_LS_128_DWork.s173_UnitDelay_DSTATE = 0.0;
        BaseEngineController_LS_128_DWork.s160_DeltaTPSTransientFueling_MODE =
          TRUE;
      }

      /* S-Function Block: <S171>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s171_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_pi = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S171>/Product' incorporates:
       *  MinMax: '<S171>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S171>/motohawk_calibration'
       */
      rtb_Product_pi /= (rtb_Product_pi >= (DeltaMAP_FiltConst_DataStore())) ||
        rtIsNaN((DeltaMAP_FiltConst_DataStore())) ? rtb_Product_pi :
        (DeltaMAP_FiltConst_DataStore());

      /* Sum: '<S174>/Sum1' incorporates:
       *  Constant: '<S174>/Constant'
       *  Product: '<S174>/Product'
       *  Product: '<S174>/Product1'
       *  Sum: '<S174>/Sum'
       *  UnitDelay: '<S174>/Unit Delay'
       */
      BaseEngineController_LS_128_B.s174_Sum1 = (1.0 - rtb_Product_pi) *
        BaseEngineController_LS_128_DWork.s174_UnitDelay_DSTATE +
        BaseEngineController_LS_128_B.s600_Merge * rtb_Product_pi;

      /* Sum: '<S165>/Sum1' */
      BaseEngineController_LS_128_B.s165_Sum1 =
        BaseEngineController_LS_128_B.s600_Merge -
        BaseEngineController_LS_128_B.s174_Sum1;

      /* S-Function Block: <S170>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s170_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_pi = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S170>/Product' incorporates:
       *  MinMax: '<S170>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S170>/motohawk_calibration'
       */
      rtb_Product_pi /= (rtb_Product_pi >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_pi :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S173>/Sum1' incorporates:
       *  Constant: '<S173>/Constant'
       *  Product: '<S173>/Product'
       *  Product: '<S173>/Product1'
       *  Sum: '<S173>/Sum'
       *  UnitDelay: '<S173>/Unit Delay'
       */
      BaseEngineController_LS_128_B.s173_Sum1 = (1.0 - rtb_Product_pi) *
        BaseEngineController_LS_128_DWork.s173_UnitDelay_DSTATE +
        BaseEngineController_LS_128_B.s452_Switch2 * rtb_Product_pi;

      /* Sum: '<S165>/Sum' */
      BaseEngineController_LS_128_B.s165_Sum =
        BaseEngineController_LS_128_B.s452_Switch2 -
        BaseEngineController_LS_128_B.s173_Sum1;

      /* S-Function Block: <S165>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) =
          BaseEngineController_LS_128_B.s406_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s406_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_m = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S165>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_LS_128_B.s165_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s165_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_h = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S165>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_b = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_m, rtb_motohawk_prelookup1_h, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_b;
      }

      /* RelationalOperator: '<S167>/RelOp' incorporates:
       *  Constant: '<S167>/Constant'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup1'
       */
      rtb_LogicalOperator6_as = (rtb_motohawk_interpolation_2d2_b != 1.0);

      /* S-Function Block: <S165>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaMAP17In_DataStore()) = BaseEngineController_LS_128_B.s165_Sum1;
        (DeltaMAP17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s165_Sum1, (DeltaMAP17IdxArr_DataStore()),
           17, (DeltaMAP17Idx_DataStore()));
        rtb_motohawk_prelookup3 = (DeltaMAP17Idx_DataStore());
      }

      /* S-Function Block: <S165>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_c = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_m, rtb_motohawk_prelookup3, (real_T *)
           ((DeltaMAP_MultMap_DataStore())), 9, 17);
        (DeltaMAP_Mult_DataStore()) = rtb_motohawk_interpolation_2d1_c;
      }

      /* Logic: '<S165>/Logical Operator' incorporates:
       *  Constant: '<S168>/Constant'
       *  RelationalOperator: '<S168>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup3'
       */
      rtb_LogicalOperator6_as = ((rtb_motohawk_interpolation_2d1_c != 1.0) ||
        rtb_LogicalOperator6_as);

      /* Outputs for Enabled SubSystem: '<S165>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S169>/Enable'
       */
      if (rtb_LogicalOperator6_as) {
        if (!BaseEngineController_LS_128_DWork.s165_ECTTransientFueling_MODE) {
          BaseEngineController_LS_128_DWork.s165_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S169>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_128_DWork.s165_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S169>/Mult' */
          BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_128_DWork.s165_ECTTransientFueling_MODE =
            FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S165>/ECT Transient Fueling' */

      /* Outputs for Enabled SubSystem: '<S165>/OXY Transient Fueling' incorporates:
       *  EnablePort: '<S172>/Enable'
       */
      if (rtb_LogicalOperator6_as) {
        if (!BaseEngineController_LS_128_DWork.s165_OXYTransientFueling_MODE) {
          BaseEngineController_LS_128_DWork.s165_OXYTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S172>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_128_B.s436_motohawk_prelookup, (real_T *)
             ((OXYTransFuelMultTbl_DataStore())), 5);
          (OXYTransFuelMult_DataStore()) =
            BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_128_DWork.s165_OXYTransientFueling_MODE) {
          /* Disable for Outport: '<S172>/Mult' */
          BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_128_DWork.s165_OXYTransientFueling_MODE =
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
      BaseEngineController_LS_128_B.s165_Product1 =
        rtb_motohawk_interpolation_2d2_b *
        BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d *
        rtb_motohawk_interpolation_2d1_c *
        BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S174>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s174_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s174_Sum1;

      /* Update for UnitDelay: '<S173>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s173_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s173_Sum1;
    } else {
      if (BaseEngineController_LS_128_DWork.s160_DeltaTPSTransientFueling_MODE)
      {
        /* Disable for Enabled SubSystem: '<S165>/ECT Transient Fueling' */
        /* Disable for Outport: '<S169>/Mult' */
        BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_128_DWork.s165_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S165>/ECT Transient Fueling' */

        /* Disable for Enabled SubSystem: '<S165>/OXY Transient Fueling' */
        /* Disable for Outport: '<S172>/Mult' */
        BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_128_DWork.s165_OXYTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S165>/OXY Transient Fueling' */

        /* Disable for Outport: '<S165>/DeltaTPSMult' */
        BaseEngineController_LS_128_B.s165_Product1 = 1.0;
        BaseEngineController_LS_128_DWork.s160_DeltaTPSTransientFueling_MODE =
          FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S160>/Delta TPS Transient Fueling' */

    /* Product: '<S160>/Divide' */
    for (i = 0; i < 8; i++) {
      rtb_Divide_l[i] = BaseEngineController_LS_128_B.s165_Product1 *
        BaseEngineController_LS_128_B.s159_ApplyMultipliersforO2KnockControlandEnrichment1
        [i];
    }

    /* End of Product: '<S160>/Divide' */
    /* S-Function Block: <S160>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S166>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S175>/Enable'
     */
    /* RelationalOperator: '<S176>/RelOp' incorporates:
     *  Constant: '<S176>/Constant'
     */
    if (BaseEngineController_LS_128_B.s557_Sum1 != 0.0) {
      /* Product: '<S175>/charge mass' incorporates:
       *  Constant: '<S166>/Units Equivalency Factor'
       */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s175_chargemass[i] = rtb_Divide_l[i] *
          60000.0 / BaseEngineController_LS_128_B.s557_Sum1;
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
        (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S107>/Injector Manager' */

    /* Product: '<S158>/Product2' incorporates:
     *  Product: '<S158>/Product'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fv[i] *= rtb_DataTypeConversion1_g * (real_T)
        rtb_LogicalOperator_l2[i] *
        BaseEngineController_LS_128_B.s175_chargemass[i];
    }

    /* End of Product: '<S158>/Product2' */

    /* End of Outputs for SubSystem: '<S93>/Fuel System Manager' */

    /* Switch: '<S108>/Switch4' incorporates:
     *  Constant: '<S108>/Constant2'
     *  Logic: '<S108>/Logical Operator'
     *  Sum: '<S108>/Sum2'
     */
    if (!BaseEngineController_LS_128_B.s222_RelOp) {
      rtb_DataTypeConversion1_g = 0.0;
    } else {
      rtb_DataTypeConversion1_g =
        BaseEngineController_LS_128_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_128_B.s110_MinGovAirPID;
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
      BaseEngineController_LS_128_B.s92_IACS = 100.0 - rtb_DataTypeConversion1_g;
    } else {
      /* ZeroOrderHold: '<S93>/Zero-Order Hold5' incorporates:
       *  Constant: '<S108>/Constant'
       */
      BaseEngineController_LS_128_B.s92_IACS = 0.0;
    }

    /* End of Switch: '<S108>/Switch1' */

    /* ZeroOrderHold: '<S93>/Zero-Order Hold1' */
    BaseEngineController_LS_128_B.s92_SparkEnergy =
      BaseEngineController_LS_128_B.s112_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold11' */
    BaseEngineController_LS_128_B.s92_WASTEGATE =
      BaseEngineController_LS_128_B.s104_Switch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold12' */
    BaseEngineController_LS_128_B.s92_SparkAdv =
      BaseEngineController_LS_128_B.s275_Switch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold16' incorporates:
     *  Constant: '<S93>/ON1'
     */
    BaseEngineController_LS_128_B.s92_FUELP = TRUE;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S160>/Primary Pulse Injection Timing'
     */
    BaseEngineController_LS_128_B.s92_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold18' */
    BaseEngineController_LS_128_B.s92_Throttle =
      BaseEngineController_LS_128_B.s102_MultiportSwitch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold2' */
    BaseEngineController_LS_128_B.s92_IACP = rtb_DataTypeConversion1_g;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S160>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_LS_128_B.s92_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold6' */
    BaseEngineController_LS_128_B.s92_FAN1 =
      BaseEngineController_LS_128_B.s106_Switch4;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold7' */
    BaseEngineController_LS_128_B.s92_FAN2 =
      BaseEngineController_LS_128_B.s106_Switch5;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold8' */
    BaseEngineController_LS_128_B.s92_AC =
      BaseEngineController_LS_128_B.s101_LogicalOperator;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold9' */
    memcpy((void *)(&BaseEngineController_LS_128_B.s92_FPC[0]), (void *)
           &rtb_Product1_fv[0], sizeof(real_T) << 3U);
  } else {
    if (BaseEngineController_LS_128_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
      BaseEngineController_LS_128_DWork.s93_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S107>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S165>/ECT Transient Fueling' */
      /* Disable for Outport: '<S169>/Mult' */
      BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_128_DWork.s165_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S165>/ECT Transient Fueling' */

      /* Disable for Enabled SubSystem: '<S165>/OXY Transient Fueling' */
      /* Disable for Outport: '<S172>/Mult' */
      BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_128_DWork.s165_OXYTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S165>/OXY Transient Fueling' */

      /* Disable for Outport: '<S165>/DeltaTPSMult' */
      BaseEngineController_LS_128_B.s165_Product1 = 1.0;
      BaseEngineController_LS_128_DWork.s160_DeltaTPSTransientFueling_MODE =
        FALSE;

      /* End of Disable for SubSystem: '<S160>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S107>/Injector Manager' */
      /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
      BaseEngineController_LS_128_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* If: '<S801>/If' incorporates:
   *  Inport: '<S802>/In1'
   *  Inport: '<S803>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S801>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S801>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S801>/NewValue' incorporates:
     *  ActionPort: '<S802>/Action Port'
     */
    rtb_LogicalOperator6_as = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S801>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S801>/OldValue' incorporates:
     *  ActionPort: '<S803>/Action Port'
     */
    rtb_LogicalOperator6_as = BaseEngineController_LS_128_B.s92_AC;

    /* End of Outputs for SubSystem: '<S801>/OldValue' */
  }

  /* End of If: '<S801>/If' */

  /* Logic: '<S800>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S800>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_128_B.s800_LogicalOperator = rtb_LogicalOperator6_as ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_trigger): '<S485>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  if (BaseEngineController_LS_128_DWork.s485_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s485_motohawk_trigger1_DWORK1 = 1;
  }

  /* RelationalOperator: '<S419>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration10'
   */
  rtb_RelationalOperator_g = (BaseEngineController_LS_128_B.s471_Sum >=
    (FuelLevel_KeyUpDelay_DataStore()));

  /* S-Function (motohawk_sfun_data_read): '<S398>/motohawk_data_read' */
  BaseEngineController_LS_128_B.s398_motohawk_data_read = FuelLvl_NVM_DataStore();

  /* Switch: '<S398>/Switch2' */
  if (rtb_RelationalOperator_g) {
    rtb_DataTypeConversion_al = BaseEngineController_LS_128_B.s640_Merge;
  } else {
    rtb_DataTypeConversion_al =
      BaseEngineController_LS_128_B.s398_motohawk_data_read;
  }

  /* End of Switch: '<S398>/Switch2' */

  /* Sum: '<S419>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S419>/motohawk_data_read'
   */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s640_Merge -
    FuelLvl_NVM_DataStore();

  /* Logic: '<S419>/Logical Operator' incorporates:
   *  RelationalOperator: '<S419>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration1'
   */
  rtb_LogicalOperator_n = ((rtb_DataTypeConversion1_g >=
    (FuelLevl_KeyUpDiff_DataStore())) && rtb_RelationalOperator_g);

  /* Logic: '<S421>/Logical Operator' incorporates:
   *  Logic: '<S421>/Logical Operator1'
   *  UnitDelay: '<S421>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s421_LogicalOperator = ((rtb_LogicalOperator_n &&
    (!BaseEngineController_LS_128_DWork.s421_UnitDelay_DSTATE)));

  /* Logic: '<S398>/Logical Operator1' incorporates:
   *  Logic: '<S398>/Logical Operator'
   */
  rtb_LogicalOperator6_as = ((!rtb_RelationalOperator_g) ||
    BaseEngineController_LS_128_B.s421_LogicalOperator);

  /* S-Function Block: <S398>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s398_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ih = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S398>/Switch3' incorporates:
   *  MinMax: '<S398>/MinMax'
   *  Product: '<S398>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S398>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_as) {
    rtb_Switch_bx = (FuelLevel_FuelEevntAlpha_DataStore());
  } else {
    /* S-Function Block: <S420>/motohawk_prelookup_col */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstColIn_DataStore()) =
        BaseEngineController_LS_128_B.s456_Switch2;
      (FuelLevel_FiltConstColIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s456_Switch2,
         (FuelLevel_FiltConstColIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstColIdx_DataStore()));
      rtb_motohawk_prelookup_col = (FuelLevel_FiltConstColIdx_DataStore());
    }

    /* S-Function Block: <S420>/motohawk_prelookup_row */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstRowIn_DataStore()) =
        BaseEngineController_LS_128_B.s471_Sum;
      (FuelLevel_FiltConstRowIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s471_Sum,
         (FuelLevel_FiltConstRowIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstRowIdx_DataStore()));
      rtb_motohawk_prelookup_row = (FuelLevel_FiltConstRowIdx_DataStore());
    }

    /* S-Function Block: <S420>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_h = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_row, rtb_motohawk_prelookup_col, (real_T *)
         ((FuelLevel_FiltConstMap_DataStore())), 7, 7);
      (FuelLevel_FiltConst_DataStore()) = rtb_motohawk_interpolation_2d_h;
    }

    rtb_Switch_bx = rtb_motohawk_delta_time_ih / ((rtb_motohawk_delta_time_ih >=
      rtb_motohawk_interpolation_2d_h) || rtIsNaN
      (rtb_motohawk_interpolation_2d_h) ? rtb_motohawk_delta_time_ih :
      rtb_motohawk_interpolation_2d_h);
  }

  /* End of Switch: '<S398>/Switch3' */

  /* Sum: '<S417>/Sum1' incorporates:
   *  Constant: '<S417>/Constant'
   *  Product: '<S417>/Product'
   *  Product: '<S417>/Product1'
   *  Sum: '<S417>/Sum'
   *  UnitDelay: '<S417>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s417_Sum1 = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s417_UnitDelay_DSTATE +
    rtb_DataTypeConversion_al * rtb_Switch_bx;

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
      /* 0x1f0a100 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        if (BaseEngineController_LS_128_B.s417_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_128_B.s417_Sum1 > 99.9998565000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_128_B.s417_Sum1 *
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

  /* S-Function Block: <S818>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s818_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S818>/Product' incorporates:
   *  MinMax: '<S818>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S818>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (RPMFilt_LowPass_DataStore())) || rtIsNaN
    ((RPMFilt_LowPass_DataStore())) ? rtb_Switch_bx : (RPMFilt_LowPass_DataStore
    ());

  /* Sum: '<S819>/Sum1' incorporates:
   *  Constant: '<S819>/Constant'
   *  Product: '<S819>/Product'
   *  Product: '<S819>/Product1'
   *  Sum: '<S819>/Sum'
   *  UnitDelay: '<S819>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s819_Sum1 = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s819_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s557_Sum1 * rtb_Switch_bx;

  /* Switch: '<S816>/Switch' incorporates:
   *  MinMax: '<S816>/MinMax'
   *  Product: '<S816>/Product'
   *  Product: '<S816>/Product1'
   *  Rounding: '<S816>/Rounding Function'
   *  S-Function (motohawk_sfun_calibration): '<S816>/motohawk_calibration'
   */
  if (((uint8_T)(RPMFilt_Enable_DataStore())) >= 1) {
    /* MinMax: '<S816>/MinMax' incorporates:
     *  Constant: '<S816>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S816>/motohawk_calibration1'
     */
    u = (real_T)((uint16_T)(RPMFilt_RoundValue_DataStore()));
    rtb_Abs_i = u >= 1.0 ? u : 1.0;
    BaseEngineController_LS_128_B.s816_Switch = rt_roundd_snf
      (BaseEngineController_LS_128_B.s819_Sum1 / rtb_Abs_i) * rtb_Abs_i;
  } else {
    BaseEngineController_LS_128_B.s816_Switch =
      BaseEngineController_LS_128_B.s557_Sum1;
  }

  /* End of Switch: '<S816>/Switch' */
  /* S-Function Block: <S815>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s815_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S815>/Product' incorporates:
   *  MinMax: '<S815>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (TPS_Filt_DataStore())) || rtIsNaN
    ((TPS_Filt_DataStore())) ? rtb_Switch_bx : (TPS_Filt_DataStore());

  /* Sum: '<S817>/Sum1' incorporates:
   *  Constant: '<S817>/Constant'
   *  Product: '<S817>/Product'
   *  Product: '<S817>/Product1'
   *  Sum: '<S817>/Sum'
   *  UnitDelay: '<S817>/Unit Delay'
   */
  rtb_Sum1_nn = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s817_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s452_Switch2 * rtb_Switch_bx;

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
      /* 0x1f0a000 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        int16_T tmp1;
        int8_T tmp2;
        int8_T tmp3;
        if (BaseEngineController_LS_128_B.s816_Switch < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_128_B.s816_Switch > 25599.9370500000F)
        {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_128_B.s816_Switch *
                            (2.5599672324F));
        }

        if (rtb_Sum1_nn < -50.0006912000F) {
          tmp1 = (int16_T)(-32768);
        } else if (rtb_Sum1_nn > 49.9991653000F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(rtb_Sum1_nn * (655.3509404286F));
        }

        if (BaseEngineController_LS_128_B.s685_Merge < -128.0000000000F) {
          tmp2 = (int8_T)(-128);
        } else if (BaseEngineController_LS_128_B.s685_Merge > 127.0000000000F) {
          tmp2 = (int8_T)(127);
        } else {
          tmp2 = (int8_T)(BaseEngineController_LS_128_B.s685_Merge);
        }

        if (BaseEngineController_LS_128_B.s667_Merge < -128.0000000000F) {
          tmp3 = (int8_T)(-128);
        } else if (BaseEngineController_LS_128_B.s667_Merge > 127.0000000000F) {
          tmp3 = (int8_T)(127);
        } else {
          tmp3 = (int8_T)(BaseEngineController_LS_128_B.s667_Merge);
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

  /* S-Function Block: <S823>/motohawk_delta_time */
  rtb_motohawk_delta_time_kj = 0.005;

  /* UnitDelay: '<S823>/Unit Delay2' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s823_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S823>/IncreasingFilter' incorporates:
   *  EnablePort: '<S830>/Enable'
   */
  /* RelationalOperator: '<S823>/Relational Operator4' incorporates:
   *  UnitDelay: '<S823>/Unit Delay2'
   */
  if (BaseEngineController_LS_128_DWork.s823_UnitDelay2_DSTATE <
      BaseEngineController_LS_128_B.s488_MultiportSwitch) {
    /* S-Function (motohawk_sfun_calibration): '<S830>/motohawk_calibration1' */
    BaseEngineController_LS_128_B.s823_Merge = (PH1_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S823>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S823>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S823>/DecreasingFilter' incorporates:
   *  EnablePort: '<S828>/Enable'
   */
  /* RelationalOperator: '<S823>/Relational Operator3' */
  if (rtb_DataTypeConversion1_g >
      BaseEngineController_LS_128_B.s488_MultiportSwitch) {
    /* S-Function (motohawk_sfun_calibration): '<S828>/motohawk_calibration2' */
    BaseEngineController_LS_128_B.s823_Merge = (PH1_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S823>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S823>/DecreasingFilter' */

  /* Switch: '<S823>/Switch1' incorporates:
   *  Constant: '<S823>/Constant'
   *  MinMax: '<S823>/MinMax'
   *  Product: '<S823>/Product'
   *  UnitDelay: '<S823>/Unit Delay5'
   */
  if (BaseEngineController_LS_128_DWork.s823_UnitDelay5_DSTATE) {
    rtb_Switch_bx = rtb_motohawk_delta_time_kj / ((rtb_motohawk_delta_time_kj >=
      BaseEngineController_LS_128_B.s823_Merge) || rtIsNaN
      (BaseEngineController_LS_128_B.s823_Merge) ? rtb_motohawk_delta_time_kj :
      BaseEngineController_LS_128_B.s823_Merge);
  } else {
    rtb_Switch_bx = 1.0;
  }

  /* End of Switch: '<S823>/Switch1' */

  /* Sum: '<S829>/Sum1' incorporates:
   *  Constant: '<S829>/Constant'
   *  Product: '<S829>/Product'
   *  Product: '<S829>/Product1'
   *  Sum: '<S829>/Sum'
   *  UnitDelay: '<S829>/Unit Delay'
   */
  rtb_Sum1_p = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s829_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s488_MultiportSwitch * rtb_Switch_bx;

  /* Switch: '<S823>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S823>/motohawk_calibration'
   *  UnitDelay: '<S823>/Unit Delay5'
   */
  if (BaseEngineController_LS_128_DWork.s823_UnitDelay5_DSTATE) {
    BaseEngineController_LS_128_B.s823_Switch = rtb_Sum1_p;
  } else {
    BaseEngineController_LS_128_B.s823_Switch = (PHI1_DefaultVal_DataStore());
  }

  /* End of Switch: '<S823>/Switch' */
  /* S-Function Block: <S824>/motohawk_delta_time */
  rtb_motohawk_delta_time_he = 0.005;

  /* UnitDelay: '<S824>/Unit Delay2' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s824_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S824>/IncreasingFilter' incorporates:
   *  EnablePort: '<S833>/Enable'
   */
  /* RelationalOperator: '<S824>/Relational Operator4' incorporates:
   *  UnitDelay: '<S824>/Unit Delay2'
   */
  if (BaseEngineController_LS_128_DWork.s824_UnitDelay2_DSTATE <
      BaseEngineController_LS_128_B.s503_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S833>/motohawk_calibration1' */
    BaseEngineController_LS_128_B.s824_Merge = (PH2_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S824>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S824>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S824>/DecreasingFilter' incorporates:
   *  EnablePort: '<S831>/Enable'
   */
  /* RelationalOperator: '<S824>/Relational Operator3' */
  if (rtb_DataTypeConversion1_g > BaseEngineController_LS_128_B.s503_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S831>/motohawk_calibration2' */
    BaseEngineController_LS_128_B.s824_Merge = (PH2_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S824>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S824>/DecreasingFilter' */

  /* Switch: '<S824>/Switch1' incorporates:
   *  Constant: '<S824>/Constant'
   *  MinMax: '<S824>/MinMax'
   *  Product: '<S824>/Product'
   *  UnitDelay: '<S824>/Unit Delay5'
   */
  if (BaseEngineController_LS_128_DWork.s824_UnitDelay5_DSTATE) {
    rtb_Switch_bx = rtb_motohawk_delta_time_he / ((rtb_motohawk_delta_time_he >=
      BaseEngineController_LS_128_B.s824_Merge) || rtIsNaN
      (BaseEngineController_LS_128_B.s824_Merge) ? rtb_motohawk_delta_time_he :
      BaseEngineController_LS_128_B.s824_Merge);
  } else {
    rtb_Switch_bx = 1.0;
  }

  /* End of Switch: '<S824>/Switch1' */

  /* Sum: '<S832>/Sum1' incorporates:
   *  Constant: '<S832>/Constant'
   *  Product: '<S832>/Product'
   *  Product: '<S832>/Product1'
   *  Sum: '<S832>/Sum'
   *  UnitDelay: '<S832>/Unit Delay'
   */
  rtb_Sum1_fy = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s832_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s503_Merge * rtb_Switch_bx;

  /* Switch: '<S824>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S824>/motohawk_calibration'
   *  UnitDelay: '<S824>/Unit Delay5'
   */
  if (BaseEngineController_LS_128_DWork.s824_UnitDelay5_DSTATE) {
    BaseEngineController_LS_128_B.s824_Switch = rtb_Sum1_fy;
  } else {
    BaseEngineController_LS_128_B.s824_Switch = (PHI2_DefaultVal_DataStore());
  }

  /* End of Switch: '<S824>/Switch' */
  /* S-Function Block: <S820>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s820_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S820>/Product' incorporates:
   *  MinMax: '<S820>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S820>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (VSPD_Filt_DataStore())) || rtIsNaN
    ((VSPD_Filt_DataStore())) ? rtb_Switch_bx : (VSPD_Filt_DataStore());

  /* Sum: '<S825>/Sum1' incorporates:
   *  Constant: '<S825>/Constant'
   *  Product: '<S825>/Product'
   *  Product: '<S825>/Product1'
   *  Sum: '<S825>/Sum'
   *  UnitDelay: '<S825>/Unit Delay'
   */
  rtb_Sum1_bv = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s825_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s456_Switch2 * rtb_Switch_bx;

  /* Gain: '<S806>/Gain' */
  rtb_Gain_a = 1.60934 * rtb_Sum1_bv;

  /* MultiPortSwitch: '<S449>/Multiport Switch' incorporates:
   *  Constant: '<S449>/Constant1'
   *  MinMax: '<S449>/MinMax'
   */
  if (BaseEngineController_LS_128_B.s517_Merge == FALSE) {
    /* Product: '<S449>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_g = (Gear6Ratio_DataStore()) * (FDR_DataStore());

    /* Product: '<S449>/Product' incorporates:
     *  Constant: '<S449>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration7'
     */
    rtb_DataTypeConversion_cy = (TireRadius_DataStore()) * 0.00595 *
      BaseEngineController_LS_128_B.s557_Sum1;

    /* Abs: '<S449>/Abs5' incorporates:
     *  Product: '<S449>/Product12'
     *  Sum: '<S449>/Sum5'
     */
    rtb_DataTypeConversion1_g = fabs(rtb_DataTypeConversion_cy /
      rtb_DataTypeConversion1_g - BaseEngineController_LS_128_B.s456_Switch2);

    /* Gain: '<S449>/Gain5' incorporates:
     *  RelationalOperator: '<S449>/M6'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration8'
     */
    rtb_Gain5 = (uint8_T)(rtb_DataTypeConversion1_g <= (GearMatchHyst_DataStore())
                          ? 192 : 0);

    /* Gain: '<S449>/Gain4' incorporates:
     *  Abs: '<S449>/Abs4'
     *  Product: '<S449>/Product11'
     *  Product: '<S449>/Product5'
     *  RelationalOperator: '<S449>/M5'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration8'
     *  Sum: '<S449>/Sum4'
     */
    rtb_Gain4 = (uint8_T)(fabs(rtb_DataTypeConversion_cy /
      ((Gear5Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_128_B.s456_Switch2) <= (GearMatchHyst_DataStore())
                          ? 160 : 0);

    /* Gain: '<S449>/Gain3' incorporates:
     *  Abs: '<S449>/Abs3'
     *  Product: '<S449>/Product10'
     *  Product: '<S449>/Product4'
     *  RelationalOperator: '<S449>/M4'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration8'
     *  Sum: '<S449>/Sum3'
     */
    rtb_Gain3_k = (uint8_T)((fabs(rtb_DataTypeConversion_cy /
      ((Gear4Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_128_B.s456_Switch2) <= (GearMatchHyst_DataStore()))
      << 7);

    /* Gain: '<S449>/Gain2' incorporates:
     *  Abs: '<S449>/Abs2'
     *  Product: '<S449>/Product3'
     *  Product: '<S449>/Product9'
     *  RelationalOperator: '<S449>/M3'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration8'
     *  Sum: '<S449>/Sum2'
     */
    rtb_Gain2_h = (uint8_T)(fabs(rtb_DataTypeConversion_cy /
      ((Gear3Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_128_B.s456_Switch2) <= (GearMatchHyst_DataStore())
      ? 192 : 0);

    /* Gain: '<S449>/Gain1' incorporates:
     *  Abs: '<S449>/Abs1'
     *  Product: '<S449>/Product2'
     *  Product: '<S449>/Product8'
     *  RelationalOperator: '<S449>/M2'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration8'
     *  Sum: '<S449>/Sum1'
     */
    rtb_Gain1_i = (uint8_T)((fabs(rtb_DataTypeConversion_cy /
      ((Gear2Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_128_B.s456_Switch2) <= (GearMatchHyst_DataStore()))
      << 7);

    /* MinMax: '<S449>/MinMax' incorporates:
     *  Abs: '<S449>/Abs'
     *  Gain: '<S449>/Gain'
     *  Product: '<S449>/Product1'
     *  Product: '<S449>/Product7'
     *  RelationalOperator: '<S449>/M1'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration8'
     *  Sum: '<S449>/Sum'
     */
    maxV = ((fabs(rtb_DataTypeConversion_cy / ((Gear1Ratio_DataStore()) *
               (FDR_DataStore())) - BaseEngineController_LS_128_B.s456_Switch2) <=
             (GearMatchHyst_DataStore())) << 7) >> 2;
    i = rtb_Gain1_i >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain2_h >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain3_k;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain4;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain5;
    BaseEngineController_LS_128_B.s449_MultiportSwitch = ldexp((real_T)
      ((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)i), -5);
  } else {
    BaseEngineController_LS_128_B.s449_MultiportSwitch = 0.0;
  }

  /* End of MultiPortSwitch: '<S449>/Multiport Switch' */
  /* S-Function Block: <S821>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s821_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S821>/Product' incorporates:
   *  MinMax: '<S821>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S821>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (SparkAdv_Filt_DataStore())) || rtIsNaN
    ((SparkAdv_Filt_DataStore())) ? rtb_Switch_bx : (SparkAdv_Filt_DataStore());

  /* Sum: '<S826>/Sum1' incorporates:
   *  Constant: '<S826>/Constant'
   *  Product: '<S826>/Product'
   *  Product: '<S826>/Product1'
   *  Sum: '<S826>/Sum'
   *  UnitDelay: '<S826>/Unit Delay'
   */
  rtb_Sum1_oe = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s826_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s92_SparkAdv * rtb_Switch_bx;

  /* S-Function Block: <S822>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s822_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S822>/Product' incorporates:
   *  MinMax: '<S822>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (ECUVolt_Filt_DataStore())) || rtIsNaN
    ((ECUVolt_Filt_DataStore())) ? rtb_Switch_bx : (ECUVolt_Filt_DataStore());

  /* Sum: '<S827>/Sum1' incorporates:
   *  Constant: '<S827>/Constant'
   *  Product: '<S827>/Product'
   *  Product: '<S827>/Product1'
   *  Sum: '<S827>/Sum'
   *  UnitDelay: '<S827>/Unit Delay'
   */
  rtb_Sum1_jq = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s827_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s634_Merge * rtb_Switch_bx;

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
        if (BaseEngineController_LS_128_B.s823_Switch < 0.5000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s823_Switch > 1.4960937500F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((BaseEngineController_LS_128_B.s823_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (BaseEngineController_LS_128_B.s824_Switch < 0.5000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s824_Switch > 1.4960937500F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_128_B.s824_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Gain_a < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Gain_a > 411.9857775000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Gain_a * (159.0710252128F));
        }

        if (BaseEngineController_LS_128_B.s449_MultiportSwitch < 0.0000000000F)
        {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s449_MultiportSwitch >
                   255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_128_B.s449_MultiportSwitch);
        }

        if (rtb_Sum1_oe < -17.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Sum1_oe > 72.6478000000F) {
          tmp4 = (uint8_T)(254U);
        } else {
          tmp4 = (uint8_T)((rtb_Sum1_oe - (-17.0000000000F)) * (2.8444646717F));
        }

        if (rtb_Sum1_jq < 0.0000000000F) {
          tmp5 = (uint16_T)(0U);
        } else if (rtb_Sum1_jq > 16.0888425000F) {
          tmp5 = (uint16_T)(65535U);
        } else {
          tmp5 = (uint16_T)(rtb_Sum1_jq * (4073.3197556008F));
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

  /* UnitDelay: '<S823>/Unit Delay1' */
  rtb_UnitDelay1_ct = BaseEngineController_LS_128_DWork.s823_UnitDelay1_DSTATE;

  /* UnitDelay: '<S823>/Unit Delay3' */
  rtb_UnitDelay3_a = BaseEngineController_LS_128_DWork.s823_UnitDelay3_DSTATE;

  /* UnitDelay: '<S823>/Unit Delay4' */
  rtb_UnitDelay4_o = BaseEngineController_LS_128_DWork.s823_UnitDelay4_DSTATE;

  /* UnitDelay: '<S824>/Unit Delay1' */
  rtb_UnitDelay1_gb = BaseEngineController_LS_128_DWork.s824_UnitDelay1_DSTATE;

  /* UnitDelay: '<S824>/Unit Delay3' */
  rtb_UnitDelay3_i = BaseEngineController_LS_128_DWork.s824_UnitDelay3_DSTATE;

  /* UnitDelay: '<S824>/Unit Delay4' */
  rtb_UnitDelay4_a = BaseEngineController_LS_128_DWork.s824_UnitDelay4_DSTATE;

  /* S-Function Block: <S837>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s837_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S837>/Product' incorporates:
   *  MinMax: '<S837>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S837>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (MAP_filt_DataStore())) || rtIsNaN
    ((MAP_filt_DataStore())) ? rtb_Switch_bx : (MAP_filt_DataStore());

  /* Sum: '<S840>/Sum1' incorporates:
   *  Constant: '<S840>/Constant'
   *  Product: '<S840>/Product'
   *  Product: '<S840>/Product1'
   *  Sum: '<S840>/Sum'
   *  UnitDelay: '<S840>/Unit Delay'
   */
  rtb_Sum1_in = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s840_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s600_Merge * rtb_Switch_bx;

  /* S-Function (motohawk_sfun_data_read): '<S807>/motohawk_data_read' */
  rtb_motohawk_data_read_p = VEFin_DataStore();

  /* S-Function Block: <S588>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s588_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S588>/Product' incorporates:
   *  MinMax: '<S588>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S588>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (FuelPresFilterConst_DataStore())) ||
    rtIsNaN((FuelPresFilterConst_DataStore())) ? rtb_Switch_bx :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S560>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(73) || IsFaultActive(74));

  /* Logic: '<S560>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S560>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(73) || IsFaultSuspected(74));

  /* S-Function Block: <S484>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get
      (&BaseEngineController_LS_128_B.s484_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S560>/Data Type Conversion' */
  rtb_DataTypeConversion_al = (real_T)
    BaseEngineController_LS_128_B.s484_motohawk_ain2;

  /* Product: '<S560>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = rtb_DataTypeConversion_al *
    (FuelPresGain_DataStore());

  /* Sum: '<S560>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s560_Sum1 = rtb_DataTypeConversion1_g +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S560>/Unit Delay1' */
  rtb_UnitDelay1_g4e = BaseEngineController_LS_128_DWork.s560_UnitDelay1_DSTATE;

  /* If: '<S560>/If' incorporates:
   *  Logic: '<S560>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S560>/If Action Subsystem' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_g4e,
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S560>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S560>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S590>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S560>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S560>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s560_Sum1, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S560>/If Action Subsystem2' */
  }

  /* End of If: '<S560>/If' */

  /* Sum: '<S593>/Sum1' incorporates:
   *  Constant: '<S593>/Constant'
   *  Product: '<S593>/Product'
   *  Product: '<S593>/Product1'
   *  Sum: '<S593>/Sum'
   *  UnitDelay: '<S593>/Unit Delay'
   */
  rtb_Sum1_a5 = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s593_UnitDelay_DSTATE + rtb_Merge_i *
    rtb_Switch_bx;

  /* If: '<S592>/If' incorporates:
   *  Inport: '<S594>/In1'
   *  Inport: '<S595>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S592>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S592>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S592>/NewValue' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    BaseEngineController_LS_128_B.s592_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S592>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S592>/OldValue' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    BaseEngineController_LS_128_B.s592_Merge = rtb_Sum1_a5;

    /* End of Outputs for SubSystem: '<S592>/OldValue' */
  }

  /* End of If: '<S592>/If' */

  /* Gain: '<S807>/Gain' */
  rtb_DataTypeConversion1_g = 0.01 * BaseEngineController_LS_128_B.s592_Merge;

  /* S-Function Block: <S838>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s838_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S838>/Product' incorporates:
   *  MinMax: '<S838>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S838>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (FuelPres_Filt_DataStore())) || rtIsNaN
    ((FuelPres_Filt_DataStore())) ? rtb_Switch_bx : (FuelPres_Filt_DataStore());

  /* Sum: '<S841>/Sum1' incorporates:
   *  Constant: '<S841>/Constant'
   *  Product: '<S841>/Product'
   *  Product: '<S841>/Product1'
   *  Sum: '<S841>/Sum'
   *  UnitDelay: '<S841>/Unit Delay'
   */
  rtb_Sum1_kq = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s841_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_g * rtb_Switch_bx;

  /* S-Function Block: <S614>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s614_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S614>/Product' incorporates:
   *  MinMax: '<S614>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S614>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (OilPresFilterConst_DataStore())) ||
    rtIsNaN((OilPresFilterConst_DataStore())) ? rtb_Switch_bx :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S564>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(135) || IsFaultActive(136));

  /* Logic: '<S564>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S564>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(135) || IsFaultSuspected(136));

  /* S-Function Block: <S484>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_LS_128_B.s484_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S564>/Data Type Conversion' */
  rtb_Switch4_k = (real_T)BaseEngineController_LS_128_B.s484_motohawk_ain1;

  /* Product: '<S564>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = rtb_Switch4_k * (OilPresGain_DataStore());

  /* Sum: '<S564>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s564_Sum1 = rtb_DataTypeConversion1_g +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S564>/Unit Delay1' */
  rtb_UnitDelay1_fc = BaseEngineController_LS_128_DWork.s564_UnitDelay1_DSTATE;

  /* If: '<S564>/If' incorporates:
   *  Logic: '<S564>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S564>/If Action Subsystem' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_fc,
      &rtb_Merge_oo);

    /* End of Outputs for SubSystem: '<S564>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S564>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S616>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_oo);

    /* End of Outputs for SubSystem: '<S564>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S564>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s564_Sum1, &rtb_Merge_oo);

    /* End of Outputs for SubSystem: '<S564>/If Action Subsystem2' */
  }

  /* End of If: '<S564>/If' */

  /* Sum: '<S619>/Sum1' incorporates:
   *  Constant: '<S619>/Constant'
   *  Product: '<S619>/Product'
   *  Product: '<S619>/Product1'
   *  Sum: '<S619>/Sum'
   *  UnitDelay: '<S619>/Unit Delay'
   */
  rtb_Sum1_c0 = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s619_UnitDelay_DSTATE + rtb_Merge_oo *
    rtb_Switch_bx;

  /* If: '<S618>/If' incorporates:
   *  Inport: '<S620>/In1'
   *  Inport: '<S621>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S618>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S618>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S618>/NewValue' incorporates:
     *  ActionPort: '<S620>/Action Port'
     */
    BaseEngineController_LS_128_B.s618_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S618>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S618>/OldValue' incorporates:
     *  ActionPort: '<S621>/Action Port'
     */
    BaseEngineController_LS_128_B.s618_Merge = rtb_Sum1_c0;

    /* End of Outputs for SubSystem: '<S618>/OldValue' */
  }

  /* End of If: '<S618>/If' */

  /* Gain: '<S807>/Gain1' */
  rtb_DataTypeConversion1_g = 0.068948 *
    BaseEngineController_LS_128_B.s618_Merge;

  /* S-Function Block: <S839>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s839_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S839>/Product' incorporates:
   *  MinMax: '<S839>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S839>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (OilPres_Filt_DataStore())) || rtIsNaN
    ((OilPres_Filt_DataStore())) ? rtb_Switch_bx : (OilPres_Filt_DataStore());

  /* Sum: '<S842>/Sum1' incorporates:
   *  Constant: '<S842>/Constant'
   *  Product: '<S842>/Product'
   *  Product: '<S842>/Product1'
   *  Sum: '<S842>/Sum'
   *  UnitDelay: '<S842>/Unit Delay'
   */
  rtb_Sum1_mk = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s842_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_g * rtb_Switch_bx;

  /* S-Function (motohawk_sfun_data_read): '<S807>/motohawk_data_read1' */
  rtb_Switch_bx = BaseEquivRatio_DataStore();

  /* Math: '<S807>/Math Function' incorporates:
   *  Saturate: '<S807>/Saturation'
   *
   * About '<S807>/Math Function':
   *  Operator: reciprocal
   */
  rtb_MathFunction = 1.0 / (rtb_Switch_bx >= 0.01 ? rtb_Switch_bx : 0.01);

  /* Switch: '<S100>/Switch' incorporates:
   *  Constant: '<S100>/OFF'
   *  Logic: '<S100>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S100>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S100>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_k = FALSE;
  } else {
    rtb_RelationalOperator5_k = BaseEngineController_LS_128_B.s92_FUELP;
  }

  /* End of Switch: '<S100>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S807>/motohawk_data_read2' */
  rtb_motohawk_data_read2_j4 = O2CtrlMode_DataStore();

  /* S-Function (motohawk_sfun_fault_action): '<S807>/motohawk_fault_action'
   *
   * Regarding '<S807>/motohawk_fault_action':
     Get Fault Action Status: EngineProtectLED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action_l = GetFaultActionStatus(9);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S807>/motohawk_fault_action1'
   *
   * Regarding '<S807>/motohawk_fault_action1':
     Get Fault Action Status: MIL_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_m = GetFaultActionStatus(12);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S807>/motohawk_fault_status2'
   *
   * Regarding '<S807>/motohawk_fault_status2':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status2_c0 = IsFaultActive(117);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S807>/motohawk_fault_status1'
   *
   * Regarding '<S807>/motohawk_fault_status1':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status1_n2 = IsFaultActive(128);
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
  rtb_LogicalOperator6_as = (rtb_motohawk_fault_action1_o ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough1' incorporates:
   *  EnablePort: '<S67>/Enable'
   */
  if (rtb_motohawk_fault_action1_o) {
    if (!BaseEngineController_LS_128_DWork.s22_PassThrough1_MODE) {
      BaseEngineController_LS_128_DWork.s22_PassThrough1_MODE = TRUE;
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
    BaseEngineController_LS_128_B.s22_Merge1[0] = ((int8_T)
      (SoftCycle1Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[1] = ((int8_T)
      (SoftCycle1Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[2] = ((int8_T)
      (SoftCycle1Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[3] = ((int8_T)
      (SoftCycle1Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[4] = ((int8_T)
      (SoftCycle1Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[5] = ((int8_T)
      (SoftCycle1Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[6] = ((int8_T)
      (SoftCycle1Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[7] = ((int8_T)
      (SoftCycle1Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[8] = ((int8_T)
      (SoftCycle2Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[9] = ((int8_T)
      (SoftCycle2Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[10] = ((int8_T)
      (SoftCycle2Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[11] = ((int8_T)
      (SoftCycle2Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[12] = ((int8_T)
      (SoftCycle2Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[13] = ((int8_T)
      (SoftCycle2Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[14] = ((int8_T)
      (SoftCycle2Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[15] = ((int8_T)
      (SoftCycle2Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[16] = ((int8_T)
      (SoftCycle3Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[17] = ((int8_T)
      (SoftCycle3Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[18] = ((int8_T)
      (SoftCycle3Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[19] = ((int8_T)
      (SoftCycle3Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[20] = ((int8_T)
      (SoftCycle3Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[21] = ((int8_T)
      (SoftCycle3Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[22] = ((int8_T)
      (SoftCycle3Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[23] = ((int8_T)
      (SoftCycle3Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[24] = ((int8_T)
      (SoftCycle4Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[25] = ((int8_T)
      (SoftCycle4Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[26] = ((int8_T)
      (SoftCycle4Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[27] = ((int8_T)
      (SoftCycle4Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[28] = ((int8_T)
      (SoftCycle4Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[29] = ((int8_T)
      (SoftCycle4Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[30] = ((int8_T)
      (SoftCycle4Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[31] = ((int8_T)
      (SoftCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_LS_128_DWork.s22_PassThrough1_MODE) {
      /* Disable for Outport: '<S67>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_128_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S67>/Out1' */
      BaseEngineController_LS_128_DWork.s22_PassThrough1_MODE = FALSE;
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
    BaseEngineController_LS_128_B.s22_Merge1[0] = ((int8_T)
      (MediumCycle1Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[1] = ((int8_T)
      (MediumCycle1Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[2] = ((int8_T)
      (MediumCycle1Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[3] = ((int8_T)
      (MediumCycle1Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[4] = ((int8_T)
      (MediumCycle1Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[5] = ((int8_T)
      (MediumCycle1Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[6] = ((int8_T)
      (MediumCycle1Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[7] = ((int8_T)
      (MediumCycle1Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[8] = ((int8_T)
      (MediumCycle2Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[9] = ((int8_T)
      (MediumCycle2Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[10] = ((int8_T)
      (MediumCycle2Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[11] = ((int8_T)
      (MediumCycle2Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[12] = ((int8_T)
      (MediumCycle2Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[13] = ((int8_T)
      (MediumCycle2Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[14] = ((int8_T)
      (MediumCycle2Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[15] = ((int8_T)
      (MediumCycle2Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[16] = ((int8_T)
      (MediumCycle3Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[17] = ((int8_T)
      (MediumCycle3Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[18] = ((int8_T)
      (MediumCycle3Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[19] = ((int8_T)
      (MediumCycle3Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[20] = ((int8_T)
      (MediumCycle3Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[21] = ((int8_T)
      (MediumCycle3Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[22] = ((int8_T)
      (MediumCycle3Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[23] = ((int8_T)
      (MediumCycle3Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[24] = ((int8_T)
      (MediumCycle4Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[25] = ((int8_T)
      (MediumCycle4Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[26] = ((int8_T)
      (MediumCycle4Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[27] = ((int8_T)
      (MediumCycle4Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[28] = ((int8_T)
      (MediumCycle4Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[29] = ((int8_T)
      (MediumCycle4Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[30] = ((int8_T)
      (MediumCycle4Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[31] = ((int8_T)
      (MediumCycle4Cyl8_DataStore()));
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough2' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough3' incorporates:
   *  EnablePort: '<S69>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_LS_128_DWork.s22_PassThrough3_MODE) {
      BaseEngineController_LS_128_DWork.s22_PassThrough3_MODE = TRUE;
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
    BaseEngineController_LS_128_B.s22_Merge1[0] = ((int8_T)
      (HardCycle1Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[1] = ((int8_T)
      (HardCycle1Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[2] = ((int8_T)
      (HardCycle1Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[3] = ((int8_T)
      (HardCycle1Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[4] = ((int8_T)
      (HardCycle1Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[5] = ((int8_T)
      (HardCycle1Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[6] = ((int8_T)
      (HardCycle1Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[7] = ((int8_T)
      (HardCycle1Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[8] = ((int8_T)
      (HardCycle2Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[9] = ((int8_T)
      (HardCycle2Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[10] = ((int8_T)
      (HardCycle2Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[11] = ((int8_T)
      (HardCycle2Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[12] = ((int8_T)
      (HardCycle2Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[13] = ((int8_T)
      (HardCycle2Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[14] = ((int8_T)
      (HardCycle2Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[15] = ((int8_T)
      (HardCycle2Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[16] = ((int8_T)
      (HardCycle3Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[17] = ((int8_T)
      (HardCycle3Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[18] = ((int8_T)
      (HardCycle3Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[19] = ((int8_T)
      (HardCycle3Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[20] = ((int8_T)
      (HardCycle3Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[21] = ((int8_T)
      (HardCycle3Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[22] = ((int8_T)
      (HardCycle3Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[23] = ((int8_T)
      (HardCycle3Cyl8_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[24] = ((int8_T)
      (HardCycle4Cyl1_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[25] = ((int8_T)
      (HardCycle4Cyl2_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[26] = ((int8_T)
      (HardCycle4Cyl3_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[27] = ((int8_T)
      (HardCycle4Cyl4_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[28] = ((int8_T)
      (HardCycle4Cyl5_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[29] = ((int8_T)
      (HardCycle4Cyl6_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[30] = ((int8_T)
      (HardCycle4Cyl7_DataStore()));
    BaseEngineController_LS_128_B.s22_Merge1[31] = ((int8_T)
      (HardCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_LS_128_DWork.s22_PassThrough3_MODE) {
      /* Disable for Outport: '<S69>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_128_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S69>/Out1' */
      BaseEngineController_LS_128_DWork.s22_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S22>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S72>/Enable'
   */
  if (rtb_LogicalOperator6_as) {
    if (!BaseEngineController_LS_128_DWork.s22_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
      BaseEngineController_LS_128_DWork.s72_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
      BaseEngineController_LS_128_DWork.s72_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_869p0001 */
      BaseEngineController_LS_128_DWork.s72_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_LS_128_DWork.s22_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S72>/Unit Delay2' */
    BaseEngineController_LS_128_B.s72_UnitDelay2 =
      BaseEngineController_LS_128_DWork.s72_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S72>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_LS_128_B.s72_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_128_B.s22_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_128_B.s22_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_128_B.s22_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_128_B.s22_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S72>/Multiport Switch' */

    /* UnitDelay: '<S72>/Unit Delay1' */
    BaseEngineController_LS_128_B.s72_UnitDelay1 =
      BaseEngineController_LS_128_DWork.s72_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S72>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_869p0001 */
    if (BaseEngineController_LS_128_DWork.s72_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_LS_128_DWork.s72_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S72>/Unit Delay2' */
    BaseEngineController_LS_128_DWork.s72_UnitDelay2_DSTATE =
      BaseEngineController_LS_128_B.s82_Switch1;

    /* Update for UnitDelay: '<S72>/Unit Delay1' */
    BaseEngineController_LS_128_DWork.s72_UnitDelay1_DSTATE =
      BaseEngineController_LS_128_B.s82_Switch;
  } else {
    if (BaseEngineController_LS_128_DWork.s22_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_869p0001 */
      BaseEngineController_LS_128_DWork.s72_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_128_DWork.s22_SequenceCutMachine_MODE = FALSE;
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
    if (!BaseEngineController_LS_128_DWork.s22_PassThrough5_MODE) {
      BaseEngineController_LS_128_DWork.s22_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S71>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s71_DataTypeConversion1[i] =
        ((BaseEngineController_LS_128_B.s82_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S71>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_LS_128_DWork.s22_PassThrough5_MODE) {
      /* Disable for Outport: '<S71>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s71_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S71>/Out1' */
      BaseEngineController_LS_128_DWork.s22_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough5' */

  /* Logic: '<S22>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = !BaseEngineController_LS_128_B.s71_DataTypeConversion1[i];
  }

  /* End of Logic: '<S22>/Logical Operator3' */

  /* Sum: '<S807>/    ' incorporates:
   *  Sum: '<S807>/      '
   */
  rtb_Switch_oq = rtb_AND1[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_oq += (uint32_T)rtb_AND1[1 + i];
  }

  /* End of Sum: '<S807>/    ' */

  /* RelationalOperator: '<S834>/Compare' incorporates:
   *  Constant: '<S834>/Constant'
   *  Sum: '<S807>/    '
   */
  rtb_Compare_f1 = (((uint8_T)rtb_Switch_oq >= 1));

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
    if (!BaseEngineController_LS_128_DWork.s22_PassThrough4_MODE) {
      BaseEngineController_LS_128_DWork.s22_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S70>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s70_DataTypeConversion[i] =
        ((BaseEngineController_LS_128_B.s82_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S70>/Data Type Conversion' */
  } else {
    if (BaseEngineController_LS_128_DWork.s22_PassThrough4_MODE) {
      /* Disable for Outport: '<S70>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s70_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S70>/Out1' */
      BaseEngineController_LS_128_DWork.s22_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough4' */

  /* Logic: '<S22>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_128_B.s22_LogicalOperator2[i] =
      !BaseEngineController_LS_128_B.s70_DataTypeConversion[i];
  }

  /* End of Logic: '<S22>/Logical Operator2' */

  /* Sum: '<S807>/      ' incorporates:
   *  Sum: '<S807>/    '
   */
  rtb_Switch_oq = BaseEngineController_LS_128_B.s22_LogicalOperator2[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_oq += (uint32_T)
      BaseEngineController_LS_128_B.s22_LogicalOperator2[1 + i];
  }

  /* End of Sum: '<S807>/      ' */

  /* RelationalOperator: '<S835>/Compare' incorporates:
   *  Constant: '<S835>/Constant'
   *  Sum: '<S807>/      '
   */
  rtb_Compare_o = (((uint8_T)rtb_Switch_oq >= 1));

  /* RelationalOperator: '<S836>/Compare' incorporates:
   *  Constant: '<S836>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S807>/motohawk_data_read3'
   */
  rtb_Compare_h = ((((uint8_T)EncoderState_DataStore()) >= 3));

  /* S-Function (motohawk_sfun_fault_status): '<S807>/motohawk_fault_status3'
   *
   * Regarding '<S807>/motohawk_fault_status3':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status3_c5 = IsFaultActive(140);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S807>/motohawk_fault_status4'
   *
   * Regarding '<S807>/motohawk_fault_status4':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status4_iw = IsFaultActive(42);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S807>/Send CAN Messages' */
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
        if (rtb_Sum1_in < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Sum1_in > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Sum1_in * (10.0000000000F));
        }

        if (rtb_motohawk_data_read_p < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_p > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_motohawk_data_read_p);
        }

        if (rtb_Sum1_kq < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Sum1_kq > 10.2000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Sum1_kq * (25.0000000000F));
        }

        if (rtb_Sum1_mk < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Sum1_mk > 10.2000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Sum1_mk * (25.0000000000F));
        }

        if (rtb_MathFunction < 0.5000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_MathFunction > 1.4960937500F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)((rtb_MathFunction - (0.5000000000F)) *
                           (256.0000000000F));
        }

        tmp5 = (uint8_T)(rtb_RelationalOperator5_k != 0);
        if (BaseEngineController_LS_128_B.s92_FAN1 < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s92_FAN1 > 1.0000000000F) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(BaseEngineController_LS_128_B.s92_FAN1 != 0);
        }

        if (BaseEngineController_LS_128_B.s92_FAN2 < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s92_FAN2 > 1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(BaseEngineController_LS_128_B.s92_FAN2 != 0);
        }

        tmp8 = (uint8_T)(0U);
        tmp9 = (uint8_T)(rtb_motohawk_data_read2_j4 != 0);
        tmp10 = (uint8_T)(rtb_motohawk_fault_action_l != 0);
        tmp11 = (uint8_T)(rtb_motohawk_fault_action1_m != 0);
        tmp12 = (uint8_T)(rtb_motohawk_fault_status2_c0 != 0);
        tmp13 = (uint8_T)(rtb_motohawk_fault_status1_n2 != 0);
        if (rtb_Compare_f1 > 1U) {
          tmp14 = (uint8_T)(1U);
        } else {
          tmp14 = (uint8_T)(rtb_Compare_f1 != 0);
        }

        if (rtb_Compare_o > 1U) {
          tmp15 = (uint8_T)(1U);
        } else {
          tmp15 = (uint8_T)(rtb_Compare_o != 0);
        }

        if (rtb_Compare_h > 1U) {
          tmp16 = (uint8_T)(1U);
        } else {
          tmp16 = (uint8_T)(rtb_Compare_h != 0);
        }

        tmp17 = (uint8_T)(BaseEngineController_LS_128_B.s92_AC != 0);
        tmp18 = (uint8_T)(rtb_motohawk_fault_status3_c5 != 0);
        tmp19 = (uint8_T)(rtb_motohawk_fault_status4_iw != 0);
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

  /* Product: '<S808>/Product' incorporates:
   *  Constant: '<S808>/Constant1'
   *  Saturate: '<S808>/Saturation'
   */
  rtb_Product_fp = BaseEngineController_LS_128_B.s406_MultiportSwitch * 60.0 /
    (BaseEngineController_LS_128_B.s557_Sum1 >= 0.01 ?
     BaseEngineController_LS_128_B.s557_Sum1 : 0.01);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S808>/Send CAN Messages' */
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
        if (BaseEngineController_LS_128_B.s406_MultiportSwitch < 0.0000000000F)
        {
          tmp1 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_128_B.s406_MultiportSwitch >
                   3276.7500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(BaseEngineController_LS_128_B.s406_MultiportSwitch *
                            (20.0000000000F));
        }

        if (rtb_Product_fp < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Product_fp > 32.7675000000F) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_Product_fp * (2000.0000000000F));
        }

        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(BaseEngineController_LS_128_B.s517_Merge != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S809>/motohawk_data_read2' incorporates:
   *  Constant: '<S809>/Constant5'
   */
  rtb_motohawk_data_read2_n = InjMPW_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_data_read): '<S809>/motohawk_data_read1' incorporates:
   *  Constant: '<S809>/Constant4'
   */
  rtb_motohawk_data_read1_bj = InjDC_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_send_canmsgs): '<S809>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read2_n < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_n > 25.5000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_motohawk_data_read2_n * (10.0000000000F));
        }

        if (BaseEngineController_LS_128_B.s488_Lambda < -64.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s488_Lambda > 63.5000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_128_B.s488_Lambda -
                            (-64.0000000000F)) * (2.0000000000F));
        }

        if (rtb_motohawk_data_read1_bj < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_bj > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_bj * (2.5499991075F));
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

  /* S-Function (motohawk_sfun_data_read): '<S810>/motohawk_data_read' */
  rtb_motohawk_data_read_d = BARO_DataStore();

  /* S-Function Block: <S843>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s843_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S843>/Product' incorporates:
   *  MinMax: '<S843>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (Flex_Filt_DataStore())) || rtIsNaN
    ((Flex_Filt_DataStore())) ? rtb_Switch_bx : (Flex_Filt_DataStore());

  /* Sum: '<S844>/Sum1' incorporates:
   *  Constant: '<S844>/Constant'
   *  Product: '<S844>/Product'
   *  Product: '<S844>/Product1'
   *  Sum: '<S844>/Sum'
   *  UnitDelay: '<S844>/Unit Delay'
   */
  rtb_Sum1_j4 = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s844_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s579_Merge * rtb_Switch_bx;

  /* Outputs for Enabled SubSystem: '<S401>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S444>/Enable'
   */
  if (rtb_RelOp_cx) {
    if (!BaseEngineController_LS_128_DWork.s401_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S444>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s444_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_128_DWork.s401_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S444>/Sum' incorporates:
     *  Constant: '<S444>/Constant'
     *  UnitDelay: '<S444>/Unit Delay'
     */
    rtb_Add_n = (int8_T)(BaseEngineController_LS_128_DWork.s444_UnitDelay_DSTATE
                         + 1);

    /* Sum: '<S444>/Add' incorporates:
     *  Constant: '<S444>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S444>/motohawk_calibration'
     */
    rtb_Sum_c5 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S444>/Relational Operator' */
    rtb_LogicalOperator6_as = (rtb_Add_n <= rtb_Sum_c5);

    /* Switch: '<S444>/Switch' */
    if (rtb_LogicalOperator6_as) {
      rtb_Sum_c5 = rtb_Add_n;
    }

    /* End of Switch: '<S444>/Switch' */

    /* Sum: '<S444>/Add1' incorporates:
     *  Constant: '<S444>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Sum_c5 - 2);

    /* Logic: '<S444>/Logical Operator' incorporates:
     *  Constant: '<S444>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S444>/Relational Operator1'
     */
    rtb_LogicalOperator_jp = (rtb_LogicalOperator6_as && (rtb_Add_n > 2));

    /* Outputs for Enabled SubSystem: '<S444>/Collect Average' */
    BaseEngineController_LS_128_CollectAverage(rtb_LogicalOperator_jp,
      rtb_Add1_e, BaseEngineController_LS_128_B.s653_Merge,
      &BaseEngineController_LS_128_B.s444_CollectAverage,
      &BaseEngineController_LS_128_DWork.s444_CollectAverage);

    /* End of Outputs for SubSystem: '<S444>/Collect Average' */

    /* Update for UnitDelay: '<S444>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s444_UnitDelay_DSTATE = rtb_Sum_c5;
  } else {
    if (BaseEngineController_LS_128_DWork.s401_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S444>/Collect Average' */
      BaseEngineController_LS_128_CollectAverage_Disable
        (&BaseEngineController_LS_128_DWork.s444_CollectAverage);

      /* End of Disable for SubSystem: '<S444>/Collect Average' */
      BaseEngineController_LS_128_DWork.s401_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S401>/Capture IAT At Startup' */

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
        if (rtb_motohawk_data_read_d < 50.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_d > 113.7500000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)((rtb_motohawk_data_read_d - (50.0000000000F)) *
                           (4.0000000000F));
        }

        if (rtb_Sum1_j4 < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Sum1_j4 > 100.0000350000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Sum1_j4 * (2.5499991075F));
        }

        if (BaseEngineController_LS_128_B.s444_CollectAverage.s408_Product <
            -50.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if
            (BaseEngineController_LS_128_B.s444_CollectAverage.s408_Product >
             205.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)
            (BaseEngineController_LS_128_B.s444_CollectAverage.s408_Product -
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

  /* S-Function (motohawk_sfun_data_read): '<S813>/motohawk_data_read' */
  rtb_motohawk_data_read_g0 = BoostControlTarget_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S813>/motohawk_data_read1' */
  rtb_motohawk_data_read1_iv = BoostControlDutyCycleFF_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S813>/motohawk_data_read2' */
  rtb_motohawk_data_read2_f = BoostControlPID_DataStore();

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
        if (rtb_motohawk_data_read_g0 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_g0 > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_motohawk_data_read_g0 * (10.0000000000F));
        }

        tmp1 = (uint16_T)(0U);
        if (rtb_motohawk_data_read1_iv > 100U) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_iv * (2U));
        }

        if (rtb_motohawk_data_read2_f < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_f > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_motohawk_data_read2_f * (2.5499991075F));
        }

        if (BaseEngineController_LS_128_B.s658_Merge < -50.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s658_Merge > 205.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_128_B.s658_Merge -
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

  /* S-Function Block: <S846>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s846_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S846>/Product' incorporates:
   *  MinMax: '<S846>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S846>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (APP_Filt_DataStore())) || rtIsNaN
    ((APP_Filt_DataStore())) ? rtb_Switch_bx : (APP_Filt_DataStore());

  /* Sum: '<S848>/Sum1' incorporates:
   *  Constant: '<S848>/Constant'
   *  Product: '<S848>/Product'
   *  Product: '<S848>/Product1'
   *  Sum: '<S848>/Sum'
   *  UnitDelay: '<S848>/Unit Delay'
   */
  rtb_Sum1_jh = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s848_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s445_Switch1 * rtb_Switch_bx;

  /* S-Function Block: <S845>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s845_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_bx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S845>/Product' incorporates:
   *  MinMax: '<S845>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S845>/motohawk_calibration'
   */
  rtb_Switch_bx /= (rtb_Switch_bx >= (ETCReq_Filt_DataStore())) || rtIsNaN
    ((ETCReq_Filt_DataStore())) ? rtb_Switch_bx : (ETCReq_Filt_DataStore());

  /* Sum: '<S847>/Sum1' incorporates:
   *  Constant: '<S847>/Constant'
   *  Product: '<S847>/Product'
   *  Product: '<S847>/Product1'
   *  Sum: '<S847>/Sum'
   *  UnitDelay: '<S847>/Unit Delay'
   */
  rtb_Sum1_f3 = (1.0 - rtb_Switch_bx) *
    BaseEngineController_LS_128_DWork.s847_UnitDelay_DSTATE +
    BaseEngineController_LS_128_B.s460_Sum2 * rtb_Switch_bx;

  /* S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status9'
   *
   * Regarding '<S814>/motohawk_fault_status9':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status9 = IsFaultActive(20);
  }

  /* Logic: '<S814>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status10'
   */
  rtb_LogicalOperator3_kc = ((IsFaultActive(5) || IsFaultActive(4)));

  /* Logic: '<S814>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_fq = ((IsFaultActive(13) || IsFaultActive(12)));

  /* Logic: '<S814>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status6'
   */
  rtb_LogicalOperator2_bo = ((IsFaultActive(63) || IsFaultActive(64)));

  /* Logic: '<S814>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status4'
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status7'
   */
  rtb_LogicalOperator4_n = ((IsFaultActive(149) || IsFaultActive(148)));

  /* Logic: '<S814>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status8'
   */
  rtb_LogicalOperator5_fy = ((IsFaultActive(155) || IsFaultActive(154)));

  /* S-Function (motohawk_sfun_data_read): '<S814>/motohawk_data_read1' */
  rtb_motohawk_data_read1_j = ETB_Curr_Flt_DataStore();

  /* S-Function (motohawk_sfun_fault_status): '<S814>/motohawk_fault_status12'
   *
   * Regarding '<S814>/motohawk_fault_status12':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status12 = IsFaultActive(156);
  }

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
        if (rtb_Sum1_jh < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Sum1_jh > 100.0000350000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Sum1_jh * (2.5499991075F));
        }

        if (rtb_Sum1_f3 < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Sum1_f3 > 100.0000350000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Sum1_f3 * (2.5499991075F));
        }

        if (BaseEngineController_LS_128_B.s770_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s770_Merge > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_128_B.s770_Merge *
                           (2.5499991075F));
        }

        if (BaseEngineController_LS_128_B.s787_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_128_B.s787_Merge > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_128_B.s787_Merge *
                           (2.5499991075F));
        }

        tmp4 = (uint8_T)(rtb_motohawk_fault_status9 != 0);
        tmp5 = (uint8_T)(rtb_LogicalOperator3_kc != 0);
        tmp6 = (uint8_T)(rtb_LogicalOperator1_fq != 0);
        tmp7 = (uint8_T)(0U);
        tmp8 = (uint8_T)(rtb_LogicalOperator2_bo != 0);
        tmp9 = (uint8_T)(rtb_LogicalOperator4_n != 0);
        tmp10 = (uint8_T)(rtb_LogicalOperator5_fy != 0);
        tmp11 = (uint8_T)(0U);
        tmp12 = (uint8_T)(rtb_motohawk_data_read1_j != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read' */
  rtb_motohawk_data_read_ma = BaseRevLimit_DataStore();

  /* Logic: '<S811>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status3'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_d3 = ((IsFaultActive(149) || IsFaultActive(148) ||
    IsFaultActive(155) || IsFaultActive(154)));

  /* Logic: '<S811>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status7'
   */
  rtb_LogicalOperator1_bp = ((IsFaultActive(44) || IsFaultActive(43)));

  /* Logic: '<S811>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status6'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status8'
   */
  rtb_LogicalOperator2_k = ((IsFaultActive(74) || IsFaultActive(73)));

  /* Logic: '<S811>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status10'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status9'
   */
  rtb_LogicalOperator3_i = ((IsFaultActive(136) || IsFaultActive(135)));

  /* Logic: '<S811>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status12'
   */
  rtb_LogicalOperator4_j = ((IsFaultActive(121) || IsFaultActive(120)));

  /* Logic: '<S811>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status13'
   *  S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status14'
   */
  rtb_LogicalOperator5_mo = ((IsFaultActive(85) || IsFaultActive(84)));

  /* S-Function (motohawk_sfun_send_canmsgs): '<S811>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read_ma < 0) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_ma > 25599) {
          tmp1 = (uint16_T)(65534U);
        } else {
          tmp1 = (uint16_T)(rtb_motohawk_data_read_ma * (2));
        }

        if (rtb_motohawk_data_read_ma < 0) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_ma > 25599) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_motohawk_data_read_ma * (2));
        }

        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(rtb_LogicalOperator_d3 != 0);
        tmp6 = (uint8_T)(rtb_LogicalOperator1_bp != 0);
        tmp7 = (uint8_T)(rtb_LogicalOperator2_k != 0);
        tmp8 = (uint8_T)(rtb_LogicalOperator3_i != 0);
        tmp9 = (uint8_T)(0U);
        tmp10 = (uint8_T)(rtb_LogicalOperator4_j != 0);
        tmp11 = (uint8_T)(rtb_LogicalOperator5_mo != 0);
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
  if (BaseEngineController_LS_128_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  if (BaseEngineController_LS_128_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */
  if (BaseEngineController_LS_128_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S849>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S854>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
    BaseEngineController_LS_128_DWork.s854_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S849>/EST Enable TDC Counter' */
    BaseEngineController_LS_128_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S880>/If' incorporates:
   *  Inport: '<S881>/In1'
   *  Inport: '<S882>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S880>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S880>/override_enable'
   */
  if ((FAN1_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S880>/NewValue' incorporates:
     *  ActionPort: '<S881>/Action Port'
     */
    rtb_DataTypeConversion1_g = (FAN1_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S880>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S880>/OldValue' incorporates:
     *  ActionPort: '<S882>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s92_FAN1;

    /* End of Outputs for SubSystem: '<S880>/OldValue' */
  }

  /* End of If: '<S880>/If' */

  /* Product: '<S877>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_g *= (FAN1_PWMGain_DataStore());

  /* Sum: '<S877>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration1'
   */
  rtb_Switch_bx = rtb_DataTypeConversion1_g + (FAN1_PWMOffset_DataStore());

  /* MinMax: '<S879>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration2'
   */
  rtb_Switch_bx = (rtb_Switch_bx >= (FAN1_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN1_PWMMinLimit_DataStore())) ? rtb_Switch_bx :
    (FAN1_PWMMinLimit_DataStore());

  /* MinMax: '<S879>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration3'
   */
  BaseEngineController_LS_128_B.s879_MinMax1 = (rtb_Switch_bx <=
    (FAN1_PWMMaxLimit_DataStore())) || rtIsNaN((FAN1_PWMMaxLimit_DataStore())) ?
    rtb_Switch_bx : (FAN1_PWMMaxLimit_DataStore());

  /* Gain: '<S877>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_bx = 40.95 * BaseEngineController_LS_128_B.s879_MinMax1;

  /* DataTypeConversion: '<S877>/Data Type Conversion3' */
  if (rtb_Switch_bx < 32768.0) {
    if (rtb_Switch_bx >= -32768.0) {
      rtb_DataTypeConversion3_j = (int16_T)rtb_Switch_bx;
    } else {
      rtb_DataTypeConversion3_j = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_j = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S877>/Data Type Conversion3' */
  /* Gain: '<S877>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration4'
   */
  rtb_Switch_bx = 100.0 * (FAN1_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S877>/Data Type Conversion2' */
  if (rtb_Switch_bx < 4.294967296E+9) {
    if (rtb_Switch_bx >= 0.0) {
      rtb_DataTypeConversion2_o = (uint32_T)rtb_Switch_bx;
    } else {
      rtb_DataTypeConversion2_o = 0U;
    }
  } else {
    rtb_DataTypeConversion2_o = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S877>/Data Type Conversion2' */

  /* If: '<S884>/If' incorporates:
   *  Inport: '<S885>/In1'
   *  Inport: '<S886>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S884>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S884>/override_enable'
   */
  if ((FAN2_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S884>/NewValue' incorporates:
     *  ActionPort: '<S885>/Action Port'
     */
    rtb_DataTypeConversion1_g = (FAN2_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S884>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S884>/OldValue' incorporates:
     *  ActionPort: '<S886>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s92_FAN2;

    /* End of Outputs for SubSystem: '<S884>/OldValue' */
  }

  /* End of If: '<S884>/If' */

  /* Product: '<S878>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S878>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_g *= (FAN2_PWMGain_DataStore());

  /* Sum: '<S878>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S878>/motohawk_calibration1'
   */
  rtb_Switch_bx = rtb_DataTypeConversion1_g + (FAN2_PWMOffset_DataStore());

  /* MinMax: '<S883>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S878>/motohawk_calibration2'
   */
  rtb_Switch_bx = (rtb_Switch_bx >= (FAN2_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN2_PWMMinLimit_DataStore())) ? rtb_Switch_bx :
    (FAN2_PWMMinLimit_DataStore());

  /* MinMax: '<S883>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S878>/motohawk_calibration3'
   */
  BaseEngineController_LS_128_B.s883_MinMax1 = (rtb_Switch_bx <=
    (FAN2_PWMMaxLimit_DataStore())) || rtIsNaN((FAN2_PWMMaxLimit_DataStore())) ?
    rtb_Switch_bx : (FAN2_PWMMaxLimit_DataStore());

  /* Gain: '<S878>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_bx = 40.95 * BaseEngineController_LS_128_B.s883_MinMax1;

  /* DataTypeConversion: '<S878>/Data Type Conversion3' */
  if (rtb_Switch_bx < 32768.0) {
    if (rtb_Switch_bx >= -32768.0) {
      rtb_DataTypeConversion3_p = (int16_T)rtb_Switch_bx;
    } else {
      rtb_DataTypeConversion3_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S878>/Data Type Conversion3' */
  /* Gain: '<S878>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S878>/motohawk_calibration4'
   */
  rtb_Switch_bx = 100.0 * (FAN2_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S878>/Data Type Conversion2' */
  if (rtb_Switch_bx < 4.294967296E+9) {
    if (rtb_Switch_bx >= 0.0) {
      rtb_DataTypeConversion2_p = (uint32_T)rtb_Switch_bx;
    } else {
      rtb_DataTypeConversion2_p = 0U;
    }
  } else {
    rtb_DataTypeConversion2_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S878>/Data Type Conversion2' */

  /* S-Function Block: <S482>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_LS_128_B.s482_motohawk_din,
      NULL);
  }

  /* Logic: '<S509>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_as = BaseEngineController_LS_128_B.s482_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S520>/If' incorporates:
   *  Inport: '<S521>/In1'
   *  Inport: '<S522>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S520>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S520>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S520>/NewValue' incorporates:
     *  ActionPort: '<S521>/Action Port'
     */
    BaseEngineController_LS_128_B.s520_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S520>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/OldValue' incorporates:
     *  ActionPort: '<S522>/Action Port'
     */
    BaseEngineController_LS_128_B.s520_Merge = rtb_LogicalOperator6_as;

    /* End of Outputs for SubSystem: '<S520>/OldValue' */
  }

  /* End of If: '<S520>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator6_as = (rtb_RelationalOperator5_k &&
    (!BaseEngineController_LS_128_B.s520_Merge));

  /* If: '<S888>/If' incorporates:
   *  Inport: '<S889>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S888>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S888>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S888>/NewValue' incorporates:
     *  ActionPort: '<S889>/Action Port'
     */
    rtb_LogicalOperator6_as = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S888>/NewValue' */
  } else {
  }

  /* End of If: '<S888>/If' */

  /* Logic: '<S887>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_128_B.s887_LogicalOperator = rtb_LogicalOperator6_as ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S891>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s891_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hr = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S475>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s475_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nz = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S474>/RelOp' incorporates:
   *  Constant: '<S474>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S455>/motohawk_data_read'
   */
  rtb_LogicalOperator6_as = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S455>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_d, NULL);
  }

  /* Switch: '<S475>/Switch' incorporates:
   *  Constant: '<S455>/Constant1'
   *  Constant: '<S475>/Constant'
   *  Logic: '<S455>/Logical Operator'
   *  RelationalOperator: '<S455>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S455>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S475>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S475>/motohawk_delta_time'
   *  Sum: '<S475>/Sum'
   */
  if (rtb_LogicalOperator6_as && (rtb_motohawk_ain_read_d > 150)) {
    BaseEngineController_LS_128_B.s475_Switch = rtb_motohawk_delta_time_nz +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_128_B.s475_Switch = 0.0;
  }

  /* End of Switch: '<S475>/Switch' */
  /* RelationalOperator: '<S793>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration3'
   */
  rtb_Switch1_jh = (BaseEngineController_LS_128_B.s475_Switch >
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
    if (!BaseEngineController_LS_128_DWork.s14_ElectronicThrottleController_MODE)
    {
      BaseEngineController_LS_128_DWork.s14_ElectronicThrottleController_MODE =
        TRUE;
    }

    /* RelationalOperator: '<S62>/RelOp' incorporates:
     *  Constant: '<S62>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read3'
     */
    rtb_LogicalOperator6_as = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S32>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read2'
     */
    rtb_LogicalOperator1_j = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S32>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_g, NULL);
    }

    /* RelationalOperator: '<S32>/Relational Operator' incorporates:
     *  Constant: '<S32>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S32>/motohawk_ain_read'
     */
    rtb_AboveHiTarget_j = (rtb_motohawk_ain_read_g < 150);

    /* Logic: '<S32>/Logical Operator3' */
    BaseEngineController_LS_128_B.s32_LogicalOperator3 =
      ((rtb_LogicalOperator6_as && rtb_LogicalOperator1_j && rtb_AboveHiTarget_j));

    /* S-Function Block: <S63>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s63_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_p3 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S63>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S63>/motohawk_delta_time'
     *  Sum: '<S63>/Sum'
     */
    if (rtb_AboveHiTarget_j) {
      BaseEngineController_LS_128_B.s63_Switch = rtb_motohawk_delta_time_p3 +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_LS_128_B.s63_Switch = 0.0;
    }

    /* End of Switch: '<S63>/Switch' */

    /* UnitDelay: '<S20>/Unit Delay' */
    rtb_DataTypeConversion1_g =
      BaseEngineController_LS_128_DWork.s20_UnitDelay_DSTATE;

    /* RelationalOperator: '<S20>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     */
    BaseEngineController_LS_128_B.s20_RelationalOperator5 =
      ((rtb_DataTypeConversion1_g < (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration5'
     */
    BaseEngineController_LS_128_B.s20_RelationalOperator2 =
      ((BaseEngineController_LS_128_B.s452_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_128_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_128_B.s452_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S20>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch
      (BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128)
    {
     case BaseEngineController_LS_128_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S27>:6' */
      if (!BaseEngineController_LS_128_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:19' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S27>:5' */
        BaseEngineController_LS_128_B.s27_DC_Override = 1;
        BaseEngineController_LS_128_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 0;
        BaseEngineController_LS_128_B.s27_TestTime =
          BaseEngineController_LS_128_B.s63_Switch -
          BaseEngineController_LS_128_DWork.s27_TimerOld;
      }
      break;

     case BaseEngineController_LS_128_IN_LowAdapt:
      /* During 'LowAdapt': '<S27>:2' */
      if (BaseEngineController_LS_128_B.s63_Switch > 5.0) {
        /* Transition: '<S27>:17' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S27>:6' */
        BaseEngineController_LS_128_B.s27_DC_Override = 1;
        BaseEngineController_LS_128_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 0;
        BaseEngineController_LS_128_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_128_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_128_B.s20_RelationalOperator5) {
        /* Transition: '<S27>:9' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S27>:3' */
        BaseEngineController_LS_128_B.s27_DC_Override = 0;
        BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 2;
        BaseEngineController_LS_128_B.s27_TestTime = 0.0;
      } else {
        if (!BaseEngineController_LS_128_B.s32_LogicalOperator3) {
          /* Transition: '<S27>:12' */
          BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128
            = BaseEngineController_LS_128_IN_PassThrough;

          /* Entry 'PassThrough': '<S27>:1' */
          BaseEngineController_LS_128_B.s27_DC_Override = 0;
          BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
          BaseEngineController_LS_128_B.s27_SetpointMode = 0;
          BaseEngineController_LS_128_B.s27_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_128_IN_PassThrough:
      /* During 'PassThrough': '<S27>:1' */
      if (BaseEngineController_LS_128_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:8' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S27>:2' */
        BaseEngineController_LS_128_B.s27_DC_Override = 0;
        BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 1;
        BaseEngineController_LS_128_B.s27_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_128_IN_SpringTest:
      /* During 'SpringTest': '<S27>:4' */
      if (BaseEngineController_LS_128_B.s63_Switch > 5.0) {
        /* Transition: '<S27>:16' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S27>:6' */
        BaseEngineController_LS_128_B.s27_DC_Override = 1;
        BaseEngineController_LS_128_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 0;
        BaseEngineController_LS_128_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_128_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_128_B.s20_RelationalOperator3) {
        /* Transition: '<S27>:11' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S27>:5' */
        BaseEngineController_LS_128_B.s27_DC_Override = 1;
        BaseEngineController_LS_128_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 0;
        BaseEngineController_LS_128_B.s27_TestTime =
          BaseEngineController_LS_128_B.s63_Switch -
          BaseEngineController_LS_128_DWork.s27_TimerOld;
      } else {
        if (!BaseEngineController_LS_128_B.s32_LogicalOperator3) {
          /* Transition: '<S27>:15' */
          BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128
            = BaseEngineController_LS_128_IN_PassThrough;

          /* Entry 'PassThrough': '<S27>:1' */
          BaseEngineController_LS_128_B.s27_DC_Override = 0;
          BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
          BaseEngineController_LS_128_B.s27_SetpointMode = 0;
          BaseEngineController_LS_128_B.s27_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_128_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S27>:5' */
      if (!BaseEngineController_LS_128_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:14' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_PassThrough;

        /* Entry 'PassThrough': '<S27>:1' */
        BaseEngineController_LS_128_B.s27_DC_Override = 0;
        BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 0;
        BaseEngineController_LS_128_B.s27_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_128_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S27>:3' */
      if (!BaseEngineController_LS_128_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:13' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_PassThrough;

        /* Entry 'PassThrough': '<S27>:1' */
        BaseEngineController_LS_128_B.s27_DC_Override = 0;
        BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 0;
        BaseEngineController_LS_128_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_128_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_128_B.s20_RelationalOperator2) {
        /* Transition: '<S27>:10' */
        BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
          BaseEngineController_LS_128_IN_SpringTest;

        /* Entry 'SpringTest': '<S27>:4' */
        BaseEngineController_LS_128_B.s27_DC_Override = 1;
        BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_128_B.s27_SetpointMode = 0;
        BaseEngineController_LS_128_B.s27_TestTime = 0.0;
        BaseEngineController_LS_128_DWork.s27_TimerOld =
          BaseEngineController_LS_128_B.s63_Switch;
      } else {
        if (BaseEngineController_LS_128_B.s63_Switch > 5.0) {
          /* Transition: '<S27>:18' */
          BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128
            = BaseEngineController_LS_128_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S27>:6' */
          BaseEngineController_LS_128_B.s27_DC_Override = 1;
          BaseEngineController_LS_128_B.s27_TestComplete = TRUE;
          BaseEngineController_LS_128_B.s27_SetpointMode = 0;
          BaseEngineController_LS_128_B.s27_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S27>:7' */
      BaseEngineController_LS_128_DWork.s27_is_c9_BaseEngineController_LS_128 =
        BaseEngineController_LS_128_IN_PassThrough;

      /* Entry 'PassThrough': '<S27>:1' */
      BaseEngineController_LS_128_B.s27_DC_Override = 0;
      BaseEngineController_LS_128_B.s27_TestComplete = FALSE;
      BaseEngineController_LS_128_B.s27_SetpointMode = 0;
      BaseEngineController_LS_128_B.s27_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S20>/ETC Test  Manager' */

    /* RelationalOperator: '<S33>/RelOp' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s27_SetpointMode ==
      1);

    /* S-Function Block: <S56>/motohawk_delta_time */
    rtb_motohawk_delta_time_b3 = 0.005;

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S56>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S56>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S56>/motohawk_delta_time'
     *  Sum: '<S56>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_Switch_g4 = rtb_motohawk_delta_time_b3 + ETC_Tune_Timer_DataStore();
    } else {
      rtb_Switch_g4 = 0.0;
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
      rtb_DataTypeConversion_cy = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S57>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      rtb_DataTypeConversion_cy = BaseEngineController_LS_128_B.s92_Throttle;

      /* End of Outputs for SubSystem: '<S57>/OldValue' */
    }

    /* End of If: '<S57>/If' */

    /* S-Function Block: <S55>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s55_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_oh = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S31>/PassThrough' incorporates:
     *  EnablePort: '<S52>/Enable'
     */
    if (BaseEngineController_LS_128_B.s27_SetpointMode == 1) {
      if (!BaseEngineController_LS_128_DWork.s31_PassThrough_MODE) {
        BaseEngineController_LS_128_DWork.s31_PassThrough_MODE = TRUE;
      }

      BaseEngineController_LS_128_B.s52_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_LS_128_DWork.s31_PassThrough_MODE) {
        /* Disable for Outport: '<S52>/Out1' */
        BaseEngineController_LS_128_B.s52_In1 = 10.0;
        BaseEngineController_LS_128_DWork.s31_PassThrough_MODE = FALSE;
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
    rtb_DataTypeConversion1_g =
      BaseEngineController_LS_128_DWork.s55_UnitDelay_DSTATE;

    /* Product: '<S55>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     *  Sum: '<S55>/Sum3'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_Product5_iu = 1.0 / rtb_motohawk_delta_time_oh *
      (BaseEngineController_LS_128_B.s52_In1 -
       BaseEngineController_LS_128_DWork.s55_UnitDelay_DSTATE);

    /* MinMax: '<S60>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S31>/motohawk_calibration2'
     */
    rtb_Product5_iu = (rtb_Product5_iu >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_iu :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S55>/Sum2' incorporates:
     *  Constant: '<S31>/Constant7'
     *  MinMax: '<S60>/MinMax1'
     *  Product: '<S55>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     */
    rtb_Switch1_m = (rtb_Product5_iu <= 100.0 ? rtb_Product5_iu : 100.0) *
      rtb_motohawk_delta_time_oh + rtb_DataTypeConversion1_g;

    /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
     *  Constant: '<S31>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read1'
     *  Sum: '<S31>/Add1'
     */
    switch (BaseEngineController_LS_128_B.s27_SetpointMode) {
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
        BaseEngineController_LS_128_B.s31_MultiportSwitch = (sin
          (6.2831853071795862 * (ETCTuneFreq_DataStore()) * rtb_Switch_g4) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_LS_128_B.s31_MultiportSwitch =
          rtb_DataTypeConversion_cy;
      }

      /* End of Switch: '<S54>/Switch' */
      break;

     case 1:
      BaseEngineController_LS_128_B.s31_MultiportSwitch = rtb_Switch1_m;
      break;

     default:
      BaseEngineController_LS_128_B.s31_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

    /* Sum: '<S31>/Add' */
    rtb_Switch3_l = BaseEngineController_LS_128_B.s31_MultiportSwitch -
      BaseEngineController_LS_128_B.s452_Switch2;

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S25>/Constant1'
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S25>/motohawk_data_read1'
     *  Sum: '<S25>/Add1'
     */
    rtb_LogicalOperator_du = ((rtb_LogicalOperator6_as && (rtb_Switch3_l <= 5.0
      + ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S25>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_du;
    }

    /* Abs: '<S26>/Abs' */
    rtb_Product5_iu = fabs(rtb_Switch3_l);

    /* Logic: '<S26>/Logical Operator' incorporates:
     *  Constant: '<S34>/Constant'
     *  RelationalOperator: '<S26>/Relational Operator4'
     *  RelationalOperator: '<S34>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration1'
     */
    rtb_LogicalOperator_jw = (((rtb_Product5_iu > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_LS_128_B.s27_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S26>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(64, rtb_LogicalOperator_jw);
      UpdateFault(64);
    }

    /* Outputs for Triggered SubSystem: '<S20>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S30>/Trigger'
     */
    if (BaseEngineController_LS_128_B.s27_TestComplete &&
        (BaseEngineController_LS_128_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S30>/motohawk_data_write' incorporates:
       *  Constant: '<S30>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_LS_128_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
      = (uint8_T)(BaseEngineController_LS_128_B.s27_TestComplete ? (int32_T)
                  POS_ZCSIG : (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S20>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S20>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_LS_128_B.s27_TestTime;
    }

    /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_ja = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_LS_128_B.s27_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(62, rtb_RelationalOperator1_ja);
      UpdateFault(62);
    }

    /* RelationalOperator: '<S28>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S28>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S28>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_o, NULL);
    }

    /* Logic: '<S28>/Logical Operator' incorporates:
     *  Constant: '<S28>/Constant1'
     *  RelationalOperator: '<S28>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S28>/motohawk_ain_read'
     */
    BaseEngineController_LS_128_B.s28_LogicalOperator =
      ((rtb_LogicalOperator6_as && (rtb_motohawk_ain_read_o > 150)));

    /* Logic: '<S20>/Logical Operator' */
    rtb_LogicalOperator6_as = ((BaseEngineController_LS_128_B.s27_DC_Override !=
      0) || BaseEngineController_LS_128_B.s28_LogicalOperator);

    /* S-Function Block: <S29>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_LS_128_B.s31_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_128_B.s31_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_h = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S29>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_h, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_l;
    }

    /* UnitDelay: '<S46>/Unit Delay' */
    rtb_DataTypeConversion_cy =
      BaseEngineController_LS_128_DWork.s46_UnitDelay_DSTATE;

    /* UnitDelay: '<S42>/Unit Delay' */
    rtb_DataTypeConversion1_g =
      BaseEngineController_LS_128_DWork.s42_UnitDelay_DSTATE;

    /* S-Function Block: <S43>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s43_motohawk_delta_time_DWORK1, NULL);
      rtb_Product5_iu = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S43>/Product' incorporates:
     *  MinMax: '<S43>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S43>/motohawk_calibration'
     */
    rtb_Product5_iu /= (rtb_Product5_iu >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_iu :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S44>/Sum1' incorporates:
     *  Constant: '<S44>/Constant'
     *  Product: '<S44>/Product'
     *  Product: '<S44>/Product1'
     *  Sum: '<S44>/Sum'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    rtb_Switch2_m = (1.0 - rtb_Product5_iu) *
      BaseEngineController_LS_128_DWork.s44_UnitDelay_DSTATE +
      BaseEngineController_LS_128_B.s452_Switch2 * rtb_Product5_iu;

    /* S-Function Block: <S42>/motohawk_delta_time */
    rtb_motohawk_delta_time_p5 = 0.005;

    /* Product: '<S42>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
     *  Sum: '<S42>/Sum2'
     */
    BaseEngineController_LS_128_B.s42_Product = (rtb_Switch2_m -
      rtb_DataTypeConversion1_g) / rtb_motohawk_delta_time_p5;

    /* Sum: '<S35>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_Product5_iu = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S41>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_j = (rtb_Product5_iu >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S41>/LT1' */
    rtb_BelowLoTarget_e = (rtb_Product5_iu <=
      BaseEngineController_LS_128_B.s42_Product);

    /* CombinatorialLogic: '<S45>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_j != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S45>/Switch1' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_LogicalOperator1_j = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_LogicalOperator1_j =
        BaseEngineController_LS_128_DWork.s45_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Logic: '<S41>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_j) {
      BaseEngineController_LS_128_B.s41_Switch2 =
        (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_LS_128_B.s41_Switch2 =
        BaseEngineController_LS_128_B.s42_Product;
    }

    /* End of Switch: '<S41>/Switch2' */

    /* RelationalOperator: '<S35>/Relational Operator' */
    BaseEngineController_LS_128_B.s35_RelationalOperator =
      ((BaseEngineController_LS_128_B.s42_Product >
        BaseEngineController_LS_128_B.s41_Switch2));

    /* Switch: '<S38>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration8'
     */
    if (BaseEngineController_LS_128_B.s35_RelationalOperator) {
      rtb_Product5_iu = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_iu = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S38>/Switch' */

    /* Product: '<S38>/Product3' */
    rtb_Product1_es = rtb_Product5_iu *
      BaseEngineController_LS_128_B.s452_Switch2;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_dq = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_LS_128_B.s46_Product = (rtb_Product1_es -
      rtb_DataTypeConversion_cy) / rtb_motohawk_delta_time_dq;

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_DataTypeConversion1_g =
      BaseEngineController_LS_128_DWork.s47_UnitDelay_DSTATE;

    /* Sum: '<S38>/Sum2' */
    BaseEngineController_LS_128_B.s38_Sum2 =
      BaseEngineController_LS_128_B.s31_MultiportSwitch -
      BaseEngineController_LS_128_B.s452_Switch2;

    /* Product: '<S38>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration6'
     */
    rtb_Product5_iu = BaseEngineController_LS_128_B.s38_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S38>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_cy = (ETCDGain_DataStore()) * rtb_Product5_iu;

    /* S-Function Block: <S47>/motohawk_delta_time */
    rtb_motohawk_delta_time_ko = 0.005;

    /* Product: '<S47>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S47>/motohawk_delta_time'
     *  Sum: '<S47>/Sum2'
     */
    BaseEngineController_LS_128_B.s47_Product = (rtb_DataTypeConversion_cy -
      rtb_DataTypeConversion1_g) / rtb_motohawk_delta_time_ko;

    /* Sum: '<S29>/Add' */
    rtb_Add_d = BaseEngineController_LS_128_B.s31_MultiportSwitch -
      BaseEngineController_LS_128_B.s452_Switch2;

    /* S-Function Block: <S29>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_d;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_d,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_f = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S37>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_jp = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_jp;
    }

    /* Product: '<S38>/Product2' incorporates:
     *  Product: '<S37>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S37>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup'
     *  Sum: '<S29>/Add'
     */
    BaseEngineController_LS_128_B.s38_Product2 =
      rtb_motohawk_interpolation_1d_jp * (ETCPGain_DataStore()) *
      rtb_Product5_iu;

    /* Switch: '<S48>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S20>/motohawk_data_read'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_LS_128_B.s48_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_128_B.s48_Switch1 =
        BaseEngineController_LS_128_DWork.s48_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Sum: '<S29>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S29>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup2'
     *  Sum: '<S38>/Sum'
     */
    rtb_DataTypeConversion1_g = (((BaseEngineController_LS_128_B.s47_Product -
      BaseEngineController_LS_128_B.s46_Product) +
      BaseEngineController_LS_128_B.s38_Product2) +
      BaseEngineController_LS_128_B.s48_Switch1) +
      rtb_motohawk_interpolation_1d_l;

    /* MinMax: '<S51>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration'
     */
    rtb_Abs_i = (rtb_DataTypeConversion1_g >= (ETCLwrLim_DataStore())) ||
      rtIsNaN((ETCLwrLim_DataStore())) ? rtb_DataTypeConversion1_g :
      (ETCLwrLim_DataStore());

    /* MinMax: '<S51>/MinMax1' incorporates:
     *  MinMax: '<S51>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration1'
     */
    BaseEngineController_LS_128_B.s51_MinMax1 = (rtb_Abs_i <=
      (ETCUprLim_DataStore())) || rtIsNaN((ETCUprLim_DataStore())) ? rtb_Abs_i :
      (ETCUprLim_DataStore());

    /* S-Function Block: <S36>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_o;
    }

    /* Product: '<S38>/Product1' incorporates:
     *  Product: '<S36>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S36>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup'
     *  Sum: '<S29>/Add'
     */
    rtb_DataTypeConversion1_g = rtb_motohawk_interpolation_1d_o *
      (ETCIGain_DataStore()) * rtb_Product5_iu;

    /* S-Function Block: <S48>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s48_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_aj = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S48>/Sum' incorporates:
     *  Product: '<S48>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S48>/motohawk_delta_time'
     */
    rtb_DataTypeConversion1_g = rtb_DataTypeConversion1_g *
      rtb_motohawk_delta_time_aj + BaseEngineController_LS_128_B.s48_Switch1;

    /* MinMax: '<S50>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration3'
     */
    rtb_Abs_i = (rtb_DataTypeConversion1_g >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_DataTypeConversion1_g : (ETCIMin_DataStore());

    /* MinMax: '<S50>/MinMax1' incorporates:
     *  MinMax: '<S50>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration4'
     */
    u = (rtb_Abs_i <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore())) ?
      rtb_Abs_i : (ETCIMax_DataStore());

    /* Saturate: '<S56>/Saturation' */
    rtb_Saturation_jm = rtb_Switch_g4 >= 16000.0 ? 16000.0 : rtb_Switch_g4 <=
      0.0 ? 0.0 : rtb_Switch_g4;

    /* S-Function (motohawk_sfun_data_write): '<S56>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_jm;
    }

    /* Saturate: '<S63>/Saturation' */
    rtb_Saturation_c = BaseEngineController_LS_128_B.s63_Switch >= 16000.0 ?
      16000.0 : BaseEngineController_LS_128_B.s63_Switch <= 0.0 ? 0.0 :
      BaseEngineController_LS_128_B.s63_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S63>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_c;
    }

    /* S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read1' */
    rtb_motohawk_data_read1_k = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S32>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S61>/Trigger'
     */
    if (rtb_motohawk_data_read1_k &&
        (BaseEngineController_LS_128_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S61>/motohawk_data_write' incorporates:
       *  Constant: '<S61>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_LS_128_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
      = (uint8_T)(rtb_motohawk_data_read1_k ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S32>/Reset TasksComplete To False' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    if (rtb_LogicalOperator6_as) {
      BaseEngineController_LS_128_B.s20_Switch = 0.0;
    } else {
      BaseEngineController_LS_128_B.s20_Switch =
        BaseEngineController_LS_128_B.s51_MinMax1;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s20_UnitDelay_DSTATE = rtb_Switch3_l;

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s55_UnitDelay_DSTATE = rtb_Switch1_m;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s46_UnitDelay_DSTATE = rtb_Product1_es;

    /* Update for UnitDelay: '<S42>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s42_UnitDelay_DSTATE = rtb_Switch2_m;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s44_UnitDelay_DSTATE = rtb_Switch2_m;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s45_UnitDelay_DSTATE =
      rtb_LogicalOperator1_j;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s47_UnitDelay_DSTATE =
      rtb_DataTypeConversion_cy;

    /* Update for UnitDelay: '<S48>/Unit Delay' incorporates:
     *  MinMax: '<S50>/MinMax1'
     */
    BaseEngineController_LS_128_DWork.s48_UnitDelay_DSTATE = u;
  } else {
    if (BaseEngineController_LS_128_DWork.s14_ElectronicThrottleController_MODE)
    {
      /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
      /* Disable for Outport: '<S52>/Out1' */
      BaseEngineController_LS_128_B.s52_In1 = 10.0;
      BaseEngineController_LS_128_DWork.s31_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S31>/PassThrough' */
      BaseEngineController_LS_128_DWork.s14_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S19>/RelOp' */
  /* End of Outputs for SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Logic: '<S796>/Logical Operator1' incorporates:
   *  Logic: '<S793>/Logical Operator'
   *  Logic: '<S793>/Logical Operator9'
   *  RelationalOperator: '<S793>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_128_B.s520_Merge || (rtb_Switch1_jh &&
    (BaseEngineController_LS_128_B.s20_Switch < (ETC_CutPower_ETC_DataStore())))));

  /* Logic: '<S796>/Logical Operator' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* If: '<S892>/If' incorporates:
   *  Inport: '<S893>/In1'
   *  Inport: '<S894>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S892>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S892>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S892>/NewValue' incorporates:
     *  ActionPort: '<S893>/Action Port'
     */
    rtb_DataTypeConversion1_g = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S892>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S892>/OldValue' incorporates:
     *  ActionPort: '<S894>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S892>/OldValue' */
  }

  /* End of If: '<S892>/If' */

  /* Switch: '<S796>/Switch' incorporates:
   *  Constant: '<S796>/Constant2'
   *  Product: '<S796>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S796>/motohawk_interpolation_1d'
   *  Sum: '<S796>/Sum'
   */
  if (rtb_RelationalOperator5_k) {
    rtb_Switch_bx = 0.0;
  } else {
    /* S-Function Block: <S796>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
        (BaseEngineController_LS_128_B.s438_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_f;
    }

    rtb_Switch_bx = rtb_DataTypeConversion1_g * rtb_motohawk_interpolation_1d_f
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S796>/Switch' */

  /* Saturate: '<S796>/Saturation' */
  BaseEngineController_LS_128_B.s796_ETC = rtb_Switch_bx >= 100.0 ? 100.0 :
    rtb_Switch_bx <= -100.0 ? -100.0 : rtb_Switch_bx;

  /* Abs: '<S796>/Abs' */
  rtb_Switch_bx = fabs(BaseEngineController_LS_128_B.s796_ETC);

  /* RelationalOperator: '<S796>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_j = (rtb_Switch_bx > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S796>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_LS_128_B.s796_motohawk_pwm1);

  /* Abs: '<S796>/Abs1' */
  rtb_DataTypeConversion2_bp = (int16_T)
    (BaseEngineController_LS_128_B.s796_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_128_B.s796_motohawk_pwm1 :
     BaseEngineController_LS_128_B.s796_motohawk_pwm1);

  /* RelationalOperator: '<S796>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration1'
   */
  BaseEngineController_LS_128_B.s796_RelationalOperator4 = (((real_T)
    rtb_DataTypeConversion2_bp < (ETC_I_MIN_DataStore())));

  /* Switch: '<S891>/Switch' incorporates:
   *  Constant: '<S891>/Constant'
   *  Logic: '<S796>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S891>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S891>/motohawk_delta_time'
   *  Sum: '<S891>/Sum'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j &&
      BaseEngineController_LS_128_B.s796_RelationalOperator4) {
    rtb_Switch_bx = rtb_motohawk_delta_time_hr + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Switch_bx = 0.0;
  }

  /* End of Switch: '<S891>/Switch' */

  /* RelationalOperator: '<S796>/Relational Operator5' incorporates:
   *  Constant: '<S796>/Constant'
   */
  rtb_RelationalOperator5_g = ((rtb_Switch_bx > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S796>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator5_g);
    UpdateFault(63);
  }

  /* Gain: '<S796>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_eu = 40.95 * BaseEngineController_LS_128_B.s796_ETC;

  /* DataTypeConversion: '<S796>/Data Type Conversion3' incorporates:
   *  Gain: '<S796>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration4'
   */
  u = 100.0 * (ETC_Frequency_DataStore());
  if (u < 4.294967296E+9) {
    if (u >= 0.0) {
      rtb_DataTypeConversion3_i = (uint32_T)u;
    } else {
      rtb_DataTypeConversion3_i = 0U;
    }
  } else {
    rtb_DataTypeConversion3_i = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion3' */

  /* DataTypeConversion: '<S796>/Data Type Conversion4' */
  if (rtb_Abs_eu < 32768.0) {
    if (rtb_Abs_eu >= -32768.0) {
      rtb_DataTypeConversion4_i = (int16_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion4_i = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_i = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion4' */

  /* Saturate: '<S891>/Saturation' */
  rtb_Saturation_d = rtb_Switch_bx >= 16000.0 ? 16000.0 : rtb_Switch_bx <= 0.0 ?
    0.0 : rtb_Switch_bx;

  /* S-Function (motohawk_sfun_data_write): '<S891>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_d;
  }

  /* If: '<S898>/If' incorporates:
   *  Inport: '<S899>/In1'
   *  Inport: '<S900>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S898>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S898>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S898>/NewValue' incorporates:
     *  ActionPort: '<S899>/Action Port'
     */
    rtb_DataTypeConversion1_g = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S898>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S898>/OldValue' incorporates:
     *  ActionPort: '<S900>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s92_IACP;

    /* End of Outputs for SubSystem: '<S898>/OldValue' */
  }

  /* End of If: '<S898>/If' */

  /* Product: '<S895>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S895>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_g *= (IAC_PGain_DataStore());

  /* Sum: '<S895>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S895>/motohawk_calibration1'
   */
  rtb_Abs_eu = rtb_DataTypeConversion1_g + (IAC_POffset_DataStore());

  /* MinMax: '<S897>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S895>/motohawk_calibration2'
   */
  rtb_Abs_eu = (rtb_Abs_eu >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_eu : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S897>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S895>/motohawk_calibration3'
   */
  BaseEngineController_LS_128_B.s897_MinMax1 = (rtb_Abs_eu <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_eu : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S895>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_eu = 40.95 * BaseEngineController_LS_128_B.s897_MinMax1;

  /* DataTypeConversion: '<S895>/Data Type Conversion3' */
  if (rtb_Abs_eu < 32768.0) {
    if (rtb_Abs_eu >= -32768.0) {
      rtb_DataTypeConversion3_m = (int16_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion3_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S895>/Data Type Conversion3' */
  /* Gain: '<S895>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S895>/motohawk_calibration4'
   */
  rtb_Abs_eu = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S895>/Data Type Conversion2' */
  if (rtb_Abs_eu < 4.294967296E+9) {
    if (rtb_Abs_eu >= 0.0) {
      rtb_DataTypeConversion2_j = (uint32_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion2_j = 0U;
    }
  } else {
    rtb_DataTypeConversion2_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S895>/Data Type Conversion2' */

  /* If: '<S902>/If' incorporates:
   *  Inport: '<S903>/In1'
   *  Inport: '<S904>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S902>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S902>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S902>/NewValue' incorporates:
     *  ActionPort: '<S903>/Action Port'
     */
    rtb_DataTypeConversion1_g = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S902>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S902>/OldValue' incorporates:
     *  ActionPort: '<S904>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s92_IACS;

    /* End of Outputs for SubSystem: '<S902>/OldValue' */
  }

  /* End of If: '<S902>/If' */

  /* Product: '<S896>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S896>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_g *= (IAC_SGain_DataStore());

  /* Sum: '<S896>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S896>/motohawk_calibration1'
   */
  rtb_Abs_eu = rtb_DataTypeConversion1_g + (IAC_SOffset_DataStore());

  /* MinMax: '<S901>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S896>/motohawk_calibration2'
   */
  rtb_Abs_eu = (rtb_Abs_eu >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_eu : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S901>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S896>/motohawk_calibration3'
   */
  BaseEngineController_LS_128_B.s901_MinMax1 = (rtb_Abs_eu <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_eu : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S896>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_eu = 40.95 * BaseEngineController_LS_128_B.s901_MinMax1;

  /* DataTypeConversion: '<S896>/Data Type Conversion3' */
  if (rtb_Abs_eu < 32768.0) {
    if (rtb_Abs_eu >= -32768.0) {
      rtb_DataTypeConversion3_e = (int16_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion3_e = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_e = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S896>/Data Type Conversion3' */
  /* Gain: '<S896>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S896>/motohawk_calibration4'
   */
  rtb_Abs_eu = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S896>/Data Type Conversion2' */
  if (rtb_Abs_eu < 4.294967296E+9) {
    if (rtb_Abs_eu >= 0.0) {
      rtb_DataTypeConversion2_g = (uint32_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion2_g = 0U;
    }
  } else {
    rtb_DataTypeConversion2_g = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S896>/Data Type Conversion2' */
  /* If: '<S909>/If' incorporates:
   *  Inport: '<S919>/In1'
   *  Inport: '<S920>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S909>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S909>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S909>/NewValue' incorporates:
     *  ActionPort: '<S919>/Action Port'
     */
    rtb_DataTypeConversion1_g = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S909>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S909>/OldValue' incorporates:
     *  ActionPort: '<S920>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s92_SOI;

    /* End of Outputs for SubSystem: '<S909>/OldValue' */
  }

  /* End of If: '<S909>/If' */

  /* Gain: '<S798>/Gain2' */
  rtb_Abs_eu = 16.0 * rtb_DataTypeConversion1_g;

  /* DataTypeConversion: '<S798>/Data Type Conversion2' */
  if (rtb_Abs_eu < 32768.0) {
    if (rtb_Abs_eu >= -32768.0) {
      rtb_DataTypeConversion2_bp = (int16_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion2_bp = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_bp = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S798>/Data Type Conversion2' */
  /* Product: '<S21>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fv[i] = BaseEngineController_LS_128_B.s92_FPC[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S21>/Product2' */
  /* Sum: '<S21>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fv[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S21>/Sum' */

  /* Fcn: '<S64>/const ref to atm' */
  BaseEngineController_LS_128_B.s64_constreftoatm =
    (BaseEngineController_LS_128_B.s592_Merge +
     BaseEngineController_LS_128_B.s407_Sum) -
    BaseEngineController_LS_128_B.s600_Merge;

  /* S-Function Block: <S64>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_LS_128_B.s64_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s64_constreftoatm,
       (InjDeltaPress09IdxArr_DataStore()), 9, (InjDeltaPress09Idx_DataStore()));
    rtb_motohawk_prelookup1_gl = (InjDeltaPress09Idx_DataStore());
  }

  /* S-Function Block: <S21>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d3_n = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_gl, (real_T *) ((InjdPCompTbl_DataStore())), 9);
    (InjdPComp_DataStore()) = rtb_motohawk_interpolation_1d3_n;
  }

  /* Product: '<S21>/Product3' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d3'
   *  S-Function (motohawk_sfun_prelookup): '<S64>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fv[i] *= rtb_motohawk_interpolation_1d3_n;
  }

  /* End of Product: '<S21>/Product3' */

  /* Saturate: '<S21>/Saturation' */
  u = BaseEngineController_LS_128_B.s557_Sum1 >= 0.01 ?
    BaseEngineController_LS_128_B.s557_Sum1 : 0.01;

  /* S-Function Block: <S21>/motohawk_interpolation_1d4 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_gl, (real_T *) ((InjTurnOffTbl_DataStore())), 9);
    (InjTurnOff_DataStore()) = rtb_motohawk_interpolation_1d4_k;
  }

  /* S-Function Block: <S21>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_md = TableInterpolation1D_real_T
      (BaseEngineController_LS_128_B.s438_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_md;
  }

  /* Sum: '<S21>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S64>/motohawk_prelookup1'
   */
  BaseEngineController_LS_128_B.s21_Sum2 = rtb_motohawk_interpolation_1d1_md -
    rtb_motohawk_interpolation_1d4_k;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<S21>/Constant'
   *  Product: '<S21>/Divide'
   *  Saturate: '<S21>/Saturation'
   */
  BaseEngineController_LS_128_B.s21_Sum1 = 120000.0 / u -
    BaseEngineController_LS_128_B.s21_Sum2;

  /* MinMax: '<S21>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_128_B.s21_MinMax[i] = (rtb_Product1_fv[i] <=
      BaseEngineController_LS_128_B.s21_Sum1) || rtIsNaN
      (BaseEngineController_LS_128_B.s21_Sum1) ? rtb_Product1_fv[i] :
      BaseEngineController_LS_128_B.s21_Sum1;
  }

  /* End of MinMax: '<S21>/MinMax' */
  /* If: '<S910>/If' incorporates:
   *  Inport: '<S921>/In1'
   *  Inport: '<S922>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S910>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S910>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S910>/NewValue' incorporates:
     *  ActionPort: '<S921>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fv[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S910>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S910>/OldValue' incorporates:
     *  ActionPort: '<S922>/Action Port'
     */
    memcpy((void *)&rtb_Product1_fv[0], (void *)
           (&BaseEngineController_LS_128_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S910>/OldValue' */
  }

  /* End of If: '<S910>/If' */

  /* DataTypeConversion: '<S798>/Data Type Conversion3' incorporates:
   *  Gain: '<S798>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    u = 1000.0 * rtb_Product1_fv[i];
    if (u < 4.294967296E+9) {
      if (u >= 0.0) {
        rtb_Switch_oq = (uint32_T)u;
      } else {
        rtb_Switch_oq = 0U;
      }
    } else {
      rtb_Switch_oq = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_oq;
  }

  /* End of DataTypeConversion: '<S798>/Data Type Conversion3' */
  /* Gain: '<S798>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration9'
   */
  rtb_Abs_eu = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S798>/Data Type Conversion6' */
  if (rtb_Abs_eu < 4.294967296E+9) {
    if (rtb_Abs_eu >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S798>/Data Type Conversion6' */
  /* If: '<S907>/If' incorporates:
   *  Inport: '<S915>/In1'
   *  Inport: '<S916>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S907>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S907>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S907>/NewValue' incorporates:
     *  ActionPort: '<S915>/Action Port'
     */
    rtb_DataTypeConversion1_g = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S907>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S907>/OldValue' incorporates:
     *  ActionPort: '<S916>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S907>/OldValue' */
  }

  /* End of If: '<S907>/If' */

  /* Gain: '<S798>/Gain1' */
  rtb_Abs_eu = 1000.0 * rtb_DataTypeConversion1_g;

  /* DataTypeConversion: '<S798>/Data Type Conversion1' */
  if (rtb_Abs_eu < 4.294967296E+9) {
    if (rtb_Abs_eu >= 0.0) {
      rtb_DataTypeConversion1_j = (uint32_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion1_j = 0U;
    }
  } else {
    rtb_DataTypeConversion1_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S798>/Data Type Conversion1' */
  /* If: '<S908>/If' incorporates:
   *  Inport: '<S917>/In1'
   *  Inport: '<S918>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S908>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S908>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S908>/NewValue' incorporates:
     *  ActionPort: '<S917>/Action Port'
     */
    rtb_DataTypeConversion1_g = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S908>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S908>/OldValue' incorporates:
     *  ActionPort: '<S918>/Action Port'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s92_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S908>/OldValue' */
  }

  /* End of If: '<S908>/If' */

  /* Gain: '<S798>/Gain6' */
  rtb_Abs_eu = 16.0 * rtb_DataTypeConversion1_g;

  /* DataTypeConversion: '<S798>/Data Type Conversion7' */
  if (rtb_Abs_eu < 32768.0) {
    if (rtb_Abs_eu >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S798>/Data Type Conversion7' */
  /* Gain: '<S798>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration6'
   */
  rtb_Abs_eu = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S798>/Data Type Conversion8' */
  if (rtb_Abs_eu < 4.294967296E+9) {
    if (rtb_Abs_eu >= 0.0) {
      rtb_Sum_ig = (uint32_T)rtb_Abs_eu;
    } else {
      rtb_Sum_ig = 0U;
    }
  } else {
    rtb_Sum_ig = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S798>/Data Type Conversion8' */
  /* Gain: '<S798>/Gain8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration1'
   */
  rtb_Abs_eu = 1000.0 * (InjectiorMinDuration_DataStore());

  /* DataTypeConversion: '<S798>/Data Type Conversion9' */
  if (rtb_Abs_eu < 4.294967296E+9) {
    if (rtb_Abs_eu >= 0.0) {
      rtb_UnitDelay_ev = (uint32_T)rtb_Abs_eu;
    } else {
      rtb_UnitDelay_ev = 0U;
    }
  } else {
    rtb_UnitDelay_ev = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S798>/Data Type Conversion9' */
  /* Outputs for Atomic SubSystem: '<S798>/Injector Enable Manager' */

  /* S-Function Block: <S914>/motohawk_delta_time */
  rtb_motohawk_delta_time_m = 0.005;

  /* Switch: '<S914>/Switch' incorporates:
   *  Constant: '<S914>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S914>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S914>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S906>/motohawk_fault_action'
   *  Sum: '<S914>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_DataTypeConversion1_g = rtb_motohawk_delta_time_m +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_DataTypeConversion1_g = 0.0;
  }

  /* End of Switch: '<S914>/Switch' */
  /* RelationalOperator: '<S906>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration1'
   */
  rtb_LogicalOperator_go = (rtb_DataTypeConversion1_g >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S906>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_go;
  }

  /* RelationalOperator: '<S906>/Relational Operator1' incorporates:
   *  Gain: '<S906>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_f4 = ((rtb_DataTypeConversion1_g > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S906>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_f4;
  }

  /* RelationalOperator: '<S906>/Relational Operator2' incorporates:
   *  Constant: '<S906>/Constant'
   */
  rtb_RelationalOperator2_nx = ((rtb_DataTypeConversion1_g > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S906>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_nx;
  }

  /* Logic: '<S906>/Logical Operator' */
  rtb_LogicalOperator_go = !rtb_LogicalOperator_go;

  /* Logic: '<S906>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S906>/motohawk_data_read'
   */
  rtb_LogicalOperator6_as = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S906>/motohawk_data_read1' */
  rtb_motohawk_data_read1_kz = ECUP_Enabled_DataStore();

  /* Logic: '<S906>/Logical Operator4' incorporates:
   *  Constant: '<S913>/Constant'
   *  RelationalOperator: '<S913>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S906>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_j = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S906>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S906>/motohawk_calibration8'
   */
  rtb_LogicalOperator_l2[0] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator_l2[1] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator_l2[2] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator_l2[3] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator_l2[4] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator_l2[5] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator_l2[6] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator_l2[7] = (rtb_LogicalOperator_go && rtb_LogicalOperator6_as
    && rtb_motohawk_data_read1_kz && rtb_LogicalOperator1_j &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S914>/Saturation' */
  rtb_Saturation_a = rtb_DataTypeConversion1_g >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion1_g <= 0.0 ? 0.0 : rtb_DataTypeConversion1_g;

  /* S-Function (motohawk_sfun_data_write): '<S914>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_a;
  }

  /* End of Outputs for SubSystem: '<S798>/Injector Enable Manager' */
  /* Logic: '<S798>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S798>/motohawk_data_read'
   */
  rtb_LogicalOperator6_as = !ESTOP_DataStore();

  /* If: '<S912>/If' incorporates:
   *  Inport: '<S925>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S912>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S912>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S912>/NewValue' incorporates:
     *  ActionPort: '<S925>/Action Port'
     */
    rtb_LogicalOperator6_as = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S912>/NewValue' */
  } else {
  }

  /* End of If: '<S912>/If' */

  /* Logic: '<S798>/Logical Operator' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_l2[i] = (rtb_LogicalOperator6_as && rtb_AND1[i] &&
      rtb_LogicalOperator_l2[i]);
  }

  /* End of Logic: '<S798>/Logical Operator' */
  /* If: '<S911>/If' incorporates:
   *  Inport: '<S923>/In1'
   *  Inport: '<S924>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S911>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S911>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S911>/NewValue' incorporates:
     *  ActionPort: '<S923>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s911_Merge[i] = (InjEnable_new_DataStore())
        [i];
    }

    /* End of Outputs for SubSystem: '<S911>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S911>/OldValue' incorporates:
     *  ActionPort: '<S924>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s911_Merge[i] = rtb_LogicalOperator_l2[i];
    }

    /* End of Outputs for SubSystem: '<S911>/OldValue' */
  }

  /* End of If: '<S911>/If' */

  /* S-Function Block: <S798>/Injector Sequence */
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
    DynamicObj.uMinPulseDurationInMicroSecs = rtb_UnitDelay_ev;
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
            rtb_DataTypeConversion2_bp;
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
      enable = ((BaseEngineController_LS_128_B.s911_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_LS_128_ConstB.s798_DataTypeConversion5) !=
            (BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_128_ConstB.s798_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index]) +
          (rtb_DataTypeConversion1_j);

        /* Primary Pulse */
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_bp;
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
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_bp + 6400;
          DynamicObj.TimingObj.u4Duration = 0;
          while (DynamicObj.TimingObj.s2StartAngle >= 720*16)
            DynamicObj.TimingObj.s2StartAngle -= 720*16;
          if (TransientInjectorSeqInfo_41[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_41[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_41[index].primaryDuration;
              if (makeup_duration >= (rtb_Sum_ig)) {
                makeup_duration += (rtb_DataTypeConversion1_j);
                if (rtb_DataTypeConversion6 > 0) {
                  if (makeup_duration > (rtb_DataTypeConversion6))
                    makeup_duration = rtb_DataTypeConversion6;
                }

                makeup_angle = (rtb_DataTypeConversion2_bp + 6400) + (int16_T)
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
              ((&BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1
                [0])[index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_LS_128_ConstB.s798_DataTypeConversion5) !=
              (BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK2))
          {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_LS_128_ConstB.s798_DataTypeConversion5);
          }

          elec_duration = ((rtb_InjectorSequence_o2)[index]) / 2 +
            (rtb_DataTypeConversion1_j);
          DynamicObj.u1AffectedPulse = 0;
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_bp;
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
            ((&BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_LS_128_ConstB.s798_DataTypeConversion5) !=
            (BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_128_ConstB.s798_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index])/2 +
          (rtb_DataTypeConversion1_j);
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_bp;
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

    BaseEngineController_LS_128_DWork.s798_InjectorSequence_DWORK2 =
      BaseEngineController_LS_128_ConstB.s798_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_LS_128_B.s798_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_41[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_41[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S905>/==' incorporates:
   *  Constant: '<S905>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_l2[i] =
      (BaseEngineController_LS_128_B.s798_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S905>/==' */
  /* S-Function Block: <S905>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S905>/<1' incorporates:
   *  Constant: '<S905>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S905>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_as = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S905>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator_l2[i] && rtb_LogicalOperator6_as &&
                   BaseEngineController_LS_128_B.s911_Merge[i]);
  }

  /* End of Logic: '<S905>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_AND1[0]);
    UpdateFault(86);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_AND1[1]);
    UpdateFault(87);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_AND1[2]);
    UpdateFault(88);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_AND1[3]);
    UpdateFault(89);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_AND1[4]);
    UpdateFault(90);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_AND1[5]);
    UpdateFault(91);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_AND1[6]);
    UpdateFault(92);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S905>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(93, rtb_AND1[7]);
    UpdateFault(93);
  }

  /* Logic: '<S799>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S799>/motohawk_fault_action'
   */
  rtb_RelationalOperator5_k = !GetFaultActionStatus(8);

  /* Product: '<S799>/Product' */
  rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s92_WASTEGATE *
    (real_T)rtb_RelationalOperator5_k;

  /* If: '<S929>/If' incorporates:
   *  Inport: '<S930>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S929>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S929>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S929>/NewValue' incorporates:
     *  ActionPort: '<S930>/Action Port'
     */
    rtb_DataTypeConversion1_g = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S929>/NewValue' */
  } else {
  }

  /* End of If: '<S929>/If' */

  /* Product: '<S927>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S927>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_g *= (WASTEGATEGain_DataStore());

  /* Sum: '<S927>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S927>/motohawk_calibration1'
   */
  rtb_Abs_eu = rtb_DataTypeConversion1_g + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S928>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S927>/motohawk_calibration2'
   */
  rtb_Abs_eu = (rtb_Abs_eu >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_eu :
    (WASTEGATEMinLimit_DataStore());

  /* MinMax: '<S928>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S927>/motohawk_calibration3'
   */
  BaseEngineController_LS_128_B.s928_MinMax1 = (rtb_Abs_eu <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_eu : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S927>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_eu = 40.95 * BaseEngineController_LS_128_B.s928_MinMax1;

  /* DataTypeConversion: '<S927>/Data Type Conversion3' */
  if (rtb_Abs_eu < 32768.0) {
    if (rtb_Abs_eu >= -32768.0) {
      rtb_DataTypeConversion3_n = (int16_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion3_n = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_n = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S927>/Data Type Conversion3' */
  /* Gain: '<S927>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S927>/motohawk_calibration4'
   */
  rtb_Abs_eu = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S927>/Data Type Conversion2' */
  if (rtb_Abs_eu < 4.294967296E+9) {
    if (rtb_Abs_eu >= 0.0) {
      rtb_DataTypeConversion2_pa = (uint32_T)rtb_Abs_eu;
    } else {
      rtb_DataTypeConversion2_pa = 0U;
    }
  } else {
    rtb_DataTypeConversion2_pa = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S927>/Data Type Conversion2' */

  /* Gain: '<S21>/Gain' incorporates:
   *  Product: '<S21>/Product'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_128_B.s21_Gain[i] =
      BaseEngineController_LS_128_B.s21_MinMax[i] /
      BaseEngineController_LS_128_B.s21_Sum1 * 100.0;
  }

  /* End of Gain: '<S21>/Gain' */

  /* Sum: '<S22>/Sum1' incorporates:
   *  DataTypeConversion: '<S22>/Data Type Conversion2'
   *  DataTypeConversion: '<S22>/Data Type Conversion3'
   *  DataTypeConversion: '<S22>/Data Type Conversion4'
   *  Fcn: '<S22>/Fcn1'
   *  Fcn: '<S22>/Fcn2'
   */
  rtb_Abs_eu = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
                rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_o;

  /* DataTypeConversion: '<S22>/Data Type Conversion5' */
  if (rtb_Abs_eu < 256.0) {
    if (rtb_Abs_eu >= 0.0) {
      BaseEngineController_LS_128_B.s22_DataTypeConversion5 = (uint8_T)
        rtb_Abs_eu;
    } else {
      BaseEngineController_LS_128_B.s22_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_LS_128_B.s22_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S22>/Data Type Conversion5' */

  /* UnitDelay: '<S479>/Unit Delay' */
  rtb_UnitDelay_ev = BaseEngineController_LS_128_DWork.s479_UnitDelay_DSTATE;

  /* Sum: '<S479>/Sum' incorporates:
   *  Constant: '<S479>/Constant1'
   */
  rtb_Switch_oq = 1U + rtb_UnitDelay_ev;
  if (rtb_Switch_oq < 1U) {
    rtb_Switch_oq = MAX_uint32_T;
  }

  rtb_Sum_ig = rtb_Switch_oq;

  /* End of Sum: '<S479>/Sum' */

  /* RelationalOperator: '<S479>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_jf = (rtb_Sum_ig >= 5U);

  /* S-Function Block: <S477>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_128_B.s444_CollectAverage.s408_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s444_CollectAverage.s408_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_pa = (IAT_KeyUp09Idx_DataStore());
  }

  /* S-Function Block: <S402>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_APP1;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_APP1,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_pa = (App05Idx_DataStore());
  }

  /* S-Function Block: <S437>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_128_B.s557_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_128_B.s557_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_pa = (RPM05Idx_DataStore());
  }

  /* Sum: '<S448>/Sum3' incorporates:
   *  Constant: '<S448>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_128_B.s448_Sum3 =
    (BaseEngineController_LS_128_B.s592_Merge + 100.0) -
    BaseEngineController_LS_128_B.s608_Merge;

  /* DataTypeConversion: '<S487>/Data Type Conversion8' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s487_ReadCANMessage2_o5) || rtIsInf
      (BaseEngineController_LS_128_B.s487_ReadCANMessage2_o5)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s487_ReadCANMessage2_o5), 256.0);
  }

  BaseEngineController_LS_128_B.s487_GPS_SatelliteCount = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S487>/Data Type Conversion8' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S487>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_9014p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9014p0001,
      &messageObj);
    if ((BaseEngineController_LS_128_B.s487_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_128_B.s487_ReadCANMessage1_o1)
      BaseEngineController_LS_128_B.s487_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_128_B.s487_GPS_Latitude = (real_T) tmp0;
      BaseEngineController_LS_128_B.s487_GPS_Longitude = (real_T) tmp1;
      BaseEngineController_LS_128_B.s487_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S487>/Data Type Conversion5' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s487_ReadCANMessage_o8) || rtIsInf
      (BaseEngineController_LS_128_B.s487_ReadCANMessage_o8)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s487_ReadCANMessage_o8), 256.0);
  }

  BaseEngineController_LS_128_B.s487_GPS_SecondsUTC = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S487>/Data Type Conversion5' */

  /* DataTypeConversion: '<S487>/Data Type Conversion4' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s487_ReadCANMessage_o7) || rtIsInf
      (BaseEngineController_LS_128_B.s487_ReadCANMessage_o7)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s487_ReadCANMessage_o7), 256.0);
  }

  BaseEngineController_LS_128_B.s487_GPS_MinutesUTC = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S487>/Data Type Conversion4' */

  /* DataTypeConversion: '<S487>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s487_ReadCANMessage_o6) || rtIsInf
      (BaseEngineController_LS_128_B.s487_ReadCANMessage_o6)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s487_ReadCANMessage_o6), 256.0);
  }

  BaseEngineController_LS_128_B.s487_GPS_HoursUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S487>/Data Type Conversion3' */

  /* DataTypeConversion: '<S487>/Data Type Conversion2' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s487_ReadCANMessage_o5) || rtIsInf
      (BaseEngineController_LS_128_B.s487_ReadCANMessage_o5)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s487_ReadCANMessage_o5), 256.0);
  }

  BaseEngineController_LS_128_B.s487_GPS_DayUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S487>/Data Type Conversion2' */

  /* DataTypeConversion: '<S487>/Data Type Conversion1' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s487_ReadCANMessage_o4) || rtIsInf
      (BaseEngineController_LS_128_B.s487_ReadCANMessage_o4)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s487_ReadCANMessage_o4), 256.0);
  }

  BaseEngineController_LS_128_B.s487_GPS_MonthUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S487>/Data Type Conversion1' */

  /* DataTypeConversion: '<S487>/Data Type Conversion' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s487_ReadCANMessage_o3) || rtIsInf
      (BaseEngineController_LS_128_B.s487_ReadCANMessage_o3)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s487_ReadCANMessage_o3), 256.0);
  }

  BaseEngineController_LS_128_B.s487_GPS_YearUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S487>/Data Type Conversion' */

  /* DataTypeConversion: '<S488>/Data Type Conversion5' */
  BaseEngineController_LS_128_B.s488_SensorFaultState =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage1_o10 != 0.0));

  /* DataTypeConversion: '<S488>/Data Type Conversion9' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s488_ReadCANMessage1_o9) || rtIsInf
      (BaseEngineController_LS_128_B.s488_ReadCANMessage1_o9)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s488_ReadCANMessage1_o9), 256.0);
  }

  BaseEngineController_LS_128_B.s488_SensorStatus = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S488>/Data Type Conversion9' */

  /* DataTypeConversion: '<S488>/Data Type Conversion7' */
  BaseEngineController_LS_128_B.s488_UsingFreeAreCalState =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage1_o7 != 0.0));

  /* DataTypeConversion: '<S488>/Data Type Conversion8' */
  BaseEngineController_LS_128_B.s488_SensorDetectedStatus =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage1_o6 != 0.0));

  /* DataTypeConversion: '<S488>/Data Type Conversion4' */
  BaseEngineController_LS_128_B.s488_SensorFaultState_p =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage_o10 != 0.0));

  /* DataTypeConversion: '<S488>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_128_B.s488_ReadCANMessage_o9) || rtIsInf
      (BaseEngineController_LS_128_B.s488_ReadCANMessage_o9)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_128_B.s488_ReadCANMessage_o9), 256.0);
  }

  BaseEngineController_LS_128_B.s488_SensorStatus_n = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S488>/Data Type Conversion3' */

  /* DataTypeConversion: '<S488>/Data Type Conversion1' */
  BaseEngineController_LS_128_B.s488_UsingFreeAreCalState_f =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage_o7 != 0.0));

  /* DataTypeConversion: '<S488>/Data Type Conversion' */
  BaseEngineController_LS_128_B.s488_SensorDetectedStatus_a =
    ((BaseEngineController_LS_128_B.s488_ReadCANMessage_o6 != 0.0));

  /* S-Function Block: <S622>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s622_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_eu = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S622>/Product' incorporates:
   *  MinMax: '<S622>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S622>/motohawk_calibration'
   */
  rtb_Abs_eu /= (rtb_Abs_eu >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_eu :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S565>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_k = (IsFaultActive(138) || IsFaultActive(139));

  /* Logic: '<S565>/Logical Operator6' */
  rtb_LogicalOperator6_as = !rtb_RelationalOperator5_k;

  /* Logic: '<S565>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(138) || IsFaultSuspected(139));

  /* S-Function Block: <S484>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_128_B.s484_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S565>/Data Type Conversion' */
  rtb_Abs_i = (real_T)BaseEngineController_LS_128_B.s484_motohawk_ain3;

  /* Product: '<S565>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_g = rtb_Abs_i * (SensVoltGain_DataStore());

  /* Sum: '<S565>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration5'
   */
  BaseEngineController_LS_128_B.s565_Sum1 = rtb_DataTypeConversion1_g +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S565>/Unit Delay1' */
  rtb_UnitDelay1_o = BaseEngineController_LS_128_DWork.s565_UnitDelay1_DSTATE;

  /* If: '<S565>/If' incorporates:
   *  Logic: '<S565>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_as && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S565>/If Action Subsystem' incorporates:
     *  ActionPort: '<S623>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay1_o, &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S565>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_k) {
    /* Outputs for IfAction SubSystem: '<S565>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S624>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S565>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S565>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S625>/Action Port'
     */
    BaseEngineController_LS_128_IfActionSubsystem
      (BaseEngineController_LS_128_B.s565_Sum1, &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S565>/If Action Subsystem2' */
  }

  /* End of If: '<S565>/If' */

  /* Sum: '<S627>/Sum1' incorporates:
   *  Constant: '<S627>/Constant'
   *  Product: '<S627>/Product'
   *  Product: '<S627>/Product1'
   *  Sum: '<S627>/Sum'
   *  UnitDelay: '<S627>/Unit Delay'
   */
  rtb_Sum1_ou = (1.0 - rtb_Abs_eu) *
    BaseEngineController_LS_128_DWork.s627_UnitDelay_DSTATE + rtb_Merge_l *
    rtb_Abs_eu;

  /* If: '<S626>/If' incorporates:
   *  Inport: '<S628>/In1'
   *  Inport: '<S629>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S626>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S626>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S626>/NewValue' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    BaseEngineController_LS_128_B.s626_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S626>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S626>/OldValue' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    BaseEngineController_LS_128_B.s626_Merge = rtb_Sum1_ou;

    /* End of Outputs for SubSystem: '<S626>/OldValue' */
  }

  /* End of If: '<S626>/If' */

  /* Outputs for Enabled SubSystem: '<S479>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S480>/Enable'
   */
  if (rtb_RelationalOperator_jf) {
    if (!BaseEngineController_LS_128_DWork.s479_TriggeredSubsystem_MODE) {
      BaseEngineController_LS_128_DWork.s479_TriggeredSubsystem_MODE = TRUE;
    }

    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* RelationalOperator: '<S307>/RelOp' incorporates:
     *  Constant: '<S307>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S293>/motohawk_data_read'
     */
    rtb_LogicalOperator6_as = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S293>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration'
     */
    rtb_LogicalOperator_my = (BaseEngineController_LS_128_B.s571_Merge >=
      (real_T)((uint16_T)(ACHighPressureDisable_DataStore())));

    /* Logic: '<S293>/Logical Operator4' incorporates:
     *  Logic: '<S293>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status4'
     */
    rtb_RelOp_cx = !(IsFaultActive(2) || IsFaultActive(3));

    /* Logic: '<S293>/Logical Operator' */
    rtb_LogicalOperator_ax = ((rtb_LogicalOperator6_as && rtb_LogicalOperator_my
      && rtb_RelOp_cx));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_LogicalOperator_ax);
      UpdateFault(0);
    }

    /* Logic: '<S293>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S293>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_dv = ((rtb_LogicalOperator6_as &&
      (BaseEngineController_LS_128_B.s571_Merge <= (real_T)((uint16_T)
      (ACLowPressureDisable_DataStore()))) && rtb_RelOp_cx &&
      BaseEngineController_LS_128_B.s92_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator1_dv);
      UpdateFault(1);
    }

    /* Logic: '<S294>/Logical Operator1' incorporates:
     *  Logic: '<S294>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status7'
     */
    rtb_Switch1_jh = !(IsFaultActive(120) || IsFaultActive(121) || IsFaultActive
                       (118) || IsFaultActive(119));

    /* Logic: '<S294>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S294>/Logical Operator6' incorporates:
     *  Logic: '<S294>/Logical Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration3'
     */
    rtb_LogicalOperator6_as = !(rtb_LogicalOperator6_as &&
      (AirflowDiag_MAPIRDiagEnable_DataStore()));

    /* Logic: '<S294>/Logical Operator9' incorporates:
     *  Logic: '<S294>/Logical Operator2'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status9'
     */
    rtb_LogicalOperator1_j = !(IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* Abs: '<S294>/Abs' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S294>/motohawk_data_read'
     *  Sum: '<S294>/Sum'
     */
    rtb_DataTypeConversion1_g = fabs(BaseEngineController_LS_128_B.s527_Merge -
      VEModelMAF_DataStore());

    /* S-Function Block: <S294>/motohawk_interpolation_2d */
    {
      extern int8_T TableInterpolation2D_int8_T(uint16_T row_in, uint16_T col_in,
        int8_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_i3 = TableInterpolation2D_int8_T
        (BaseEngineController_LS_128_B.s437_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s435_motohawk_prelookup1, (int8_T *)
         ((AirflowMimatchThreshMap_DataStore())), 9, 9);
      (AirflowMimatchThresh_DataStore()) = rtb_motohawk_interpolation_2d_i3;
    }

    /* RelationalOperator: '<S294>/Relational Operator' */
    rtb_RelOp_cx = (rtb_DataTypeConversion1_g >= (real_T)
                    rtb_motohawk_interpolation_2d_i3);

    /* Logic: '<S294>/Logical Operator4' incorporates:
     *  Constant: '<S308>/Constant'
     *  Logic: '<S294>/Logical Operator8'
     *  RelationalOperator: '<S308>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S294>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_k5 = ((rtb_Switch1_jh && rtb_LogicalOperator6_as &&
      rtb_LogicalOperator1_j && rtb_RelOp_cx && (((uint8_T)EngineState_DataStore
                                  ()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S294>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AirflowMismatch_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_LogicalOperator4_k5);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S309>/RelOp' incorporates:
     *  Constant: '<S309>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S295>/motohawk_data_read'
     */
    rtb_RelOp_cx = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S295>/kPa to PSI' */
    rtb_DataTypeConversion1_g = 0.145038 *
      BaseEngineController_LS_128_B.s600_Merge;

    /* RelationalOperator: '<S295>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration'
     */
    rtb_Switch1_jh = (rtb_DataTypeConversion1_g >= (SoftOverBoostLimit_DataStore
                       ()));

    /* Logic: '<S295>/Logical Operator3' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status4'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(120) || IsFaultActive(121));

    /* Logic: '<S295>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status5'
     */
    rtb_LogicalOperator1_j = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S295>/Logical Operator8' incorporates:
     *  Logic: '<S295>/Logical Operator4'
     *  Logic: '<S295>/Logical Operator6'
     *  Logic: '<S295>/Logical Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration3'
     */
    rtb_LogicalOperator_my = ((!rtb_LogicalOperator6_as) &&
      (!(rtb_LogicalOperator1_j && (BoostDiag_MAPIRDiagEnable_DataStore()))));

    /* Logic: '<S295>/Logical Operator' */
    rtb_LogicalOperator_oa = ((rtb_RelOp_cx && rtb_Switch1_jh &&
      rtb_LogicalOperator_my));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(140, rtb_LogicalOperator_oa);
      UpdateFault(140);
    }

    /* Logic: '<S295>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S295>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_ce = ((rtb_RelOp_cx && (rtb_DataTypeConversion1_g >=
      (HardOverBoostLimit_DataStore())) && rtb_LogicalOperator_my));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(82, rtb_LogicalOperator1_ce);
      UpdateFault(82);
    }

    /* Logic: '<S295>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S295>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_io = ((rtb_RelOp_cx &&
      (BaseEngineController_LS_128_B.s92_WASTEGATE >=
       (WastegateLossOfControl_DataStore())) && rtb_LogicalOperator_my));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(161, rtb_LogicalOperator2_io);
      UpdateFault(161);
    }

    /* S-Function Block: <S310>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s310_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S310>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S310>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S310>/motohawk_delta_time'
     *  Sum: '<S310>/Sum'
     */
    if (BaseEngineController_LS_128_B.s533_Merge) {
      rtb_DataTypeConversion1_g = rtb_motohawk_delta_time_b +
        ScrambleTime_DataStore();
    } else {
      rtb_DataTypeConversion1_g = 0.0;
    }

    /* End of Switch: '<S310>/Switch' */
    /* Logic: '<S296>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S296>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S296>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_bwv = (((rtb_DataTypeConversion1_g >=
      (DigDiag_ScrambleStuckTime_DataStore())) &&
      BaseEngineController_LS_128_B.s533_Merge));

    /* S-Function (motohawk_sfun_fault_def): '<S296>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ScrambleStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(137, rtb_LogicalOperator1_bwv);
      UpdateFault(137);
    }

    /* S-Function Block: <S311>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s311_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S311>/Switch' incorporates:
     *  Constant: '<S311>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S311>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S311>/motohawk_delta_time'
     *  Sum: '<S311>/Sum'
     */
    if (BaseEngineController_LS_128_B.s517_Merge) {
      rtb_DataTypeConversion_cy = rtb_motohawk_delta_time_e +
        ClutchTime_DataStore();
    } else {
      rtb_DataTypeConversion_cy = 0.0;
    }

    /* End of Switch: '<S311>/Switch' */
    /* Logic: '<S296>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S296>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S296>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_b3 = (((rtb_DataTypeConversion_cy >=
      (DigDiag_ClutchStuckTime_DataStore())) &&
      BaseEngineController_LS_128_B.s517_Merge));

    /* S-Function (motohawk_sfun_fault_def): '<S296>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: ClutchStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(31, rtb_LogicalOperator2_b3);
      UpdateFault(31);
    }

    /* Saturate: '<S310>/Saturation' */
    rtb_Saturation_dp = rtb_DataTypeConversion1_g >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_g <= 0.0 ? 0.0 : rtb_DataTypeConversion1_g;

    /* S-Function (motohawk_sfun_data_write): '<S310>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ScrambleTime */
    {
      ScrambleTime_DataStore() = rtb_Saturation_dp;
    }

    /* Saturate: '<S311>/Saturation' */
    rtb_Saturation_g = rtb_DataTypeConversion_cy >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_cy <= 0.0 ? 0.0 : rtb_DataTypeConversion_cy;

    /* S-Function (motohawk_sfun_data_write): '<S311>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ClutchTime */
    {
      ClutchTime_DataStore() = rtb_Saturation_g;
    }

    /* Product: '<S299>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status2'
     */
    rtb_Product2_h = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(25) : 0);

    /* Product: '<S299>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status3'
     */
    rtb_Product1_ijj = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(26) : 0);

    /* Logic: '<S299>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_as = ((rtb_Product2_h != 0) || (rtb_Product1_ijj != 0) ||
      IsFaultActive(23) || IsFaultActive(24) ||
      BaseEngineController_LS_128_B.s520_Merge);

    /* RelationalOperator: '<S299>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S299>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s488_MultiportSwitch
      < (LeanProtect_Threshold_DataStore()));

    /* Logic: '<S299>/Logical Operator4' incorporates:
     *  Constant: '<S317>/Constant'
     *  Logic: '<S299>/Logical Operator3'
     *  RelationalOperator: '<S317>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_nc = (((!rtb_LogicalOperator6_as) &&
      rtb_LogicalOperator1_j && (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S299>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: LeanProtect_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(117, rtb_LogicalOperator4_nc);
      UpdateFault(117);
    }

    /* Logic: '<S301>/Logical Operator1' incorporates:
     *  Logic: '<S301>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S301>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S301>/motohawk_fault_status4'
     */
    rtb_RelOp_cx = !(IsFaultActive(142) || IsFaultActive(143));

    /* RelationalOperator: '<S301>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s634_Merge <=
      (LVDiag_AltInop_DataStore()));

    /* Logic: '<S301>/Logical Operator4' incorporates:
     *  Constant: '<S319>/Constant'
     *  RelationalOperator: '<S319>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_l5 = ((rtb_RelOp_cx && rtb_LogicalOperator6_as &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AltInop_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_LogicalOperator4_l5);
      UpdateFault(22);
    }

    /* RelationalOperator: '<S301>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s634_Merge >=
      (LVDiag_VoltTooHigh_DataStore()));

    /* Logic: '<S301>/Logical Operator2' incorporates:
     *  Constant: '<S320>/Constant'
     *  RelationalOperator: '<S320>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read2'
     */
    rtb_LogicalOperator2_eq = ((rtb_RelOp_cx && rtb_LogicalOperator6_as &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: VoltTooHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(160, rtb_LogicalOperator2_eq);
      UpdateFault(160);
    }

    /* RelationalOperator: '<S301>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s634_Merge <=
      (LVDiag_VoltLow_DataStore()));

    /* Logic: '<S301>/Logical Operator5' incorporates:
     *  Constant: '<S321>/Constant'
     *  Constant: '<S322>/Constant'
     *  Logic: '<S301>/Logical Operator'
     *  RelationalOperator: '<S321>/RelOp'
     *  RelationalOperator: '<S322>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read3'
     */
    rtb_LogicalOperator5_gc = ((rtb_RelOp_cx && rtb_LogicalOperator6_as &&
      ((((uint8_T)EngineState_DataStore()) == 3) || (((uint8_T)
      EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(159, rtb_LogicalOperator5_gc);
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
    rtb_RelOp_cx = !(IsFaultActive(148) || IsFaultActive(154) || IsFaultActive
                     (149) || IsFaultActive(155) || IsFaultActive(120) ||
                     IsFaultActive(121));

    /* RelationalOperator: '<S323>/RelOp' incorporates:
     *  Constant: '<S323>/Constant'
     */
    rtb_LogicalOperator_my = (BaseEngineController_LS_128_B.s468_State == 3);

    /* RelationalOperator: '<S302>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s452_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Logic: '<S302>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S302>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration4'
     */
    rtb_LogicalOperator4_nx = ((rtb_RelOp_cx && rtb_LogicalOperator_my &&
      rtb_LogicalOperator6_as && (BaseEngineController_LS_128_B.s600_Merge >
      (MAP_IR_HI_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S302>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(124, rtb_LogicalOperator4_nx);
      UpdateFault(124);
    }

    /* RelationalOperator: '<S302>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s452_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Logic: '<S302>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S302>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration5'
     */
    rtb_LogicalOperator2_bb = ((rtb_RelOp_cx && rtb_LogicalOperator_my &&
      rtb_LogicalOperator6_as && (BaseEngineController_LS_128_B.s600_Merge <
      (MAP_IR_LO_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S302>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(125, rtb_LogicalOperator2_bb);
      UpdateFault(125);
    }

    /* RelationalOperator: '<S302>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s452_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S302>/Add' */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s407_Sum -
      BaseEngineController_LS_128_B.s600_Merge;

    /* Logic: '<S302>/Logical Operator5' incorporates:
     *  RelationalOperator: '<S302>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration7'
     */
    rtb_LogicalOperator5_jq = ((rtb_RelOp_cx && rtb_LogicalOperator_my &&
      rtb_LogicalOperator6_as && (rtb_DataTypeConversion1_g <
      (MAP_STUCK_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S302>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(126, rtb_LogicalOperator5_jq);
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
    rtb_LogicalOperator1_ow = (IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* Logic: '<S303>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S303>/Logical Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration8'
     */
    rtb_LogicalOperator1_j = (rtb_LogicalOperator6_as &&
      (MisfireDiag_MAPIRDiagEnable_DataStore()));

    /* RelationalOperator: '<S325>/RelOp' incorporates:
     *  Constant: '<S325>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read1'
     */
    rtb_Switch1_jh = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S303>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration'
     */
    rtb_RelOp_cx = (BaseEngineController_LS_128_B.s667_Merge >= (real_T)
                    ((int16_T)(MisfireDiag_ECTLowEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration1'
     */
    rtb_LogicalOperator_my = (BaseEngineController_LS_128_B.s667_Merge <=
      (real_T)((int16_T)(MisfireDiag_ECTHighEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s600_Merge >=
      (real_T)((int16_T)(MisfireDiag_MAPLowEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration3'
     */
    rtb_BelowLoTarget_o = (BaseEngineController_LS_128_B.s600_Merge <= (real_T)
                           ((int16_T)(MisfireDiag_MAPHighEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration4'
     */
    rtb_Overspeed2 = (BaseEngineController_LS_128_B.s557_Sum1 >= (real_T)
                      ((int16_T)(MisfireDiag_RPMLowEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration5'
     */
    rtb_RelOp_et4 = (BaseEngineController_LS_128_B.s557_Sum1 <= (real_T)
                     ((int16_T)(MisfireDiag_RPMHighEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration6'
     */
    rtb_LogicalOperator3_mg = (BaseEngineController_LS_128_B.s473_Switch >=
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
    if ((!rtb_RelationalOperator3_i2) && (!rtb_LogicalOperator1_ow) &&
        (!rtb_LogicalOperator1_j) && (rtb_Switch1_jh && rtb_RelOp_cx &&
         rtb_LogicalOperator_my && rtb_LogicalOperator6_as &&
         rtb_BelowLoTarget_o && rtb_Overspeed2 && rtb_RelOp_et4 &&
         rtb_LogicalOperator3_mg && (MisfireDiag_Enbl_DataStore()))) {
      if (!BaseEngineController_LS_128_DWork.s303_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */

        /* Enable for Trigger_FGND_HIRES_6521p0004 */
        BaseEngineController_LS_128_DWork.s324_motohawk_trigger_DWORK1 = 1;
        BaseEngineController_LS_128_DWork.s303_MisfireDiagSub_MODE = TRUE;
      }

      /* S-Function (motohawk_sfun_trigger): '<S324>/motohawk_trigger' */
      /* Enable for Trigger_FGND_HIRES_6521p0004 */
      if (BaseEngineController_LS_128_DWork.s324_motohawk_trigger_DWORK1 == 0) {
        BaseEngineController_LS_128_DWork.s324_motohawk_trigger_DWORK1 = 1;
      }
    } else {
      if (BaseEngineController_LS_128_DWork.s303_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */
        /* Disable for Trigger_FGND_HIRES_6521p0004 */

        /* Disable for function-call system: '<S324>/MisfireDiagFunc' */
        BaseEngineController_LS_128_DWork.s343_If_ActiveSubsystem = -1;
        BaseEngineController_LS_128_DWork.s324_motohawk_trigger_DWORK1 = 0;
        BaseEngineController_LS_128_DWork.s303_MisfireDiagSub_MODE = FALSE;
      }
    }

    /* End of Logic: '<S303>/Logical Operator9' */
    /* End of Outputs for SubSystem: '<S303>/MisfireDiagSub' */

    /* Logic: '<S358>/Logical Operator34' incorporates:
     *  Logic: '<S358>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(43) || IsFaultActive(44) ||
      IsFaultActive(114) || IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S361>/RelOp' incorporates:
     *  Constant: '<S361>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read1'
     */
    rtb_LogicalOperator1_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S358>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration'
     */
    rtb_Switch1_jh = (BaseEngineController_LS_128_B.s473_Switch >=
                      (O2Diag_Bank2Bank_MinRunTime_DataStore()));

    /* RelationalOperator: '<S358>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_mg = (BaseEngineController_LS_128_B.s667_Merge >=
      (real_T)((int16_T)(O2Diag_Bank2Bank_MinECT_DataStore())));

    /* Logic: '<S358>/Logical Operator1' */
    rtb_RelationalOperator3_i2 =
      (BaseEngineController_LS_128_B.s488_DataValidState &&
       BaseEngineController_LS_128_B.s488_DataValidState_a);

    /* RelationalOperator: '<S358>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration2'
     */
    rtb_LogicalOperator_my = (BaseEngineController_LS_128_B.s147_Product1 >=
      (O2Diag_Bank2Bank_MinDesEquivRatio_DataStore()));

    /* RelationalOperator: '<S358>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_ow = (BaseEngineController_LS_128_B.s147_Product1 <=
      (O2Diag_Bank2Bank_MaxDesEquivRatio_DataStore()));

    /* Abs: '<S358>/Abs' incorporates:
     *  Sum: '<S358>/Sum'
     */
    rtb_DataTypeConversion_cy = fabs
      (BaseEngineController_LS_128_B.s488_MultiportSwitch -
       BaseEngineController_LS_128_B.s503_Merge);

    /* S-Function Block: <S358>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_n = TableInterpolation2D_real_T
        (BaseEngineController_LS_128_B.s437_motohawk_prelookup1,
         BaseEngineController_LS_128_B.s435_motohawk_prelookup1, (real_T *)
         ((O2Diag_Bank2Bank_DiffAlwdMap_DataStore())), 9, 9);
      (O2Diag_Bank2Bank_DiffAlwd_DataStore()) = rtb_motohawk_interpolation_2d_n;
    }

    /* Logic: '<S358>/Logical Operator' incorporates:
     *  Logic: '<S358>/Logical Operator10'
     *  RelationalOperator: '<S358>/Relational Operator4'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S358>/motohawk_interpolation_2d'
     */
    rtb_LogicalOperator_aw = (((!rtb_LogicalOperator6_as) &&
      rtb_LogicalOperator1_j && rtb_Switch1_jh && rtb_LogicalOperator3_mg &&
      rtb_RelationalOperator3_i2 && rtb_LogicalOperator_my &&
      rtb_LogicalOperator1_ow && (rtb_DataTypeConversion_cy >=
      rtb_motohawk_interpolation_2d_n)));

    /* S-Function (motohawk_sfun_fault_def): '<S358>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda_Bank2Bank_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(116, rtb_LogicalOperator_aw);
      UpdateFault(116);
    }

    /* Logic: '<S359>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_as = !IsFaultActive(114);

    /* S-Function Block: <S378>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s378_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ge = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S362>/RelOp' incorporates:
     *  Constant: '<S362>/Constant'
     */
    rtb_LogicalOperator3_mg = (BaseEngineController_LS_128_B.s488_SensorStatus_n
      == 0);

    /* Switch: '<S378>/Switch' incorporates:
     *  Constant: '<S378>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S378>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S378>/motohawk_delta_time'
     *  Sum: '<S378>/Sum'
     */
    if (rtb_LogicalOperator3_mg) {
      rtb_DataTypeConversion_cy = rtb_motohawk_delta_time_ge +
        Lam1ResetTime_DataStore();
    } else {
      rtb_DataTypeConversion_cy = 0.0;
    }

    /* End of Switch: '<S378>/Switch' */
    /* Logic: '<S359>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S359>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S359>/motohawk_calibration'
     */
    rtb_LogicalOperator4_cr = ((rtb_LogicalOperator6_as &&
      (rtb_DataTypeConversion_cy >= (O2Diag_Lam1_StuckInResetThresh_DataStore()))
      && rtb_LogicalOperator3_mg));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(100, rtb_LogicalOperator4_cr);
      UpdateFault(100);
    }

    /* Logic: '<S359>/Logical Operator36' incorporates:
     *  Logic: '<S359>/Logical Operator35'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read1'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status10'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S381>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s381_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_i0 = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S363>/RelOp' incorporates:
     *  Constant: '<S363>/Constant'
     */
    rtb_LogicalOperator3_mg = (BaseEngineController_LS_128_B.s488_SensorStatus ==
      1);

    /* Switch: '<S381>/Switch' incorporates:
     *  Constant: '<S381>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S381>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S381>/motohawk_delta_time'
     *  Sum: '<S381>/Sum'
     */
    if (rtb_LogicalOperator3_mg) {
      rtb_DataTypeConversion1_g = rtb_motohawk_delta_time_i0 +
        Lam2WarmupTime_DataStore();
    } else {
      rtb_DataTypeConversion1_g = 0.0;
    }

    /* End of Switch: '<S381>/Switch' */
    /* Logic: '<S359>/Logical Operator26' incorporates:
     *  Logic: '<S359>/Logical Operator25'
     *  RelationalOperator: '<S359>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S359>/motohawk_calibration3'
     */
    rtb_LogicalOperator26 = (((!rtb_LogicalOperator6_as) &&
      (rtb_DataTypeConversion1_g >= (O2Diag_Lam2_StuckInWarmup_DataStore())) &&
      rtb_LogicalOperator3_mg));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Lambda2StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(111, rtb_LogicalOperator26);
      UpdateFault(111);
    }

    /* Logic: '<S359>/Logical Operator29' incorporates:
     *  Constant: '<S364>/Constant'
     *  Logic: '<S359>/Logical Operator28'
     *  Logic: '<S359>/Logical Operator37'
     *  Logic: '<S359>/Logical Operator38'
     *  RelationalOperator: '<S364>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read2'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status11'
     */
    rtb_LogicalOperator29 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_128_B.s488_SensorStatus == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Lambda2Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(109, rtb_LogicalOperator29);
      UpdateFault(109);
    }

    /* Logic: '<S359>/Logical Operator31' incorporates:
     *  Logic: '<S359>/Logical Operator30'
     *  Logic: '<S359>/Logical Operator47'
     *  Logic: '<S359>/Logical Operator48'
     *  RelationalOperator: '<S365>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read7'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status16'
     */
    rtb_LogicalOperator31 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && BaseEngineController_LS_128_B.s488_SensorFaultState));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Lambda2Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(105, rtb_LogicalOperator31);
      UpdateFault(105);
    }

    /* Logic: '<S359>/Logical Operator18' incorporates:
     *  Constant: '<S366>/Constant'
     *  Logic: '<S359>/Logical Operator32'
     *  Logic: '<S359>/Logical Operator39'
     *  Logic: '<S359>/Logical Operator40'
     *  RelationalOperator: '<S366>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read3'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status12'
     */
    rtb_LogicalOperator18 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_128_B.s488_SensorStatus == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def13' */

    /* Set Fault Suspected Status: Lambda2Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(108, rtb_LogicalOperator18);
      UpdateFault(108);
    }

    /* Logic: '<S359>/Logical Operator20' incorporates:
     *  Constant: '<S367>/Constant'
     *  Logic: '<S359>/Logical Operator19'
     *  Logic: '<S359>/Logical Operator41'
     *  Logic: '<S359>/Logical Operator42'
     *  RelationalOperator: '<S367>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read4'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status13'
     */
    rtb_LogicalOperator20 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_128_B.s488_SensorStatus == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def14' */

    /* Set Fault Suspected Status: Lambda2HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(107, rtb_LogicalOperator20);
      UpdateFault(107);
    }

    /* Logic: '<S359>/Logical Operator22' incorporates:
     *  Constant: '<S368>/Constant'
     *  Logic: '<S359>/Logical Operator21'
     *  Logic: '<S359>/Logical Operator43'
     *  Logic: '<S359>/Logical Operator44'
     *  RelationalOperator: '<S368>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status14'
     */
    rtb_LogicalOperator22 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_128_B.s488_SensorStatus == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def15' */

    /* Set Fault Suspected Status: Lambda2HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(106, rtb_LogicalOperator22);
      UpdateFault(106);
    }

    /* Logic: '<S359>/Logical Operator24' incorporates:
     *  Constant: '<S369>/Constant'
     *  Logic: '<S359>/Logical Operator23'
     *  Logic: '<S359>/Logical Operator45'
     *  Logic: '<S359>/Logical Operator46'
     *  RelationalOperator: '<S369>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read6'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status15'
     */
    rtb_LogicalOperator24 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_128_B.s488_SensorStatus == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def16' */

    /* Set Fault Suspected Status: Lambda2Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(104, rtb_LogicalOperator24);
      UpdateFault(104);
    }

    /* Logic: '<S359>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status2'
     */
    rtb_LogicalOperator6_as = !IsFaultActive(114);

    /* S-Function Block: <S379>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s379_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_c2 = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S370>/RelOp' incorporates:
     *  Constant: '<S370>/Constant'
     */
    rtb_LogicalOperator3_mg = (BaseEngineController_LS_128_B.s488_SensorStatus_n
      == 1);

    /* Switch: '<S379>/Switch' incorporates:
     *  Constant: '<S379>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S379>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S379>/motohawk_delta_time'
     *  Sum: '<S379>/Sum'
     */
    if (rtb_LogicalOperator3_mg) {
      rtb_Product1_es = rtb_motohawk_delta_time_c2 + Lam1WarmupTime_DataStore();
    } else {
      rtb_Product1_es = 0.0;
    }

    /* End of Switch: '<S379>/Switch' */
    /* Logic: '<S359>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S359>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S359>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_hou = ((rtb_LogicalOperator6_as && (rtb_Product1_es >=
                                  (O2Diag_Lam1_StuckInWarmup_DataStore())) &&
      rtb_LogicalOperator3_mg));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(101, rtb_LogicalOperator3_hou);
      UpdateFault(101);
    }

    /* Logic: '<S359>/Logical Operator6' incorporates:
     *  Constant: '<S371>/Constant'
     *  Logic: '<S359>/Logical Operator5'
     *  RelationalOperator: '<S371>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status3'
     */
    rtb_LogicalOperator6_o2 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_128_B.s488_SensorStatus_n == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda1Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(99, rtb_LogicalOperator6_o2);
      UpdateFault(99);
    }

    /* Logic: '<S359>/Logical Operator8' incorporates:
     *  Logic: '<S359>/Logical Operator7'
     *  RelationalOperator: '<S372>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status4'
     */
    rtb_LogicalOperator8_br = (((!IsFaultActive(114)) &&
      BaseEngineController_LS_128_B.s488_SensorFaultState_p));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda1Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(95, rtb_LogicalOperator8_br);
      UpdateFault(95);
    }

    /* Logic: '<S359>/Logical Operator10' incorporates:
     *  Constant: '<S373>/Constant'
     *  Logic: '<S359>/Logical Operator9'
     *  RelationalOperator: '<S373>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status5'
     */
    rtb_LogicalOperator10_e = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_128_B.s488_SensorStatus_n == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Lambda1Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(98, rtb_LogicalOperator10_e);
      UpdateFault(98);
    }

    /* Logic: '<S359>/Logical Operator12' incorporates:
     *  Constant: '<S374>/Constant'
     *  Logic: '<S359>/Logical Operator11'
     *  RelationalOperator: '<S374>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status6'
     */
    rtb_LogicalOperator12 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_128_B.s488_SensorStatus_n == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda1HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(97, rtb_LogicalOperator12);
      UpdateFault(97);
    }

    /* Logic: '<S359>/Logical Operator14' incorporates:
     *  Constant: '<S375>/Constant'
     *  Logic: '<S359>/Logical Operator13'
     *  RelationalOperator: '<S375>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status7'
     */
    rtb_LogicalOperator14 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_128_B.s488_SensorStatus_n == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Lambda1HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(96, rtb_LogicalOperator14);
      UpdateFault(96);
    }

    /* Logic: '<S359>/Logical Operator16' incorporates:
     *  Constant: '<S376>/Constant'
     *  Logic: '<S359>/Logical Operator15'
     *  RelationalOperator: '<S376>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status8'
     */
    rtb_LogicalOperator16 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_128_B.s488_SensorStatus_n == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Lambda1Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(94, rtb_LogicalOperator16);
      UpdateFault(94);
    }

    /* Logic: '<S359>/Logical Operator34' incorporates:
     *  Logic: '<S359>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S359>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S380>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s380_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_db = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S377>/RelOp' incorporates:
     *  Constant: '<S377>/Constant'
     */
    rtb_LogicalOperator3_mg = (BaseEngineController_LS_128_B.s488_SensorStatus ==
      0);

    /* Switch: '<S380>/Switch' incorporates:
     *  Constant: '<S380>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S380>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S380>/motohawk_delta_time'
     *  Sum: '<S380>/Sum'
     */
    if (rtb_LogicalOperator3_mg) {
      rtb_motohawk_interpolation_1d3_nj = rtb_motohawk_delta_time_db +
        Lam2ResetTime_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_nj = 0.0;
    }

    /* End of Switch: '<S380>/Switch' */
    /* Logic: '<S359>/Logical Operator27' incorporates:
     *  Logic: '<S359>/Logical Operator17'
     *  RelationalOperator: '<S359>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S359>/motohawk_calibration2'
     */
    rtb_LogicalOperator27 = (((!rtb_LogicalOperator6_as) &&
      (rtb_motohawk_interpolation_1d3_nj >=
       (O2Diag_Lam21_StuckInResetThresh_DataStore())) && rtb_LogicalOperator3_mg));

    /* S-Function (motohawk_sfun_fault_def): '<S359>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Lambda2StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(110, rtb_LogicalOperator27);
      UpdateFault(110);
    }

    /* Saturate: '<S378>/Saturation' */
    rtb_Saturation_jb = rtb_DataTypeConversion_cy >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_cy <= 0.0 ? 0.0 : rtb_DataTypeConversion_cy;

    /* S-Function (motohawk_sfun_data_write): '<S378>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1ResetTime */
    {
      Lam1ResetTime_DataStore() = rtb_Saturation_jb;
    }

    /* Saturate: '<S379>/Saturation' */
    rtb_Saturation_dpy = rtb_Product1_es >= 16000.0 ? 16000.0 : rtb_Product1_es <=
      0.0 ? 0.0 : rtb_Product1_es;

    /* S-Function (motohawk_sfun_data_write): '<S379>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1WarmupTime */
    {
      Lam1WarmupTime_DataStore() = rtb_Saturation_dpy;
    }

    /* Saturate: '<S380>/Saturation' */
    rtb_Saturation_hl = rtb_motohawk_interpolation_1d3_nj >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_nj <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_nj;

    /* S-Function (motohawk_sfun_data_write): '<S380>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2ResetTime */
    {
      Lam2ResetTime_DataStore() = rtb_Saturation_hl;
    }

    /* Saturate: '<S381>/Saturation' */
    rtb_Saturation_ag = rtb_DataTypeConversion1_g >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_g <= 0.0 ? 0.0 : rtb_DataTypeConversion1_g;

    /* S-Function (motohawk_sfun_data_write): '<S381>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2WarmupTime */
    {
      Lam2WarmupTime_DataStore() = rtb_Saturation_ag;
    }

    /* Logic: '<S360>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S360>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_as = !IsFaultActive(114);

    /* RelationalOperator: '<S360>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S360>/motohawk_calibration'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s488_SystemVolts <=
                              (Lambda1_VoltLowThresh_DataStore()));

    /* Logic: '<S360>/Logical Operator4' incorporates:
     *  Constant: '<S382>/Constant'
     *  Constant: '<S383>/Constant'
     *  Logic: '<S360>/Logical Operator'
     *  RelationalOperator: '<S382>/RelOp'
     *  RelationalOperator: '<S383>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_nz1 = ((rtb_LogicalOperator6_as &&
      rtb_LogicalOperator1_j && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                  (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S360>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(103, rtb_LogicalOperator4_nz1);
      UpdateFault(103);
    }

    /* Logic: '<S360>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S360>/motohawk_fault_status4'
     */
    rtb_LogicalOperator6_as = !IsFaultActive(114);

    /* RelationalOperator: '<S360>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S360>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s488_SystemVolts >=
                              (Lambda1_VoltHighThresh_DataStore()));

    /* Logic: '<S360>/Logical Operator7' incorporates:
     *  Constant: '<S384>/Constant'
     *  Constant: '<S385>/Constant'
     *  Logic: '<S360>/Logical Operator3'
     *  RelationalOperator: '<S384>/RelOp'
     *  RelationalOperator: '<S385>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read2'
     */
    rtb_LogicalOperator7_b = ((rtb_LogicalOperator6_as && rtb_LogicalOperator1_j
      && ((((uint8_T)EngineState_DataStore()) == 3) || (((uint8_T)
      EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S360>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(102, rtb_LogicalOperator7_b);
      UpdateFault(102);
    }

    /* Logic: '<S360>/Logical Operator15' incorporates:
     *  Logic: '<S360>/Logical Operator14'
     *  S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S360>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S360>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S360>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s488_SystemVolts_a >=
                              (Lambda2_VoltHighThresh_DataStore()));

    /* Logic: '<S360>/Logical Operator8' incorporates:
     *  Constant: '<S386>/Constant'
     *  Constant: '<S387>/Constant'
     *  Logic: '<S360>/Logical Operator2'
     *  Logic: '<S360>/Logical Operator6'
     *  RelationalOperator: '<S386>/RelOp'
     *  RelationalOperator: '<S387>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read3'
     */
    rtb_LogicalOperator8_f = (((!rtb_LogicalOperator6_as) &&
      rtb_LogicalOperator1_j && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S360>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda2VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(112, rtb_LogicalOperator8_f);
      UpdateFault(112);
    }

    /* Logic: '<S360>/Logical Operator13' incorporates:
     *  Logic: '<S360>/Logical Operator12'
     *  S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S360>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S360>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S360>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s488_SystemVolts_a <=
                              (Lambda2_VoltLowThresh_DataStore()));

    /* Logic: '<S360>/Logical Operator11' incorporates:
     *  Constant: '<S388>/Constant'
     *  Constant: '<S389>/Constant'
     *  Logic: '<S360>/Logical Operator10'
     *  Logic: '<S360>/Logical Operator9'
     *  RelationalOperator: '<S388>/RelOp'
     *  RelationalOperator: '<S389>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read4'
     */
    rtb_LogicalOperator11_g = (((!rtb_LogicalOperator6_as) &&
      rtb_LogicalOperator1_j && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S360>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda2VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(113, rtb_LogicalOperator11_g);
      UpdateFault(113);
    }

    /* Logic: '<S305>/Logical Operator5' incorporates:
     *  Logic: '<S305>/Logical Operator4'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status4'
     */
    rtb_LogicalOperator3_mg = !(IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* DataTypeConversion: '<S305>/Data Type Conversion' */
    if (rtIsNaN(BaseEngineController_LS_128_B.s483_RPMInst) || rtIsInf
        (BaseEngineController_LS_128_B.s483_RPMInst)) {
      u = 0.0;
    } else {
      u = fmod(floor(BaseEngineController_LS_128_B.s483_RPMInst), 65536.0);
    }

    rtb_DataTypeConversion_b2 = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
      -u : (int16_T)(uint16_T)u);

    /* End of DataTypeConversion: '<S305>/Data Type Conversion' */
    /* RelationalOperator: '<S391>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration'
     */
    rtb_RelOp_et4 = (rtb_DataTypeConversion_b2 >= ((int16_T)
      (BaseRevLimit_DataStore())));

    /* Sum: '<S390>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration1'
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

    /* End of Sum: '<S390>/Sum2' */

    /* RelationalOperator: '<S391>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_b2 <= rtb_Sum4_l);

    /* CombinatorialLogic: '<S394>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_et4 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_a[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_a[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S394>/Switch1' incorporates:
     *  UnitDelay: '<S394>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_a[1]) {
      rtb_RelationalOperator3_i2 = rtb_CombinatorialLogic_a[0];
    } else {
      rtb_RelationalOperator3_i2 =
        BaseEngineController_LS_128_DWork.s394_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S394>/Switch1' */

    /* Switch: '<S391>/Switch2' incorporates:
     *  Logic: '<S391>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration'
     */
    if (!rtb_RelationalOperator3_i2) {
      rtb_Sum4_l = ((int16_T)(BaseRevLimit_DataStore()));
    }

    /* End of Switch: '<S391>/Switch2' */

    /* RelationalOperator: '<S390>/Overspeed' */
    rtb_LogicalOperator6_as = (rtb_DataTypeConversion_b2 > rtb_Sum4_l);

    /* Sum: '<S390>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration2'
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

    /* End of Sum: '<S390>/Sum3' */

    /* RelationalOperator: '<S392>/LT' */
    rtb_RelOp_et4 = (rtb_DataTypeConversion_b2 >= rtb_Sum4_l);

    /* Sum: '<S390>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration1'
     */
    i = rtb_Sum4_l - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Switch2_h2 = (int16_T)i;

    /* End of Sum: '<S390>/Sum1' */

    /* RelationalOperator: '<S392>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_b2 <= rtb_Switch2_h2);

    /* CombinatorialLogic: '<S395>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_et4 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_a[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_a[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S395>/Switch1' incorporates:
     *  UnitDelay: '<S395>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_a[1]) {
      rtb_LogicalOperator_my = rtb_CombinatorialLogic_a[0];
    } else {
      rtb_LogicalOperator_my =
        BaseEngineController_LS_128_DWork.s395_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S395>/Switch1' */

    /* Switch: '<S392>/Switch2' incorporates:
     *  Logic: '<S392>/Logical Operator'
     */
    if (rtb_LogicalOperator_my) {
      rtb_Sum4_l = rtb_Switch2_h2;
    }

    /* End of Switch: '<S392>/Switch2' */

    /* RelationalOperator: '<S390>/Overspeed1' */
    rtb_RelOp_et4 = (rtb_DataTypeConversion_b2 > rtb_Sum4_l);

    /* Logic: '<S305>/Logical Operator1' incorporates:
     *  Logic: '<S390>/Logical Operator3'
     *  Logic: '<S390>/Logical Operator4'
     */
    rtb_LogicalOperator1_mk = ((rtb_LogicalOperator3_mg &&
      (rtb_LogicalOperator6_as && (!rtb_RelOp_et4))));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(141, rtb_LogicalOperator1_mk);
      UpdateFault(141);
    }

    /* Sum: '<S390>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration4'
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

    rtb_Switch2_h2 = (int16_T)i;

    /* End of Sum: '<S390>/Sum5' */

    /* RelationalOperator: '<S393>/LT' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_b2 >= rtb_Switch2_h2);

    /* Sum: '<S390>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration1'
     */
    i = rtb_Switch2_h2 - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum4_l = (int16_T)i;

    /* End of Sum: '<S390>/Sum4' */

    /* RelationalOperator: '<S393>/LT1' */
    rtb_BelowLoTarget_o = (rtb_DataTypeConversion_b2 <= rtb_Sum4_l);

    /* CombinatorialLogic: '<S396>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_o != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_a[0] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx];
      rtb_CombinatorialLogic_a[1] =
        BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
    }

    /* Switch: '<S396>/Switch1' incorporates:
     *  UnitDelay: '<S396>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_a[1]) {
      rtb_Switch1_jh = rtb_CombinatorialLogic_a[0];
    } else {
      rtb_Switch1_jh = BaseEngineController_LS_128_DWork.s396_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S396>/Switch1' */

    /* Switch: '<S393>/Switch2' incorporates:
     *  Logic: '<S393>/Logical Operator'
     */
    if (rtb_Switch1_jh) {
      rtb_Switch2_h2 = rtb_Sum4_l;
    }

    /* End of Switch: '<S393>/Switch2' */

    /* RelationalOperator: '<S390>/Overspeed2' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_b2 > rtb_Switch2_h2);

    /* Logic: '<S305>/Logical Operator2' incorporates:
     *  Logic: '<S390>/Logical Operator5'
     *  Logic: '<S390>/Logical Operator6'
     */
    rtb_LogicalOperator2_mc = ((rtb_LogicalOperator3_mg && (rtb_RelOp_et4 &&
      (!rtb_Overspeed2))));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(127, rtb_LogicalOperator2_mc);
      UpdateFault(127);
    }

    /* Logic: '<S305>/Logical Operator3' */
    rtb_LogicalOperator3_bz = ((rtb_LogicalOperator3_mg && rtb_Overspeed2));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(83, rtb_LogicalOperator3_bz);
      UpdateFault(83);
    }

    /* Logic: '<S306>/Logical Operator3' incorporates:
     *  Logic: '<S306>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_mg = !(IsFaultActive(73) || IsFaultActive(74) ||
      BaseEngineController_LS_128_B.s520_Merge);

    /* Sum: '<S306>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_nj = BaseEngineController_LS_128_B.s448_Sum3
      - (FuelPres_DeltaTarget_DataStore());

    /* Logic: '<S306>/Logical Operator4' incorporates:
     *  Gain: '<S306>/invert'
     *  RelationalOperator: '<S306>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_g = ((rtb_LogicalOperator3_mg &&
      (rtb_motohawk_interpolation_1d3_nj < -(FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(72, rtb_LogicalOperator4_g);
      UpdateFault(72);
    }

    /* Logic: '<S306>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S306>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration3'
     */
    rtb_LogicalOperator2_ako = ((rtb_LogicalOperator3_mg &&
      (rtb_motohawk_interpolation_1d3_nj > (FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(71, rtb_LogicalOperator2_ako);
      UpdateFault(71);
    }

    /* Logic: '<S297>/Logical Operator3' incorporates:
     *  Logic: '<S297>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S297>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S297>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_mg = !(IsFaultActive(43) || IsFaultActive(44));

    /* RelationalOperator: '<S312>/RelOp' incorporates:
     *  Constant: '<S312>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
     */
    rtb_RelOp_et4 = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S297>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_i2 = ((rtb_LogicalOperator3_mg && rtb_RelOp_et4 &&
      (BaseEngineController_LS_128_B.s667_Merge >= (TempOverheat_Fault_DataStore
                                  ()))));

    /* S-Function (motohawk_sfun_fault_def): '<S297>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(42, rtb_LogicalOperator2_i2);
      UpdateFault(42);
    }

    /* Logic: '<S297>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_es = ((rtb_LogicalOperator3_mg && rtb_RelOp_et4 &&
      (BaseEngineController_LS_128_B.s667_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S297>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(45, rtb_LogicalOperator4_es);
      UpdateFault(45);
    }

    /* S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_nj = (TempOverheat_Warn_DataStore());

    /* Gain: '<S298>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S298>/Data Type Conversion'
     *  Product: '<S298>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S298>/Number of Combustion Events Per Revolution'
     */
    rtb_DataTypeConversion1_g = BaseEngineController_LS_128_B.s557_Sum1 *
      (real_T)((uint8_T)CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S313>/Gain' */
    rtb_motohawk_interpolation_1d3_nj = 0.01 *
      BaseEngineController_LS_128_B.s579_Merge;

    /* Gain: '<S298>/g to mg' incorporates:
     *  Constant: '<S313>/ '
     *  Constant: '<S313>/ Ethanol density (g//ml)'
     *  Constant: '<S313>/ Gasoline density (g//ml)'
     *  Product: '<S313>/Product1'
     *  Product: '<S313>/Product2'
     *  Sum: '<S313>/Add'
     *  Sum: '<S313>/Add1'
     */
    rtb_DataTypeConversion_cy = ((1.0 - rtb_motohawk_interpolation_1d3_nj) *
      0.737 + 0.789 * rtb_motohawk_interpolation_1d3_nj) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S298>/ml//hr to gal//hr' incorporates:
       *  Product: '<S298>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S298>/inj//hr to mg//hr'
       */
      u = rtb_DataTypeConversion1_g * BaseEngineController_LS_128_B.s92_FPC[i] /
        rtb_DataTypeConversion_cy * 0.00026417205263729591;

      /* RelationalOperator: '<S298>/Relational Operator7' incorporates:
       *  Constant: '<S298>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator_l2[i] = (u > 0.1);

      /* Gain: '<S298>/ml//hr to gal//hr' */
      rtb_Product1_fv[i] = u;
    }

    /* Outputs for Enabled SubSystem: '<S298>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S315>/Enable'
     */
    if (rtb_LogicalOperator_l2[0] || rtb_LogicalOperator_l2[1] ||
        rtb_LogicalOperator_l2[2] || rtb_LogicalOperator_l2[3] ||
        rtb_LogicalOperator_l2[4] || rtb_LogicalOperator_l2[5] ||
        rtb_LogicalOperator_l2[6] || rtb_LogicalOperator_l2[7]) {
      /* Product: '<S315>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_128_B.s315_chargemass[i] =
          BaseEngineController_LS_128_B.s456_Switch2 / rtb_Product1_fv[i];
      }

      /* End of Product: '<S315>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S298>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S298>/Default (if no flow)' incorporates:
     *  Constant: '<S298>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator_l2[i]) {
        BaseEngineController_LS_128_B.s298_Defaultifnoflow[i] =
          BaseEngineController_LS_128_B.s315_chargemass[i];
      } else {
        BaseEngineController_LS_128_B.s298_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S298>/Default (if no flow)' */

    /* S-Function Block: <S314>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_128_DWork.s314_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_interpolation_1d3_nj = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S314>/Product' incorporates:
     *  MinMax: '<S314>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_nj /= (rtb_motohawk_interpolation_1d3_nj >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_nj :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S316>/Sum' incorporates:
     *  Constant: '<S316>/Constant'
     */
    rtb_DataTypeConversion1_g = 1.0 - rtb_motohawk_interpolation_1d3_nj;

    /* Sum: '<S316>/Sum1' incorporates:
     *  Product: '<S316>/Product'
     *  Product: '<S316>/Product1'
     *  UnitDelay: '<S316>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s316_Sum1[i] =
        BaseEngineController_LS_128_B.s298_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_nj + rtb_DataTypeConversion1_g *
        BaseEngineController_LS_128_DWork.s316_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S316>/Sum1' */

    /* Logic: '<S300>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S300>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S300>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_as = (IsFaultActive(135) || IsFaultActive(136));

    /* RelationalOperator: '<S318>/RelOp' incorporates:
     *  Constant: '<S318>/Constant'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_128_B.s468_State == 3);

    /* S-Function Block: <S300>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_fg = TableInterpolation1D_real_T
        (BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_fg;
    }

    /* Logic: '<S300>/Logical Operator4' incorporates:
     *  Logic: '<S300>/Logical Operator3'
     *  RelationalOperator: '<S300>/Relational Operator2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S300>/motohawk_interpolation_1d'
     */
    rtb_LogicalOperator4_f = (((!rtb_LogicalOperator6_as) &&
      rtb_LogicalOperator1_j && (BaseEngineController_LS_128_B.s618_Merge <
      rtb_motohawk_interpolation_1d_fg)));

    /* S-Function (motohawk_sfun_fault_def): '<S300>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(128, rtb_LogicalOperator4_f);
      UpdateFault(128);
    }

    /* S-Function Block: <S300>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_nj = TableInterpolation1D_real_T
        (BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_nj;
    }

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s394_UnitDelay_DSTATE =
      rtb_RelationalOperator3_i2;

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s395_UnitDelay_DSTATE =
      rtb_LogicalOperator_my;

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    BaseEngineController_LS_128_DWork.s396_UnitDelay_DSTATE = rtb_Switch1_jh;

    /* Update for UnitDelay: '<S316>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_128_DWork.s316_UnitDelay_DSTATE,
           (void *)(&BaseEngineController_LS_128_B.s316_Sum1[0]), sizeof(real_T)
           << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  } else {
    if (BaseEngineController_LS_128_DWork.s479_TriggeredSubsystem_MODE) {
      /* Disable for Function Call SubSystem: '<S11>/Diagnostics' */
      /* Disable for Enabled SubSystem: '<S303>/MisfireDiagSub' */

      /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_HIRES_6521p0004 */

      /* Disable for function-call system: '<S324>/MisfireDiagFunc' */
      BaseEngineController_LS_128_DWork.s343_If_ActiveSubsystem = -1;
      BaseEngineController_LS_128_DWork.s324_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_128_DWork.s303_MisfireDiagSub_MODE = FALSE;

      /* End of Disable for SubSystem: '<S303>/MisfireDiagSub' */
      /* End of Disable for SubSystem: '<S11>/Diagnostics' */
      BaseEngineController_LS_128_DWork.s479_TriggeredSubsystem_MODE = FALSE;
    }
  }

  /* Saturate: '<S410>/Saturation' */
  rtb_Saturation_ng = rtb_Switch_l >= 16000.0 ? 16000.0 : rtb_Switch_l <= 0.0 ?
    0.0 : rtb_Switch_l;

  /* S-Function (motohawk_sfun_data_write): '<S410>/motohawk_data_write' */
  /* Write to Data Storage as scalar: BaroLearnTmr */
  {
    BaroLearnTmr_DataStore() = rtb_Saturation_ng;
  }

  /* RelationalOperator: '<S413>/Compare' incorporates:
   *  Constant: '<S413>/Constant'
   */
  rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s468_State == 3);

  /* Logic: '<S406>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S406>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_j = !GetFaultActionStatus(7);

  /* RelationalOperator: '<S406>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S406>/motohawk_calibration2'
   */
  rtb_Switch1_jh = (BaseEngineController_LS_128_B.s667_Merge >=
                    (VEAdaptTemp_DataStore()));

  /* RelationalOperator: '<S406>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S406>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_i2 = (BaseEngineController_LS_128_B.s473_Switch >=
    (VEAdaptTime_DataStore()));

  /* Logic: '<S406>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S406>/motohawk_calibration'
   */
  BaseEngineController_LS_128_B.s406_LogicalOperator = ((rtb_LogicalOperator6_as
    && rtb_LogicalOperator1_j &&
    BaseEngineController_LS_128_B.s422_LogicalOperator && rtb_Switch1_jh &&
    rtb_RelationalOperator3_i2 && (VEAdaptEnable_DataStore())));

  /* Outputs for Enabled SubSystem: '<S406>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S411>/Enable'
   */
  if (BaseEngineController_LS_128_B.s406_LogicalOperator) {
    /* Product: '<S411>/Divide' incorporates:
     *  Sum: '<S411>/Add'
     */
    rtb_Divide_g = (BaseEngineController_LS_128_B.s527_Merge -
                    BaseEngineController_LS_128_B.s406_ModelAirMassFlowRate) /
      BaseEngineController_LS_128_B.s406_ModelAirMassFlowRate;

    /* S-Function Block: <S414>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_g;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_g,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_h = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S414>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_h, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_k;
    }

    /* Product: '<S411>/Divide1' incorporates:
     *  Product: '<S411>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S414>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S414>/motohawk_prelookup'
     */
    rtb_Divide1 = BaseEngineController_LS_128_B.s406_Sum * rtb_Divide_g *
      rtb_motohawk_interpolation_1d_k;

    /* S-Function Block: <S411>/motohawk_adapt_table */
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

  /* End of Outputs for SubSystem: '<S406>/Adapt VolEff Map' */

  /* Outputs for Enabled SubSystem: '<S398>/FuelLevelWrite' incorporates:
   *  EnablePort: '<S418>/Enable'
   */
  if (rtb_RelationalOperator_g) {
    /* S-Function (motohawk_sfun_data_write): '<S418>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelLvl_NVM */
    {
      FuelLvl_NVM_DataStore() = BaseEngineController_LS_128_B.s417_Sum1;
    }
  }

  /* End of Outputs for SubSystem: '<S398>/FuelLevelWrite' */

  /* UnitDelay: '<S423>/Unit Delay1' */
  rtb_DesiredLambda_idx =
    BaseEngineController_LS_128_DWork.s423_UnitDelay1_DSTATE;

  /* UnitDelay: '<S423>/Unit Delay3' */
  rtb_DesiredLambda_idx_0 =
    BaseEngineController_LS_128_DWork.s423_UnitDelay3_DSTATE;

  /* UnitDelay: '<S423>/Unit Delay4' */
  rtb_DesiredLambda_idx_1 =
    BaseEngineController_LS_128_DWork.s423_UnitDelay4_DSTATE;

  /* UnitDelay: '<S424>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_LS_128_DWork.s424_UnitDelay1_DSTATE;

  /* UnitDelay: '<S424>/Unit Delay3' */
  rtb_UnitDelay3_n = BaseEngineController_LS_128_DWork.s424_UnitDelay3_DSTATE;

  /* UnitDelay: '<S424>/Unit Delay4' */
  rtb_UnitDelay4_b = BaseEngineController_LS_128_DWork.s424_UnitDelay4_DSTATE;

  /* Sum: '<S441>/Sum' */
  rtb_Abs_eu = rtb_APP1 - rtb_APP2;

  /* Abs: '<S441>/Abs' */
  rtb_Abs_eu = fabs(rtb_Abs_eu);

  /* RelationalOperator: '<S441>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_cb = ((rtb_Abs_eu > (APP1_APP2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S441>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_RelationalOperator3_cb);
    UpdateFault(20);
  }

  /* S-Function (motohawk_sfun_data_write): '<S447>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_128_B.s468_State;
  }

  /* Sum: '<S452>/Sum' */
  rtb_Abs_eu = BaseEngineController_LS_128_B.s770_Merge -
    BaseEngineController_LS_128_B.s787_Merge;

  /* Abs: '<S452>/Abs' */
  rtb_Abs_eu = fabs(rtb_Abs_eu);

  /* RelationalOperator: '<S452>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S452>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_a3 = ((rtb_Abs_eu > (TPS1_TPS2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S452>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(156, rtb_RelationalOperator3_a3);
    UpdateFault(156);
  }

  /* Saturate: '<S471>/Saturation' */
  rtb_Saturation_o = BaseEngineController_LS_128_B.s471_Sum >= 16000.0 ? 16000.0
    : BaseEngineController_LS_128_B.s471_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_128_B.s471_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S471>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_o;
  }

  /* Saturate: '<S473>/Saturation' */
  rtb_Saturation_h5 = BaseEngineController_LS_128_B.s473_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_LS_128_B.s473_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_128_B.s473_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S473>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_h5;
  }

  /* Saturate: '<S475>/Saturation' */
  rtb_Saturation_oe = BaseEngineController_LS_128_B.s475_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_LS_128_B.s475_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_128_B.s475_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S475>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_oe;
  }

  /* Switch: '<S479>/Switch' incorporates:
   *  Constant: '<S479>/Constant2'
   */
  if (rtb_RelationalOperator_jf) {
    rtb_Switch_oq = 0U;
  } else {
    rtb_Switch_oq = rtb_Sum_ig;
  }

  /* End of Switch: '<S479>/Switch' */
  /* RelationalOperator: '<S487>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S487>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_k =
    (BaseEngineController_LS_128_B.s487_ReadCANMessage1_o1 >= (uint32_T)
     ((uint16_T)(GPS_LatLong_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S487>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: GPS_LatLong_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_RelationalOperator5_k);
    UpdateFault(80);
  }

  /* RelationalOperator: '<S487>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S487>/motohawk_calibration'
   */
  rtb_RelationalOperator5_k =
    (BaseEngineController_LS_128_B.s487_ReadCANMessage_o1 >= (uint32_T)
     ((uint16_T)(GPS_DateTime_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S487>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: GPS_DateTime_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_RelationalOperator5_k);
    UpdateFault(79);
  }

  /* RelationalOperator: '<S487>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S487>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_k =
    (BaseEngineController_LS_128_B.s487_ReadCANMessage2_o1 >= (uint32_T)
     ((uint16_T)(GPS_SpeedDir_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S487>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: GPS_SpeedDir_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_RelationalOperator5_k);
    UpdateFault(81);
  }

  /* RelationalOperator: '<S488>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_k =
    (BaseEngineController_LS_128_B.s488_ReadCANMessage1_o1 >= (uint32_T)
     ((uint16_T)(Lambda_2_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S488>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(115, rtb_RelationalOperator5_k);
    UpdateFault(115);
  }

  /* RelationalOperator: '<S488>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration'
   */
  rtb_RelationalOperator5_k =
    (BaseEngineController_LS_128_B.s488_ReadCANMessage_o1 >= (uint32_T)
     ((uint16_T)(Lambda_1_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S488>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(114, rtb_RelationalOperator5_k);
    UpdateFault(114);
  }

  /* Logic: '<S489>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S489>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S489>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_jg = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s488_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S489>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_jg);
    UpdateFault(23);
  }

  /* Logic: '<S489>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S489>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S489>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_o1 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s488_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S489>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_o1);
    UpdateFault(24);
  }

  /* Logic: '<S490>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S490>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S490>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S490>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_c = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s488_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S490>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_LogicalOperator2_c);
    UpdateFault(25);
  }

  /* Logic: '<S490>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S490>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S490>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S490>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_h = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s488_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S490>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_LogicalOperator3_h);
    UpdateFault(26);
  }

  /* Logic: '<S510>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S510>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S510>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s482_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S510>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(118, rtb_LogicalOperator2_a);
    UpdateFault(118);
  }

  /* Logic: '<S510>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S510>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S510>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k0 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s482_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S510>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(119, rtb_LogicalOperator3_k0);
    UpdateFault(119);
  }

  /* Saturate: '<S534>/Saturation' */
  rtb_Saturation_pn = rtb_Switch_ic >= 86400.0 ? 86400.0 : rtb_Switch_ic <= 0.0 ?
    0.0 : rtb_Switch_ic;

  /* S-Function (motohawk_sfun_data_write): '<S534>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_pn;
  }

  /* Logic: '<S512>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S512>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S512>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S512>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_o = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s482_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(157, rtb_LogicalOperator2_o);
    UpdateFault(157);
  }

  /* Logic: '<S512>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S512>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S512>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S512>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_jl = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s482_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(158, rtb_LogicalOperator3_jl);
    UpdateFault(158);
  }

  /* S-Function Block: <S548>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_128_DWork.s548_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_gh = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S548>/Switch' incorporates:
   *  Constant: '<S548>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S548>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S548>/motohawk_delta_time'
   *  Sum: '<S548>/Sum'
   */
  if (rtb_Logic_b[0]) {
    rtb_Abs_eu = rtb_motohawk_delta_time_gh + TimeSinceVSPDReject_DataStore();
  } else {
    rtb_Abs_eu = 0.0;
  }

  /* End of Switch: '<S548>/Switch' */
  /* RelationalOperator: '<S513>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S513>/motohawk_calibration6'
   */
  rtb_LogicalOperator1_ow = (rtb_Abs_eu >= (real_T)((uint8_T)
    (VSPD_RejectHoldTime_DataStore())));

  /* Saturate: '<S548>/Saturation' */
  rtb_Saturation_jq = rtb_Abs_eu >= 16000.0 ? 16000.0 : rtb_Abs_eu <= 0.0 ? 0.0 :
    rtb_Abs_eu;

  /* S-Function (motohawk_sfun_data_write): '<S548>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceVSPDReject */
  {
    TimeSinceVSPDReject_DataStore() = rtb_Saturation_jq;
  }

  /* RelationalOperator: '<S483>/Relational Operator' incorporates:
   *  Constant: '<S483>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S483>/motohawk_calibration'
   */
  rtb_RelationalOperator_f0 = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S483>/motohawk_encoder_pseudo */
  {
    S_EncoderResourceAttributes EncoderAttribsObj;
    EncoderAttribsObj.uValidAttributesMask = USE_ENC_CONDITION;
    if (rtb_RelationalOperator_f0) {
      EncoderAttribsObj.u2PseudoRPM = (PseudoRPM_DataStore());
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLED_INTERNAL;
      EncoderAttribsObj.uValidAttributesMask |= USE_ENC_PSEUDO_RPM;
    } else {
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLE_EXTERNAL;
    }

    SetResourceAttributes(RES_ENCODER, &EncoderAttribsObj, BEHAVIOUR_ENCODER);
  }

  /* DataTypeConversion: '<S483>/Data Type Conversion3' incorporates:
   *  Gain: '<S483>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S483>/motohawk_calibration1'
   */
  u = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = u < 0.0 ? ceil(u) : floor(u);
    u = fmod(u, 65536.0);
  }

  rtb_DataTypeConversion3_g = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
    -u : (int16_T)(uint16_T)u);

  /* End of DataTypeConversion: '<S483>/Data Type Conversion3' */
  /* S-Function Block: <S483>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_g;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S553>/RelOp' incorporates:
   *  Constant: '<S553>/Constant'
   */
  rtb_RelationalOperator5_k = (BaseEngineController_LS_128_B.s556_Sum > 100U);

  /* S-Function Block: <S483>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_128_B.s483_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S549>/Logical Operator' incorporates:
   *  Constant: '<S555>/Constant'
   *  RelationalOperator: '<S555>/RelOp'
   */
  rtb_LogicalOperator_ku = ((rtb_RelationalOperator5_k &&
    (BaseEngineController_LS_128_B.s483_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S549>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator_ku);
    UpdateFault(33);
  }

  /* Logic: '<S549>/Logical Operator1' incorporates:
   *  Constant: '<S554>/Constant'
   *  RelationalOperator: '<S554>/RelOp'
   */
  rtb_LogicalOperator1_aq = ((rtb_RelationalOperator5_k &&
    (BaseEngineController_LS_128_B.s483_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S549>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator1_aq);
    UpdateFault(32);
  }

  /* Logic: '<S549>/Logical Operator2' incorporates:
   *  Constant: '<S551>/Constant'
   *  RelationalOperator: '<S551>/RelOp'
   */
  rtb_LogicalOperator2_bz = ((rtb_RelationalOperator5_k &&
    (BaseEngineController_LS_128_B.s483_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S549>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_LogicalOperator2_bz);
    UpdateFault(29);
  }

  /* Logic: '<S549>/Logical Operator3' incorporates:
   *  Constant: '<S552>/Constant'
   *  RelationalOperator: '<S552>/RelOp'
   */
  rtb_LogicalOperator3_m = ((rtb_RelationalOperator5_k &&
    (BaseEngineController_LS_128_B.s483_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S549>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator3_m);
    UpdateFault(30);
  }

  /* S-Function Block: <S483>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_LS_128_B.s483_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S558>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S558>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S558>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kz = ((MPRD_DataStore() && (rtb_DataTypeConversion_j >
    (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S558>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kz);
    UpdateFault(2);
  }

  /* Logic: '<S558>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S558>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S558>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_j <
    (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S558>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_d);
    UpdateFault(3);
  }

  /* Logic: '<S559>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S559>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S559>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_p >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_LogicalOperator2_i);
    UpdateFault(75);
  }

  /* Logic: '<S559>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S559>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S559>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ah = ((MPRD_DataStore() && (rtb_DataTypeConversion_p <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_LogicalOperator3_ah);
    UpdateFault(76);
  }

  /* Logic: '<S560>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S560>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S560>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_al >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S560>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_LogicalOperator2_p);
    UpdateFault(73);
  }

  /* Logic: '<S560>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S560>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S560>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_al <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S560>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_LogicalOperator3_n);
    UpdateFault(74);
  }

  /* Logic: '<S561>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S561>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S561>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gw = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s563_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S561>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(120, rtb_LogicalOperator2_gw);
    UpdateFault(120);
  }

  /* Logic: '<S561>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S561>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S561>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ha = ((MPRD_DataStore() &&
    (BaseEngineController_LS_128_B.s563_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S561>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(121, rtb_LogicalOperator3_ha);
    UpdateFault(121);
  }

  /* Logic: '<S562>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S562>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S562>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_e = ((MPRD_DataStore() && (rtb_DataTypeConversion_hs >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S562>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(122, rtb_LogicalOperator2_e);
    UpdateFault(122);
  }

  /* Logic: '<S562>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S562>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S562>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_hs <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S562>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(123, rtb_LogicalOperator3_p);
    UpdateFault(123);
  }

  /* Logic: '<S564>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S564>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S564>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_g1 = ((MPRD_DataStore() && (rtb_Switch4_k >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S564>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(135, rtb_LogicalOperator2_g1);
    UpdateFault(135);
  }

  /* Logic: '<S564>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S564>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S564>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_cn = ((MPRD_DataStore() && (rtb_Switch4_k <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S564>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(136, rtb_LogicalOperator3_cn);
    UpdateFault(136);
  }

  /* Logic: '<S565>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S565>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S565>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() && (rtb_Abs_i >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S565>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(138, rtb_LogicalOperator2_m);
    UpdateFault(138);
  }

  /* Logic: '<S565>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S565>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S565>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_b = ((MPRD_DataStore() && (rtb_Abs_i <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S565>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(139, rtb_LogicalOperator3_b);
    UpdateFault(139);
  }

  /* Logic: '<S566>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S566>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S566>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ji = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
    (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S566>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(142, rtb_LogicalOperator2_ji);
    UpdateFault(142);
  }

  /* Logic: '<S566>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S566>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S566>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_hk = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
    (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S566>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(143, rtb_LogicalOperator3_hk);
    UpdateFault(143);
  }

  /* Logic: '<S690>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S690>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S690>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ie = ((MPRD_DataStore() && (rtb_DataTypeConversion_c >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S690>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_ie);
    UpdateFault(4);
  }

  /* Logic: '<S690>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S690>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S690>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_me = ((MPRD_DataStore() && (rtb_DataTypeConversion_c <
    (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S690>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_me);
    UpdateFault(5);
  }

  /* S-Function (motohawk_sfun_trigger): '<S691>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  if (BaseEngineController_LS_128_DWork.s691_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s691_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S691>/Logical Operator' incorporates:
   *  RelationalOperator: '<S691>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S691>/motohawk_data_read1'
   */
  rtb_Switch1_jh = (BaseEngineController_LS_128_B.s708_LogicalOperator &&
                    (APP1_AdaptADC_DataStore() <
                     (APP1LowAdaptADCThresh_DataStore())));

  /* Logic: '<S691>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S691>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S691>/motohawk_data_read1'
   */
  rtb_LogicalOperator6_as = (BaseEngineController_LS_128_B.s708_LogicalOperator &&
                             (APP1_AdaptADC_DataStore() >
    (APP1HiAdaptADCThresh_DataStore())));

  /* Logic: '<S692>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S692>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S692>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_az = ((MPRD_DataStore() && (rtb_DataTypeConversion_kg >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S692>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator2_az);
    UpdateFault(12);
  }

  /* Logic: '<S692>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S692>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S692>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_bf = ((MPRD_DataStore() && (rtb_DataTypeConversion_kg <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S692>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_LogicalOperator3_bf);
    UpdateFault(13);
  }

  /* S-Function (motohawk_sfun_trigger): '<S693>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  if (BaseEngineController_LS_128_DWork.s693_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s693_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S693>/Logical Operator' incorporates:
   *  RelationalOperator: '<S693>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S693>/motohawk_data_read1'
   */
  rtb_LogicalOperator_my = (BaseEngineController_LS_128_B.s720_LogicalOperator &&
                            (APP2_AdaptADC_DataStore() <
    (APP2LowAdaptADCThresh_DataStore())));

  /* Logic: '<S693>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S693>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S693>/motohawk_data_read1'
   */
  rtb_RelationalOperator3_i2 =
    (BaseEngineController_LS_128_B.s720_LogicalOperator &&
     (APP2_AdaptADC_DataStore() > (APP2HiAdaptADCThresh_DataStore())));

  /* RelationalOperator: '<S723>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S723>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((BaseEngineController_LS_128_B.s694_Switch >
    (APP1_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP1_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator5_a);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S723>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S723>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_kv = ((BaseEngineController_LS_128_B.s694_Switch <
    (APP1_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP1_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator4_kv);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S723>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration9'
   */
  rtb_RelationalOperator_lu = ((BaseEngineController_LS_128_B.s722_MinMax >
    (APP1_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_lu);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S723>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_gq = ((BaseEngineController_LS_128_B.s722_MinMax1 >
    (APP1_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_gq);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S723>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_lg = ((BaseEngineController_LS_128_B.s722_MinMax1 <
    (APP1_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator2_lg);
    UpdateFault(7);
  }

  /* RelationalOperator: '<S723>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_f = ((BaseEngineController_LS_128_B.s722_MinMax <
    (APP1_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator1_f);
    UpdateFault(9);
  }

  /* UnitDelay: '<S729>/Unit Delay1' */
  rtb_Abs_eu = BaseEngineController_LS_128_DWork.s729_UnitDelay1_DSTATE;

  /* UnitDelay: '<S729>/Unit Delay' */
  rtb_DataTypeConversion1_g =
    BaseEngineController_LS_128_DWork.s729_UnitDelay_DSTATE;

  /* UnitDelay: '<S729>/Unit Delay3' */
  rtb_DataTypeConversion_cy =
    BaseEngineController_LS_128_DWork.s729_UnitDelay3_DSTATE;

  /* UnitDelay: '<S729>/Unit Delay4' */
  rtb_Product1_es = BaseEngineController_LS_128_DWork.s729_UnitDelay4_DSTATE;

  /* MinMax: '<S729>/MinMax1' incorporates:
   *  UnitDelay: '<S729>/Unit Delay'
   *  UnitDelay: '<S729>/Unit Delay3'
   *  UnitDelay: '<S729>/Unit Delay4'
   */
  u = (rtb_Abs_eu <= BaseEngineController_LS_128_DWork.s729_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_128_DWork.s729_UnitDelay_DSTATE) ?
    rtb_Abs_eu : BaseEngineController_LS_128_DWork.s729_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s729_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s729_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s729_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s729_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s729_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s729_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_128_B.s694_Switch) || rtIsNaN
    (BaseEngineController_LS_128_B.s694_Switch) ? u :
    BaseEngineController_LS_128_B.s694_Switch;

  /* RelationalOperator: '<S727>/Relational Operator9' incorporates:
   *  MinMax: '<S729>/MinMax1'
   */
  rtb_LogicalOperator1_j = (u > BaseEngineController_LS_128_B.s722_MinMax1);

  /* RelationalOperator: '<S727>/Relational Operator5' incorporates:
   *  MinMax: '<S729>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_k = (u <= (APP1_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S727>/Relational Operator6' incorporates:
   *  MinMax: '<S729>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_c = (u >= (APP1_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S727>/Sum2' incorporates:
   *  MinMax: '<S729>/MinMax1'
   */
  rtb_Abs_i = u - BaseEngineController_LS_128_B.s722_MinMax1;

  /* Abs: '<S727>/Abs' */
  rtb_Abs_i = fabs(rtb_Abs_i);

  /* Outputs for Enabled SubSystem: '<S727>/Store Current Position' incorporates:
   *  EnablePort: '<S730>/Enable'
   */
  /* Logic: '<S727>/Logical Operator2' incorporates:
   *  Logic: '<S727>/Logical Operator1'
   *  Logic: '<S727>/Logical Operator4'
   *  RelationalOperator: '<S727>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator1_j && rtb_RelationalOperator5_k &&
       rtb_RelationalOperator6_c && (APP1_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_i > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_k && rtb_RelationalOperator6_c &&
       (APP1_AdaptAdaptHiEnable_DataStore()) && rtb_LogicalOperator6_as)) {
    /* DataTypeConversion: '<S730>/Data Type Conversion2' incorporates:
     *  MinMax: '<S729>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_bh = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_bh = 0U;
      }
    } else {
      rtb_DataTypeConversion2_bh = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S730>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S730>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Hi */
    {
      APP1_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_bh;
    }
  }

  /* End of Logic: '<S727>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S727>/Store Current Position' */

  /* MinMax: '<S729>/MinMax' */
  u = (BaseEngineController_LS_128_B.s694_Switch >= rtb_Product1_es) || rtIsNaN
    (rtb_Product1_es) ? BaseEngineController_LS_128_B.s694_Switch :
    rtb_Product1_es;
  u = (u >= rtb_DataTypeConversion_cy) || rtIsNaN(rtb_DataTypeConversion_cy) ? u
    : rtb_DataTypeConversion_cy;
  u = (u >= rtb_DataTypeConversion1_g) || rtIsNaN(rtb_DataTypeConversion1_g) ? u
    : rtb_DataTypeConversion1_g;
  rtb_Abs_i = (u >= rtb_Abs_eu) || rtIsNaN(rtb_Abs_eu) ? u : rtb_Abs_eu;

  /* RelationalOperator: '<S728>/Relational Operator9' incorporates:
   *  MinMax: '<S729>/MinMax'
   */
  rtb_LogicalOperator6_as = (rtb_Abs_i <
    BaseEngineController_LS_128_B.s722_MinMax);

  /* RelationalOperator: '<S728>/Relational Operator5' incorporates:
   *  MinMax: '<S729>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_k = (rtb_Abs_i <= (APP1_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S728>/Relational Operator6' incorporates:
   *  MinMax: '<S729>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_c = (rtb_Abs_i >= (APP1_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S728>/Sum2' incorporates:
   *  MinMax: '<S729>/MinMax'
   */
  rtb_Abs_eu = rtb_Abs_i - BaseEngineController_LS_128_B.s722_MinMax;

  /* Abs: '<S728>/Abs' */
  rtb_Abs_eu = fabs(rtb_Abs_eu);

  /* Outputs for Enabled SubSystem: '<S728>/Store Current Position' incorporates:
   *  EnablePort: '<S731>/Enable'
   */
  /* Logic: '<S728>/Logical Operator2' incorporates:
   *  Logic: '<S728>/Logical Operator1'
   *  Logic: '<S728>/Logical Operator4'
   *  RelationalOperator: '<S728>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_as && rtb_RelationalOperator5_k &&
       rtb_RelationalOperator6_c && (APP1_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_eu > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_k && rtb_RelationalOperator6_c &&
       (APP1_AdaptAdaptLoEnable_DataStore()) && rtb_Switch1_jh)) {
    /* DataTypeConversion: '<S731>/Data Type Conversion2' incorporates:
     *  MinMax: '<S729>/MinMax'
     */
    if (rtb_Abs_i < 65536.0) {
      if (rtb_Abs_i >= 0.0) {
        rtb_DataTypeConversion2_k = (uint16_T)rtb_Abs_i;
      } else {
        rtb_DataTypeConversion2_k = 0U;
      }
    } else {
      rtb_DataTypeConversion2_k = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S731>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S731>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Low */
    {
      APP1_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_k;
    }
  }

  /* End of Logic: '<S728>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S728>/Store Current Position' */

  /* RelationalOperator: '<S740>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S740>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_go = ((BaseEngineController_LS_128_B.s695_Switch >
    (APP2_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S740>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP2_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_RelationalOperator5_go);
    UpdateFault(18);
  }

  /* RelationalOperator: '<S740>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S740>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_h = ((BaseEngineController_LS_128_B.s695_Switch <
    (APP2_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S740>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP2_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator4_h);
    UpdateFault(19);
  }

  /* RelationalOperator: '<S740>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration9'
   */
  rtb_RelationalOperator_i = ((BaseEngineController_LS_128_B.s739_MinMax >
    (APP2_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S740>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator_i);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S740>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_fw = ((BaseEngineController_LS_128_B.s739_MinMax1 >
    (APP2_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S740>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator3_fw);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S740>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_d2 = ((BaseEngineController_LS_128_B.s739_MinMax1 <
    (APP2_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S740>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator2_d2);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S740>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_dq = ((BaseEngineController_LS_128_B.s739_MinMax <
    (APP2_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S740>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator1_dq);
    UpdateFault(17);
  }

  /* UnitDelay: '<S746>/Unit Delay1' */
  rtb_Abs_eu = BaseEngineController_LS_128_DWork.s746_UnitDelay1_DSTATE;

  /* UnitDelay: '<S746>/Unit Delay' */
  rtb_Switch3_l = BaseEngineController_LS_128_DWork.s746_UnitDelay_DSTATE;

  /* UnitDelay: '<S746>/Unit Delay3' */
  rtb_Switch2_m = BaseEngineController_LS_128_DWork.s746_UnitDelay3_DSTATE;

  /* UnitDelay: '<S746>/Unit Delay4' */
  rtb_Switch1_m = BaseEngineController_LS_128_DWork.s746_UnitDelay4_DSTATE;

  /* MinMax: '<S746>/MinMax1' incorporates:
   *  UnitDelay: '<S746>/Unit Delay'
   *  UnitDelay: '<S746>/Unit Delay3'
   *  UnitDelay: '<S746>/Unit Delay4'
   */
  u = (rtb_Abs_eu <= BaseEngineController_LS_128_DWork.s746_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_128_DWork.s746_UnitDelay_DSTATE) ?
    rtb_Abs_eu : BaseEngineController_LS_128_DWork.s746_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s746_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s746_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s746_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s746_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s746_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s746_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_128_B.s695_Switch) || rtIsNaN
    (BaseEngineController_LS_128_B.s695_Switch) ? u :
    BaseEngineController_LS_128_B.s695_Switch;

  /* RelationalOperator: '<S744>/Relational Operator9' incorporates:
   *  MinMax: '<S746>/MinMax1'
   */
  rtb_LogicalOperator6_as = (u > BaseEngineController_LS_128_B.s739_MinMax1);

  /* RelationalOperator: '<S744>/Relational Operator5' incorporates:
   *  MinMax: '<S746>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_k = (u <= (APP2_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S744>/Relational Operator6' incorporates:
   *  MinMax: '<S746>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_c = (u >= (APP2_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S744>/Sum2' incorporates:
   *  MinMax: '<S746>/MinMax1'
   */
  rtb_Abs_i = u - BaseEngineController_LS_128_B.s739_MinMax1;

  /* Abs: '<S744>/Abs' */
  rtb_Abs_i = fabs(rtb_Abs_i);

  /* Outputs for Enabled SubSystem: '<S744>/Store Current Position' incorporates:
   *  EnablePort: '<S747>/Enable'
   */
  /* Logic: '<S744>/Logical Operator2' incorporates:
   *  Logic: '<S744>/Logical Operator1'
   *  Logic: '<S744>/Logical Operator4'
   *  RelationalOperator: '<S744>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S739>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S739>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator6_as && rtb_RelationalOperator5_k &&
       rtb_RelationalOperator6_c && (APP2_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_i > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_k && rtb_RelationalOperator6_c &&
       (APP2_AdaptAdaptHiEnable_DataStore()) && rtb_RelationalOperator3_i2)) {
    /* DataTypeConversion: '<S747>/Data Type Conversion2' incorporates:
     *  MinMax: '<S746>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_f = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_f = 0U;
      }
    } else {
      rtb_DataTypeConversion2_f = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S747>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S747>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Hi */
    {
      APP2_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_f;
    }
  }

  /* End of Logic: '<S744>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S744>/Store Current Position' */

  /* MinMax: '<S746>/MinMax' */
  u = (BaseEngineController_LS_128_B.s695_Switch >= rtb_Switch1_m) || rtIsNaN
    (rtb_Switch1_m) ? BaseEngineController_LS_128_B.s695_Switch : rtb_Switch1_m;
  u = (u >= rtb_Switch2_m) || rtIsNaN(rtb_Switch2_m) ? u : rtb_Switch2_m;
  u = (u >= rtb_Switch3_l) || rtIsNaN(rtb_Switch3_l) ? u : rtb_Switch3_l;
  rtb_Abs_i = (u >= rtb_Abs_eu) || rtIsNaN(rtb_Abs_eu) ? u : rtb_Abs_eu;

  /* RelationalOperator: '<S745>/Relational Operator9' incorporates:
   *  MinMax: '<S746>/MinMax'
   */
  rtb_LogicalOperator6_as = (rtb_Abs_i <
    BaseEngineController_LS_128_B.s739_MinMax);

  /* RelationalOperator: '<S745>/Relational Operator5' incorporates:
   *  MinMax: '<S746>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_k = (rtb_Abs_i <= (APP2_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S745>/Relational Operator6' incorporates:
   *  MinMax: '<S746>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_c = (rtb_Abs_i >= (APP2_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S745>/Sum2' incorporates:
   *  MinMax: '<S746>/MinMax'
   */
  rtb_Abs_eu = rtb_Abs_i - BaseEngineController_LS_128_B.s739_MinMax;

  /* Abs: '<S745>/Abs' */
  rtb_Abs_eu = fabs(rtb_Abs_eu);

  /* Outputs for Enabled SubSystem: '<S745>/Store Current Position' incorporates:
   *  EnablePort: '<S748>/Enable'
   */
  /* Logic: '<S745>/Logical Operator2' incorporates:
   *  Logic: '<S745>/Logical Operator1'
   *  Logic: '<S745>/Logical Operator4'
   *  RelationalOperator: '<S745>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S739>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S739>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_as && rtb_RelationalOperator5_k &&
       rtb_RelationalOperator6_c && (APP2_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_eu > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_k && rtb_RelationalOperator6_c &&
       (APP2_AdaptAdaptLoEnable_DataStore()) && rtb_LogicalOperator_my)) {
    /* DataTypeConversion: '<S748>/Data Type Conversion2' incorporates:
     *  MinMax: '<S746>/MinMax'
     */
    if (rtb_Abs_i < 65536.0) {
      if (rtb_Abs_i >= 0.0) {
        rtb_DataTypeConversion2_gz = (uint16_T)rtb_Abs_i;
      } else {
        rtb_DataTypeConversion2_gz = 0U;
      }
    } else {
      rtb_DataTypeConversion2_gz = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S748>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S748>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Low */
    {
      APP2_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_gz;
    }
  }

  /* End of Logic: '<S745>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S745>/Store Current Position' */

  /* RelationalOperator: '<S757>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S757>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_h = ((BaseEngineController_LS_128_B.s696_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(148, rtb_RelationalOperator5_h);
    UpdateFault(148);
  }

  /* RelationalOperator: '<S757>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S757>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_l = ((BaseEngineController_LS_128_B.s696_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(149, rtb_RelationalOperator4_l);
    UpdateFault(149);
  }

  /* RelationalOperator: '<S757>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration9'
   */
  rtb_RelationalOperator_d = ((BaseEngineController_LS_128_B.s756_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(146, rtb_RelationalOperator_d);
    UpdateFault(146);
  }

  /* RelationalOperator: '<S757>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_k0 = ((BaseEngineController_LS_128_B.s756_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(144, rtb_RelationalOperator3_k0);
    UpdateFault(144);
  }

  /* RelationalOperator: '<S757>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ks = ((BaseEngineController_LS_128_B.s756_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(145, rtb_RelationalOperator2_ks);
    UpdateFault(145);
  }

  /* RelationalOperator: '<S757>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_k3 = ((BaseEngineController_LS_128_B.s756_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(147, rtb_RelationalOperator1_k3);
    UpdateFault(147);
  }

  /* UnitDelay: '<S763>/Unit Delay1' */
  rtb_Abs_eu = BaseEngineController_LS_128_DWork.s763_UnitDelay1_DSTATE;

  /* UnitDelay: '<S763>/Unit Delay' */
  rtb_Switch_g4 = BaseEngineController_LS_128_DWork.s763_UnitDelay_DSTATE;

  /* UnitDelay: '<S763>/Unit Delay3' */
  rtb_Switch4_k = BaseEngineController_LS_128_DWork.s763_UnitDelay3_DSTATE;

  /* UnitDelay: '<S763>/Unit Delay4' */
  rtb_Multiplyby10ifnotyetenabled_a =
    BaseEngineController_LS_128_DWork.s763_UnitDelay4_DSTATE;

  /* MinMax: '<S763>/MinMax1' incorporates:
   *  UnitDelay: '<S763>/Unit Delay'
   *  UnitDelay: '<S763>/Unit Delay3'
   *  UnitDelay: '<S763>/Unit Delay4'
   */
  u = (rtb_Abs_eu <= BaseEngineController_LS_128_DWork.s763_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_128_DWork.s763_UnitDelay_DSTATE) ?
    rtb_Abs_eu : BaseEngineController_LS_128_DWork.s763_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s763_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s763_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s763_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s763_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s763_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s763_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_128_B.s696_Switch) || rtIsNaN
    (BaseEngineController_LS_128_B.s696_Switch) ? u :
    BaseEngineController_LS_128_B.s696_Switch;

  /* RelationalOperator: '<S761>/Relational Operator9' incorporates:
   *  MinMax: '<S763>/MinMax1'
   */
  rtb_LogicalOperator6_as = (u > BaseEngineController_LS_128_B.s756_MinMax1);

  /* RelationalOperator: '<S761>/Relational Operator5' incorporates:
   *  MinMax: '<S763>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_k = (u <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S761>/Relational Operator6' incorporates:
   *  MinMax: '<S763>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_c = (u >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S761>/Sum2' incorporates:
   *  MinMax: '<S763>/MinMax1'
   */
  rtb_Abs_i = u - BaseEngineController_LS_128_B.s756_MinMax1;

  /* Abs: '<S761>/Abs' */
  rtb_Abs_i = fabs(rtb_Abs_i);

  /* Outputs for Enabled SubSystem: '<S761>/Store Current Position' incorporates:
   *  EnablePort: '<S764>/Enable'
   */
  /* Logic: '<S761>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S761>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_as && rtb_RelationalOperator5_k &&
      rtb_RelationalOperator6_c && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_i
       > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S764>/Data Type Conversion2' incorporates:
     *  MinMax: '<S763>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_m = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_m = 0U;
      }
    } else {
      rtb_DataTypeConversion2_m = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S764>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S764>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_m;
    }
  }

  /* End of Logic: '<S761>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S761>/Store Current Position' */

  /* MinMax: '<S763>/MinMax' */
  u = (BaseEngineController_LS_128_B.s696_Switch >=
       rtb_Multiplyby10ifnotyetenabled_a) || rtIsNaN
    (rtb_Multiplyby10ifnotyetenabled_a) ?
    BaseEngineController_LS_128_B.s696_Switch :
    rtb_Multiplyby10ifnotyetenabled_a;
  u = (u >= rtb_Switch4_k) || rtIsNaN(rtb_Switch4_k) ? u : rtb_Switch4_k;
  u = (u >= rtb_Switch_g4) || rtIsNaN(rtb_Switch_g4) ? u : rtb_Switch_g4;
  rtb_Abs_i = (u >= rtb_Abs_eu) || rtIsNaN(rtb_Abs_eu) ? u : rtb_Abs_eu;

  /* RelationalOperator: '<S762>/Relational Operator9' incorporates:
   *  MinMax: '<S763>/MinMax'
   */
  rtb_LogicalOperator6_as = (rtb_Abs_i <
    BaseEngineController_LS_128_B.s756_MinMax);

  /* RelationalOperator: '<S762>/Relational Operator5' incorporates:
   *  MinMax: '<S763>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_k = (rtb_Abs_i <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S762>/Relational Operator6' incorporates:
   *  MinMax: '<S763>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_c = (rtb_Abs_i >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S762>/Sum2' incorporates:
   *  MinMax: '<S763>/MinMax'
   */
  rtb_Abs_eu = rtb_Abs_i - BaseEngineController_LS_128_B.s756_MinMax;

  /* Abs: '<S762>/Abs' */
  rtb_Abs_eu = fabs(rtb_Abs_eu);

  /* Logic: '<S762>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S762>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_as = (rtb_LogicalOperator6_as &&
    rtb_RelationalOperator5_k && rtb_RelationalOperator6_c &&
    (TPS1AdaptLoEnable_DataStore()) && (rtb_Abs_eu > (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S762>/Store Current Position' incorporates:
   *  EnablePort: '<S765>/Enable'
   */
  /* Logic: '<S762>/Logical Operator2' incorporates:
   *  Logic: '<S762>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S486>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_as || (rtb_RelationalOperator5_k &&
       rtb_RelationalOperator6_c && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S765>/Data Type Conversion2' incorporates:
     *  MinMax: '<S763>/MinMax'
     */
    if (rtb_Abs_i < 65536.0) {
      if (rtb_Abs_i >= 0.0) {
        rtb_DataTypeConversion2_gq = (uint16_T)rtb_Abs_i;
      } else {
        rtb_DataTypeConversion2_gq = 0U;
      }
    } else {
      rtb_DataTypeConversion2_gq = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S765>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S765>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_gq;
    }
  }

  /* End of Logic: '<S762>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S762>/Store Current Position' */

  /* RelationalOperator: '<S774>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S774>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_h4 = ((BaseEngineController_LS_128_B.s697_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S774>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(154, rtb_RelationalOperator5_h4);
    UpdateFault(154);
  }

  /* RelationalOperator: '<S774>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S774>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_o = ((BaseEngineController_LS_128_B.s697_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S774>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(155, rtb_RelationalOperator4_o);
    UpdateFault(155);
  }

  /* RelationalOperator: '<S774>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration9'
   */
  rtb_RelationalOperator_mz = ((BaseEngineController_LS_128_B.s773_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S774>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(152, rtb_RelationalOperator_mz);
    UpdateFault(152);
  }

  /* RelationalOperator: '<S774>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_md = ((BaseEngineController_LS_128_B.s773_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S774>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(150, rtb_RelationalOperator3_md);
    UpdateFault(150);
  }

  /* RelationalOperator: '<S774>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ats = ((BaseEngineController_LS_128_B.s773_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S774>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(151, rtb_RelationalOperator2_ats);
    UpdateFault(151);
  }

  /* RelationalOperator: '<S774>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_dg = ((BaseEngineController_LS_128_B.s773_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S774>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(153, rtb_RelationalOperator1_dg);
    UpdateFault(153);
  }

  /* UnitDelay: '<S780>/Unit Delay1' */
  rtb_Abs_eu = BaseEngineController_LS_128_DWork.s780_UnitDelay1_DSTATE;

  /* UnitDelay: '<S780>/Unit Delay' */
  rtb_Switch_l = BaseEngineController_LS_128_DWork.s780_UnitDelay_DSTATE;

  /* UnitDelay: '<S780>/Unit Delay3' */
  rtb_DataTypeConversion_j =
    BaseEngineController_LS_128_DWork.s780_UnitDelay3_DSTATE;

  /* UnitDelay: '<S780>/Unit Delay4' */
  rtb_APP2 = BaseEngineController_LS_128_DWork.s780_UnitDelay4_DSTATE;

  /* MinMax: '<S780>/MinMax1' incorporates:
   *  UnitDelay: '<S780>/Unit Delay'
   *  UnitDelay: '<S780>/Unit Delay3'
   *  UnitDelay: '<S780>/Unit Delay4'
   */
  u = (rtb_Abs_eu <= BaseEngineController_LS_128_DWork.s780_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_128_DWork.s780_UnitDelay_DSTATE) ?
    rtb_Abs_eu : BaseEngineController_LS_128_DWork.s780_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s780_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s780_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s780_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_128_DWork.s780_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_128_DWork.s780_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_128_DWork.s780_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_128_B.s697_Switch) || rtIsNaN
    (BaseEngineController_LS_128_B.s697_Switch) ? u :
    BaseEngineController_LS_128_B.s697_Switch;

  /* RelationalOperator: '<S778>/Relational Operator9' incorporates:
   *  MinMax: '<S780>/MinMax1'
   */
  rtb_LogicalOperator6_as = (u > BaseEngineController_LS_128_B.s773_MinMax1);

  /* RelationalOperator: '<S778>/Relational Operator5' incorporates:
   *  MinMax: '<S780>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_k = (u <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S778>/Relational Operator6' incorporates:
   *  MinMax: '<S780>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_c = (u >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S778>/Sum2' incorporates:
   *  MinMax: '<S780>/MinMax1'
   */
  rtb_Abs_i = u - BaseEngineController_LS_128_B.s773_MinMax1;

  /* Abs: '<S778>/Abs' */
  rtb_Abs_i = fabs(rtb_Abs_i);

  /* Outputs for Enabled SubSystem: '<S778>/Store Current Position' incorporates:
   *  EnablePort: '<S781>/Enable'
   */
  /* Logic: '<S778>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S778>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S773>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S773>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_as && rtb_RelationalOperator5_k &&
      rtb_RelationalOperator6_c && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_i
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S781>/Data Type Conversion2' incorporates:
     *  MinMax: '<S780>/MinMax1'
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

    /* End of DataTypeConversion: '<S781>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S781>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_i;
    }
  }

  /* End of Logic: '<S778>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S778>/Store Current Position' */

  /* MinMax: '<S780>/MinMax' */
  u = (BaseEngineController_LS_128_B.s697_Switch >= rtb_APP2) || rtIsNaN
    (rtb_APP2) ? BaseEngineController_LS_128_B.s697_Switch : rtb_APP2;
  u = (u >= rtb_DataTypeConversion_j) || rtIsNaN(rtb_DataTypeConversion_j) ? u :
    rtb_DataTypeConversion_j;
  u = (u >= rtb_Switch_l) || rtIsNaN(rtb_Switch_l) ? u : rtb_Switch_l;
  rtb_Abs_i = (u >= rtb_Abs_eu) || rtIsNaN(rtb_Abs_eu) ? u : rtb_Abs_eu;

  /* RelationalOperator: '<S779>/Relational Operator9' incorporates:
   *  MinMax: '<S780>/MinMax'
   */
  rtb_LogicalOperator6_as = (rtb_Abs_i <
    BaseEngineController_LS_128_B.s773_MinMax);

  /* RelationalOperator: '<S779>/Relational Operator5' incorporates:
   *  MinMax: '<S780>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_k = (rtb_Abs_i <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S779>/Relational Operator6' incorporates:
   *  MinMax: '<S780>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_c = (rtb_Abs_i >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S779>/Sum2' incorporates:
   *  MinMax: '<S780>/MinMax'
   */
  rtb_Abs_eu = rtb_Abs_i - BaseEngineController_LS_128_B.s773_MinMax;

  /* Abs: '<S779>/Abs' */
  rtb_Abs_eu = fabs(rtb_Abs_eu);

  /* Outputs for Enabled SubSystem: '<S779>/Store Current Position' incorporates:
   *  EnablePort: '<S782>/Enable'
   */
  /* Logic: '<S779>/Logical Operator2' incorporates:
   *  Logic: '<S779>/Logical Operator1'
   *  Logic: '<S779>/Logical Operator4'
   *  RelationalOperator: '<S779>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S773>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S773>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S486>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_as && rtb_RelationalOperator5_k &&
       rtb_RelationalOperator6_c && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_eu > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_k && rtb_RelationalOperator6_c &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S782>/Data Type Conversion2' incorporates:
     *  MinMax: '<S780>/MinMax'
     */
    if (rtb_Abs_i < 65536.0) {
      if (rtb_Abs_i >= 0.0) {
        rtb_DataTypeConversion2_bf = (uint16_T)rtb_Abs_i;
      } else {
        rtb_DataTypeConversion2_bf = 0U;
      }
    } else {
      rtb_DataTypeConversion2_bf = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S782>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S782>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_bf;
    }
  }

  /* End of Logic: '<S779>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S779>/Store Current Position' */

  /* Update for S-Function (motohawk_sfun_dout): '<S790>/motohawk_dout' */

  /* S-Function Block: DOut10176p0004 */
  {
    DOut10176p0004_DiscreteOutput_Set
      (BaseEngineController_LS_128_B.s800_LogicalOperator);
  }

  /* Update for UnitDelay: '<S692>/Unit Delay' incorporates:
   *  MinMax: '<S715>/MinMax1'
   */
  BaseEngineController_LS_128_DWork.s692_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S717>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s717_UnitDelay_DSTATE = rtb_Sum1_fj;

  /* Update for UnitDelay: '<S749>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s749_UnitDelay_DSTATE = rtb_Sum1_j3;

  /* Update for UnitDelay: '<S742>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s742_UnitDelay1_DSTATE = rtb_Merge_cq;

  /* Update for UnitDelay: '<S690>/Unit Delay' incorporates:
   *  MinMax: '<S703>/MinMax1'
   */
  BaseEngineController_LS_128_DWork.s690_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S705>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s705_UnitDelay_DSTATE = rtb_Sum1_gk;

  /* Update for UnitDelay: '<S732>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s732_UnitDelay_DSTATE = rtb_Sum1_gn;

  /* Update for UnitDelay: '<S725>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s725_UnitDelay1_DSTATE = rtb_Merge_k;

  /* Update for UnitDelay: '<S558>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s558_UnitDelay1_DSTATE = rtb_Merge_fr;

  /* Update for UnitDelay: '<S572>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s572_UnitDelay_DSTATE = rtb_Sum1_ha;

  /* Update for UnitDelay: '<S447>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s447_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s468_State;

  /* Update for UnitDelay: '<S557>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s557_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s557_Sum1;

  /* Update for UnitDelay: '<S766>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s766_UnitDelay_DSTATE = rtb_Sum1_bc;

  /* Update for UnitDelay: '<S759>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s759_UnitDelay1_DSTATE = rtb_Merge_p;

  /* Update for UnitDelay: '<S783>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s783_UnitDelay_DSTATE = rtb_Sum1_ly;

  /* Update for UnitDelay: '<S776>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s776_UnitDelay1_DSTATE = rtb_Merge_ho;

  /* Update for UnitDelay: '<S584>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s584_UnitDelay_DSTATE = rtb_Sum2_is;

  /* Update for UnitDelay: '<S559>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s559_UnitDelay1_DSTATE = rtb_Merge_n;

  /* Update for UnitDelay: '<S583>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s583_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for UnitDelay: '<S581>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s581_UnitDelay_DSTATE = rtb_Merge_n;

  /* Update for UnitDelay: '<S581>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s581_UnitDelay1_DSTATE = rtb_UnitDelay_cwr;

  /* Update for UnitDelay: '<S581>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s581_UnitDelay2_DSTATE = rtb_UnitDelay1_k;

  /* Update for UnitDelay: '<S513>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s513_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s513_Switch;

  /* Update for UnitDelay: '<S546>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s546_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s541_Merge;

  /* Update for UnitDelay: '<S512>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s512_UnitDelay_DSTATE = rtb_Merge_fv;

  /* Update for UnitDelay: '<S543>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s543_UnitDelay_DSTATE = rtb_Sum1_fs;

  /* Update for UnitDelay: '<S513>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s513_UnitDelay1_DSTATE =
    BaseEngineController_LS_128_B.s541_Merge;

  /* Update for UnitDelay: '<S513>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s513_UnitDelay2_DSTATE =
    rtb_LogicalOperator1_ow;

  /* Update for Memory: '<S547>/Memory' */
  BaseEngineController_LS_128_DWork.s547_Memory_PreviousInput = rtb_Logic_b[0];

  /* Update for UnitDelay: '<S513>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s513_UnitDelay3_DSTATE =
    BaseEngineController_LS_128_B.s541_Merge;

  /* Update for UnitDelay: '<S450>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s450_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s488_MultiportSwitch;

  /* Update for UnitDelay: '<S489>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s489_UnitDelay1_DSTATE = rtb_Merge_o;

  /* Update for UnitDelay: '<S496>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s496_UnitDelay_DSTATE = rtb_Sum1_gr;

  /* Update for UnitDelay: '<S490>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s490_UnitDelay1_DSTATE = rtb_Merge_g;

  /* Update for UnitDelay: '<S504>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s504_UnitDelay_DSTATE = rtb_Sum1_f1;

  /* Update for UnitDelay: '<S450>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s450_UnitDelay1_DSTATE =
    BaseEngineController_LS_128_B.s503_Merge;

  /* Update for UnitDelay: '<S566>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s566_UnitDelay1_DSTATE = rtb_Merge_g0;

  /* Update for UnitDelay: '<S635>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s635_UnitDelay_DSTATE = rtb_Sum1_oj;

  /* Update for UnitDelay: '<S561>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s561_UnitDelay1_DSTATE = rtb_Merge_e;

  /* Update for UnitDelay: '<S601>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s601_UnitDelay_DSTATE = rtb_Sum1_g1;

  /* Update for UnitDelay: '<S562>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s562_UnitDelay1_DSTATE = rtb_Merge_fo;

  /* Update for UnitDelay: '<S407>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s407_UnitDelay_DSTATE = rtb_Merge_hqf;

  /* Update for UnitDelay: '<S510>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s510_UnitDelay_DSTATE = rtb_Merge_fh;

  /* Update for UnitDelay: '<S529>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s529_UnitDelay_DSTATE = rtb_Sum1_n4;

  /* Update for UnitDelay: '<S423>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s423_UnitDelay2_DSTATE =
    rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S426>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s426_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s426_Sum1;

  /* Update for UnitDelay: '<S424>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s424_UnitDelay2_DSTATE = rtb_UnitDelay1_m;

  /* Update for UnitDelay: '<S429>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s429_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s429_Sum1;

  /* Update for UnitDelay: '<S465>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s465_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s557_Sum1;

  /* Update for UnitDelay: '<S467>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s467_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s467_Sum1;

  /* Update for UnitDelay: '<S609>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s609_UnitDelay_DSTATE = rtb_Sum1_du;

  /* Update for UnitDelay: '<S421>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s421_UnitDelay_DSTATE =
    rtb_LogicalOperator_n;

  /* Update for UnitDelay: '<S417>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s417_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s417_Sum1;

  /* Update for UnitDelay: '<S819>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s819_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s819_Sum1;

  /* Update for UnitDelay: '<S817>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s817_UnitDelay_DSTATE = rtb_Sum1_nn;

  /* Update for UnitDelay: '<S823>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s823_UnitDelay2_DSTATE = rtb_UnitDelay1_ct;

  /* Update for UnitDelay: '<S823>/Unit Delay5' */
  BaseEngineController_LS_128_DWork.s823_UnitDelay5_DSTATE =
    BaseEngineController_LS_128_B.s488_DataValidState;

  /* Update for UnitDelay: '<S829>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s829_UnitDelay_DSTATE = rtb_Sum1_p;

  /* Update for UnitDelay: '<S824>/Unit Delay2' */
  BaseEngineController_LS_128_DWork.s824_UnitDelay2_DSTATE = rtb_UnitDelay1_gb;

  /* Update for UnitDelay: '<S824>/Unit Delay5' */
  BaseEngineController_LS_128_DWork.s824_UnitDelay5_DSTATE =
    BaseEngineController_LS_128_B.s488_DataValidState_a;

  /* Update for UnitDelay: '<S832>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s832_UnitDelay_DSTATE = rtb_Sum1_fy;

  /* Update for UnitDelay: '<S825>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s825_UnitDelay_DSTATE = rtb_Sum1_bv;

  /* Update for UnitDelay: '<S826>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s826_UnitDelay_DSTATE = rtb_Sum1_oe;

  /* Update for UnitDelay: '<S827>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s827_UnitDelay_DSTATE = rtb_Sum1_jq;

  /* Update for UnitDelay: '<S823>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s823_UnitDelay1_DSTATE = rtb_UnitDelay3_a;

  /* Update for UnitDelay: '<S823>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s823_UnitDelay3_DSTATE = rtb_UnitDelay4_o;

  /* Update for UnitDelay: '<S823>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s823_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s488_MultiportSwitch;

  /* Update for UnitDelay: '<S824>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s824_UnitDelay1_DSTATE = rtb_UnitDelay3_i;

  /* Update for UnitDelay: '<S824>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s824_UnitDelay3_DSTATE = rtb_UnitDelay4_a;

  /* Update for UnitDelay: '<S824>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s824_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s503_Merge;

  /* Update for UnitDelay: '<S840>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s840_UnitDelay_DSTATE = rtb_Sum1_in;

  /* Update for UnitDelay: '<S560>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s560_UnitDelay1_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S593>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s593_UnitDelay_DSTATE = rtb_Sum1_a5;

  /* Update for UnitDelay: '<S841>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s841_UnitDelay_DSTATE = rtb_Sum1_kq;

  /* Update for UnitDelay: '<S564>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s564_UnitDelay1_DSTATE = rtb_Merge_oo;

  /* Update for UnitDelay: '<S619>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s619_UnitDelay_DSTATE = rtb_Sum1_c0;

  /* Update for UnitDelay: '<S842>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s842_UnitDelay_DSTATE = rtb_Sum1_mk;

  /* Update for UnitDelay: '<S844>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s844_UnitDelay_DSTATE = rtb_Sum1_j4;

  /* Update for UnitDelay: '<S848>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s848_UnitDelay_DSTATE = rtb_Sum1_jh;

  /* Update for UnitDelay: '<S847>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s847_UnitDelay_DSTATE = rtb_Sum1_f3;

  /* Update for S-Function (motohawk_sfun_pwm): '<S794>/motohawk_pwm' */

  /* S-Function Block: FAN1Pin_PWM_PWMOutput */
  FAN1Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_o,
    rtb_DataTypeConversion3_j, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S794>/motohawk_pwm1' */

  /* S-Function Block: FAN2Pin_PWM_PWMOutput */
  FAN2Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_p,
    rtb_DataTypeConversion3_p, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S795>/motohawk_dout' */

  /* S-Function Block: DOut11001p0004 */
  {
    DOut11001p0004_DiscreteOutput_Set
      (BaseEngineController_LS_128_B.s887_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S796>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_i,
    rtb_DataTypeConversion4_i, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S797>/motohawk_pwm' */

  /* S-Function Block: IAC_PPin_PWMOutput */
  IAC_PPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_j,
    rtb_DataTypeConversion3_m, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S797>/motohawk_pwm1' */

  /* S-Function Block: IAC_SPin_PWMOutput */
  IAC_SPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_g,
    rtb_DataTypeConversion3_e, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S799>/motohawk_pwm' */

  /* S-Function Block: WASTEGATE_PWMOutput */
  WASTEGATE_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_pa,
    rtb_DataTypeConversion3_n, 0, 1);

  /* Update for UnitDelay: '<S479>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s479_UnitDelay_DSTATE = rtb_Switch_oq;

  /* Update for UnitDelay: '<S565>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s565_UnitDelay1_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S627>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s627_UnitDelay_DSTATE = rtb_Sum1_ou;

  /* Update for UnitDelay: '<S423>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s423_UnitDelay1_DSTATE =
    rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S423>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s423_UnitDelay3_DSTATE =
    rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S423>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s423_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s557_Sum1;

  /* Update for UnitDelay: '<S424>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s424_UnitDelay1_DSTATE = rtb_UnitDelay3_n;

  /* Update for UnitDelay: '<S424>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s424_UnitDelay3_DSTATE = rtb_UnitDelay4_b;

  /* Update for UnitDelay: '<S424>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s424_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s600_Merge;

  /* Update for UnitDelay: '<S729>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s729_UnitDelay1_DSTATE =
    rtb_DataTypeConversion1_g;

  /* Update for UnitDelay: '<S729>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s729_UnitDelay_DSTATE =
    rtb_DataTypeConversion_cy;

  /* Update for UnitDelay: '<S729>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s729_UnitDelay3_DSTATE = rtb_Product1_es;

  /* Update for UnitDelay: '<S729>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s729_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s694_Switch;

  /* Update for UnitDelay: '<S746>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s746_UnitDelay1_DSTATE = rtb_Switch3_l;

  /* Update for UnitDelay: '<S746>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s746_UnitDelay_DSTATE = rtb_Switch2_m;

  /* Update for UnitDelay: '<S746>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s746_UnitDelay3_DSTATE = rtb_Switch1_m;

  /* Update for UnitDelay: '<S746>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s746_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s695_Switch;

  /* Update for UnitDelay: '<S763>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s763_UnitDelay1_DSTATE = rtb_Switch_g4;

  /* Update for UnitDelay: '<S763>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s763_UnitDelay_DSTATE = rtb_Switch4_k;

  /* Update for UnitDelay: '<S763>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s763_UnitDelay3_DSTATE =
    rtb_Multiplyby10ifnotyetenabled_a;

  /* Update for UnitDelay: '<S763>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s763_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s696_Switch;

  /* Update for UnitDelay: '<S780>/Unit Delay1' */
  BaseEngineController_LS_128_DWork.s780_UnitDelay1_DSTATE = rtb_Switch_l;

  /* Update for UnitDelay: '<S780>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s780_UnitDelay_DSTATE =
    rtb_DataTypeConversion_j;

  /* Update for UnitDelay: '<S780>/Unit Delay3' */
  BaseEngineController_LS_128_DWork.s780_UnitDelay3_DSTATE = rtb_APP2;

  /* Update for UnitDelay: '<S780>/Unit Delay4' */
  BaseEngineController_LS_128_DWork.s780_UnitDelay4_DSTATE =
    BaseEngineController_LS_128_B.s697_Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
