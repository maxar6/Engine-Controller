/*
 * Trigger_FGND_HIRES_5882p001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2222
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_HIRES_5882p001(void)
{
  /* Named constants for Stateflow: '<S862>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S307>/MisfireDiagFunc' */
    {
      /* local block i/o variables */
      real_T rtb_MinMax_cg;
      real_T rtb_MinMax_me;
      real_T rtb_MinMax_j;
      uint32_T rtb_motohawk_abs_time;
      int16_T rtb_motohawk_encoder_angle2;
      uint16_T rtb_UnitDelay1_n;
      uint16_T rtb_UnitDelay1_g;
      uint16_T rtb_motohawk_encoder_instant_rpm;
      boolean_T rtb_motohawk_data_read2_c[8];
      boolean_T rtb_Compare_p;
      boolean_T rtb_Compare_h;
      boolean_T rtb_Compare_m;
      boolean_T rtb_Compare_l;
      boolean_T rtb_Compare_n;
      boolean_T rtb_Compare_f;
      boolean_T rtb_Compare_i;
      boolean_T rtb_Compare_b;
      boolean_T rtb_Logic_o[2];
      boolean_T rtb_Logic_m[2];
      boolean_T rtb_Memory_c;
      boolean_T rtb_LogicalOperator3_n;
      boolean_T rtb_LogicalOperator_ht[8];
      real_T rtb_Product_ou[8];
      uint16_T rtb_Sum_ea;
      real_T rtb_Product_j;
      real_T rtb_UnitDelay2_k;
      int8_T rtPrevAction;
      int8_T rtAction;
      boolean_T rtb_LogicalOperator1_j[8];
      real_T rtb_UnitDelay2_i;
      uint32_T rtb_DataTypeConversion1_f;
      uint32_T rtb_Sum3[8];
      uint32_T rtb_Gain1[8];
      int32_T i;
      boolean_T rtb_LogicalOperator1_j_0;
      uint32_T rtb_Gain_0;
      int16_T tmp;
      uint32_T tmp_0;

      /* S-Function (motohawk_sfun_data_read): '<S310>/motohawk_data_read2' */
      {
        int_T i1;
        boolean_T *y0 = rtb_motohawk_data_read2_c;
        for (i1=0; i1 < 8; i1++) {
          y0[i1] = MisfireDiag_RPMDR_DataStore()[i1];
        }
      }

      /* Product: '<S313>/Product' incorporates:
       *  Constant: '<S313>/Constant'
       *  Logic: '<S314>/Logical Operator'
       *  Logic: '<S314>/Logical Operator1'
       *  UnitDelay: '<S314>/Unit Delay'
       */
      for (i = 0; i < 8; i++) {
        rtb_Product_ou[i] = (real_T)(rtb_motohawk_data_read2_c[i] &&
          (!BaseEngineController_LS_DWork.s314_UnitDelay_DSTATE[i])) *
          BaseEngineController_LS_ConstP.pooled76[i];
      }

      /* End of Product: '<S313>/Product' */

      /* MinMax: '<S313>/MinMax' incorporates:
       *  MinMax: '<S324>/MinMax'
       *  MinMax: '<S325>/MinMax'
       */
      rtb_Product_j = rtb_Product_ou[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_j = (rtb_Product_j >= rtb_Product_ou[i + 1]) || rtIsNaN
          (rtb_Product_ou[i + 1]) ? rtb_Product_j : rtb_Product_ou[i + 1];
      }

      rtb_MinMax_cg = rtb_Product_j;

      /* End of MinMax: '<S313>/MinMax' */
      /* Sum: '<S310>/Sum' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S310>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S310>/motohawk_data_read1'
       */
      rtb_Sum_ea = (uint16_T)(((uint16_T)MisfireDiag_StopRPM_DataStore()
        [(uint32_T)rtb_MinMax_cg]) - ((uint16_T)MisfireDiag_StartRPM_DataStore()
        [(uint32_T)rtb_MinMax_cg]));

      /* RelationalOperator: '<S310>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration1'
       */
      rtb_Memory_c = ((real_T)rtb_Sum_ea <=
                      (MisfireDiag_HardMisfireThreshold_DataStore()));

      /* Logic: '<S310>/Logical Operator1' incorporates:
       *  Constant: '<S312>/Constant'
       *  RelationalOperator: '<S312>/Compare'
       */
      rtb_LogicalOperator3_n = (rtb_Memory_c && (rtb_MinMax_cg > 0.0));

      /* Product: '<S310>/Product' */
      rtb_Product_j = rtb_MinMax_cg * (real_T)rtb_LogicalOperator3_n;

      /* RelationalOperator: '<S316>/Compare' incorporates:
       *  Constant: '<S316>/Constant'
       */
      rtb_Compare_p = ((rtb_Product_j == 1.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def' */

      /* Set Fault Suspected Status: Cylinder1_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(28, rtb_Compare_p);
        UpdateFault(28);
      }

      /* RelationalOperator: '<S317>/Compare' incorporates:
       *  Constant: '<S317>/Constant'
       */
      rtb_Compare_h = ((rtb_Product_j == 2.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: Cylinder2_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(29, rtb_Compare_h);
        UpdateFault(29);
      }

      /* RelationalOperator: '<S318>/Compare' incorporates:
       *  Constant: '<S318>/Constant'
       */
      rtb_Compare_m = ((rtb_Product_j == 3.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Cylinder3_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(30, rtb_Compare_m);
        UpdateFault(30);
      }

      /* RelationalOperator: '<S319>/Compare' incorporates:
       *  Constant: '<S319>/Constant'
       */
      rtb_Compare_l = ((rtb_Product_j == 4.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: Cylinder4_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(31, rtb_Compare_l);
        UpdateFault(31);
      }

      /* RelationalOperator: '<S320>/Compare' incorporates:
       *  Constant: '<S320>/Constant'
       */
      rtb_Compare_n = ((rtb_Product_j == 5.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: Cylinder5_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(32, rtb_Compare_n);
        UpdateFault(32);
      }

      /* RelationalOperator: '<S321>/Compare' incorporates:
       *  Constant: '<S321>/Constant'
       */
      rtb_Compare_f = ((rtb_Product_j == 6.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: Cylinder6_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(33, rtb_Compare_f);
        UpdateFault(33);
      }

      /* RelationalOperator: '<S322>/Compare' incorporates:
       *  Constant: '<S322>/Constant'
       */
      rtb_Compare_i = ((rtb_Product_j == 7.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: Cylinder7_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(34, rtb_Compare_i);
        UpdateFault(34);
      }

      /* RelationalOperator: '<S323>/Compare' incorporates:
       *  Constant: '<S323>/Constant'
       */
      rtb_Compare_b = ((rtb_Product_j == 8.0));

      /* S-Function (motohawk_sfun_fault_def): '<S315>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: Cylinder8_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(35, rtb_Compare_b);
        UpdateFault(35);
      }

      /* UnitDelay: '<S327>/Unit Delay1' */
      rtb_UnitDelay1_n = BaseEngineController_LS_DWork.s327_UnitDelay1_DSTATE;

      /* UnitDelay: '<S327>/Unit Delay2' */
      rtb_UnitDelay2_k = BaseEngineController_LS_DWork.s327_UnitDelay2_DSTATE;

      /* RelationalOperator: '<S327>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S327>/motohawk_calibration'
       *  UnitDelay: '<S327>/Unit Delay2'
       */
      BaseEngineController_LS_B.s327_RelationalOperator =
        ((BaseEngineController_LS_DWork.s327_UnitDelay2_DSTATE >= (real_T)
          ((uint8_T)(MisfireDiag_StartRPMAvgCnt_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S327>/SafeDivide' */
      BaseEngineController_LS_SafeDivide
        (BaseEngineController_LS_B.s327_RelationalOperator,
         (MisfireDiag_StartRPMAvgCnt_DataStore()), rtb_UnitDelay1_n,
         &BaseEngineController_LS_B.s327_SafeDivide);

      /* End of Outputs for SubSystem: '<S327>/SafeDivide' */
      for (i = 0; i < 8; i++) {
        /* Gain: '<S311>/Gain' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration'
         */
        rtb_DataTypeConversion1_f = (uint32_T)((uint16_T)
          (MisfireDiag_StartAngles_DataStore())[i]) << 15;

        /* Sum: '<S311>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration2'
         */
        rtb_Gain1[i] = ((uint32_T)((uint16_T)(MisfireDiag_AngleHyst_DataStore()))
                        << 11) + rtb_DataTypeConversion1_f;

        /* Gain: '<S311>/Gain' */
        rtb_Sum3[i] = rtb_DataTypeConversion1_f;
      }

      /* If: '<S326>/If' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration3'
       */
      rtPrevAction = BaseEngineController_LS_DWork.s326_If_ActiveSubsystem;
      if ((MisfireDiag_EncoderExtrap_MPC5XX_DataStore())) {
        rtAction = 0;
      } else {
        rtAction = 1;
      }

      BaseEngineController_LS_DWork.s326_If_ActiveSubsystem = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      }

      switch (rtAction) {
       case 0:
        if (rtAction != rtPrevAction) {
        }

        /* Outputs for IfAction SubSystem: '<S326>/EncoderAngle_wExtrap' incorporates:
         *  ActionPort: '<S331>/Action Port'
         */
        /* S-Function Block: <S333>/motohawk_encoder_angle2 */
        {
          extern int16_T GetEncoderEngAngle(void);
          rtb_motohawk_encoder_angle2 = GetEncoderEngAngle();
        }

        /* DataTypeConversion: '<S333>/Data Type Conversion' */
        tmp = rtb_motohawk_encoder_angle2;
        if (rtb_motohawk_encoder_angle2 <= 0) {
          tmp = 0;
        }

        /* End of DataTypeConversion: '<S333>/Data Type Conversion' */
        /* S-Function Block: <S333>/motohawk_encoder_instant_rpm */
        {
          rtb_motohawk_encoder_instant_rpm = GetEncoderResourceInstantRPM();
        }

        /* DataTypeConversion: '<S333>/Data Type Conversion1' incorporates:
         *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S333>/motohawk_encoder_instant_rpm'
         */
        rtb_DataTypeConversion1_f = rtb_motohawk_encoder_instant_rpm;

        /* Gain: '<S333>/Gain' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S333>/motohawk_calibration'
         */
        if ((CrankDegrees_pertooth_DataStore()) > 268435455U) {
          rtb_Gain_0 = MAX_uint32_T;
        } else {
          rtb_Gain_0 = (CrankDegrees_pertooth_DataStore()) << 4;
        }

        /* End of Gain: '<S333>/Gain' */
        /* S-Function Block: <S333>/motohawk_abs_time */
        {
          extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us,
            uint32_T *upper32Bits_us);
          Timer_FreeRunningCounter_GetTime(&rtb_motohawk_abs_time, NULL);
        }

        /* Product: '<S333>/Product1' incorporates:
         *  Constant: '<S333>/Constant1'
         *  Constant: '<S333>/Constant2'
         *  Product: '<S333>/Product'
         *  S-Function (motohawk_sfun_abs_time): '<S333>/motohawk_abs_time'
         *  Sum: '<S333>/Sum'
         */
        rtb_DataTypeConversion1_f = (rtb_motohawk_abs_time -
          BaseEngineController_LS_B.s334_motohawk_abs_time) *
          rtb_DataTypeConversion1_f * 3U / 31250U;

        /* Switch: '<S333>/Switch' incorporates:
         *  Constant: '<S333>/Constant3'
         *  Gain: '<S333>/Gain'
         *  RelationalOperator: '<S333>/Relational Operator'
         */
        if (rtb_DataTypeConversion1_f >= rtb_Gain_0) {
          rtb_DataTypeConversion1_f = 0U;
        }

        /* End of Switch: '<S333>/Switch' */

        /* Sum: '<S333>/Sum1' incorporates:
         *  DataTypeConversion: '<S333>/Data Type Conversion'
         */
        BaseEngineController_LS_B.s333_Sum1 = (uint32_T)tmp -
          rtb_DataTypeConversion1_f;

        /* End of Outputs for SubSystem: '<S326>/EncoderAngle_wExtrap' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S326>/EncoderAngle_wOExtrap' incorporates:
         *  ActionPort: '<S332>/Action Port'
         */

        /* S-Function Block: <S332>/motohawk_encoder_angle */
        {
          extern int16_T GetEncoderEngAngle(void);
          BaseEngineController_LS_B.s326_Merge = GetEncoderEngAngle();
        }

        /* End of Outputs for SubSystem: '<S326>/EncoderAngle_wOExtrap' */
        break;
      }

      /* End of If: '<S326>/If' */

      /* DataTypeConversion: '<S326>/Data Type Conversion' */
      BaseEngineController_LS_B.s326_Merge = (int16_T)
        BaseEngineController_LS_B.s333_Sum1;
      for (i = 0; i < 8; i++) {
        /* RelationalOperator: '<S311>/Relational Operator' */
        if (BaseEngineController_LS_B.s326_Merge <= 0) {
          rtb_DataTypeConversion1_f = 0U;
        } else {
          rtb_DataTypeConversion1_f = (uint32_T)
            BaseEngineController_LS_B.s326_Merge << 11;
        }

        /* End of RelationalOperator: '<S311>/Relational Operator' */

        /* RelationalOperator: '<S311>/Relational Operator1' */
        if (BaseEngineController_LS_B.s326_Merge <= 0) {
          tmp_0 = 0U;
        } else {
          tmp_0 = (uint32_T)BaseEngineController_LS_B.s326_Merge << 11;
        }

        /* End of RelationalOperator: '<S311>/Relational Operator1' */

        /* Logic: '<S311>/Logical Operator' incorporates:
         *  RelationalOperator: '<S311>/Relational Operator'
         *  RelationalOperator: '<S311>/Relational Operator1'
         *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration2'
         *  Sum: '<S311>/Sum1'
         */
        rtb_LogicalOperator1_j_0 = ((rtb_Gain1[i] <= rtb_DataTypeConversion1_f) &&
                                    (rtb_Sum3[i] - ((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) >= tmp_0));

        /* Product: '<S324>/Product' incorporates:
         *  Constant: '<S324>/Constant'
         */
        rtb_Product_ou[i] = (real_T)rtb_LogicalOperator1_j_0 *
          BaseEngineController_LS_ConstP.pooled76[i];

        /* Logic: '<S311>/Logical Operator' */
        rtb_LogicalOperator_ht[i] = rtb_LogicalOperator1_j_0;
      }

      /* MinMax: '<S324>/MinMax' incorporates:
       *  MinMax: '<S313>/MinMax'
       *  MinMax: '<S325>/MinMax'
       */
      rtb_Product_j = rtb_Product_ou[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_j = (rtb_Product_j >= rtb_Product_ou[i + 1]) || rtIsNaN
          (rtb_Product_ou[i + 1]) ? rtb_Product_j : rtb_Product_ou[i + 1];
      }

      rtb_MinMax_me = rtb_Product_j;

      /* End of MinMax: '<S324>/MinMax' */

      /* Outputs for Enabled SubSystem: '<S311>/StoreRPMStart' incorporates:
       *  EnablePort: '<S329>/Enable'
       */
      if (BaseEngineController_LS_B.s327_RelationalOperator) {
        /* S-Function (motohawk_sfun_data_write): '<S329>/motohawk_data_write' */
        /* Write to Data Storage as vector: MisfireDiag_StartRPM */
        {
          MisfireDiag_StartRPM_DataStore()[(uint32_T)(rtb_MinMax_me)] =
            BaseEngineController_LS_B.s327_SafeDivide.s337_Product;
        }

        /* S-Function (motohawk_sfun_data_write): '<S329>/motohawk_data_write1' incorporates:
         *  Constant: '<S329>/Constant'
         */
        /* Write to Data Storage as vector: MisfireDiag_RPMDR */
        {
          MisfireDiag_RPMDR_DataStore()[(uint32_T)(rtb_MinMax_me)] = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S311>/StoreRPMStart' */
      /* UnitDelay: '<S328>/Unit Delay1' */
      rtb_UnitDelay1_g = BaseEngineController_LS_DWork.s328_UnitDelay1_DSTATE;

      /* UnitDelay: '<S328>/Unit Delay2' */
      rtb_UnitDelay2_i = BaseEngineController_LS_DWork.s328_UnitDelay2_DSTATE;

      /* RelationalOperator: '<S328>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration'
       *  UnitDelay: '<S328>/Unit Delay2'
       */
      BaseEngineController_LS_B.s328_RelationalOperator =
        ((BaseEngineController_LS_DWork.s328_UnitDelay2_DSTATE >= (real_T)
          ((uint8_T)(MisfireDiag_StopRPMAvgCnt_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S328>/SafeDivide' */
      BaseEngineController_LS_SafeDivide
        (BaseEngineController_LS_B.s328_RelationalOperator,
         (MisfireDiag_StopRPMAvgCnt_DataStore()), rtb_UnitDelay1_g,
         &BaseEngineController_LS_B.s328_SafeDivide);

      /* End of Outputs for SubSystem: '<S328>/SafeDivide' */
      for (i = 0; i < 8; i++) {
        /* Gain: '<S311>/Gain1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration1'
         */
        rtb_Gain_0 = (uint32_T)((uint16_T)(MisfireDiag_StopAngles_DataStore())[i])
          << 15;

        /* RelationalOperator: '<S311>/Relational Operator2' */
        if (BaseEngineController_LS_B.s326_Merge <= 0) {
          rtb_DataTypeConversion1_f = 0U;
        } else {
          rtb_DataTypeConversion1_f = (uint32_T)
            BaseEngineController_LS_B.s326_Merge << 11;
        }

        /* End of RelationalOperator: '<S311>/Relational Operator2' */

        /* RelationalOperator: '<S311>/Relational Operator3' */
        if (BaseEngineController_LS_B.s326_Merge <= 0) {
          tmp_0 = 0U;
        } else {
          tmp_0 = (uint32_T)BaseEngineController_LS_B.s326_Merge << 11;
        }

        /* End of RelationalOperator: '<S311>/Relational Operator3' */

        /* Logic: '<S311>/Logical Operator1' incorporates:
         *  RelationalOperator: '<S311>/Relational Operator2'
         *  RelationalOperator: '<S311>/Relational Operator3'
         *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration2'
         *  Sum: '<S311>/Sum2'
         *  Sum: '<S311>/Sum3'
         */
        rtb_LogicalOperator1_j_0 = ((((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) + rtb_Gain_0 <=
          rtb_DataTypeConversion1_f) && (rtb_Gain_0 - ((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) >= tmp_0));

        /* Product: '<S325>/Product' incorporates:
         *  Constant: '<S325>/Constant'
         */
        rtb_Product_ou[i] = (real_T)rtb_LogicalOperator1_j_0 *
          BaseEngineController_LS_ConstP.pooled76[i];

        /* Logic: '<S311>/Logical Operator1' */
        rtb_LogicalOperator1_j[i] = rtb_LogicalOperator1_j_0;
      }

      /* MinMax: '<S325>/MinMax' incorporates:
       *  MinMax: '<S313>/MinMax'
       *  MinMax: '<S324>/MinMax'
       */
      rtb_Product_j = rtb_Product_ou[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_j = (rtb_Product_j >= rtb_Product_ou[i + 1]) || rtIsNaN
          (rtb_Product_ou[i + 1]) ? rtb_Product_j : rtb_Product_ou[i + 1];
      }

      rtb_MinMax_j = rtb_Product_j;

      /* End of MinMax: '<S325>/MinMax' */

      /* Outputs for Enabled SubSystem: '<S311>/StoreRPMStart1' incorporates:
       *  EnablePort: '<S330>/Enable'
       */
      if (BaseEngineController_LS_B.s328_RelationalOperator) {
        /* S-Function (motohawk_sfun_data_write): '<S330>/motohawk_data_write' */
        /* Write to Data Storage as vector: MisfireDiag_StopRPM */
        {
          MisfireDiag_StopRPM_DataStore()[(uint32_T)(rtb_MinMax_j)] =
            BaseEngineController_LS_B.s328_SafeDivide.s337_Product;
        }

        /* S-Function (motohawk_sfun_data_write): '<S330>/motohawk_data_write1' incorporates:
         *  Constant: '<S330>/Constant'
         */
        /* Write to Data Storage as vector: MisfireDiag_RPMDR */
        {
          MisfireDiag_RPMDR_DataStore()[(uint32_T)(rtb_MinMax_j)] = TRUE;
        }
      }

      /* End of Outputs for SubSystem: '<S311>/StoreRPMStart1' */

      /* Logic: '<S311>/Logical Operator2' */
      rtb_LogicalOperator3_n = (rtb_LogicalOperator_ht[0] ||
        rtb_LogicalOperator_ht[1] || rtb_LogicalOperator_ht[2] ||
        rtb_LogicalOperator_ht[3] || rtb_LogicalOperator_ht[4] ||
        rtb_LogicalOperator_ht[5] || rtb_LogicalOperator_ht[6] ||
        rtb_LogicalOperator_ht[7]);

      /* Memory: '<S336>/Memory' */
      rtb_Memory_c = BaseEngineController_LS_DWork.s336_Memory_PreviousInput;

      /* CombinatorialLogic: '<S336>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_n != 0);
        rowidx = (rowidx << 1) + (uint_T)
          (BaseEngineController_LS_B.s327_RelationalOperator != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory_c != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic_o[0] = BaseEngineController_LS_ConstP.pooled810[rowidx];
        rtb_Logic_o[1] = BaseEngineController_LS_ConstP.pooled810[rowidx + 8];
      }

      /* Outputs for Enabled SubSystem: '<S327>/GetInstRPM' */
      BaseEngineController_LS_GetInstRPM(rtb_Logic_o[1],
        &BaseEngineController_LS_B.s327_GetInstRPM);

      /* End of Outputs for SubSystem: '<S327>/GetInstRPM' */

      /* Switch: '<S327>/Switch' incorporates:
       *  Constant: '<S327>/Constant'
       *  Constant: '<S327>/Constant1'
       *  Sum: '<S327>/Sum'
       */
      if (rtb_Logic_o[1]) {
        rtb_Product_j = 0.0;
      } else {
        rtb_Product_j = 1.0 + rtb_UnitDelay2_k;
      }

      /* End of Switch: '<S327>/Switch' */

      /* Switch: '<S327>/Switch1' incorporates:
       *  Constant: '<S327>/Constant3'
       *  Sum: '<S327>/Sum1'
       */
      if (rtb_Logic_o[1]) {
        rtb_Sum_ea = 0U;
      } else {
        /* Sum: '<S327>/Sum1' */
        rtb_DataTypeConversion1_f = (uint32_T)
          BaseEngineController_LS_B.s327_GetInstRPM.s335_motohawk_encoder_instant_rpm
          + (uint32_T)rtb_UnitDelay1_n;
        if (rtb_DataTypeConversion1_f > 65535U) {
          rtb_DataTypeConversion1_f = 65535U;
        }

        /* End of Sum: '<S327>/Sum1' */
        rtb_Sum_ea = (uint16_T)rtb_DataTypeConversion1_f;
      }

      /* End of Switch: '<S327>/Switch1' */

      /* Logic: '<S311>/Logical Operator3' */
      rtb_LogicalOperator3_n = (rtb_LogicalOperator1_j[0] ||
        rtb_LogicalOperator1_j[1] || rtb_LogicalOperator1_j[2] ||
        rtb_LogicalOperator1_j[3] || rtb_LogicalOperator1_j[4] ||
        rtb_LogicalOperator1_j[5] || rtb_LogicalOperator1_j[6] ||
        rtb_LogicalOperator1_j[7]);

      /* Memory: '<S339>/Memory' */
      rtb_Memory_c = BaseEngineController_LS_DWork.s339_Memory_PreviousInput;

      /* CombinatorialLogic: '<S339>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_n != 0);
        rowidx = (rowidx << 1) + (uint_T)
          (BaseEngineController_LS_B.s328_RelationalOperator != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory_c != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic_m[0] = BaseEngineController_LS_ConstP.pooled810[rowidx];
        rtb_Logic_m[1] = BaseEngineController_LS_ConstP.pooled810[rowidx + 8];
      }

      /* Outputs for Enabled SubSystem: '<S328>/GetInstRPM' */
      BaseEngineController_LS_GetInstRPM(rtb_Logic_m[1],
        &BaseEngineController_LS_B.s328_GetInstRPM);

      /* End of Outputs for SubSystem: '<S328>/GetInstRPM' */

      /* Switch: '<S328>/Switch' */
      if (rtb_Logic_m[1]) {
        /* Update for UnitDelay: '<S328>/Unit Delay2' incorporates:
         *  Constant: '<S328>/Constant1'
         */
        BaseEngineController_LS_DWork.s328_UnitDelay2_DSTATE = 0.0;
      } else {
        /* Update for UnitDelay: '<S328>/Unit Delay2' incorporates:
         *  Constant: '<S328>/Constant'
         *  Sum: '<S328>/Sum'
         */
        BaseEngineController_LS_DWork.s328_UnitDelay2_DSTATE = 1.0 +
          rtb_UnitDelay2_i;
      }

      /* End of Switch: '<S328>/Switch' */

      /* Switch: '<S328>/Switch1' */
      if (rtb_Logic_m[1]) {
        /* Update for UnitDelay: '<S328>/Unit Delay1' incorporates:
         *  Constant: '<S328>/Constant3'
         */
        BaseEngineController_LS_DWork.s328_UnitDelay1_DSTATE = 0U;
      } else {
        /* Sum: '<S328>/Sum1' */
        rtb_DataTypeConversion1_f = (uint32_T)
          BaseEngineController_LS_B.s328_GetInstRPM.s335_motohawk_encoder_instant_rpm
          + (uint32_T)rtb_UnitDelay1_g;
        if (rtb_DataTypeConversion1_f > 65535U) {
          rtb_DataTypeConversion1_f = 65535U;
        }

        /* End of Sum: '<S328>/Sum1' */

        /* Update for UnitDelay: '<S328>/Unit Delay1' incorporates:
         *  Sum: '<S328>/Sum1'
         */
        BaseEngineController_LS_DWork.s328_UnitDelay1_DSTATE = (uint16_T)
          rtb_DataTypeConversion1_f;
      }

      /* End of Switch: '<S328>/Switch1' */

      /* Update for UnitDelay: '<S314>/Unit Delay' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_DWork.s314_UnitDelay_DSTATE[i] =
          rtb_motohawk_data_read2_c[i];
      }

      /* End of UnitDelay: '<S314>/Unit Delay' */

      /* Update for UnitDelay: '<S327>/Unit Delay1' */
      BaseEngineController_LS_DWork.s327_UnitDelay1_DSTATE = rtb_Sum_ea;

      /* Update for UnitDelay: '<S327>/Unit Delay2' */
      BaseEngineController_LS_DWork.s327_UnitDelay2_DSTATE = rtb_Product_j;

      /* Update for Memory: '<S336>/Memory' */
      BaseEngineController_LS_DWork.s336_Memory_PreviousInput = rtb_Logic_o[0];

      /* Update for Memory: '<S339>/Memory' */
      BaseEngineController_LS_DWork.s339_Memory_PreviousInput = rtb_Logic_m[0];
    }
  }
}
