/*
 * File: BaseEngineController_LS_IdleStateMachine.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2001
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 05 00:03:01 2021
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_IdleStateMachine.h"

/* Include model header file for global data */
#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S249>/IdleStateMachine' */
#define BaseEngineController_LS_IN_Flaring (1U)
#define BaseEngineController_LS_IN_OffIdle (2U)
#define BaseEngineController_LS_IN_OnIdle (3U)

/* Initial conditions for atomic system: '<S249>/IdleStateMachine' */
void BaseEngineController_LS_IdleStateMachine_Init(void)
{
  BaseEngineController_LS_DWork.s264_is_active_c12_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS = 0U;
  BaseEngineController_LS_B.s264_IdleState = 0U;
}

/* Output and update for atomic system: '<S249>/IdleStateMachine' */
void BaseEngineController_LS_IdleStateMachine(void)
{
  /* Gateway: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  /* During: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  if (BaseEngineController_LS_DWork.s264_is_active_c12_BaseEngineController_LS ==
      0) {
    /* Entry: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
    BaseEngineController_LS_DWork.s264_is_active_c12_BaseEngineController_LS =
      1U;

    /* Transition: '<S264>:4' */
    BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS =
      BaseEngineController_LS_IN_Flaring;

    /* Entry 'Flaring': '<S264>:2' */
    BaseEngineController_LS_B.s264_IdleState = 1U;
  } else {
    switch (BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS) {
     case BaseEngineController_LS_IN_Flaring:
      /* During 'Flaring': '<S264>:2' */
      if (BaseEngineController_LS_B.s249_LogicalOperator ||
          (!(EnableRPMFalling_DataStore()))) {
        /* Transition: '<S264>:5' */
        BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS =
          BaseEngineController_LS_IN_OffIdle;

        /* Entry 'OffIdle': '<S264>:1' */
        BaseEngineController_LS_B.s264_IdleState = 3U;
      } else {
        if (BaseEngineController_LS_B.s263_RelationalOperator &&
            BaseEngineController_LS_B.s249_RelationalOperator1) {
          /* Transition: '<S264>:7' */
          BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS =
            BaseEngineController_LS_IN_OnIdle;

          /* Entry 'OnIdle': '<S264>:3' */
          BaseEngineController_LS_B.s264_IdleState = 2U;
        }
      }
      break;

     case BaseEngineController_LS_IN_OffIdle:
      /* During 'OffIdle': '<S264>:1' */
      if (((EnableRPMFalling_DataStore()) &&
           (BaseEngineController_LS_B.s249_RelationalOperator3 ||
            (BaseEngineController_LS_B.s249_RelationalOperator &&
             BaseEngineController_LS_B.s249_RelationalOperator1))) ||
          BaseEngineController_LS_B.s249_RelationalOperator5) {
        /* Transition: '<S264>:6' */
        BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS =
          BaseEngineController_LS_IN_OnIdle;

        /* Entry 'OnIdle': '<S264>:3' */
        BaseEngineController_LS_B.s264_IdleState = 2U;
      }
      break;

     case BaseEngineController_LS_IN_OnIdle:
      /* During 'OnIdle': '<S264>:3' */
      if ((!BaseEngineController_LS_B.s249_RelationalOperator3) &&
          (BaseEngineController_LS_B.s249_LogicalOperator ||
           (!(EnableRPMFalling_DataStore())))) {
        /* Transition: '<S264>:8' */
        BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS =
          BaseEngineController_LS_IN_OffIdle;

        /* Entry 'OffIdle': '<S264>:1' */
        BaseEngineController_LS_B.s264_IdleState = 3U;
      }
      break;

     default:
      /* Transition: '<S264>:4' */
      BaseEngineController_LS_DWork.s264_is_c12_BaseEngineController_LS =
        BaseEngineController_LS_IN_Flaring;

      /* Entry 'Flaring': '<S264>:2' */
      BaseEngineController_LS_B.s264_IdleState = 1U;
      break;
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
