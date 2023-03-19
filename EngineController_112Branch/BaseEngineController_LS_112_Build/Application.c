/*
 * Application.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#include "BaseEngineController_LS_112.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define DLL_NAME                       "BaseEngin_034"
#define SRZ_NAME                       "BaseEngineController_LS_112_034"
#define MODEL_NAME                     "BaseEngineController_LS_112"
#define MODEL_GUID                     "643353ad-4f7e-4dfd-b4-60-e2-b1-03-a9-6b"
#define BUILD_GUID                     "93cf328e-1180-4013-ba-c8-e0-53-f6-c0-39"
#define TOKEN_GUID                     "DD8AD11F95A6FC42BFF9AC780840E4B4"
#define MOTOHAWK_VERSION               "MotoHawk 2011a_sp0.184"
#define MATLAB_VERSION                 "MATLAB 7.12.0"
#define COMPILER_VERSION               "gcc-powerpc-eabispe 4.4.0"

/*---- TYPEDEF --------------------------------------------------------------------------------------------*/

/*---- FUNCTION PROTOTYPES --------------------------------------------------------------------------------*/
void OpenApplication(void);

/*---- CONSTANTS ------------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_Strings_rodata.h>

/* Name: MotoHawkModelName CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkModelName[0] Group:"System | Version" Help:"Simulink model name used for the MotoHawk build" */
const uint1 MotoHawkModelName[80] = MODEL_NAME;

/* Name: CompilerVersion CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:CompilerVersion[0] Group:"System | Version" Help:"Compiler toolchain version used for the MotoHawk build" */
const uint1 CompilerVersion[80] = COMPILER_VERSION;

/* Name: MotoHawkVersionTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:50
   Struct:MotoHawkVersionTxt[0] Group:"System | Version" Help:"MotoHawk version used to build the application." */
const uint1 MotoHawkVersionTxt[50] = MOTOHAWK_VERSION;

/* Name: MatlabVersionTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MatlabVersionTxt[0] Group:"System | Version" Help:"MATLAB version used to build the application." */
const uint1 MatlabVersionTxt[80] = MATLAB_VERSION;

/* Name: MotoHawkModelGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkModelGUID[0] Group:"System | Version" Help:"GUID identifying the MotoHawk model" */
const uint1 MotoHawkModelGUID[80] = MODEL_GUID;

/* Name: MotoHawkBuildGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkBuildGUID[0] Group:"System | Version" Help:"GUID identifying the MotoHawk build session" */
const uint1 MotoHawkBuildGUID[80] = BUILD_GUID;

/* Name: MotoHawkTokenGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkTokenGUID[0] Group:"System | Version" Help:"GUID identifying the token inserted during the build.  May be empty if no token was available" */
const uint1 MotoHawkTokenGUID[80] = TOKEN_GUID;

#include <Pragma_Section_End_rodata.h>

/*---- APPLICATION STACKS ---------------------------------------------------------------------------------*/

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_CC_Code.h>

/*---- LOCAL FUNCTIONS ------------------------------------------------------------------------------------*/

/* Supply the calibration for CityID, when requested */
void mh_CAN_1_CityID_Update (uint8_T* CAN_1_CityID)
{
  if (CAN_1_CityID != 0) {
    *CAN_1_CityID = (CityID_CAN_1_DataStore());
  }
}

/* Supply the calibration for CityID, when requested */
void mh_CAN_2_CityID_Update (uint8_T* CAN_2_CityID)
{
  if (CAN_2_CityID != 0) {
    *CAN_2_CityID = (CityID_CAN_2_DataStore());
  }
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: CloseApplication
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void CloseApplication(void)
{
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: OpenApplication
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void OpenApplication(void)
{
  /* Initialize Fault Manager */
  {
    uint32_T i;
    for (i=0; i < 162; i++) {
      if ((FaultManager_DataStore_ByIndex(i).mode ==
           FAULT_MODE_STICKYDASHPERSISTENT) ||
          (FaultManager_DataStore_ByIndex(i).mode ==
           FAULT_MODE_ENABLEDDASHPERSISTENT)) {
        /* Keep all status information from shutdown */
      } else if (FaultManager_DataStore_ByIndex(i).mode ==
                 FAULT_MODE_SAVEOCCURRED) {
        /* Reset x/y counters and suspected/active status.
           Set any previously active faults to now be occurred.
           Otherwise, leave occurred as it was */
        VolFaults_DataStore_ByIndex(i).x = 0;
        VolFaults_DataStore_ByIndex(i).y = 0;
        SetFaultSuspected(i, 0);
        if (IsFaultActive(i)) {
          SetFaultOccurred(i, 1);
        }

        SetFaultActive(i, 0);
      } else {
        /* Clear fault state on startup */
        VolFaults_DataStore_ByIndex(i).x = 0;
        VolFaults_DataStore_ByIndex(i).y = 0;
        SetFaultSuspected(i, 0);
        SetFaultActive(i, 0);
        SetFaultOccurred(i, 0);
      }
    }

    RefreshFaultActionReferenceCounts();
  }

  /* Initialize Application Model: BaseEngineController_LS_112 */
  BaseEngineController_LS_112_initialize(1);
  BaseEngineController_LS_112_step();

  /* Initialize EncoderTDCOrder */
  {
    int32_T i;
    int32_T j;
    int16_T prev_angle;
    int16_T min_angle;
    int8_T min_cylinder;
    prev_angle = 0;
    (EncoderTDCOrder_DataStore())[0] = 0;
    for (i=1; i < (EncoderNumCylinders_DataStore()); i++) {
      min_angle = 32767;
      min_cylinder = -1;
      for (j=1; j < (EncoderNumCylinders_DataStore()); j++) {
        if (((EncoderTDCAngles_DataStore())[j] > prev_angle) &&
            ((EncoderTDCAngles_DataStore())[j] < min_angle)) {
          min_angle = (EncoderTDCAngles_DataStore())[j];
          min_cylinder = (int8_T) j;
        }
      }

      (EncoderTDCOrder_DataStore())[i] = min_cylinder;
      prev_angle = min_angle;
    }

    while (i < 8) {
      (EncoderTDCOrder_DataStore())[i] = -1;
      i++;
    }
  }
}

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
