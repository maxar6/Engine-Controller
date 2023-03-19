/*
 * File: Foreground.h
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

#ifndef RTW_HEADER_Foreground_h_
#define RTW_HEADER_Foreground_h_
#ifndef BaseEngineController_LS_128_COMMON_INCLUDES_
# define BaseEngineController_LS_128_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BaseEngineController_LS_128_COMMON_INCLUDES_ */

#include "BaseEngineController_LS_128_types.h"

/* Child system includes */
#include "BaseEngineController_LS_128_IdleStateMachine.h"

/* Block signals for system '<S404>/Collect Average' */
typedef struct {
  real_T s408_Product;                 /* '<S408>/Product' */
} rtB_CollectAverage_BaseEngineController_LS_128;

/* Block states (auto storage) for system '<S404>/Collect Average' */
typedef struct {
  real_T s408_UnitDelay1_DSTATE;       /* '<S408>/Unit Delay1' */
  boolean_T s404_CollectAverage_MODE;  /* '<S404>/Collect Average' */
} rtDW_CollectAverage_BaseEngineController_LS_128;

/* Block signals for system '<S344>/GetInstRPM' */
typedef struct {
  uint16_T s352_motohawk_encoder_instant_rpm;/* '<S352>/motohawk_encoder_instant_rpm' */
} rtB_GetInstRPM_BaseEngineController_LS_128;

/* Block signals for system '<S344>/SafeDivide' */
typedef struct {
  uint16_T s354_Product;               /* '<S354>/Product' */
} rtB_SafeDivide_BaseEngineController_LS_128;

/* Exported functions */
extern void BaseEngineController_LS_128_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS_128 *localDW);
extern void BaseEngineController_LS_128_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS_128 *localDW);
extern void BaseEngineController_LS_128_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS_128 *localDW);
extern void BaseEngineController_LS_128_CollectAverage(boolean_T rtu_0, int8_T
  rtu_Count, real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS_128
  *localB, rtDW_CollectAverage_BaseEngineController_LS_128 *localDW);
extern void BaseEngineController_LS_128_PassThrough1_Start(real_T *rty_Out1);
extern void BaseEngineController_LS_128_PassThrough1(boolean_T rtu_0, real_T
  rtu_1, real_T *rty_Out1);
extern void BaseEngineController_LS_128_GetInstRPM(boolean_T rtu_0,
  rtB_GetInstRPM_BaseEngineController_LS_128 *localB);
extern void BaseEngineController_LS_128_SafeDivide(boolean_T rtu_0, uint8_T
  rtu_Count, uint16_T rtu_RPMSum, rtB_SafeDivide_BaseEngineController_LS_128
  *localB);
extern void BaseEngineController_LS_128_IfActionSubsystem(real_T rtu_0, real_T
  *rty_Out);
extern void BaseEngineController_LS_128_Foreground_Init(void);
extern void BaseEngineController_LS_128_Foreground_Enable(void);
extern void BaseEngineController_LS_128_Foreground_Start(void);
extern void BaseEngineController_LS_128_Foreground_Disable(void);
extern void BaseEngineController_LS_128_Foreground(void);

#endif                                 /* RTW_HEADER_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
