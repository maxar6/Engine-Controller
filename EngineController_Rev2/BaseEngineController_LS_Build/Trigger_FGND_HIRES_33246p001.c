/*
 * Trigger_FGND_HIRES_33246p001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2185
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Nov 21 23:22:06 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_HIRES_33246p001(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s324_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S324>/MisfireDiagFunc' */
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
      uint32_T rtb_Sum3_g[8];
      uint32_T rtb_Gain1[8];
      int32_T i;
      boolean_T rtb_LogicalOperator1_j_0;
      uint32_T rtb_Gain_0;
      int16_T tmp;
      uint32_T tmp_0;

      /* S-Function (motohawk_sfun_data_read): '<S327>/motohawk_data_read2' */
      {
        int_T i1;
        boolean_T *y0 = rtb_motohawk_data_read2_c;
        for (i1=0; i1 < 8; i1++) {
          y0[i1] = MisfireDiag_RPMDR_DataStore()[i1];
        }
      }

      /* Product: '<S330>/Product' incorporates:
       *  Constant: '<S330>/Constant'
       *  Logic: '<S331>/Logical Operator'
       *  Logic: '<S331>/Logical Operator1'
       *  UnitDelay: '<S331>/Unit Delay'
       */
      for (i = 0; i < 8; i++) {
        rtb_Product_ou[i] = (real_T)(rtb_motohawk_data_read2_c[i] &&
          (!BaseEngineController_LS_DWork.s331_UnitDelay_DSTATE[i])) *
          BaseEngineController_LS_ConstP.pooled85[i];
      }

      /* End of Product: '<S330>/Product' */

      /* MinMax: '<S330>/MinMax' incorporates:
       *  MinMax: '<S341>/MinMax'
       *  MinMax: '<S342>/MinMax'
       */
      rtb_Product_j = rtb_Product_ou[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_j = (rtb_Product_j >= rtb_Product_ou[i + 1]) || rtIsNaN
          (rtb_Product_ou[i + 1]) ? rtb_Product_j : rtb_Product_ou[i + 1];
      }

      rtb_MinMax_cg = rtb_Product_j;

      /* End of MinMax: '<S330>/MinMax' */
      /* Sum: '<S327>/Sum' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S327>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S327>/motohawk_data_read1'
       */
      rtb_Sum_ea = (uint16_T)(((uint16_T)MisfireDiag_StopRPM_DataStore()
        [(uint32_T)rtb_MinMax_cg]) - ((uint16_T)MisfireDiag_StartRPM_DataStore()
        [(uint32_T)rtb_MinMax_cg]));

      /* RelationalOperator: '<S327>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S327>/motohawk_calibration1'
       */
      rtb_Memory_c = ((real_T)rtb_Sum_ea <=
                      (MisfireDiag_HardMisfireThreshold_DataStore()));

      /* Logic: '<S327>/Logical Operator1' incorporates:
       *  Constant: '<S329>/Constant'
       *  RelationalOperator: '<S329>/Compare'
       */
      rtb_LogicalOperator3_n = (rtb_Memory_c && (rtb_MinMax_cg > 0.0));

      /* Product: '<S327>/Product' */
      rtb_Product_j = rtb_MinMax_cg * (real_T)rtb_LogicalOperator3_n;

      /* RelationalOperator: '<S333>/Compare' incorporates:
       *  Constant: '<S333>/Constant'
       */
      rtb_Compare_p = ((rtb_Product_j == 1.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def' */

      /* Set Fault Suspected Status: Cylinder1_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(34, rtb_Compare_p);
        UpdateFault(34);
      }

      /* RelationalOperator: '<S334>/Compare' incorporates:
       *  Constant: '<S334>/Constant'
       */
      rtb_Compare_h = ((rtb_Product_j == 2.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: Cylinder2_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(35, rtb_Compare_h);
        UpdateFault(35);
      }

      /* RelationalOperator: '<S335>/Compare' incorporates:
       *  Constant: '<S335>/Constant'
       */
      rtb_Compare_m = ((rtb_Product_j == 3.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Cylinder3_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(36, rtb_Compare_m);
        UpdateFault(36);
      }

      /* RelationalOperator: '<S336>/Compare' incorporates:
       *  Constant: '<S336>/Constant'
       */
      rtb_Compare_l = ((rtb_Product_j == 4.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: Cylinder4_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(37, rtb_Compare_l);
        UpdateFault(37);
      }

      /* RelationalOperator: '<S337>/Compare' incorporates:
       *  Constant: '<S337>/Constant'
       */
      rtb_Compare_n = ((rtb_Product_j == 5.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: Cylinder5_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(38, rtb_Compare_n);
        UpdateFault(38);
      }

      /* RelationalOperator: '<S338>/Compare' incorporates:
       *  Constant: '<S338>/Constant'
       */
      rtb_Compare_f = ((rtb_Product_j == 6.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: Cylinder6_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(39, rtb_Compare_f);
        UpdateFault(39);
      }

      /* RelationalOperator: '<S339>/Compare' incorporates:
       *  Constant: '<S339>/Constant'
       */
      rtb_Compare_i = ((rtb_Product_j == 7.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: Cylinder7_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(40, rtb_Compare_i);
        UpdateFault(40);
      }

      /* RelationalOperator: '<S340>/Compare' incorporates:
       *  Constant: '<S340>/Constant'
       */
      rtb_Compare_b = ((rtb_Product_j == 8.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: Cylinder8_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(41, rtb_Compare_b);
        UpdateFault(41);
      }

      /* UnitDelay: '<S344>/Unit Delay1' */
      rtb_UnitDelay1_n = BaseEngineController_LS_DWork.s344_UnitDelay1_DSTATE;

      /* UnitDelay: '<S344>/Unit Delay2' */
      rtb_UnitDelay2_k = BaseEngineController_LS_DWork.s344_UnitDelay2_DSTATE;

      /* RelationalOperator: '<S344>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
       *  UnitDelay: '<S344>/Unit Delay2'
       */
      BaseEngineController_LS_B.s344_RelationalOperator =
        ((BaseEngineController_LS_DWork.s344_UnitDelay2_DSTATE >= (real_T)
          ((uint8_T)(MisfireDiag_StartRPMAvgCnt_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S344>/SafeDivide' */
      BaseEngineController_LS_SafeDivide
        (BaseEngineController_LS_B.s344_RelationalOperator,
         (MisfireDiag_StartRPMAvgCnt_DataStore()), rtb_UnitDelay1_n,
         &BaseEngineController_LS_B.s344_SafeDivide);

      /* End of Outputs for SubSystem: '<S344>/SafeDivide' */
      for (i = 0; i < 8; i++) {
        /* Gain: '<S328>/Gain' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration'
         */
        rtb_DataTypeConversion1_f = (uint32_T)((uint16_T)
          (MisfireDiag_StartAngles_DataStore())[i]) << 15;

        /* Sum: '<S328>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration2'
         */
        rtb_Gain1[i] = ((uint32_T)((uint16_T)(MisfireDiag_AngleHyst_DataStore()))
                        << 11) + rtb_DataTypeConversion1_f;

        /* Gain: '<S328>/Gain' */
        rtb_Sum3_g[i] = rtb_DataTypeConversion1_f;
      }

      /* If: '<S343>/If' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration3'
       */
      rtPrevAction = BaseEngineController_LS_DWork.s343_If_ActiveSubsystem;
      if ((MisfireDiag_EncoderExtrap_MPC5XX_DataStore())) {
        rtAction = 0;
      } else {
        rtAction = 1;
      }

      BaseEngineController_LS_DWork.s343_If_ActiveSubsystem = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      }

      switch (rtAction) {
       case 0:
        if (rtAction != rtPrevAction) {
        }

        /* Outputs for IfAction SubSystem: '<S343>/EncoderAngle_wExtrap' incorporates:
         *  ActionPort: '<S348>/Action Port'
         */
        /* S-Function Block: <S350>/motohawk_encoder_angle2 */
        {
          extern int16_T GetEncoderEngAngle(void);
          rtb_motohawk_encoder_angle2 = GetEncoderEngAngle();
        }

        /* DataTypeConversion: '<S350>/Data Type Conversion' */
        tmp = rtb_motohawk_encoder_angle2;
        if (rtb_motohawk_encoder_angle2 <= 0) {
          tmp = 0;
        }

        /* End of DataTypeConversion: '<S350>/Data Type Conversion' */
        /* S-Function Block: <S350>/motohawk_encoder_instant_rpm */
        {
          rtb_motohawk_encoder_instant_rpm = GetEncoderResourceInstantRPM();
        }

        /* DataTypeConversion: '<S350>/Data Type Conversion1' incorporates:
         *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S350>/motohawk_encoder_instant_rpm'
         */
        rtb_DataTypeConversion1_f = rtb_motohawk_encoder_instant_rpm;

        /* Gain: '<S350>/Gain' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration'
         */
        if ((CrankDegrees_pertooth_DataStore()) > 268435455U) {
          rtb_Gain_0 = MAX_uint32_T;
        } else {
          rtb_Gain_0 = (CrankDegrees_pertooth_DataStore()) << 4;
        }

        /* End of Gain: '<S350>/Gain' */
        /* S-Function Block: <S350>/motohawk_abs_time */
        {
          extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us,
            uint32_T *upper32Bits_us);
          Timer_FreeRunningCounter_GetTime(&rtb_motohawk_abs_time, NULL);
        }

        /* Product: '<S350>/Product1' incorporates:
         *  Constant: '<S350>/Constant1'
         *  Constant: '<S350>/Constant2'
         *  Product: '<S350>/Product'
         *  S-Function (motohawk_sfun_abs_time): '<S350>/motohawk_abs_time'
         *  Sum: '<S350>/Sum'
         */
        rtb_DataTypeConversion1_f = (rtb_motohawk_abs_time -
          BaseEngineController_LS_B.s351_motohawk_abs_time) *
          rtb_DataTypeConversion1_f * 3U / 31250U;

        /* Switch: '<S350>/Switch' incorporates:
         *  Constant: '<S350>/Constant3'
         *  Gain: '<S350>/Gain'
         *  RelationalOperator: '<S350>/Relational Operator'
         */
        if (rtb_DataTypeConversion1_f >= rtb_Gain_0) {
          rtb_DataTypeConversion1_f = 0U;
        }

        /* End of Switch: '<S350>/Switch' */

        /* Sum: '<S350>/Sum1' incorporates:
         *  DataTypeConversion: '<S350>/Data Type Conversion'
         */
        BaseEngineController_LS_B.s350_Sum1 = (uint32_T)tmp -
          rtb_DataTypeConversion1_f;

        /* End of Outputs for SubSystem: '<S343>/EncoderAngle_wExtrap' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S343>/EncoderAngle_wOExtrap' incorporates:
         *  ActionPort: '<S349>/Action Port'
         */

        /* S-Function Block: <S349>/motohawk_encoder_angle */
        {
          extern int16_T GetEncoderEngAngle(void);
          BaseEngineController_LS_B.s343_Merge = GetEncoderEngAngle();
        }

        /* End of Outputs for SubSystem: '<S343>/EncoderAngle_wOExtrap' */
        break;
      }

      /* End of If: '<S343>/If' */

      /* DataTypeConversion: '<S343>/Data Type Conversion' */
      BaseEngineController_LS_B.s343_Merge = (int16_T)
        BaseEngineController_LS_B.s350_Sum1;
      for (i = 0; i < 8; i++) {
        /* RelationalOperator: '<S328>/Relational Operator' */
        if (BaseEngineController_LS_B.s343_Merge <= 0) {
          rtb_DataTypeConversion1_f = 0U;
        } else {
          rtb_DataTypeConversion1_f = (uint32_T)
            BaseEngineController_LS_B.s343_Merge << 11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator' */

        /* RelationalOperator: '<S328>/Relational Operator1' */
        if (BaseEngineController_LS_B.s343_Merge <= 0) {
          tmp_0 = 0U;
        } else {
          tmp_0 = (uint32_T)BaseEngineController_LS_B.s343_Merge << 11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator1' */

        /* Logic: '<S328>/Logical Operator' incorporates:
         *  RelationalOperator: '<S328>/Relational Operator'
         *  RelationalOperator: '<S328>/Relational Operator1'
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration2'
         *  Sum: '<S328>/Sum1'
         */
        rtb_LogicalOperator1_j_0 = ((rtb_Gain1[i] <= rtb_DataTypeConversion1_f) &&
                                    (rtb_Sum3_g[i] - ((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) >= tmp_0));

        /* Product: '<S341>/Product' incorporates:
         *  Constant: '<S341>/Constant'
         */
        rtb_Product_ou[i] = (real_T)rtb_LogicalOperator1_j_0 *
          BaseEngineController_LS_ConstP.pooled85[i];

        /* Logic: '<S328>/Logical Operator' */
        rtb_LogicalOperator_ht[i] = rtb_LogicalOperator1_j_0;
      }

      /* MinMax: '<S341>/MinMax' incorporates:
       *  MinMax: '<S330>/MinMax'
       *  MinMax: '<S342>/MinMax'
       */
      rtb_Product_j = rtb_Product_ou[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_j = (rtb_Product_j >= rtb_Product_ou[i + 1]) || rtIsNaN
          (rtb_Product_ou[i + 1]) ? rtb_Product_j : rtb_Product_ou[i + 1];
      }

      rtb_MinMax_me = rtb_Product_j;

      /* End of MinMax: '<S341>/MinMax' */

      /* Outputs for Enabled SubSystem: '<S328>/StoreRPMStart' incorporates:
       *  EnablePort: '<S346>/Enable'
       */
      if (BaseEngineController_LS_B.s344_RelationalOperator) {
        /* S-Function (motohawk_sfun_data_write): '<S346>/motohawk_data_write' */
        /* Write to Data Storage as vector: MisfireDiag_StartRPM */
        {
          MisfireDiag_StartRPM_DataStore()[(uint32_T)(rtb_MinMax_me)] =
            BaseEngineController_LS_B.s344_SafeDivide.s354_Product;
        }

        /* S-Function (motohawk_sfun_data_write): '<S346>/motohawk_data_write1' incorporates:
         *  Constant: '<S346>/Constant'
         */
        /* Write to Data Storage as vector: MisfireDiag_RPMDR */
        {
          MisfireDiag_RPMDR_DataStore()[(uint32_T)(rtb_MinMax_me)] = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S328>/StoreRPMStart' */
      /* UnitDelay: '<S345>/Unit Delay1' */
      rtb_UnitDelay1_g = BaseEngineController_LS_DWork.s345_UnitDelay1_DSTATE;

      /* UnitDelay: '<S345>/Unit Delay2' */
      rtb_UnitDelay2_i = BaseEngineController_LS_DWork.s345_UnitDelay2_DSTATE;

      /* RelationalOperator: '<S345>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration'
       *  UnitDelay: '<S345>/Unit Delay2'
       */
      BaseEngineController_LS_B.s345_RelationalOperator =
        ((BaseEngineController_LS_DWork.s345_UnitDelay2_DSTATE >= (real_T)
          ((uint8_T)(MisfireDiag_StopRPMAvgCnt_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S345>/SafeDivide' */
      BaseEngineController_LS_SafeDivide
        (BaseEngineController_LS_B.s345_RelationalOperator,
         (MisfireDiag_StopRPMAvgCnt_DataStore()), rtb_UnitDelay1_g,
         &BaseEngineController_LS_B.s345_SafeDivide);

      /* End of Outputs for SubSystem: '<S345>/SafeDivide' */
      for (i = 0; i < 8; i++) {
        /* Gain: '<S328>/Gain1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration1'
         */
        rtb_Gain_0 = (uint32_T)((uint16_T)(MisfireDiag_StopAngles_DataStore())[i])
          << 15;

        /* RelationalOperator: '<S328>/Relational Operator2' */
        if (BaseEngineController_LS_B.s343_Merge <= 0) {
          rtb_DataTypeConversion1_f = 0U;
        } else {
          rtb_DataTypeConversion1_f = (uint32_T)
            BaseEngineController_LS_B.s343_Merge << 11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator2' */

        /* RelationalOperator: '<S328>/Relational Operator3' */
        if (BaseEngineController_LS_B.s343_Merge <= 0) {
          tmp_0 = 0U;
        } else {
          tmp_0 = (uint32_T)BaseEngineController_LS_B.s343_Merge << 11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator3' */

        /* Logic: '<S328>/Logical Operator1' incorporates:
         *  RelationalOperator: '<S328>/Relational Operator2'
         *  RelationalOperator: '<S328>/Relational Operator3'
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration2'
         *  Sum: '<S328>/Sum2'
         *  Sum: '<S328>/Sum3'
         */
        rtb_LogicalOperator1_j_0 = ((((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) + rtb_Gain_0 <=
          rtb_DataTypeConversion1_f) && (rtb_Gain_0 - ((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) >= tmp_0));

        /* Product: '<S342>/Product' incorporates:
         *  Constant: '<S342>/Constant'
         */
        rtb_Product_ou[i] = (real_T)rtb_LogicalOperator1_j_0 *
          BaseEngineController_LS_ConstP.pooled85[i];

        /* Logic: '<S328>/Logical Operator1' */
        rtb_LogicalOperator1_j[i] = rtb_LogicalOperator1_j_0;
      }

      /* MinMax: '<S342>/MinMax' incorporates:
       *  MinMax: '<S330>/MinMax'
       *  MinMax: '<S341>/MinMax'
       */
      rtb_Product_j = rtb_Product_ou[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_j = (rtb_Product_j >= rtb_Product_ou[i + 1]) || rtIsNaN
          (rtb_Product_ou[i + 1]) ? rtb_Product_j : rtb_Product_ou[i + 1];
      }

      rtb_MinMax_j = rtb_Product_j;

      /* End of MinMax: '<S342>/MinMax' */

      /* Outputs for Enabled SubSystem: '<S328>/StoreRPMStart1' incorporates:
       *  EnablePort: '<S347>/Enable'
       */
      if (BaseEngineController_LS_B.s345_RelationalOperator) {
        /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write' */
        /* Write to Data Storage as vector: MisfireDiag_StopRPM */
        {
          MisfireDiag_StopRPM_DataStore()[(uint32_T)(rtb_MinMax_j)] =
            BaseEngineController_LS_B.s345_SafeDivide.s354_Product;
        }

        /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write1' incorporates:
         *  Constant: '<S347>/Constant'
         */
        /* Write to Data Storage as vector: MisfireDiag_RPMDR */
        {
          MisfireDiag_RPMDR_DataStore()[(uint32_T)(rtb_MinMax_j)] = TRUE;
        }
      }

      /* End of Outputs for SubSystem: '<S328>/StoreRPMStart1' */

      /* Logic: '<S328>/Logical Operator2' */
      rtb_LogicalOperator3_n = (rtb_LogicalOperator_ht[0] ||
        rtb_LogicalOperator_ht[1] || rtb_LogicalOperator_ht[2] ||
        rtb_LogicalOperator_ht[3] || rtb_LogicalOperator_ht[4] ||
        rtb_LogicalOperator_ht[5] || rtb_LogicalOperator_ht[6] ||
        rtb_LogicalOperator_ht[7]);

      /* Memory: '<S353>/Memory' */
      rtb_Memory_c = BaseEngineController_LS_DWork.s353_Memory_PreviousInput;

      /* CombinatorialLogic: '<S353>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_n != 0);
        rowidx = (rowidx << 1) + (uint_T)
          (BaseEngineController_LS_B.s344_RelationalOperator != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory_c != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic_o[0] = BaseEngineController_LS_ConstP.pooled889[rowidx];
        rtb_Logic_o[1] = BaseEngineController_LS_ConstP.pooled889[rowidx + 8];
      }

      /* Outputs for Enabled SubSystem: '<S344>/GetInstRPM' */
      BaseEngineController_LS_GetInstRPM(rtb_Logic_o[1],
        &BaseEngineController_LS_B.s344_GetInstRPM);

      /* End of Outputs for SubSystem: '<S344>/GetInstRPM' */

      /* Switch: '<S344>/Switch' incorporates:
       *  Constant: '<S344>/Constant'
       *  Constant: '<S344>/Constant1'
       *  Sum: '<S344>/Sum'
       */
      if (rtb_Logic_o[1]) {
        rtb_Product_j = 0.0;
      } else {
        rtb_Product_j = 1.0 + rtb_UnitDelay2_k;
      }

      /* End of Switch: '<S344>/Switch' */

      /* Switch: '<S344>/Switch1' incorporates:
       *  Constant: '<S344>/Constant3'
       *  Sum: '<S344>/Sum1'
       */
      if (rtb_Logic_o[1]) {
        rtb_Sum_ea = 0U;
      } else {
        /* Sum: '<S344>/Sum1' */
        rtb_DataTypeConversion1_f = (uint32_T)
          BaseEngineController_LS_B.s344_GetInstRPM.s352_motohawk_encoder_instant_rpm
          + (uint32_T)rtb_UnitDelay1_n;
        if (rtb_DataTypeConversion1_f > 65535U) {
          rtb_DataTypeConversion1_f = 65535U;
        }

        /* End of Sum: '<S344>/Sum1' */
        rtb_Sum_ea = (uint16_T)rtb_DataTypeConversion1_f;
      }

      /* End of Switch: '<S344>/Switch1' */

      /* Logic: '<S328>/Logical Operator3' */
      rtb_LogicalOperator3_n = (rtb_LogicalOperator1_j[0] ||
        rtb_LogicalOperator1_j[1] || rtb_LogicalOperator1_j[2] ||
        rtb_LogicalOperator1_j[3] || rtb_LogicalOperator1_j[4] ||
        rtb_LogicalOperator1_j[5] || rtb_LogicalOperator1_j[6] ||
        rtb_LogicalOperator1_j[7]);

      /* Memory: '<S356>/Memory' */
      rtb_Memory_c = BaseEngineController_LS_DWork.s356_Memory_PreviousInput;

      /* CombinatorialLogic: '<S356>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_n != 0);
        rowidx = (rowidx << 1) + (uint_T)
          (BaseEngineController_LS_B.s345_RelationalOperator != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory_c != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic_m[0] = BaseEngineController_LS_ConstP.pooled889[rowidx];
        rtb_Logic_m[1] = BaseEngineController_LS_ConstP.pooled889[rowidx + 8];
      }

      /* Outputs for Enabled SubSystem: '<S345>/GetInstRPM' */
      BaseEngineController_LS_GetInstRPM(rtb_Logic_m[1],
        &BaseEngineController_LS_B.s345_GetInstRPM);

      /* End of Outputs for SubSystem: '<S345>/GetInstRPM' */

      /* Switch: '<S345>/Switch' */
      if (rtb_Logic_m[1]) {
        /* Update for UnitDelay: '<S345>/Unit Delay2' incorporates:
         *  Constant: '<S345>/Constant1'
         */
        BaseEngineController_LS_DWork.s345_UnitDelay2_DSTATE = 0.0;
      } else {
        /* Update for UnitDelay: '<S345>/Unit Delay2' incorporates:
         *  Constant: '<S345>/Constant'
         *  Sum: '<S345>/Sum'
         */
        BaseEngineController_LS_DWork.s345_UnitDelay2_DSTATE = 1.0 +
          rtb_UnitDelay2_i;
      }

      /* End of Switch: '<S345>/Switch' */

      /* Switch: '<S345>/Switch1' */
      if (rtb_Logic_m[1]) {
        /* Update for UnitDelay: '<S345>/Unit Delay1' incorporates:
         *  Constant: '<S345>/Constant3'
         */
        BaseEngineController_LS_DWork.s345_UnitDelay1_DSTATE = 0U;
      } else {
        /* Sum: '<S345>/Sum1' */
        rtb_DataTypeConversion1_f = (uint32_T)
          BaseEngineController_LS_B.s345_GetInstRPM.s352_motohawk_encoder_instant_rpm
          + (uint32_T)rtb_UnitDelay1_g;
        if (rtb_DataTypeConversion1_f > 65535U) {
          rtb_DataTypeConversion1_f = 65535U;
        }

        /* End of Sum: '<S345>/Sum1' */

        /* Update for UnitDelay: '<S345>/Unit Delay1' incorporates:
         *  Sum: '<S345>/Sum1'
         */
        BaseEngineController_LS_DWork.s345_UnitDelay1_DSTATE = (uint16_T)
          rtb_DataTypeConversion1_f;
      }

      /* End of Switch: '<S345>/Switch1' */

      /* Update for UnitDelay: '<S331>/Unit Delay' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_DWork.s331_UnitDelay_DSTATE[i] =
          rtb_motohawk_data_read2_c[i];
      }

      /* End of UnitDelay: '<S331>/Unit Delay' */

      /* Update for UnitDelay: '<S344>/Unit Delay1' */
      BaseEngineController_LS_DWork.s344_UnitDelay1_DSTATE = rtb_Sum_ea;

      /* Update for UnitDelay: '<S344>/Unit Delay2' */
      BaseEngineController_LS_DWork.s344_UnitDelay2_DSTATE = rtb_Product_j;

      /* Update for Memory: '<S353>/Memory' */
      BaseEngineController_LS_DWork.s353_Memory_PreviousInput = rtb_Logic_o[0];

      /* Update for Memory: '<S356>/Memory' */
      BaseEngineController_LS_DWork.s356_Memory_PreviousInput = rtb_Logic_m[0];
    }
  }
}
