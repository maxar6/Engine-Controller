/*
 * MotoHawk_IO.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2021
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Jul 11 23:56:32 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MotoHawk_IO.h"

/* S-Function Block: <S979>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  (init_resource_ECUP_DataStore()) = -1;
  if (((int32_T) RES_ECUP) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (((int32_T) RES_ECUP)),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ECUP_DataStore()) = ((int32_T) RES_ECUP);
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ECUP;
      if (SUCCESS(sErrorResult))
        ain_create_ECUP = 0;
      else
        ain_create_ECUP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ECUP_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ECUP_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ECUP;
      if (SUCCESS(sErrorResult))
        ain_read_ECUP = 0;
      else
        ain_read_ECUP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S979>/motohawk_dout Resource: DOut9914p0004 */
NativeError_S DOut9914p0004_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  S_DiscreteOutCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eState = RES_OFF;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
    USE_DISCRETE_STATE;
  CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
  sErrorResult = CreateResource((E_ModuleResource) (((int16_T) 52)), &CreateInfo,
    BEHAVIOUR_DISCRETE_OUT);
  if (SUCCESS(sErrorResult)) {
    (init_resource_DOut9914p0004_DataStore()) = ((int16_T) 52);
  } else {
    (init_resource_DOut9914p0004_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut9914p0004;
    if (SUCCESS(sErrorResult))
      dout_create_DOut9914p0004 = 0;
    else
      dout_create_DOut9914p0004 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut9914p0004_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9914p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9914p0004_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9914p0004_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9914p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9914p0004_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S683>/motohawk_ain Resource: MAPSensorPin */
NativeError_S MAPSensorPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((MAPSensorPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_MAPSensorPin_DataStore()) = -1;
  if ((MAPSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((MAPSensorPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_MAPSensorPin_DataStore()) = (MAPSensorPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_MAPSensorPin;
      if (SUCCESS(sErrorResult))
        ain_create_MAPSensorPin = 0;
      else
        ain_create_MAPSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_MAPSensorPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_MAPSensorPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_MAPSensorPin;
      if (SUCCESS(sErrorResult))
        ain_read_MAPSensorPin = 0;
      else
        ain_read_MAPSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S709>/motohawk_ain Resource: ECTSensorPin */
NativeError_S ECTSensorPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((ECTSensorPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_ECTSensorPin_DataStore()) = -1;
  if ((ECTSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((ECTSensorPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ECTSensorPin_DataStore()) = (ECTSensorPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ECTSensorPin;
      if (SUCCESS(sErrorResult))
        ain_create_ECTSensorPin = 0;
      else
        ain_create_ECTSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ECTSensorPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ECTSensorPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ECTSensorPin;
      if (SUCCESS(sErrorResult))
        ain_read_ECTSensorPin = 0;
      else
        ain_read_ECTSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S709>/motohawk_ain1 Resource: IATSensorPin */
NativeError_S IATSensorPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((IATSensorPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_IATSensorPin_DataStore()) = -1;
  if ((IATSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((IATSensorPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_IATSensorPin_DataStore()) = (IATSensorPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_IATSensorPin;
      if (SUCCESS(sErrorResult))
        ain_create_IATSensorPin = 0;
      else
        ain_create_IATSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_IATSensorPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_IATSensorPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_IATSensorPin;
      if (SUCCESS(sErrorResult))
        ain_read_IATSensorPin = 0;
      else
        ain_read_IATSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S709>/motohawk_ain2 Resource: EVAPSensorPin */
NativeError_S EVAPSensorPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((EVAPSensorPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_EVAPSensorPin_DataStore()) = -1;
  if ((EVAPSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((EVAPSensorPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_EVAPSensorPin_DataStore()) = (EVAPSensorPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_EVAPSensorPin;
      if (SUCCESS(sErrorResult))
        ain_create_EVAPSensorPin = 0;
      else
        ain_create_EVAPSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_EVAPSensorPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_EVAPSensorPin_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_EVAPSensorPin;
      if (SUCCESS(sErrorResult))
        ain_read_EVAPSensorPin = 0;
      else
        ain_read_EVAPSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S709>/motohawk_ain3 Resource: CATSensorPin */
NativeError_S CATSensorPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((CATSensorPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_CATSensorPin_DataStore()) = -1;
  if ((CATSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((CATSensorPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_CATSensorPin_DataStore()) = (CATSensorPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_CATSensorPin;
      if (SUCCESS(sErrorResult))
        ain_create_CATSensorPin = 0;
      else
        ain_create_CATSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_CATSensorPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_CATSensorPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_CATSensorPin;
      if (SUCCESS(sErrorResult))
        ain_read_CATSensorPin = 0;
      else
        ain_read_CATSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S708>/motohawk_ain Resource: FuelLvlSensorPin */
NativeError_S FuelLvlSensorPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((FuelLvlSensorPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_FuelLvlSensorPin_DataStore()) = -1;
  if ((FuelLvlSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource)
      ((FuelLvlSensorPin_DataStore())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_FuelLvlSensorPin_DataStore()) = (FuelLvlSensorPin_DataStore
        ());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_FuelLvlSensorPin;
      if (SUCCESS(sErrorResult))
        ain_create_FuelLvlSensorPin = 0;
      else
        ain_create_FuelLvlSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S FuelLvlSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_FuelLvlSensorPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_FuelLvlSensorPin_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_FuelLvlSensorPin;
      if (SUCCESS(sErrorResult))
        ain_read_FuelLvlSensorPin = 0;
      else
        ain_read_FuelLvlSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S860>/motohawk_dout Resource: DOut8754p0001 */
NativeError_S DOut8754p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  if ((ACPin_DataStore()) >= 0) {
    S_DiscreteOutCreateAttributes CreateInfo;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
      USE_DISCRETE_STATE;
    CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource) ((ACPin_DataStore())),
      &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DOut8754p0001_DataStore()) = (ACPin_DataStore());
    } else {
      (init_resource_DOut8754p0001_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut8754p0001;
      if (SUCCESS(sErrorResult))
        dout_create_DOut8754p0001 = 0;
      else
        dout_create_DOut8754p0001 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut8754p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut8754p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut8754p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut8754p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut8754p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut8754p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S VSPD_Pin_FrequencyInput_Create(void)
{
  NativeError_S sErrorResult = RESOURCE_NOT_CREATED;
  S_FreqInCreateResourceAttributes CreateInfo;
  CreateInfo.uValidAttributesMask = USE_FREQIN_EDGE | USE_FREQIN_ALIAS |
    USE_FREQIN_SIGNAL | USE_FREQIN_DYNAMIC_ON_CREATE | USE_FREQIN_FREQUENCY |
    USE_FREQIN_PULSEWIDTH;
  CreateInfo.eEdgeToDetect = (E_FreqInEdgeDetect) (VSPD_Pin_EdgeDetect_DataStore
    ());
  CreateInfo.eAliasProtectionMode = (E_FreqInAliasProtectMode)
    (VSPD_Pin_AliasProtect_DataStore());
  CreateInfo.eSignalInterface = (E_FreqInSignalInterface)
    (VSPD_Pin_Interface_DataStore());
  CreateInfo.DynamicObj.uValidAttributesMask = USE_FREQIN_CONDITION ;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  if ((VSPD_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((VSPD_Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_FREQIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_VSPD_Pin_DataStore()) = (VSPD_Pin_DataStore());
    } else {
      (init_resource_VSPD_Pin_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T freq_in_create_VSPD_Pin;
      if (SUCCESS(sErrorResult))
        freq_in_create_VSPD_Pin = 0;
      else
        freq_in_create_VSPD_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle)
{
  NativeError_S sError = ERROR_FAIL;
  S_FreqInGetResourceAttributes retval;
  if (duty_cycle != NULL) {
    /* Only request the pulse width information if we have a buffer to fill */
    retval.uValidAttributesMask = USE_FREQIN_PULSEWIDTH;
  } else {
    retval.uValidAttributesMask = USE_FREQIN_FREQUENCY;
  }

  sError = GetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_VSPD_Pin_DataStore())), &retval);

  {
    extern uint8_T freq_in_read_VSPD_Pin;
    if (SUCCESS(sError))
      freq_in_read_VSPD_Pin = 0;
    else
      freq_in_read_VSPD_Pin = (uint8_T) GetErrorCode(sError);
  }

  if (FAILED(sError)) {
    /* There was a problem so apply some default data */
    retval.uFrequency = 0;
    retval.sDutyCycle = 0;
  }

  if (frequency != NULL) {
    *frequency = retval.uFrequency;
  }

  if (duty_cycle != NULL) {
    *duty_cycle = retval.sDutyCycle;
  }

  return sError;
}

void VSPD_Pin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get32Bit((E_ModuleResource)
    ((init_resource_VSPD_Pin_DataStore())), out_pu32PeriodCnts,
    out_pu32DutyCycleCnts);
}

void VSPD_Pin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get16Bit((E_ModuleResource)
    ((init_resource_VSPD_Pin_DataStore())), out_pu16PeriodCnts,
    out_pu16DutyCycleCnts);
}

void VSPD_Pin_FrequencyInput_TriggerOnPulseCnt_Set(uint8_T uDesiredPulseCnt)
{
  S_FreqInResourceAttributes setInfo;
  setInfo.uValidAttributesMask = USE_FREQIN_NOTIFY_SAMPLES;
  setInfo.uEdgeNotifySamples = uDesiredPulseCnt;
  SetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_VSPD_Pin_DataStore())), &setInfo);
}

/* S-Function Block: <S456>/motohawk_ain2 Resource: APP2AnalogInput */
NativeError_S APP2AnalogInput_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((APP2AnalogInput_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_APP2AnalogInput_DataStore()) = -1;
  if ((APP2AnalogInput_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((APP2AnalogInput_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_APP2AnalogInput_DataStore()) = (APP2AnalogInput_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_APP2AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_create_APP2AnalogInput = 0;
      else
        ain_create_APP2AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_APP2AnalogInput_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_APP2AnalogInput_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_APP2AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_read_APP2AnalogInput = 0;
      else
        ain_read_APP2AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S456>/motohawk_ain1 Resource: APP1AnalogInput */
NativeError_S APP1AnalogInput_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((APP1AnalogInput_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_APP1AnalogInput_DataStore()) = -1;
  if ((APP1AnalogInput_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((APP1AnalogInput_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_APP1AnalogInput_DataStore()) = (APP1AnalogInput_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_APP1AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_create_APP1AnalogInput = 0;
      else
        ain_create_APP1AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_APP1AnalogInput_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_APP1AnalogInput_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_APP1AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_read_APP1AnalogInput = 0;
      else
        ain_read_APP1AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S452>/motohawk_ain5 Resource: ACSwPin */
NativeError_S ACSwPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((ACSwPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_ACSwPin_DataStore()) = -1;
  if ((ACSwPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((ACSwPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ACSwPin_DataStore()) = (ACSwPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ACSwPin;
      if (SUCCESS(sErrorResult))
        ain_create_ACSwPin = 0;
      else
        ain_create_ACSwPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ACSwPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ACSwPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ACSwPin;
      if (SUCCESS(sErrorResult))
        ain_read_ACSwPin = 0;
      else
        ain_read_ACSwPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S454>/motohawk_ain4 Resource: ACPresPin */
NativeError_S ACPresPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((ACPresPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_ACPresPin_DataStore()) = -1;
  if ((ACPresPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((ACPresPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ACPresPin_DataStore()) = (ACPresPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ACPresPin;
      if (SUCCESS(sErrorResult))
        ain_create_ACPresPin = 0;
      else
        ain_create_ACPresPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ACPresPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ACPresPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ACPresPin;
      if (SUCCESS(sErrorResult))
        ain_read_ACPresPin = 0;
      else
        ain_read_ACPresPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S456>/motohawk_ain6 Resource: TPS1AnalogInput */
NativeError_S TPS1AnalogInput_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((TPS1AnalogInput_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_TPS1AnalogInput_DataStore()) = -1;
  if ((TPS1AnalogInput_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((TPS1AnalogInput_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_TPS1AnalogInput_DataStore()) = (TPS1AnalogInput_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_TPS1AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_create_TPS1AnalogInput = 0;
      else
        ain_create_TPS1AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_TPS1AnalogInput_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_TPS1AnalogInput_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_TPS1AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_read_TPS1AnalogInput = 0;
      else
        ain_read_TPS1AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S456>/motohawk_ain9 Resource: TPS2AnalogInput */
NativeError_S TPS2AnalogInput_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((TPS2AnalogInput_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_TPS2AnalogInput_DataStore()) = -1;
  if ((TPS2AnalogInput_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((TPS2AnalogInput_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_TPS2AnalogInput_DataStore()) = (TPS2AnalogInput_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_TPS2AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_create_TPS2AnalogInput = 0;
      else
        ain_create_TPS2AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_TPS2AnalogInput_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_TPS2AnalogInput_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_TPS2AnalogInput;
      if (SUCCESS(sErrorResult))
        ain_read_TPS2AnalogInput = 0;
      else
        ain_read_TPS2AnalogInput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S FuelSensorPin_FrequencyInput_Create(void)
{
  NativeError_S sErrorResult = RESOURCE_NOT_CREATED;
  S_FreqInCreateResourceAttributes CreateInfo;
  CreateInfo.uValidAttributesMask = USE_FREQIN_EDGE | USE_FREQIN_ALIAS |
    USE_FREQIN_SIGNAL | USE_FREQIN_DYNAMIC_ON_CREATE | USE_FREQIN_FREQUENCY ;
  CreateInfo.eEdgeToDetect = (E_FreqInEdgeDetect)
    (FuelSensorPin_EdgeDetect_DataStore());
  CreateInfo.eAliasProtectionMode = (E_FreqInAliasProtectMode)
    (FuelSensorPin_AliasProtect_DataStore());
  CreateInfo.eSignalInterface = (E_FreqInSignalInterface)
    (FuelSensorPin_Interface_DataStore());
  CreateInfo.DynamicObj.uValidAttributesMask = USE_FREQIN_CONDITION ;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  if ((FuelSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((FuelSensorPin_DataStore())),
      &CreateInfo, BEHAVIOUR_FREQIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_FuelSensorPin_DataStore()) = (FuelSensorPin_DataStore());
    } else {
      (init_resource_FuelSensorPin_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T freq_in_create_FuelSensorPin;
      if (SUCCESS(sErrorResult))
        freq_in_create_FuelSensorPin = 0;
      else
        freq_in_create_FuelSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle)
{
  NativeError_S sError = ERROR_FAIL;
  S_FreqInGetResourceAttributes retval;
  retval.uValidAttributesMask = USE_FREQIN_FREQUENCY;
  sError = GetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_FuelSensorPin_DataStore())), &retval);

  {
    extern uint8_T freq_in_read_FuelSensorPin;
    if (SUCCESS(sError))
      freq_in_read_FuelSensorPin = 0;
    else
      freq_in_read_FuelSensorPin = (uint8_T) GetErrorCode(sError);
  }

  if (FAILED(sError)) {
    /* There was a problem so apply some default data */
    retval.uFrequency = 0;
    retval.sDutyCycle = 0;
  }

  if (frequency != NULL) {
    *frequency = retval.uFrequency;
  }

  if (duty_cycle != NULL) {
    *duty_cycle = 0;
  }

  return sError;
}

void FuelSensorPin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get32Bit((E_ModuleResource)
    ((init_resource_FuelSensorPin_DataStore())), out_pu32PeriodCnts,
    out_pu32DutyCycleCnts);
}

void FuelSensorPin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get16Bit((E_ModuleResource)
    ((init_resource_FuelSensorPin_DataStore())), out_pu16PeriodCnts,
    out_pu16DutyCycleCnts);
}

void FuelSensorPin_FrequencyInput_TriggerOnPulseCnt_Set(uint8_T uDesiredPulseCnt)
{
  S_FreqInResourceAttributes setInfo;
  setInfo.uValidAttributesMask = USE_FREQIN_NOTIFY_SAMPLES;
  setInfo.uEdgeNotifySamples = uDesiredPulseCnt;
  SetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_FuelSensorPin_DataStore())), &setInfo);
}

/* S-Function Block: <S454>/motohawk_ain14 Resource: SysVoltage */
NativeError_S SysVoltage_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((SysVoltage_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_SysVoltage_DataStore()) = -1;
  if ((SysVoltage_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((SysVoltage_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_SysVoltage_DataStore()) = (SysVoltage_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_SysVoltage;
      if (SUCCESS(sErrorResult))
        ain_create_SysVoltage = 0;
      else
        ain_create_SysVoltage = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_SysVoltage_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_SysVoltage_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_SysVoltage;
      if (SUCCESS(sErrorResult))
        ain_read_SysVoltage = 0;
      else
        ain_read_SysVoltage = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S MAF_Pin_FrequencyInput_Create(void)
{
  NativeError_S sErrorResult = RESOURCE_NOT_CREATED;
  S_FreqInCreateResourceAttributes CreateInfo;
  CreateInfo.uValidAttributesMask = USE_FREQIN_EDGE | USE_FREQIN_ALIAS |
    USE_FREQIN_SIGNAL | USE_FREQIN_DYNAMIC_ON_CREATE | USE_FREQIN_FREQUENCY |
    USE_FREQIN_PULSEWIDTH;
  CreateInfo.eEdgeToDetect = (E_FreqInEdgeDetect) (MAF_Pin_EdgeDetect_DataStore());
  CreateInfo.eAliasProtectionMode = (E_FreqInAliasProtectMode)
    (MAF_Pin_AliasProtect_DataStore());
  CreateInfo.eSignalInterface = (E_FreqInSignalInterface)
    (MAF_Pin_Interface_DataStore());
  CreateInfo.DynamicObj.uValidAttributesMask = USE_FREQIN_CONDITION ;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  if ((MAF_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((MAF_Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_FREQIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_MAF_Pin_DataStore()) = (MAF_Pin_DataStore());
    } else {
      (init_resource_MAF_Pin_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T freq_in_create_MAF_Pin;
      if (SUCCESS(sErrorResult))
        freq_in_create_MAF_Pin = 0;
      else
        freq_in_create_MAF_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle)
{
  NativeError_S sError = ERROR_FAIL;
  S_FreqInGetResourceAttributes retval;
  if (duty_cycle != NULL) {
    /* Only request the pulse width information if we have a buffer to fill */
    retval.uValidAttributesMask = USE_FREQIN_PULSEWIDTH;
  } else {
    retval.uValidAttributesMask = USE_FREQIN_FREQUENCY;
  }

  sError = GetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_MAF_Pin_DataStore())), &retval);

  {
    extern uint8_T freq_in_read_MAF_Pin;
    if (SUCCESS(sError))
      freq_in_read_MAF_Pin = 0;
    else
      freq_in_read_MAF_Pin = (uint8_T) GetErrorCode(sError);
  }

  if (FAILED(sError)) {
    /* There was a problem so apply some default data */
    retval.uFrequency = 0;
    retval.sDutyCycle = 0;
  }

  if (frequency != NULL) {
    *frequency = retval.uFrequency;
  }

  if (duty_cycle != NULL) {
    *duty_cycle = retval.sDutyCycle;
  }

  return sError;
}

void MAF_Pin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get32Bit((E_ModuleResource)
    ((init_resource_MAF_Pin_DataStore())), out_pu32PeriodCnts,
    out_pu32DutyCycleCnts);
}

void MAF_Pin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get16Bit((E_ModuleResource)
    ((init_resource_MAF_Pin_DataStore())), out_pu16PeriodCnts,
    out_pu16DutyCycleCnts);
}

void MAF_Pin_FrequencyInput_TriggerOnPulseCnt_Set(uint8_T uDesiredPulseCnt)
{
  S_FreqInResourceAttributes setInfo;
  setInfo.uValidAttributesMask = USE_FREQIN_NOTIFY_SAMPLES;
  setInfo.uEdgeNotifySamples = uDesiredPulseCnt;
  SetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_MAF_Pin_DataStore())), &setInfo);
}

/* S-Function Block: <S452>/motohawk_ain1 Resource: ClutchSw_Pin */
NativeError_S ClutchSw_Pin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((ClutchSw_Pin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_ClutchSw_Pin_DataStore()) = -1;
  if ((ClutchSw_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((ClutchSw_Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ClutchSw_Pin_DataStore()) = (ClutchSw_Pin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ClutchSw_Pin;
      if (SUCCESS(sErrorResult))
        ain_create_ClutchSw_Pin = 0;
      else
        ain_create_ClutchSw_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ClutchSw_Pin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ClutchSw_Pin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ClutchSw_Pin;
      if (SUCCESS(sErrorResult))
        ain_read_ClutchSw_Pin = 0;
      else
        ain_read_ClutchSw_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S452>/motohawk_ain6 Resource: ScramblePin */
NativeError_S ScramblePin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((ScramblePin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_ScramblePin_DataStore()) = -1;
  if ((ScramblePin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((ScramblePin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ScramblePin_DataStore()) = (ScramblePin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ScramblePin;
      if (SUCCESS(sErrorResult))
        ain_create_ScramblePin = 0;
      else
        ain_create_ScramblePin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ScramblePin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ScramblePin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ScramblePin;
      if (SUCCESS(sErrorResult))
        ain_read_ScramblePin = 0;
      else
        ain_read_ScramblePin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S452>/motohawk_din2 Resource: TwoStepPin */
NativeError_S TwoStepPin_DigitalInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_SwitchCreateResourceAttributes CreateInfo;
  CreateInfo.ePolarity = RES_POL_ACTIVE_HIGH;
  CreateInfo.eSwitchPullUp = (E_SwitchPullUp) 0;
  CreateInfo.uSampleRateInMilliSecs = 0;/* Default is to not de-bounce the digital input */
  CreateInfo.DynamicObj.eAssertionThreshold = THRESH_DIGITAL;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_SWITCH_CONDITION |
    USE_SWITCH_ASSERT_THRESH;
  CreateInfo.uValidAttributesMask = USE_SWITCH_DYNAMIC_ON_CREATE |
    USE_SWITCH_POLARITY | USE_SWITCH_PULLUP_STRENGTH |
    USE_SWITCH_DEBOUNCE_SAMPLE_RATE;
  (init_resource_TwoStepPin_DataStore()) = -1;
  if ((TwoStepPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (TwoStepPin_DataStore()),
      &CreateInfo, BEHAVIOUR_SWITCH);
    if (SUCCESS(sErrorResult)) {
      (init_resource_TwoStepPin_DataStore()) = (TwoStepPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T din_create_TwoStepPin;
      if (SUCCESS(sErrorResult))
        din_create_TwoStepPin = 0;
      else
        din_create_TwoStepPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S TwoStepPin_DigitalInput_Get(boolean_T *out, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  if ((init_resource_TwoStepPin_DataStore()) >= 0) {
    E_ResourceState ResourceState;
    NativeError_S sErrorResult;
    sErrorResult = GetSwitchResourceState((E_ModuleResource)
      (init_resource_TwoStepPin_DataStore()), &ResourceState);
    if (SUCCESS(sErrorResult)) {
      *out = (ResourceState != RES_OFF);
    } else {
      *out = 0;
    }

    {
      extern uint8_T din_read_TwoStepPin;
      if (SUCCESS(sErrorResult))
        din_read_TwoStepPin = 0;
      else
        din_read_TwoStepPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S454>/motohawk_ain2 Resource: FuelPresPin */
NativeError_S FuelPresPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((FuelPresPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_FuelPresPin_DataStore()) = -1;
  if ((FuelPresPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((FuelPresPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_FuelPresPin_DataStore()) = (FuelPresPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_FuelPresPin;
      if (SUCCESS(sErrorResult))
        ain_create_FuelPresPin = 0;
      else
        ain_create_FuelPresPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_FuelPresPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_FuelPresPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_FuelPresPin;
      if (SUCCESS(sErrorResult))
        ain_read_FuelPresPin = 0;
      else
        ain_read_FuelPresPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S454>/motohawk_ain1 Resource: OilPresPin */
NativeError_S OilPresPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((OilPresPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_OilPresPin_DataStore()) = -1;
  if ((OilPresPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((OilPresPin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_OilPresPin_DataStore()) = (OilPresPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_OilPresPin;
      if (SUCCESS(sErrorResult))
        ain_create_OilPresPin = 0;
      else
        ain_create_OilPresPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_OilPresPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_OilPresPin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_OilPresPin;
      if (SUCCESS(sErrorResult))
        ain_read_OilPresPin = 0;
      else
        ain_read_OilPresPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S864>/motohawk_dout Resource: DOut9366p0001 */
NativeError_S DOut9366p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  if ((FAN1Pin_DataStore()) >= 0) {
    S_DiscreteOutCreateAttributes CreateInfo;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
      USE_DISCRETE_STATE;
    CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource) ((FAN1Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DOut9366p0001_DataStore()) = (FAN1Pin_DataStore());
    } else {
      (init_resource_DOut9366p0001_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut9366p0001;
      if (SUCCESS(sErrorResult))
        dout_create_DOut9366p0001 = 0;
      else
        dout_create_DOut9366p0001 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut9366p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9366p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9366p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9366p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9366p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9366p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

void FAN1Pin_PWM_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable)
{
  if (((init_resource_FAN1Pin_PWM_PWMOutput_DataStore()) < 0) &&
      ((FAN1Pin_PWM_DataStore()) >= 0)) {
    /* Initialize PWM Output with initial frequency and duty_cycle */
    S_PWMCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.uValidAttributesMask = USE_PWM_DYNAMIC_ON_CREATE |
      USE_PWM_MIN_FREQUENCY;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE |
      USE_PWM_FREQUENCY | USE_PWM_CONDITION;
    CreateInfo.pfDiagCback = 0;
    CreateInfo.uDiagCbackUserData = 0;
    CreateInfo.u4MinFrequency = 200;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) ((FAN1Pin_PWM_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_FAN1Pin_PWM_PWMOutput_DataStore()) = (FAN1Pin_PWM_DataStore
        ());
    } else {
      (init_resource_FAN1Pin_PWM_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_FAN1Pin_PWM_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_FAN1Pin_PWM_PWMOutput = 0;
      else
        pwm_create_FAN1Pin_PWM_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_FAN1Pin_PWM_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_FAN1Pin_PWM_PWMOutput_DataStore())), &DynamicObj,
      BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_FAN1Pin_PWM_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_FAN1Pin_PWM_PWMOutput = 0;
      else
        pwm_set_FAN1Pin_PWM_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void FAN1Pin_PWM_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_FAN1Pin_PWM_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void FAN1Pin_PWM_PWMOutput_PWMOutput_Create()
{
  (init_resource_FAN1Pin_PWM_PWMOutput_DataStore()) = -1;
}

/* S-Function Block: <S864>/motohawk_dout1 Resource: DOut9367p0001 */
NativeError_S DOut9367p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  if ((FAN2Pin_DataStore()) >= 0) {
    S_DiscreteOutCreateAttributes CreateInfo;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
      USE_DISCRETE_STATE;
    CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource) ((FAN2Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DOut9367p0001_DataStore()) = (FAN2Pin_DataStore());
    } else {
      (init_resource_DOut9367p0001_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut9367p0001;
      if (SUCCESS(sErrorResult))
        dout_create_DOut9367p0001 = 0;
      else
        dout_create_DOut9367p0001 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut9367p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9367p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9367p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9367p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9367p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9367p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

void FAN2Pin_PWM_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable)
{
  if (((init_resource_FAN2Pin_PWM_PWMOutput_DataStore()) < 0) &&
      ((FAN2Pin_PWM_DataStore()) >= 0)) {
    /* Initialize PWM Output with initial frequency and duty_cycle */
    S_PWMCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.uValidAttributesMask = USE_PWM_DYNAMIC_ON_CREATE |
      USE_PWM_MIN_FREQUENCY;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE |
      USE_PWM_FREQUENCY | USE_PWM_CONDITION;
    CreateInfo.pfDiagCback = 0;
    CreateInfo.uDiagCbackUserData = 0;
    CreateInfo.u4MinFrequency = 200;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) ((FAN2Pin_PWM_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_FAN2Pin_PWM_PWMOutput_DataStore()) = (FAN2Pin_PWM_DataStore
        ());
    } else {
      (init_resource_FAN2Pin_PWM_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_FAN2Pin_PWM_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_FAN2Pin_PWM_PWMOutput = 0;
      else
        pwm_create_FAN2Pin_PWM_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_FAN2Pin_PWM_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_FAN2Pin_PWM_PWMOutput_DataStore())), &DynamicObj,
      BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_FAN2Pin_PWM_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_FAN2Pin_PWM_PWMOutput = 0;
      else
        pwm_set_FAN2Pin_PWM_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void FAN2Pin_PWM_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_FAN2Pin_PWM_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void FAN2Pin_PWM_PWMOutput_PWMOutput_Create()
{
  (init_resource_FAN2Pin_PWM_PWMOutput_DataStore()) = -1;
}

/* S-Function Block: <S865>/motohawk_dout Resource: DOut9387p0001 */
NativeError_S DOut9387p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  if ((FuelPumpPin_DataStore()) >= 0) {
    S_DiscreteOutCreateAttributes CreateInfo;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
      USE_DISCRETE_STATE;
    CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource) ((FuelPumpPin_DataStore())),
      &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DOut9387p0001_DataStore()) = (FuelPumpPin_DataStore());
    } else {
      (init_resource_DOut9387p0001_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut9387p0001;
      if (SUCCESS(sErrorResult))
        dout_create_DOut9387p0001 = 0;
      else
        dout_create_DOut9387p0001 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut9387p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9387p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9387p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9387p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9387p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9387p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S452>/motohawk_din Resource: ESTOPPin */
NativeError_S ESTOPPin_DigitalInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_SwitchCreateResourceAttributes CreateInfo;
  CreateInfo.ePolarity = RES_POL_ACTIVE_HIGH;
  CreateInfo.eSwitchPullUp = (E_SwitchPullUp) 0;
  CreateInfo.uSampleRateInMilliSecs = 0;/* Default is to not de-bounce the digital input */
  CreateInfo.DynamicObj.eAssertionThreshold = THRESH_DIGITAL;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_SWITCH_CONDITION |
    USE_SWITCH_ASSERT_THRESH;
  CreateInfo.uValidAttributesMask = USE_SWITCH_DYNAMIC_ON_CREATE |
    USE_SWITCH_POLARITY | USE_SWITCH_PULLUP_STRENGTH |
    USE_SWITCH_DEBOUNCE_SAMPLE_RATE;
  (init_resource_ESTOPPin_DataStore()) = -1;
  if ((ESTOPPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (ESTOPPin_DataStore()),
      &CreateInfo, BEHAVIOUR_SWITCH);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ESTOPPin_DataStore()) = (ESTOPPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T din_create_ESTOPPin;
      if (SUCCESS(sErrorResult))
        din_create_ESTOPPin = 0;
      else
        din_create_ESTOPPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  if ((init_resource_ESTOPPin_DataStore()) >= 0) {
    E_ResourceState ResourceState;
    NativeError_S sErrorResult;
    sErrorResult = GetSwitchResourceState((E_ModuleResource)
      (init_resource_ESTOPPin_DataStore()), &ResourceState);
    if (SUCCESS(sErrorResult)) {
      *out = (ResourceState != RES_OFF);
    } else {
      *out = 0;
    }

    {
      extern uint8_T din_read_ESTOPPin;
      if (SUCCESS(sErrorResult))
        din_read_ESTOPPin = 0;
      else
        din_read_ESTOPPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

void ETCPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable)
{
  if (((init_resource_ETCPin_PWMOutput_DataStore()) < 0) && ((ETCPin_DataStore())
       >= 0)) {
    /* Initialize PWM Output with initial frequency and duty_cycle */
    S_PWMCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.uValidAttributesMask = USE_PWM_DYNAMIC_ON_CREATE |
      USE_PWM_MIN_FREQUENCY;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE |
      USE_PWM_FREQUENCY | USE_PWM_CONDITION;
    CreateInfo.pfDiagCback = 0;
    CreateInfo.uDiagCbackUserData = 0;
    CreateInfo.u4MinFrequency = 6400;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) ((ETCPin_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ETCPin_PWMOutput_DataStore()) = (ETCPin_DataStore());
    } else {
      (init_resource_ETCPin_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_ETCPin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_ETCPin_PWMOutput = 0;
      else
        pwm_create_ETCPin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_ETCPin_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_ETCPin_PWMOutput_DataStore())), &DynamicObj, BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_ETCPin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_ETCPin_PWMOutput = 0;
      else
        pwm_set_ETCPin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void ETCPin_PWMOutput_PWMOutput_Outputs(uint8_T * fault_addr, int16_T
  * current_addr)
{
  /* S-Function Block: ETCPin_PWMOutput */
  if ((init_resource_ETCPin_PWMOutput_DataStore()) >= 0) {
    /* Get PWM drive current from feedback circuit */
    if (current_addr != NULL) {
      GetPWMResourceCurrent((E_ModuleResource)
                            ((init_resource_ETCPin_PWMOutput_DataStore())),
                            current_addr);
    }
  } else {
    if (current_addr != NULL) {
      *current_addr = 0;
    }
  }
}

void ETCPin_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_ETCPin_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void ETCPin_PWMOutput_PWMOutput_Create()
{
  (init_resource_ETCPin_PWMOutput_DataStore()) = -1;
}

void IAC_PPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable)
{
  if (((init_resource_IAC_PPin_PWMOutput_DataStore()) < 0) &&
      ((IAC_PPin_DataStore()) >= 0)) {
    /* Initialize PWM Output with initial frequency and duty_cycle */
    S_PWMCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.uValidAttributesMask = USE_PWM_DYNAMIC_ON_CREATE |
      USE_PWM_MIN_FREQUENCY;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE |
      USE_PWM_FREQUENCY | USE_PWM_CONDITION;
    CreateInfo.pfDiagCback = 0;
    CreateInfo.uDiagCbackUserData = 0;
    CreateInfo.u4MinFrequency = 200;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) ((IAC_PPin_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_IAC_PPin_PWMOutput_DataStore()) = (IAC_PPin_DataStore());
    } else {
      (init_resource_IAC_PPin_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_IAC_PPin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_IAC_PPin_PWMOutput = 0;
      else
        pwm_create_IAC_PPin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_IAC_PPin_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_IAC_PPin_PWMOutput_DataStore())), &DynamicObj,
      BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_IAC_PPin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_IAC_PPin_PWMOutput = 0;
      else
        pwm_set_IAC_PPin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void IAC_PPin_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_IAC_PPin_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void IAC_PPin_PWMOutput_PWMOutput_Create()
{
  (init_resource_IAC_PPin_PWMOutput_DataStore()) = -1;
}

void IAC_SPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable)
{
  if (((init_resource_IAC_SPin_PWMOutput_DataStore()) < 0) &&
      ((IAC_SPin_DataStore()) >= 0)) {
    /* Initialize PWM Output with initial frequency and duty_cycle */
    S_PWMCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.uValidAttributesMask = USE_PWM_DYNAMIC_ON_CREATE |
      USE_PWM_MIN_FREQUENCY;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE |
      USE_PWM_FREQUENCY | USE_PWM_CONDITION;
    CreateInfo.pfDiagCback = 0;
    CreateInfo.uDiagCbackUserData = 0;
    CreateInfo.u4MinFrequency = 200;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) ((IAC_SPin_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_IAC_SPin_PWMOutput_DataStore()) = (IAC_SPin_DataStore());
    } else {
      (init_resource_IAC_SPin_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_IAC_SPin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_IAC_SPin_PWMOutput = 0;
      else
        pwm_create_IAC_SPin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_IAC_SPin_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_IAC_SPin_PWMOutput_DataStore())), &DynamicObj,
      BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_IAC_SPin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_IAC_SPin_PWMOutput = 0;
      else
        pwm_set_IAC_SPin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void IAC_SPin_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_IAC_SPin_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void IAC_SPin_PWMOutput_PWMOutput_Create()
{
  (init_resource_IAC_SPin_PWMOutput_DataStore()) = -1;
}

void WASTEGATE_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable)
{
  if (((init_resource_WASTEGATE_PWMOutput_DataStore()) < 0) &&
      ((WASTEGATE_DataStore()) >= 0)) {
    /* Initialize PWM Output with initial frequency and duty_cycle */
    S_PWMCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.uValidAttributesMask = USE_PWM_DYNAMIC_ON_CREATE |
      USE_PWM_MIN_FREQUENCY;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE |
      USE_PWM_FREQUENCY | USE_PWM_CONDITION;
    CreateInfo.pfDiagCback = 0;
    CreateInfo.uDiagCbackUserData = 0;
    CreateInfo.u4MinFrequency = 200;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) ((WASTEGATE_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_WASTEGATE_PWMOutput_DataStore()) = (WASTEGATE_DataStore());
    } else {
      (init_resource_WASTEGATE_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_WASTEGATE_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_WASTEGATE_PWMOutput = 0;
      else
        pwm_create_WASTEGATE_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_WASTEGATE_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_WASTEGATE_PWMOutput_DataStore())), &DynamicObj,
      BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_WASTEGATE_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_WASTEGATE_PWMOutput = 0;
      else
        pwm_set_WASTEGATE_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void WASTEGATE_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_WASTEGATE_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void WASTEGATE_PWMOutput_PWMOutput_Create()
{
  (init_resource_WASTEGATE_PWMOutput_DataStore()) = -1;
}

/* S-Function Block: <S454>/motohawk_ain3 Resource: SensVoltSensorPin */
NativeError_S SensVoltSensorPin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((SensVoltSensorPin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_SensVoltSensorPin_DataStore()) = -1;
  if ((SensVoltSensorPin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource)
      ((SensVoltSensorPin_DataStore())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_SensVoltSensorPin_DataStore()) =
        (SensVoltSensorPin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_SensVoltSensorPin;
      if (SUCCESS(sErrorResult))
        ain_create_SensVoltSensorPin = 0;
      else
        ain_create_SensVoltSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_SensVoltSensorPin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_SensVoltSensorPin_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_SensVoltSensorPin;
      if (SUCCESS(sErrorResult))
        ain_read_SensVoltSensorPin = 0;
      else
        ain_read_SensVoltSensorPin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* Name: MotoTuneSerialBaudRate ClassID:VAR StorageID:FLASH Access:RW4+RO3+NA2+NA1 UpdateID:REMOTE
   TypeID:UINT4 CType:uint4 Gain:1 Offset:0.0 Exp:1.0 Max:57600 Min:9600 Format:5.0 Mask:FFFFFFFF
   Struct:g_u4KeyBaudRate Help:"The default baud rate that the serial MotoTune protocol will use for connections."
   Group:"System | System Config | Communication Config" */

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: Use the Archive to enable a Link on RS485 running the Mototron KEY Protocol
   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
NativeError_S RS485_SerialLink_Create()
{
  extern NativeBool MotoSecurity32Function(E_AccessLevel, E_Protocols, uint4 *);
  S_RegisterCommProtocolInfo ProtocolCommInfoObj;
  ProtocolCommInfoObj.uValidAttributesMask = USE_PROTOCOL_SECURITY;
  ProtocolCommInfoObj.eProtocol = MOTOTRON_KEY_PROTOCOL;
  ProtocolCommInfoObj.eCommResource = RES_RS485;
  ProtocolCommInfoObj.pfSecurityCback = MotoSecurity32Function;
  return RegisterCommProtocol(&ProtocolCommInfoObj);
}
