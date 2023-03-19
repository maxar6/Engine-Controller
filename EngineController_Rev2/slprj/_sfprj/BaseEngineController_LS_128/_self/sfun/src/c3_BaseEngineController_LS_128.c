/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_LS_128_sfun.h"
#include "c3_BaseEngineController_LS_128.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_LS_128_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c3_IN_NO_ACTIVE_CHILD          (0U)
#define c3_IN_Init                     (1U)
#define c3_IN_Open                     (2U)
#define c3_IN_Wait                     (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void initialize_params_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void enable_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void disable_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void set_sim_state_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_st);
static void c3_set_sim_state_side_effects_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void finalize_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void sf_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void initSimStructsc3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static int32_T c3_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_b_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_b_tp_Init, const char_T *c3_identifier);
static uint8_T c3_c_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static real_T c3_d_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_etc, const char_T *c3_identifier);
static real_T c3_e_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static uint32_T c3_f_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_b_temporalCounter_i1, const char_T *c3_identifier);
static uint32_T c3_g_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *c3_h_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier);
static const mxArray *c3_i_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info(SFc3_BaseEngineController_LS_128InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  real_T *c3_etc;
  c3_etc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_tp_Init = 0U;
  chartInstance->c3_tp_Open = 0U;
  chartInstance->c3_tp_Wait = 0U;
  chartInstance->c3_is_active_c3_BaseEngineController_LS_128 = 0U;
  chartInstance->c3_is_c3_BaseEngineController_LS_128 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c3_etc = 0.0;
  }

  chartInstance->c3_presentTicks = 0U;
  chartInstance->c3_elapsedTicks = 0U;
  chartInstance->c3_previousTicks = 0U;
}

static void initialize_params_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
}

static void enable_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  real_T c3_d0;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c3_d0 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c3_presentTicks = (uint32_T)c3_d0;
  chartInstance->c3_previousTicks = chartInstance->c3_presentTicks;
}

static void disable_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  real_T c3_d1;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c3_d1 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c3_presentTicks = (uint32_T)c3_d1;
  chartInstance->c3_elapsedTicks = chartInstance->c3_presentTicks -
    chartInstance->c3_previousTicks;
  chartInstance->c3_previousTicks = chartInstance->c3_presentTicks;
  chartInstance->c3_temporalCounter_i1 += chartInstance->c3_elapsedTicks;
}

static void c3_update_debugger_state_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c3_is_active_c3_BaseEngineController_LS_128 == 1)
  {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BaseEngineController_LS_128 == c3_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BaseEngineController_LS_128 == c3_IN_Open) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BaseEngineController_LS_128 == c3_IN_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  }

  sf_debug_set_animation(c3_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  real_T c3_u;
  const mxArray *c3_b_y = NULL;
  uint8_T c3_b_hoistedGlobal;
  uint8_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  uint8_T c3_c_hoistedGlobal;
  uint8_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  uint32_T c3_d_hoistedGlobal;
  uint32_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  uint32_T c3_e_hoistedGlobal;
  uint32_T c3_e_u;
  const mxArray *c3_f_y = NULL;
  real_T *c3_etc;
  c3_etc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(5));
  c3_hoistedGlobal = *c3_etc;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal =
    chartInstance->c3_is_active_c3_BaseEngineController_LS_128;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = chartInstance->c3_is_c3_BaseEngineController_LS_128;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = chartInstance->c3_temporalCounter_i1;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = chartInstance->c3_previousTicks;
  c3_e_u = c3_e_hoistedGlobal;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 4, c3_f_y);
  sf_mex_assign(&c3_st, c3_y);
  return c3_st;
}

static void set_sim_state_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_st)
{
  const mxArray *c3_u;
  real_T *c3_etc;
  c3_etc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_u = sf_mex_dup(c3_st);
  *c3_etc = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u,
    0)), "etc");
  chartInstance->c3_is_active_c3_BaseEngineController_LS_128 =
    c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 1)),
    "is_active_c3_BaseEngineController_LS_128");
  chartInstance->c3_is_c3_BaseEngineController_LS_128 = c3_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 2)),
     "is_c3_BaseEngineController_LS_128");
  chartInstance->c3_temporalCounter_i1 = c3_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 3)), "temporalCounter_i1");
  chartInstance->c3_previousTicks = c3_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 4)), "previousTicks");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 5)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_BaseEngineController_LS_128(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if (chartInstance->c3_is_c3_BaseEngineController_LS_128 == c3_IN_Init) {
      chartInstance->c3_tp_Init = 1U;
    } else {
      chartInstance->c3_tp_Init = 0U;
    }

    if (chartInstance->c3_is_c3_BaseEngineController_LS_128 == c3_IN_Open) {
      chartInstance->c3_tp_Open = 1U;
      if (sf_mex_sub(chartInstance->c3_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        chartInstance->c3_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c3_tp_Open = 0U;
    }

    if (chartInstance->c3_is_c3_BaseEngineController_LS_128 == c3_IN_Wait) {
      chartInstance->c3_tp_Wait = 1U;
    } else {
      chartInstance->c3_tp_Wait = 0U;
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_c3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
  real_T c3_d2;
  boolean_T c3_temp;
  real_T c3_d3;
  real_T *c3_etc;
  real_T *c3_enblTime;
  real_T *c3_timeSinceKeyOn;
  real_T *c3_icePos;
  real_T *c3_hldTime;
  c3_icePos = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_hldTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_enblTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_timeSinceKeyOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c3_etc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_set_sim_state_side_effects_c3_BaseEngineController_LS_128(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c3_d2 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c3_presentTicks = (uint32_T)c3_d2;
  chartInstance->c3_elapsedTicks = chartInstance->c3_presentTicks -
    chartInstance->c3_previousTicks;
  chartInstance->c3_previousTicks = chartInstance->c3_presentTicks;
  chartInstance->c3_temporalCounter_i1 += chartInstance->c3_elapsedTicks;
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c3_etc, 0U);
  _SFD_DATA_RANGE_CHECK(*c3_timeSinceKeyOn, 1U);
  _SFD_DATA_RANGE_CHECK(*c3_enblTime, 2U);
  _SFD_DATA_RANGE_CHECK(*c3_hldTime, 3U);
  _SFD_DATA_RANGE_CHECK(*c3_icePos, 4U);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  if ((int16_T)chartInstance->c3_is_active_c3_BaseEngineController_LS_128 == 0)
  {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_active_c3_BaseEngineController_LS_128 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_BaseEngineController_LS_128 = c3_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_Init = 1U;
  } else {
    switch (chartInstance->c3_is_c3_BaseEngineController_LS_128) {
     case c3_IN_Init:
      CV_CHART_EVAL(1, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c3_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
            *c3_timeSinceKeyOn < *c3_enblTime != 0U, chartInstance->c3_sfEvent)))
      {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Init = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BaseEngineController_LS_128 = c3_IN_Open;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_temporalCounter_i1 = 0U;
        chartInstance->c3_tp_Open = 1U;
      } else {
        *c3_etc = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_etc, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_Open:
      CV_CHART_EVAL(1, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c3_sfEvent);
      c3_temp = (_SFD_CCP_CALL(2U, 0, 1 != 0U, chartInstance->c3_sfEvent) != 0);
      if (c3_temp) {
        c3_d3 = muDoubleScalarCeil(*c3_hldTime / 0.2 - 2.0E-9);
        c3_temp = (_SFD_CCP_CALL(2U, 1, chartInstance->c3_temporalCounter_i1 >=
                    (uint32_T)c3_d3 != 0U, chartInstance->c3_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c3_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Open = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BaseEngineController_LS_128 = c3_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Wait = 1U;
      } else {
        *c3_etc = *c3_icePos;
        _SFD_DATA_RANGE_CHECK(*c3_etc, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_Wait:
      CV_CHART_EVAL(1, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c3_sfEvent);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
            *c3_timeSinceKeyOn > *c3_enblTime != 0U, chartInstance->c3_sfEvent)))
      {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Wait = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BaseEngineController_LS_128 = c3_IN_Init;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Init = 1U;
      } else {
        *c3_etc = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_etc, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
      break;

     default:
      CV_CHART_EVAL(1, 0, 0);
      chartInstance->c3_is_c3_BaseEngineController_LS_128 = (uint8_T)
        c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  sf_debug_check_for_state_inconsistency
    (_BaseEngineController_LS_128MachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
}

static void initSimStructsc3_BaseEngineController_LS_128
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

const mxArray *sf_c3_BaseEngineController_LS_128_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c3_nameCaptureInfo;
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
  chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static int32_T c3_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i0, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
  chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)
    chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent), &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
  chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static uint8_T c3_b_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_b_tp_Init, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_Init),
    &c3_thisId);
  sf_mex_destroy(&c3_b_tp_Init);
  return c3_y;
}

static uint8_T c3_c_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_tp_Init;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
  chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)
    chartInstanceVoid;
  c3_b_tp_Init = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_Init),
    &c3_thisId);
  sf_mex_destroy(&c3_b_tp_Init);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
  chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static real_T c3_d_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_etc, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_etc), &c3_thisId);
  sf_mex_destroy(&c3_etc);
  return c3_y;
}

static real_T c3_e_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d4;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d4, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d4;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_etc;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
  chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)
    chartInstanceVoid;
  c3_etc = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_etc), &c3_thisId);
  sf_mex_destroy(&c3_etc);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static uint32_T c3_f_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_b_temporalCounter_i1, const char_T *c3_identifier)
{
  uint32_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_temporalCounter_i1),
    &c3_thisId);
  sf_mex_destroy(&c3_b_temporalCounter_i1);
  return c3_y;
}

static uint32_T c3_g_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint32_T c3_y;
  uint32_T c3_u1;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u1, 1, 7, 0U, 0, 0U, 0);
  c3_y = c3_u1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static const mxArray *c3_h_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  sf_mex_assign(&c3_y, c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId));
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_i_emlrt_marshallIn
  (SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u));
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void init_dsm_address_info(SFc3_BaseEngineController_LS_128InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c3_BaseEngineController_LS_128_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(587702213U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1038780825U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4176898802U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3729520846U);
}

mxArray *sf_c3_BaseEngineController_LS_128_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2664723442U);
    pr[1] = (double)(60019607U);
    pr[2] = (double)(121174953U);
    pr[3] = (double)(4222537365U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c3_BaseEngineController_LS_128(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[9],T\"etc\",},{M[8],M[0],T\"is_active_c3_BaseEngineController_LS_128\",},{M[9],M[0],T\"is_c3_BaseEngineController_LS_128\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M[4],M[1]}}},{M[13],M[0],T\"previousTicks\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_BaseEngineController_LS_128_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
    chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_LS_128MachineNumber_,
           3,
           3,
           4,
           5,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation
            (_BaseEngineController_LS_128MachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BaseEngineController_LS_128MachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_BaseEngineController_LS_128MachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"etc");
          _SFD_SET_DATA_PROPS(1,1,1,0,"timeSinceKeyOn");
          _SFD_SET_DATA_PROPS(2,1,1,0,"enblTime");
          _SFD_SET_DATA_PROPS(3,1,1,0,"hldTime");
          _SFD_SET_DATA_PROPS(4,1,1,0,"icePos");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 14, 0 };

          static unsigned int sEndGuardMap[] = { 17, 18 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 14, 0 };

          static unsigned int sEndGuardMap[] = { 17, 18 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)c3_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c3_etc;
          real_T *c3_timeSinceKeyOn;
          real_T *c3_enblTime;
          real_T *c3_hldTime;
          real_T *c3_icePos;
          c3_icePos = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c3_hldTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c3_enblTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c3_timeSinceKeyOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c3_etc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c3_etc);
          _SFD_SET_DATA_VALUE_PTR(1U, c3_timeSinceKeyOn);
          _SFD_SET_DATA_VALUE_PTR(2U, c3_enblTime);
          _SFD_SET_DATA_VALUE_PTR(3U, c3_hldTime);
          _SFD_SET_DATA_VALUE_PTR(4U, c3_icePos);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_LS_128MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c3_BaseEngineController_LS_128(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_BaseEngineController_LS_128InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*) chartInstanceVar);
  initialize_c3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_BaseEngineController_LS_128(void
  *chartInstanceVar)
{
  enable_c3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_BaseEngineController_LS_128(void
  *chartInstanceVar)
{
  disable_c3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_BaseEngineController_LS_128(void
  *chartInstanceVar)
{
  sf_c3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c3_BaseEngineController_LS_128
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_BaseEngineController_LS_128();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c3_BaseEngineController_LS_128(SimStruct*
  S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_BaseEngineController_LS_128();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c3_BaseEngineController_LS_128
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c3_BaseEngineController_LS_128(S);
}

static void sf_opaque_set_sim_state_c3_BaseEngineController_LS_128(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c3_BaseEngineController_LS_128(S, st);
}

static void sf_opaque_terminate_c3_BaseEngineController_LS_128(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_BaseEngineController_LS_128InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c3_BaseEngineController_LS_128
      ((SFc3_BaseEngineController_LS_128InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_BaseEngineController_LS_128
    ((SFc3_BaseEngineController_LS_128InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_BaseEngineController_LS_128(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_BaseEngineController_LS_128
      ((SFc3_BaseEngineController_LS_128InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_BaseEngineController_LS_128(SimStruct *S)
{
  ssSetNeedAbsoluteTime(S,1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_LS_128",
      "BaseEngineController_LS_128",3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_LS_128",
                "BaseEngineController_LS_128",3,"RTWCG"));
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_LS_128","BaseEngineController_LS_128",3,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_LS_128",
        "BaseEngineController_LS_128",3,4);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_LS_128",
        "BaseEngineController_LS_128",3,1);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_LS_128",
                          "BaseEngineController_LS_128",3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1201865897U));
  ssSetChecksum1(S,(4088277616U));
  ssSetChecksum2(S,(1817657676U));
  ssSetChecksum3(S,(1488333658U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c3_BaseEngineController_LS_128(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_LS_128",
      "BaseEngineController_LS_128",3);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_BaseEngineController_LS_128(SimStruct *S)
{
  SFc3_BaseEngineController_LS_128InstanceStruct *chartInstance;
  chartInstance = (SFc3_BaseEngineController_LS_128InstanceStruct *)malloc
    (sizeof(SFc3_BaseEngineController_LS_128InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_BaseEngineController_LS_128InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_BaseEngineController_LS_128;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c3_BaseEngineController_LS_128_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_BaseEngineController_LS_128(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_BaseEngineController_LS_128(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_BaseEngineController_LS_128(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_BaseEngineController_LS_128_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
