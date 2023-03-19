/*
 * EncoderCallback.c
 *
 * Code generation for model "BaseEngineController_LS_112.mdl".
 *
 * Model version              : 1.2194
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:56:25 2022
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Application.h"

uint8_T motohawk_encoder_fault = 0;
void EncoderStateCallback(void)
{
}

void EncoderDiagnosticsCallback(void)
{
  uint8_T error = CNK_Encoder_EncoderError_Get();
  switch (error) {
    /* Crank Error */
   case 0:
    motohawk_encoder_fault = 1;
    break;

    /* Cam Loss */
   case 1:
    motohawk_encoder_fault = 4;
    break;

    /* Crank Loss */
   case 2:
    motohawk_encoder_fault = 3;
    break;
  }

  {
    extern void Trigger_Encoder_Fault_30(void);
    Trigger_Encoder_Fault_30();
  }
}
