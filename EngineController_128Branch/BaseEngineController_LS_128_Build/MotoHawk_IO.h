/*
 * MotoHawk_IO.h
 *
 */

#ifndef MOTOHAWK_IO_H
#define MOTOHAWK_IO_H
#include "CommonInclude.h"

/* S-Function Block: <S932>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECUP_AnalogInput_Create(void);

/* S-Function Block: <S932>/motohawk_dout Resource: MPRD */
extern NativeError_S DOut11529p0004_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut11529p0004_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut11529p0004_DiscreteOutput_Create(void);

/* S-Function Block: <S613>/motohawk_ain Resource: MAPSensorPin */
NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S MAPSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S639>/motohawk_ain Resource: ECTSensorPin */
NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECTSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S639>/motohawk_ain1 Resource: IATSensorPin */
NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S IATSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S639>/motohawk_ain2 Resource: EVAPSensorPin */
NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S EVAPSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S639>/motohawk_ain3 Resource: CATSensorPin */
NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S CATSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S638>/motohawk_ain Resource: FuelLvlSensorPin */
NativeError_S FuelLvlSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S FuelLvlSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S790>/motohawk_dout Resource: NONE */
extern NativeError_S DOut10176p0004_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut10176p0004_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut10176p0004_DiscreteOutput_Create(void);

/* S-Function Block: <S486>/motohawk_ain2 Resource: APP2AnalogInput */
NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S APP2AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S486>/motohawk_ain1 Resource: APP1AnalogInput */
NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S APP1AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S484>/motohawk_ain4 Resource: ACPresPin */
NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ACPresPin_AnalogInput_Create(void);

/* S-Function Block: <S482>/motohawk_ain5 Resource: ACSwPin */
NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ACSwPin_AnalogInput_Create(void);

/* S-Function Block: <S486>/motohawk_ain6 Resource: TPS1AnalogInput */
NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S TPS1AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S486>/motohawk_ain9 Resource: TPS2AnalogInput */
NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S TPS2AnalogInput_AnalogInput_Create(void);
extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
  int16_T *duty_cycle);
extern NativeError_S FuelSensorPin_FrequencyInput_Create(void);
extern void FuelSensorPin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void FuelSensorPin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);
extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle);
extern NativeError_S VSPD_Pin_FrequencyInput_Create(void);
extern void VSPD_Pin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void VSPD_Pin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);

/* S-Function Block: <S484>/motohawk_ain14 Resource: SysVoltage */
NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S SysVoltage_AnalogInput_Create(void);
extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle);
extern NativeError_S MAF_Pin_FrequencyInput_Create(void);
extern void MAF_Pin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void MAF_Pin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);

/* S-Function Block: <S482>/motohawk_ain1 Resource: ClutchSw_Pin */
NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ClutchSw_Pin_AnalogInput_Create(void);

/* S-Function Block: <S482>/motohawk_ain6 Resource: ScramblePin */
NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ScramblePin_AnalogInput_Create(void);

/* S-Function Block: <S484>/motohawk_ain2 Resource: FuelPresPin */
NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S FuelPresPin_AnalogInput_Create(void);

/* S-Function Block: <S484>/motohawk_ain1 Resource: OilPresPin */
NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S OilPresPin_AnalogInput_Create(void);

/* S-Function Block: <S794>/motohawk_pwm Resource: FAN1Pin_PWM_PWMOutput */
void FAN1Pin_PWM_PWMOutput_PWMOutput_Create(void);
void FAN1Pin_PWM_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void FAN1Pin_PWM_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S794>/motohawk_pwm1 Resource: FAN2Pin_PWM_PWMOutput */
void FAN2Pin_PWM_PWMOutput_PWMOutput_Create(void);
void FAN2Pin_PWM_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void FAN2Pin_PWM_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S795>/motohawk_dout Resource: NONE */
extern NativeError_S DOut11001p0004_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut11001p0004_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut11001p0004_DiscreteOutput_Create(void);

/* S-Function Block: <S482>/motohawk_din Resource: ESTOPPin */
NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T *status);
NativeError_S ESTOPPin_DigitalInput_Create(void);

/* S-Function Block: <S796>/motohawk_pwm1 Resource: ETCPin_PWMOutput */
void ETCPin_PWMOutput_PWMOutput_Create(void);
void ETCPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable);
void ETCPin_PWMOutput_PWMOutput_Stop(void);
void ETCPin_PWMOutput_PWMOutput_Outputs(uint8_T * fault_addr, int16_T
  * current_addr);

/* S-Function Block: <S797>/motohawk_pwm Resource: IAC_PPin_PWMOutput */
void IAC_PPin_PWMOutput_PWMOutput_Create(void);
void IAC_PPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void IAC_PPin_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S797>/motohawk_pwm1 Resource: IAC_SPin_PWMOutput */
void IAC_SPin_PWMOutput_PWMOutput_Create(void);
void IAC_SPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void IAC_SPin_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S799>/motohawk_pwm Resource: WASTEGATE_PWMOutput */
void WASTEGATE_PWMOutput_PWMOutput_Create(void);
void WASTEGATE_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void WASTEGATE_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S484>/motohawk_ain3 Resource: SensVoltSensorPin */
NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S SensVoltSensorPin_AnalogInput_Create(void);

/* S-Function Block: <Root>/motohawk_serial_def Resource: RS485 */
void RS485_SerialErrorCallback(E_CommsError errorType, NativePtrSizedInt_U
  in_uAppSuppliedData);
NativeError_S RS485_SerialLink_Transmit(void const * out_pData,
  NativePtrSizedInt_U in_uLength);
NativeError_S RS485_SerialLink_ReadSync(void* in_pBuffer, NativeVar_U
  in_uCharactersToRead, int32_T in_sTimeOutInMillisecs);
NativeError_S RS485_SerialLink_Create(void);

#endif
