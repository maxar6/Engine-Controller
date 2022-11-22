/*
 * File: Foreground.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2185
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Nov 21 23:22:06 2022
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

/* Block signals for system '<S404>/Collect Average' */
typedef struct {
  real_T s408_Product;                 /* '<S408>/Product' */
} rtB_CollectAverage_BaseEngineController_LS;

/* Block states (auto storage) for system '<S404>/Collect Average' */
typedef struct {
  real_T s408_UnitDelay1_DSTATE;       /* '<S408>/Unit Delay1' */
  boolean_T s404_CollectAverage_MODE;  /* '<S404>/Collect Average' */
} rtDW_CollectAverage_BaseEngineController_LS;

/* Block signals for system '<S344>/GetInstRPM' */
typedef struct {
  uint16_T s352_motohawk_encoder_instant_rpm;/* '<S352>/motohawk_encoder_instant_rpm' */
} rtB_GetInstRPM_BaseEngineController_LS;

/* Block signals for system '<S344>/SafeDivide' */
typedef struct {
  uint16_T s354_Product;               /* '<S354>/Product' */
} rtB_SafeDivide_BaseEngineController_LS;

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
extern void BaseEngineController_LS_GetInstRPM(boolean_T rtu_0,
  rtB_GetInstRPM_BaseEngineController_LS *localB);
extern void BaseEngineController_LS_SafeDivide(boolean_T rtu_0, uint8_T
  rtu_Count, uint16_T rtu_RPMSum, rtB_SafeDivide_BaseEngineController_LS *localB);
extern void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T
  *rty_Out);
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
