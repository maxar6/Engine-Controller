#ifndef APPLICATION_H
#define APPLICATION_H

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "CommonInclude.h"
#include "mh_ccp_protocol.h"
#include "FaultManager.h"
#include "TableLookupFunctions.h"

/*---- TYPEDEF --------------------------------------------------------------------------------------------*/

/*---- CUSTOM HEADER CODE ---------------------------------------------------------------------------------*/
typedef struct {
  uint32_T primaryDuration;
  int16_T primaryEOI;
  boolean_T primaryComplete;
  int32_T pinResource;
} TransientInjectorSeqInfo_T;

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
#endif                                 /* APPLICATION_H */
