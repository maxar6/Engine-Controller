
/* MotoCoder_Timer.c */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2022-11-08 22:18:19 */
/* Copyright: 2022 Woodward. */


#include <MotoCoder_Timer.h>

/* Timer Functions */
void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us, uint32_T *upper32Bits_us)
{
	if ((upper32Bits_us != NULL) && (lower32Bits_us != NULL))
	{
		S_FreeRunningCounter64Bit time64;
		GetFreeRunningCounter64Bits(&time64);
		*upper32Bits_us = time64.u4Upper32Bits;
		*lower32Bits_us = time64.u4Lower32Bits;
	}
	else if (lower32Bits_us != NULL)
	{
		GetFreeRunningCounter32Bits(lower32Bits_us);
	}
}
void Timer_FreeRunningCounter_ResetTime(void)
{
	ResetFreeRunningCounter64Bits();
}
uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits)
{
	if ((pReference_lower32Bits != NULL) && (pReference_upper32Bits != NULL))
	{
		uint32_T low;
		uint32_T high;
		uint64_T now;
		uint64_T ref;

		Timer_FreeRunningCounter_GetTime(&low, &high);
		now = (uint64_T) low + ((uint64_T)high) << 32;
		ref = (uint64_T) *pReference_lower32Bits + ((uint64_T) *pReference_upper32Bits) << 32;
		*pReference_lower32Bits = low;
		*pReference_upper32Bits = high;
		return ((uint32_T) (now - ref));
	}
	else if (pReference_lower32Bits != NULL)
	{
		uint32_T now;
		uint32_T result;
		GetFreeRunningCounter32Bits(&now);
		result = (now - *pReference_lower32Bits);
		*pReference_lower32Bits = now;
		return result;
	}
	return 0;
}
uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T u32Time_us)
{
	return u32Time_us;
}

