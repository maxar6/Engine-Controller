/*
 * File: BaseEngineController_LS_112_IdleStateMachine.c
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

#include "BaseEngineController_LS_112_IdleStateMachine.h"

/* Include model header file for global data */
#include "BaseEngineController_LS_112.h"
#include "BaseEngineController_LS_112_private.h"

/* Named constants for Stateflow: '<S206>/IdleStateMachine' */
#define BaseEngineController_LS_112_IN_Flaring (1U)
#define BaseEngineController_LS_112_IN_OffIdle (2U)
#define BaseEngineController_LS_112_IN_OnIdle (3U)

/* Initial conditions for atomic system: '<S206>/IdleStateMachine' */
void BaseEngineController_LS_112_IdleStateMachine_Init(void)
{
  BaseEngineController_LS_112_DWork.s221_is_active_c12_BaseEngineController_LS_112
    = 0U;
  BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112 = 0U;
  BaseEngineController_LS_112_B.s221_IdleState = 0U;
}

/* Output and update for atomic system: '<S206>/IdleStateMachine' */
void BaseEngineController_LS_112_IdleStateMachine(void)
{
  /* Gateway: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  /* During: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  if (BaseEngineController_LS_112_DWork.s221_is_active_c12_BaseEngineController_LS_112
      == 0) {
    /* Entry: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
    BaseEngineController_LS_112_DWork.s221_is_active_c12_BaseEngineController_LS_112
      = 1U;

    /* Transition: '<S221>:4' */
    BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112 =
      BaseEngineController_LS_112_IN_Flaring;

    /* Entry 'Flaring': '<S221>:2' */
    BaseEngineController_LS_112_B.s221_IdleState = 1U;
  } else {
    switch
      (BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112)
    {
     case BaseEngineController_LS_112_IN_Flaring:
      /* During 'Flaring': '<S221>:2' */
      if (BaseEngineController_LS_112_B.s206_LogicalOperator ||
          (!(EnableRPMFalling_DataStore()))) {
        /* Transition: '<S221>:5' */
        BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112
          = BaseEngineController_LS_112_IN_OffIdle;

        /* Entry 'OffIdle': '<S221>:1' */
        BaseEngineController_LS_112_B.s221_IdleState = 3U;
      } else {
        if (BaseEngineController_LS_112_B.s220_RelationalOperator &&
            BaseEngineController_LS_112_B.s206_RelationalOperator1) {
          /* Transition: '<S221>:7' */
          BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_OnIdle;

          /* Entry 'OnIdle': '<S221>:3' */
          BaseEngineController_LS_112_B.s221_IdleState = 2U;
        }
      }
      break;

     case BaseEngineController_LS_112_IN_OffIdle:
      /* During 'OffIdle': '<S221>:1' */
      if (((EnableRPMFalling_DataStore()) &&
           (BaseEngineController_LS_112_B.s206_RelationalOperator3 ||
            (BaseEngineController_LS_112_B.s206_RelationalOperator &&
             BaseEngineController_LS_112_B.s206_RelationalOperator1))) ||
          BaseEngineController_LS_112_B.s206_RelationalOperator5) {
        /* Transition: '<S221>:6' */
        BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112
          = BaseEngineController_LS_112_IN_OnIdle;

        /* Entry 'OnIdle': '<S221>:3' */
        BaseEngineController_LS_112_B.s221_IdleState = 2U;
      }
      break;

     case BaseEngineController_LS_112_IN_OnIdle:
      /* During 'OnIdle': '<S221>:3' */
      if ((!BaseEngineController_LS_112_B.s206_RelationalOperator3) &&
          (BaseEngineController_LS_112_B.s206_LogicalOperator ||
           (!(EnableRPMFalling_DataStore())))) {
        /* Transition: '<S221>:8' */
        BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112
          = BaseEngineController_LS_112_IN_OffIdle;

        /* Entry 'OffIdle': '<S221>:1' */
        BaseEngineController_LS_112_B.s221_IdleState = 3U;
      }
      break;

     default:
      /* Transition: '<S221>:4' */
      BaseEngineController_LS_112_DWork.s221_is_c12_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_Flaring;

      /* Entry 'Flaring': '<S221>:2' */
      BaseEngineController_LS_112_B.s221_IdleState = 1U;
      break;
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
