/*
 * MotoHawk_IO.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1532
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 10:29:48 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MotoHawk_IO.h"

/* S-Function Block: <S800>/motohawk_ain5 Resource: ECUP */
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

/* S-Function Block: <S800>/motohawk_dout Resource: DOut9834p0001 */
NativeError_S DOut9834p0001_DiscreteOutput_Create(void)
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
    (init_resource_DOut9834p0001_DataStore()) = ((int16_T) 52);
  } else {
    (init_resource_DOut9834p0001_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut9834p0001;
    if (SUCCESS(sErrorResult))
      dout_create_DOut9834p0001 = 0;
    else
      dout_create_DOut9834p0001 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut9834p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9834p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9834p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9834p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9834p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9834p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S596>/motohawk_ain Resource: MAPSensorPin */
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

/* S-Function Block: <S622>/motohawk_ain Resource: ECTSensorPin */
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

/* S-Function Block: <S622>/motohawk_ain1 Resource: IATSensorPin */
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

/* S-Function Block: <S622>/motohawk_ain2 Resource: EVAPSensorPin */
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

/* S-Function Block: <S706>/motohawk_dout Resource: DOut8998p0002 */
NativeError_S DOut8998p0002_DiscreteOutput_Create(void)
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
      (init_resource_DOut8998p0002_DataStore()) = (ACPin_DataStore());
    } else {
      (init_resource_DOut8998p0002_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut8998p0002;
      if (SUCCESS(sErrorResult))
        dout_create_DOut8998p0002 = 0;
      else
        dout_create_DOut8998p0002 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut8998p0002_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut8998p0002_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut8998p0002_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut8998p0002_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut8998p0002_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut8998p0002_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S436>/motohawk_ain5 Resource: ACSwPin */
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

/* S-Function Block: <S438>/motohawk_ain4 Resource: ACPresPin */
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

/* S-Function Block: <S440>/motohawk_ain1 Resource: APP1AnalogInput */
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

/* S-Function Block: <S440>/motohawk_ain2 Resource: APP2AnalogInput */
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

/* S-Function Block: <S440>/motohawk_ain6 Resource: TPS1AnalogInput */
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

/* S-Function Block: <S440>/motohawk_ain9 Resource: TPS2AnalogInput */
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

/* S-Function Block: <S439>/motohawk_ain3 Resource: PreO2Pin */
NativeError_S PreO2Pin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((PreO2Pin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_PreO2Pin_DataStore()) = -1;
  if ((PreO2Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((PreO2Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_PreO2Pin_DataStore()) = (PreO2Pin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_PreO2Pin;
      if (SUCCESS(sErrorResult))
        ain_create_PreO2Pin = 0;
      else
        ain_create_PreO2Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S PreO2Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_PreO2Pin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_PreO2Pin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_PreO2Pin;
      if (SUCCESS(sErrorResult))
        ain_read_PreO2Pin = 0;
      else
        ain_read_PreO2Pin = (uint8_T) GetErrorCode(sErrorResult);
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

/* S-Function Block: <S436>/motohawk_ain4 Resource: BrakePin */
NativeError_S BrakePin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((BrakePin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_BrakePin_DataStore()) = -1;
  if ((BrakePin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((BrakePin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_BrakePin_DataStore()) = (BrakePin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_BrakePin;
      if (SUCCESS(sErrorResult))
        ain_create_BrakePin = 0;
      else
        ain_create_BrakePin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S BrakePin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_BrakePin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_BrakePin_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_BrakePin;
      if (SUCCESS(sErrorResult))
        ain_read_BrakePin = 0;
      else
        ain_read_BrakePin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S436>/motohawk_ain2 Resource: CruiseControl */
NativeError_S CruiseControl_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((CruiseControl_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_CruiseControl_DataStore()) = -1;
  if ((CruiseControl_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((CruiseControl_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_CruiseControl_DataStore()) = (CruiseControl_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_CruiseControl;
      if (SUCCESS(sErrorResult))
        ain_create_CruiseControl = 0;
      else
        ain_create_CruiseControl = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S CruiseControl_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_CruiseControl_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_CruiseControl_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_CruiseControl;
      if (SUCCESS(sErrorResult))
        ain_read_CruiseControl = 0;
      else
        ain_read_CruiseControl = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S436>/motohawk_ain1 Resource: CruiseControl_2 */
NativeError_S CruiseControl_2_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((CruiseControl_2_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_CruiseControl_2_DataStore()) = -1;
  if ((CruiseControl_2_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((CruiseControl_2_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_CruiseControl_2_DataStore()) = (CruiseControl_2_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_CruiseControl_2;
      if (SUCCESS(sErrorResult))
        ain_create_CruiseControl_2 = 0;
      else
        ain_create_CruiseControl_2 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S CruiseControl_2_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_CruiseControl_2_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_CruiseControl_2_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_CruiseControl_2;
      if (SUCCESS(sErrorResult))
        ain_read_CruiseControl_2 = 0;
      else
        ain_read_CruiseControl_2 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S436>/motohawk_ain3 Resource: CruiseControl_3 */
NativeError_S CruiseControl_3_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((CruiseControl_3_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_CruiseControl_3_DataStore()) = -1;
  if ((CruiseControl_3_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((CruiseControl_3_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_CruiseControl_3_DataStore()) = (CruiseControl_3_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_CruiseControl_3;
      if (SUCCESS(sErrorResult))
        ain_create_CruiseControl_3 = 0;
      else
        ain_create_CruiseControl_3 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S CruiseControl_3_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_CruiseControl_3_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_CruiseControl_3_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_CruiseControl_3;
      if (SUCCESS(sErrorResult))
        ain_read_CruiseControl_3 = 0;
      else
        ain_read_CruiseControl_3 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S436>/motohawk_din Resource: ESTOPPin */
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

/* S-Function Block: <S436>/motohawk_din1 Resource: GearStatePin */
NativeError_S GearStatePin_DigitalInput_Create(void)
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
  (init_resource_GearStatePin_DataStore()) = -1;
  if ((GearStatePin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (GearStatePin_DataStore()),
      &CreateInfo, BEHAVIOUR_SWITCH);
    if (SUCCESS(sErrorResult)) {
      (init_resource_GearStatePin_DataStore()) = (GearStatePin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T din_create_GearStatePin;
      if (SUCCESS(sErrorResult))
        din_create_GearStatePin = 0;
      else
        din_create_GearStatePin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S GearStatePin_DigitalInput_Get(boolean_T *out, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  if ((init_resource_GearStatePin_DataStore()) >= 0) {
    E_ResourceState ResourceState;
    NativeError_S sErrorResult;
    sErrorResult = GetSwitchResourceState((E_ModuleResource)
      (init_resource_GearStatePin_DataStore()), &ResourceState);
    if (SUCCESS(sErrorResult)) {
      *out = (ResourceState != RES_OFF);
    } else {
      *out = 0;
    }

    {
      extern uint8_T din_read_GearStatePin;
      if (SUCCESS(sErrorResult))
        din_read_GearStatePin = 0;
      else
        din_read_GearStatePin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S436>/motohawk_ain6 Resource: ScramblePin */
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

/* S-Function Block: <S436>/motohawk_din2 Resource: TwoStepPin */
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

/* S-Function Block: <S438>/motohawk_ain14 Resource: SysVoltage */
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

/* S-Function Block: <S708>/motohawk_dout Resource: DOut9272p0004 */
NativeError_S DOut9272p0004_DiscreteOutput_Create(void)
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
      (init_resource_DOut9272p0004_DataStore()) = (FAN1Pin_DataStore());
    } else {
      (init_resource_DOut9272p0004_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut9272p0004;
      if (SUCCESS(sErrorResult))
        dout_create_DOut9272p0004 = 0;
      else
        dout_create_DOut9272p0004 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut9272p0004_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9272p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9272p0004_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9272p0004_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9272p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9272p0004_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S708>/motohawk_dout1 Resource: DOut9273p0004 */
NativeError_S DOut9273p0004_DiscreteOutput_Create(void)
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
      (init_resource_DOut9273p0004_DataStore()) = (FAN2Pin_DataStore());
    } else {
      (init_resource_DOut9273p0004_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut9273p0004;
      if (SUCCESS(sErrorResult))
        dout_create_DOut9273p0004 = 0;
      else
        dout_create_DOut9273p0004 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut9273p0004_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9273p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9273p0004_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9273p0004_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9273p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9273p0004_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S709>/motohawk_dout Resource: DOut9285p0004 */
NativeError_S DOut9285p0004_DiscreteOutput_Create(void)
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
      (init_resource_DOut9285p0004_DataStore()) = (FuelPumpPin_DataStore());
    } else {
      (init_resource_DOut9285p0004_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut9285p0004;
      if (SUCCESS(sErrorResult))
        dout_create_DOut9285p0004 = 0;
      else
        dout_create_DOut9285p0004 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut9285p0004_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut9285p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9285p0004_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut9285p0004_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut9285p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut9285p0004_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
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

/* S-Function Block: <S438>/motohawk_ain2 Resource: FuelPresPin */
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

/* S-Function Block: <S438>/motohawk_ain1 Resource: OilPresPin */
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

/* S-Function Block: <S438>/motohawk_ain3 Resource: SensVoltSensorPin */
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
