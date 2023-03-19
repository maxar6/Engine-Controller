#ifndef __c3_BaseEngineController_LS_128_h__
#define __c3_BaseEngineController_LS_128_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c3_setSimStateSideEffectsInfo;
  int32_T c3_sfEvent;
  uint32_T c3_elapsedTicks;
  uint32_T c3_presentTicks;
  uint32_T c3_previousTicks;
  uint32_T c3_temporalCounter_i1;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_isStable;
  uint8_T c3_doSetSimStateSideEffects;
  uint8_T c3_is_active_c3_BaseEngineController_LS_128;
  uint8_T c3_is_c3_BaseEngineController_LS_128;
  uint8_T c3_tp_Init;
  uint8_T c3_tp_Open;
  uint8_T c3_tp_Wait;
  ChartInfoStruct chartInfo;
} SFc3_BaseEngineController_LS_128InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_BaseEngineController_LS_128_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_BaseEngineController_LS_128_get_check_sum(mxArray *plhs[]);
extern void c3_BaseEngineController_LS_128_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
