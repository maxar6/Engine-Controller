
/* MotoCoder_KeySuite.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2022-11-22 13:57:05 */
/* Copyright: 2022 Woodward. */


#ifndef MOTOCODER_KEYSUITE_H
#define MOTOCODER_KEYSUITE_H



#include <MotoCoder_Types.h>
	

/* Call at startup from application to initialize the KeySuite state */
extern void KeySuite_Create(void);

/* Call periodically from application, or as often as possible, such as when idle */
extern void KeySuite_RefreshPeriodicTimer(void);

/* Call from application to service incoming messages, as often as possible, such as when idle */
extern void KeySuite_MessageHandler(void);


#endif
