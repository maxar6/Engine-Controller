/*
 * MotoHawk_IO.h
 *
 */

#ifndef MOTOHAWK_IO_H
#define MOTOHAWK_IO_H
#include "CommonInclude.h"

/* S-Function Block: <S791>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECUP_AnalogInput_Create(void);

/* S-Function Block: <S791>/motohawk_dout Resource: MPRD */
extern NativeError_S DOut8677p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut8677p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut8677p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S515>/motohawk_ain Resource: MAPSensorPin */
NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S MAPSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S541>/motohawk_ain Resource: ECTSensorPin */
NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECTSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S541>/motohawk_ain1 Resource: IATSensorPin */
NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S IATSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S541>/motohawk_ain2 Resource: EVAPSensorPin */
NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S EVAPSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S541>/motohawk_ain3 Resource: CATSensorPin */
NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S CATSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S698>/motohawk_dout Resource: NONE */
extern NativeError_S DOut7896p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut7896p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut7896p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S402>/motohawk_ain5 Resource: ACSwPin */
NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ACSwPin_AnalogInput_Create(void);

/* S-Function Block: <S404>/motohawk_ain4 Resource: ACPresPin */
NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ACPresPin_AnalogInput_Create(void);

/* S-Function Block: <S406>/motohawk_ain1 Resource: APP1AnalogInput */
NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S APP1AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S406>/motohawk_ain2 Resource: APP2AnalogInput */
NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S APP2AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S406>/motohawk_ain6 Resource: TPS1AnalogInput */
NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S TPS1AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S406>/motohawk_ain9 Resource: TPS2AnalogInput */
NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S TPS2AnalogInput_AnalogInput_Create(void);
extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
  int16_T *duty_cycle);
extern NativeError_S FuelSensorPin_FrequencyInput_Create(void);
extern void FuelSensorPin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void FuelSensorPin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);

/* S-Function Block: <S404>/motohawk_ain14 Resource: SysVoltage */
NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S SysVoltage_AnalogInput_Create(void);
extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle);
extern NativeError_S VSPD_Pin_FrequencyInput_Create(void);
extern void VSPD_Pin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void VSPD_Pin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);
extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle);
extern NativeError_S MAF_Pin_FrequencyInput_Create(void);
extern void MAF_Pin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void MAF_Pin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);

/* S-Function Block: <S402>/motohawk_ain1 Resource: ClutchSw_Pin */
NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ClutchSw_Pin_AnalogInput_Create(void);

/* S-Function Block: <S402>/motohawk_ain6 Resource: ScramblePin */
NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ScramblePin_AnalogInput_Create(void);

/* S-Function Block: <S402>/motohawk_din2 Resource: TwoStepPin */
NativeError_S TwoStepPin_DigitalInput_Get(boolean_T *out, uint16_T *status);
NativeError_S TwoStepPin_DigitalInput_Create(void);

/* S-Function Block: <S700>/motohawk_dout Resource: NONE */
extern NativeError_S DOut8152p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut8152p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut8152p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S700>/motohawk_dout1 Resource: NONE */
extern NativeError_S DOut8153p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut8153p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut8153p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S701>/motohawk_dout Resource: NONE */
extern NativeError_S DOut8161p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut8161p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut8161p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S402>/motohawk_din Resource: ESTOPPin */
NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T *status);
NativeError_S ESTOPPin_DigitalInput_Create(void);

/* S-Function Block: <S702>/motohawk_pwm1 Resource: ETCPin_PWMOutput */
void ETCPin_PWMOutput_PWMOutput_Create(void);
void ETCPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable);
void ETCPin_PWMOutput_PWMOutput_Stop(void);
void ETCPin_PWMOutput_PWMOutput_Outputs(uint8_T * fault_addr, int16_T
  * current_addr);

/* S-Function Block: <S703>/motohawk_pwm Resource: IAC_PPin_PWMOutput */
void IAC_PPin_PWMOutput_PWMOutput_Create(void);
void IAC_PPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void IAC_PPin_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S703>/motohawk_pwm1 Resource: IAC_SPin_PWMOutput */
void IAC_SPin_PWMOutput_PWMOutput_Create(void);
void IAC_SPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void IAC_SPin_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S404>/motohawk_ain2 Resource: FuelPresPin */
NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S FuelPresPin_AnalogInput_Create(void);

/* S-Function Block: <S705>/motohawk_pwm Resource: WASTEGATE_PWMOutput */
void WASTEGATE_PWMOutput_PWMOutput_Create(void);
void WASTEGATE_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void WASTEGATE_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S404>/motohawk_ain1 Resource: OilPresPin */
NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S OilPresPin_AnalogInput_Create(void);

/* S-Function Block: <S404>/motohawk_ain3 Resource: SensVoltSensorPin */
NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S SensVoltSensorPin_AnalogInput_Create(void);

#endif
