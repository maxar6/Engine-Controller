/*
 * File: BaseEngineController_A02_bak2_IdleStateMachine.c
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

#include "BaseEngineController_A02_bak2_IdleStateMachine.h"

/* Include model header file for global data */
#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

/* Named constants for Stateflow: '<S235>/IdleStateMachine' */
#define BaseEngineController_A02_bak2_IN_Flaring (1U)
#define BaseEngineController_A02_bak2_IN_OffIdle (2U)
#define BaseEngineController_A02_bak2_IN_OnIdle (3U)

/* Initial conditions for atomic system: '<S235>/IdleStateMachine' */
void BaseEngineController_A02_bak2_IdleStateMachine_Init(void)
{
  BaseEngineController_A02_bak2_DWork.s250_is_active_c12_BaseEngineController_A02_bak2
    = 0U;
  BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2 =
    0U;
  BaseEngineController_A02_bak2_B.s250_IdleState = 0U;
}

/* Output and update for atomic system: '<S235>/IdleStateMachine' */
void BaseEngineController_A02_bak2_IdleStateMachine(void)
{
  /* Gateway: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  /* During: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  if (BaseEngineController_A02_bak2_DWork.s250_is_active_c12_BaseEngineController_A02_bak2
      == 0) {
    /* Entry: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
    BaseEngineController_A02_bak2_DWork.s250_is_active_c12_BaseEngineController_A02_bak2
      = 1U;

    /* Transition: '<S250>:4' */
    BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2
      = BaseEngineController_A02_bak2_IN_Flaring;

    /* Entry 'Flaring': '<S250>:2' */
    BaseEngineController_A02_bak2_B.s250_IdleState = 1U;
  } else {
    switch
      (BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2)
    {
     case BaseEngineController_A02_bak2_IN_Flaring:
      /* During 'Flaring': '<S250>:2' */
      if (BaseEngineController_A02_bak2_B.s235_LogicalOperator ||
          (!(EnableRPMFalling_DataStore()))) {
        /* Transition: '<S250>:5' */
        BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_OffIdle;

        /* Entry 'OffIdle': '<S250>:1' */
        BaseEngineController_A02_bak2_B.s250_IdleState = 3U;
      } else {
        if (BaseEngineController_A02_bak2_B.s249_RelationalOperator &&
            BaseEngineController_A02_bak2_B.s235_RelationalOperator1) {
          /* Transition: '<S250>:7' */
          BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_OnIdle;

          /* Entry 'OnIdle': '<S250>:3' */
          BaseEngineController_A02_bak2_B.s250_IdleState = 2U;
        }
      }
      break;

     case BaseEngineController_A02_bak2_IN_OffIdle:
      /* During 'OffIdle': '<S250>:1' */
      if (((EnableRPMFalling_DataStore()) &&
           (BaseEngineController_A02_bak2_B.s235_RelationalOperator3 ||
            (BaseEngineController_A02_bak2_B.s235_RelationalOperator &&
             BaseEngineController_A02_bak2_B.s235_RelationalOperator1))) ||
          BaseEngineController_A02_bak2_B.s235_RelationalOperator5) {
        /* Transition: '<S250>:6' */
        BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_OnIdle;

        /* Entry 'OnIdle': '<S250>:3' */
        BaseEngineController_A02_bak2_B.s250_IdleState = 2U;
      }
      break;

     case BaseEngineController_A02_bak2_IN_OnIdle:
      /* During 'OnIdle': '<S250>:3' */
      if ((!BaseEngineController_A02_bak2_B.s235_RelationalOperator3) &&
          (BaseEngineController_A02_bak2_B.s235_LogicalOperator ||
           (!(EnableRPMFalling_DataStore())))) {
        /* Transition: '<S250>:8' */
        BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_OffIdle;

        /* Entry 'OffIdle': '<S250>:1' */
        BaseEngineController_A02_bak2_B.s250_IdleState = 3U;
      }
      break;

     default:
      /* Transition: '<S250>:4' */
      BaseEngineController_A02_bak2_DWork.s250_is_c12_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_Flaring;

      /* Entry 'Flaring': '<S250>:2' */
      BaseEngineController_A02_bak2_B.s250_IdleState = 1U;
      break;
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
