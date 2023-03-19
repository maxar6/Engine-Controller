/* InjectorSequenceCallback_34.c */

#include "Application.h"

void Trigger_Trans_INJ1(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[0] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[0] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[0] = 0;
  }
}

void Trigger_Trans_INJ2(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[1] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[1] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[1] = 0;
  }
}

void Trigger_Trans_INJ3(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[2] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[2] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[2] = 0;
  }
}

void Trigger_Trans_INJ4(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[3] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[3] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[3] = 0;
  }
}

void Trigger_Trans_INJ5(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[4] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[4] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[4] = 0;
  }
}

void Trigger_Trans_INJ6(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[5] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[5] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[5] = 0;
  }
}

void Trigger_Trans_INJ7(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[6] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[6] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[6] = 0;
  }
}

void Trigger_Trans_INJ8(uint8_T uPulse, boolean_T bIsDurationValid, uint32_T
  uDeliveredDuration_uS)
{
  if (uPulse == 0) {
    (InjTransient_PrimaryComplete_DataStore())[7] = 1;
    (InjTransient_DeliveredDuration_uS_DataStore())[7] = uDeliveredDuration_uS;
  } else {
    (InjTransient_PrimaryComplete_DataStore())[7] = 0;
  }
}
