/*
 * File: Foreground.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2049
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Aug 16 23:25:15 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Foreground_h_
#define RTW_HEADER_Foreground_h_
#ifndef BaseEngineController_LS_COMMON_INCLUDES_
# define BaseEngineController_LS_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BaseEngineController_LS_COMMON_INCLUDES_ */

#include "BaseEngineController_LS_types.h"

/* Child system includes */
#include "BaseEngineController_LS_IdleStateMachine.h"

/* Block signals for system '<S376>/Collect Average' */
typedef struct {
  real_T s380_Product;                 /* '<S380>/Product' */
} rtB_CollectAverage_BaseEngineController_LS;

/* Block states (auto storage) for system '<S376>/Collect Average' */
typedef struct {
  real_T s380_UnitDelay1_DSTATE;       /* '<S380>/Unit Delay1' */
  boolean_T s376_CollectAverage_MODE;  /* '<S376>/Collect Average' */
} rtDW_CollectAverage_BaseEngineController_LS;

/* Block signals for system '<S762>/Function-Call Subsystem' */
typedef struct {
  boolean_T s780_InitialConditionisTrue;/* '<S780>/Initial Condition is True' */
} rtB_FunctionCallSubsystem_BaseEngineController_LS;

/* Block states (auto storage) for system '<S762>/Function-Call Subsystem' */
typedef struct {
  boolean_T s780_InitialConditionisTrue_DSTATE;/* '<S780>/Initial Condition is True' */
} rtDW_FunctionCallSubsystem_BaseEngineController_LS;

/* Exported functions */
extern void BaseEngineController_LS_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS *localDW);
extern void BaseEngineController_LS_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS *localDW);
extern void BaseEngineController_LS_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS *localDW);
extern void BaseEngineController_LS_CollectAverage(boolean_T rtu_0, int8_T
  rtu_Count, real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS
  *localB, rtDW_CollectAverage_BaseEngineController_LS *localDW);
extern void BaseEngineController_LS_PassThrough1_Start(real_T *rty_Out1);
extern void BaseEngineController_LS_PassThrough1(boolean_T rtu_0, real_T rtu_1,
  real_T *rty_Out1);
extern void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T
  *rty_Out);
extern void BaseEngineController_LS_FunctionCallSubsystem_Init
  (rtDW_FunctionCallSubsystem_BaseEngineController_LS *localDW);
extern void BaseEngineController_LS_FunctionCallSubsystem
  (rtB_FunctionCallSubsystem_BaseEngineController_LS *localB,
   rtDW_FunctionCallSubsystem_BaseEngineController_LS *localDW);
extern void BaseEngineController_LS_Foreground_Init(void);
extern void BaseEngineController_LS_Foreground_Enable(void);
extern void BaseEngineController_LS_Foreground_Start(void);
extern void BaseEngineController_LS_Foreground_Disable(void);
extern void BaseEngineController_LS_Foreground(void);

#endif                                 /* RTW_HEADER_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
