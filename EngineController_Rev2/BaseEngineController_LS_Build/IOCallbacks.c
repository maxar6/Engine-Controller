/*
 * IOCallbacks.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2222
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CommonInclude.h"
#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

int32_T SparkSeqDiag_22_Count = 0;
int32_T SparkSeqDiag_22_LastPin = -1;
uint8_T SparkSeqDiag_22_Short[8];
uint8_T SparkSeqDiag_22_Open[8];
uint16_T SparkSeqDiag_22_OpenADC[8];
uint16_T SparkSeqDiag_22_OnTime[8];
void SparkSeqDiagCallback_22(S_SeqOutDiagReportPtr report, NativePtrSizedInt_U
  userData)
{
  int32_T pin_number = (int32_T) userData;

  /* Check for short circuit */
  if (report->DiagReportObj.EST.u1ValidDataMask & HAS_SHORT_CCT_EST_DIAG) {
    SparkSeqDiag_22_OnTime[pin_number] =
      report->DiagReportObj.EST.ShortDataObj.u2OnTimeInMicroSecs;
    if (report->DiagReportObj.EST.ShortDataObj.b1Occurred == 0) {
      SparkSeqDiag_22_Short[pin_number] = 1;/* Fault */
    } else {
      SparkSeqDiag_22_Short[pin_number] = 0;/* No Fault */
    }
  } else {
    SparkSeqDiag_22_Short[pin_number] = 2;/* Indeterminate */
  }

  /* Check for open circuit */
  if (report->DiagReportObj.EST.u1ValidDataMask & HAS_OPEN_CCT_EST_DIAG) {
    SparkSeqDiag_22_OpenADC[pin_number] =
      report->DiagReportObj.EST.OpenDataObj.uADCSample;
    if (report->DiagReportObj.EST.OpenDataObj.uADCSample >= 1023) {
      SparkSeqDiag_22_Short[pin_number] = 1;/* Short to Power */
      SparkSeqDiag_22_Open[pin_number] = 0;/* Not Open */
    } else if (report->DiagReportObj.EST.OpenDataObj.uADCSample <= 10) {
      SparkSeqDiag_22_Short[pin_number] = 1;/* Short to Ground */
      SparkSeqDiag_22_Open[pin_number] = 0;/* Not Open */
    } else if (report->DiagReportObj.EST.OpenDataObj.uADCSample >
               (EST_OpenThreshold_DataStore())) {
      SparkSeqDiag_22_Short[pin_number] = 0;/* Not Shorted */
      SparkSeqDiag_22_Open[pin_number] = 1;/* Open Fault */
    } else {
      SparkSeqDiag_22_Short[pin_number] = 0;/* Not Shorted */
      SparkSeqDiag_22_Open[pin_number] = 0;/* Not Open */
    }
  } else {
    SparkSeqDiag_22_Open[pin_number] = 2;/* Indeterminate */
  }

  SparkSeqDiag_22_Count++;
  SparkSeqDiag_22_LastPin = pin_number;
}

void ReSyncAfterCrankUnsync_22(void)
{
  extern NativeError_S ReapplySeqOutCond(E_ModuleResource);
  extern uint8_T motohawk_encoder_fault;
  if (motohawk_encoder_fault == 1) {
    if ((EST_SequenceType_DataStore()) == 2) {
      int i;
      int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
      for (i=0; i < half_cylinders; i++) {
        ReapplySeqOutCond((E_ModuleResource) ((EST_InitialPin_DataStore()) + i));
      }
    } else if ((EST_SequenceType_DataStore()) == 3) {
      ReapplySeqOutCond((E_ModuleResource) (EST_InitialPin_DataStore()));
    }
  }
}
