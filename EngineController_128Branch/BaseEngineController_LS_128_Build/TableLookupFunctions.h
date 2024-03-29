#ifndef _TABLE_LOOKUP_FUNCTIONS_H_
#define _TABLE_LOOKUP_FUNCTIONS_H_
#include "CommonInclude.h"

extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T ordarr[],
  uint32_T sz, uint16_T prev);
extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
  real_T *map_data, uint32_T row_sz, uint32_T col_sz);
extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
  uint32_T sz);
extern int16_T TableInterpolation1D_int16_T(uint16_T idx, int16_T *tbl_data,
  uint32_T sz);
extern int8_T TableInterpolation2D_int8_T(uint16_T row_in, uint16_T col_in,
  int8_T *map_data, uint32_T row_sz, uint32_T col_sz);
extern int8_T TableInterpolation1D_int8_T(uint16_T idx, int8_T *tbl_data,
  uint32_T sz);
extern uint8_T TableInterpolation2D_uint8_T(uint16_T row_in, uint16_T col_in,
  uint8_T *map_data, uint32_T row_sz, uint32_T col_sz);

#endif
