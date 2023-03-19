/*
 * Trigger_FGND_HIRES_6521p0004.c
 *
 * Code generation for model "BaseEngineController_LS_112.mdl".
 *
 * Model version              : 1.2194
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:56:25 2022
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_112.h"
#include "BaseEngineController_LS_112_private.h"

void Trigger_FGND_HIRES_6521p0004(void)
{
  /* Named constants for Stateflow: '<S930>/ECUP Latch' */
#define BaseEngineController_LS_112_IN_PowerDown (1U)
#define BaseEngineController_LS_112_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_112_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_112_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S324>/MisfireDiagFunc' */
    {
      /* local block i/o variables */
      real_T rtb_MinMax_f;
      real_T rtb_MinMax_fj;
      real_T rtb_MinMax_d;
      uint16_T rtb_UnitDelay1_n;
      uint16_T rtb_UnitDelay1_cm;
      boolean_T rtb_motohawk_data_read2_a[8];
      boolean_T rtb_Compare_o;
      boolean_T rtb_Compare_k;
      boolean_T rtb_Compare_f;
      boolean_T rtb_Compare_l;
      boolean_T rtb_Compare_m;
      boolean_T rtb_Compare_mj;
      boolean_T rtb_Compare_c;
      boolean_T rtb_Compare_i;
      boolean_T rtb_Logic_h[2];
      boolean_T rtb_Logic_i[2];
      boolean_T rtb_Memory_h;
      boolean_T rtb_LogicalOperator3_a;
      boolean_T rtb_LogicalOperator_gs[8];
      real_T rtb_Product_a[8];
      uint16_T rtb_Sum_eb;
      real_T rtb_Product_m;
      real_T rtb_UnitDelay2_h;
      boolean_T rtb_LogicalOperator1_gn[8];
      real_T rtb_UnitDelay2_m;
      uint32_T rtb_Sum3_l[8];
      uint32_T rtb_Gain1[8];
      int32_T i;
      uint32_T rtb_Sum3_l_0;
      boolean_T rtb_LogicalOperator1_gn_0;
      uint32_T rtb_Gain_0;
      uint32_T tmp;

      /* S-Function (motohawk_sfun_data_read): '<S327>/motohawk_data_read2' */
      {
        int_T i1;
        boolean_T *y0 = rtb_motohawk_data_read2_a;
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
        rtb_Product_a[i] = (real_T)(rtb_motohawk_data_read2_a[i] &&
          (!BaseEngineController_LS_112_DWork.s331_UnitDelay_DSTATE[i])) *
          BaseEngineController_LS_112_ConstP.pooled85[i];
      }

      /* End of Product: '<S330>/Product' */

      /* MinMax: '<S330>/MinMax' incorporates:
       *  MinMax: '<S341>/MinMax'
       *  MinMax: '<S342>/MinMax'
       */
      rtb_Product_m = rtb_Product_a[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_m = (rtb_Product_m >= rtb_Product_a[i + 1]) || rtIsNaN
          (rtb_Product_a[i + 1]) ? rtb_Product_m : rtb_Product_a[i + 1];
      }

      rtb_MinMax_f = rtb_Product_m;

      /* End of MinMax: '<S330>/MinMax' */
      /* Sum: '<S327>/Sum' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S327>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S327>/motohawk_data_read1'
       */
      rtb_Sum_eb = (uint16_T)(((uint16_T)MisfireDiag_StopRPM_DataStore()
        [(uint32_T)rtb_MinMax_f]) - ((uint16_T)MisfireDiag_StartRPM_DataStore()
                               [(uint32_T)rtb_MinMax_f]));

      /* RelationalOperator: '<S327>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S327>/motohawk_calibration1'
       */
      rtb_Memory_h = ((real_T)rtb_Sum_eb <=
                      (MisfireDiag_HardMisfireThreshold_DataStore()));

      /* Logic: '<S327>/Logical Operator1' incorporates:
       *  Constant: '<S329>/Constant'
       *  RelationalOperator: '<S329>/Compare'
       */
      rtb_LogicalOperator3_a = (rtb_Memory_h && (rtb_MinMax_f > 0.0));

      /* Product: '<S327>/Product' */
      rtb_Product_m = rtb_MinMax_f * (real_T)rtb_LogicalOperator3_a;

      /* RelationalOperator: '<S333>/Compare' incorporates:
       *  Constant: '<S333>/Constant'
       */
      rtb_Compare_o = ((rtb_Product_m == 1.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def' */

      /* Set Fault Suspected Status: Cylinder1_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(34, rtb_Compare_o);
        UpdateFault(34);
      }

      /* RelationalOperator: '<S334>/Compare' incorporates:
       *  Constant: '<S334>/Constant'
       */
      rtb_Compare_k = ((rtb_Product_m == 2.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: Cylinder2_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(35, rtb_Compare_k);
        UpdateFault(35);
      }

      /* RelationalOperator: '<S335>/Compare' incorporates:
       *  Constant: '<S335>/Constant'
       */
      rtb_Compare_f = ((rtb_Product_m == 3.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Cylinder3_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(36, rtb_Compare_f);
        UpdateFault(36);
      }

      /* RelationalOperator: '<S336>/Compare' incorporates:
       *  Constant: '<S336>/Constant'
       */
      rtb_Compare_l = ((rtb_Product_m == 4.0));

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
      rtb_Compare_m = ((rtb_Product_m == 5.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: Cylinder5_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(38, rtb_Compare_m);
        UpdateFault(38);
      }

      /* RelationalOperator: '<S338>/Compare' incorporates:
       *  Constant: '<S338>/Constant'
       */
      rtb_Compare_mj = ((rtb_Product_m == 6.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: Cylinder6_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(39, rtb_Compare_mj);
        UpdateFault(39);
      }

      /* RelationalOperator: '<S339>/Compare' incorporates:
       *  Constant: '<S339>/Constant'
       */
      rtb_Compare_c = ((rtb_Product_m == 7.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: Cylinder7_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(40, rtb_Compare_c);
        UpdateFault(40);
      }

      /* RelationalOperator: '<S340>/Compare' incorporates:
       *  Constant: '<S340>/Constant'
       */
      rtb_Compare_i = ((rtb_Product_m == 8.0));

      /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: Cylinder8_HardMisfire */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(41, rtb_Compare_i);
        UpdateFault(41);
      }

      /* UnitDelay: '<S344>/Unit Delay1' */
      rtb_UnitDelay1_n =
        BaseEngineController_LS_112_DWork.s344_UnitDelay1_DSTATE;

      /* UnitDelay: '<S344>/Unit Delay2' */
      rtb_UnitDelay2_h =
        BaseEngineController_LS_112_DWork.s344_UnitDelay2_DSTATE;

      /* RelationalOperator: '<S344>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
       *  UnitDelay: '<S344>/Unit Delay2'
       */
      BaseEngineController_LS_112_B.s344_RelationalOperator =
        ((BaseEngineController_LS_112_DWork.s344_UnitDelay2_DSTATE >= (real_T)
          ((uint8_T)(MisfireDiag_StartRPMAvgCnt_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S344>/SafeDivide' */
      BaseEngineController_LS_112_SafeDivide
        (BaseEngineController_LS_112_B.s344_RelationalOperator,
         (MisfireDiag_StartRPMAvgCnt_DataStore()), rtb_UnitDelay1_n,
         &BaseEngineController_LS_112_B.s344_SafeDivide);

      /* End of Outputs for SubSystem: '<S344>/SafeDivide' */
      for (i = 0; i < 8; i++) {
        /* Gain: '<S328>/Gain' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration'
         */
        rtb_Sum3_l_0 = (uint32_T)((uint16_T)(MisfireDiag_StartAngles_DataStore())
          [i]) << 15;

        /* Sum: '<S328>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration2'
         */
        rtb_Gain1[i] = ((uint32_T)((uint16_T)(MisfireDiag_AngleHyst_DataStore()))
                        << 11) + rtb_Sum3_l_0;

        /* Gain: '<S328>/Gain' */
        rtb_Sum3_l[i] = rtb_Sum3_l_0;
      }

      /* If: '<S343>/If' incorporates:
       *  Constant: '<S348>/Constant'
       *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration3'
       */
      if ((MisfireDiag_EncoderExtrap_MPC5XX_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S343>/EncoderAngle_wExtrap' incorporates:
         *  ActionPort: '<S348>/Action Port'
         */
        BaseEngineController_LS_112_B.s348_Constant = 0.0;

        /* End of Outputs for SubSystem: '<S343>/EncoderAngle_wExtrap' */
      } else {
        /* Outputs for IfAction SubSystem: '<S343>/EncoderAngle_wOExtrap' incorporates:
         *  ActionPort: '<S349>/Action Port'
         */

        /* S-Function Block: <S349>/motohawk_encoder_angle */
        {
          extern int16_T CNK_Encoder_Angle_Get(void);
          BaseEngineController_LS_112_B.s343_Merge = CNK_Encoder_Angle_Get();
        }

        /* End of Outputs for SubSystem: '<S343>/EncoderAngle_wOExtrap' */
      }

      /* End of If: '<S343>/If' */

      /* DataTypeConversion: '<S343>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_112_B.s348_Constant) || rtIsInf
          (BaseEngineController_LS_112_B.s348_Constant)) {
        rtb_Product_m = 0.0;
      } else {
        rtb_Product_m = fmod(floor(BaseEngineController_LS_112_B.s348_Constant),
                             65536.0);
      }

      BaseEngineController_LS_112_B.s343_Merge = (int16_T)(rtb_Product_m < 0.0 ?
        (int16_T)-(int16_T)(uint16_T)-rtb_Product_m : (int16_T)(uint16_T)
        rtb_Product_m);
      for (i = 0; i < 8; i++) {
        /* RelationalOperator: '<S328>/Relational Operator' */
        if (BaseEngineController_LS_112_B.s343_Merge <= 0) {
          rtb_Sum3_l_0 = 0U;
        } else {
          rtb_Sum3_l_0 = (uint32_T)BaseEngineController_LS_112_B.s343_Merge <<
            11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator' */

        /* RelationalOperator: '<S328>/Relational Operator1' */
        if (BaseEngineController_LS_112_B.s343_Merge <= 0) {
          tmp = 0U;
        } else {
          tmp = (uint32_T)BaseEngineController_LS_112_B.s343_Merge << 11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator1' */

        /* Logic: '<S328>/Logical Operator' incorporates:
         *  RelationalOperator: '<S328>/Relational Operator'
         *  RelationalOperator: '<S328>/Relational Operator1'
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration2'
         *  Sum: '<S328>/Sum1'
         */
        rtb_LogicalOperator1_gn_0 = ((rtb_Gain1[i] <= rtb_Sum3_l_0) &&
          (rtb_Sum3_l[i] - ((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) >= tmp));

        /* Product: '<S341>/Product' incorporates:
         *  Constant: '<S341>/Constant'
         */
        rtb_Product_a[i] = (real_T)rtb_LogicalOperator1_gn_0 *
          BaseEngineController_LS_112_ConstP.pooled85[i];

        /* Logic: '<S328>/Logical Operator' */
        rtb_LogicalOperator_gs[i] = rtb_LogicalOperator1_gn_0;
      }

      /* End of DataTypeConversion: '<S343>/Data Type Conversion' */

      /* MinMax: '<S341>/MinMax' incorporates:
       *  MinMax: '<S330>/MinMax'
       *  MinMax: '<S342>/MinMax'
       */
      rtb_Product_m = rtb_Product_a[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_m = (rtb_Product_m >= rtb_Product_a[i + 1]) || rtIsNaN
          (rtb_Product_a[i + 1]) ? rtb_Product_m : rtb_Product_a[i + 1];
      }

      rtb_MinMax_fj = rtb_Product_m;

      /* End of MinMax: '<S341>/MinMax' */

      /* Outputs for Enabled SubSystem: '<S328>/StoreRPMStart' incorporates:
       *  EnablePort: '<S346>/Enable'
       */
      if (BaseEngineController_LS_112_B.s344_RelationalOperator) {
        /* S-Function (motohawk_sfun_data_write): '<S346>/motohawk_data_write' */
        /* Write to Data Storage as vector: MisfireDiag_StartRPM */
        {
          MisfireDiag_StartRPM_DataStore()[(uint32_T)(rtb_MinMax_fj)] =
            BaseEngineController_LS_112_B.s344_SafeDivide.s352_Product;
        }

        /* S-Function (motohawk_sfun_data_write): '<S346>/motohawk_data_write1' incorporates:
         *  Constant: '<S346>/Constant'
         */
        /* Write to Data Storage as vector: MisfireDiag_RPMDR */
        {
          MisfireDiag_RPMDR_DataStore()[(uint32_T)(rtb_MinMax_fj)] = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S328>/StoreRPMStart' */
      /* UnitDelay: '<S345>/Unit Delay1' */
      rtb_UnitDelay1_cm =
        BaseEngineController_LS_112_DWork.s345_UnitDelay1_DSTATE;

      /* UnitDelay: '<S345>/Unit Delay2' */
      rtb_UnitDelay2_m =
        BaseEngineController_LS_112_DWork.s345_UnitDelay2_DSTATE;

      /* RelationalOperator: '<S345>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration'
       *  UnitDelay: '<S345>/Unit Delay2'
       */
      BaseEngineController_LS_112_B.s345_RelationalOperator =
        ((BaseEngineController_LS_112_DWork.s345_UnitDelay2_DSTATE >= (real_T)
          ((uint8_T)(MisfireDiag_StopRPMAvgCnt_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S345>/SafeDivide' */
      BaseEngineController_LS_112_SafeDivide
        (BaseEngineController_LS_112_B.s345_RelationalOperator,
         (MisfireDiag_StopRPMAvgCnt_DataStore()), rtb_UnitDelay1_cm,
         &BaseEngineController_LS_112_B.s345_SafeDivide);

      /* End of Outputs for SubSystem: '<S345>/SafeDivide' */
      for (i = 0; i < 8; i++) {
        /* Gain: '<S328>/Gain1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration1'
         */
        rtb_Gain_0 = (uint32_T)((uint16_T)(MisfireDiag_StopAngles_DataStore())[i])
          << 15;

        /* RelationalOperator: '<S328>/Relational Operator2' */
        if (BaseEngineController_LS_112_B.s343_Merge <= 0) {
          rtb_Sum3_l_0 = 0U;
        } else {
          rtb_Sum3_l_0 = (uint32_T)BaseEngineController_LS_112_B.s343_Merge <<
            11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator2' */

        /* RelationalOperator: '<S328>/Relational Operator3' */
        if (BaseEngineController_LS_112_B.s343_Merge <= 0) {
          tmp = 0U;
        } else {
          tmp = (uint32_T)BaseEngineController_LS_112_B.s343_Merge << 11;
        }

        /* End of RelationalOperator: '<S328>/Relational Operator3' */

        /* Logic: '<S328>/Logical Operator1' incorporates:
         *  RelationalOperator: '<S328>/Relational Operator2'
         *  RelationalOperator: '<S328>/Relational Operator3'
         *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration2'
         *  Sum: '<S328>/Sum2'
         *  Sum: '<S328>/Sum3'
         */
        rtb_LogicalOperator1_gn_0 = ((((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) + rtb_Gain_0 <=
          rtb_Sum3_l_0) && (rtb_Gain_0 - ((uint32_T)((uint16_T)
          (MisfireDiag_AngleHyst_DataStore())) << 11) >= tmp));

        /* Product: '<S342>/Product' incorporates:
         *  Constant: '<S342>/Constant'
         */
        rtb_Product_a[i] = (real_T)rtb_LogicalOperator1_gn_0 *
          BaseEngineController_LS_112_ConstP.pooled85[i];

        /* Logic: '<S328>/Logical Operator1' */
        rtb_LogicalOperator1_gn[i] = rtb_LogicalOperator1_gn_0;
      }

      /* MinMax: '<S342>/MinMax' incorporates:
       *  MinMax: '<S330>/MinMax'
       *  MinMax: '<S341>/MinMax'
       */
      rtb_Product_m = rtb_Product_a[0];
      for (i = 0; i < 7; i++) {
        rtb_Product_m = (rtb_Product_m >= rtb_Product_a[i + 1]) || rtIsNaN
          (rtb_Product_a[i + 1]) ? rtb_Product_m : rtb_Product_a[i + 1];
      }

      rtb_MinMax_d = rtb_Product_m;

      /* End of MinMax: '<S342>/MinMax' */

      /* Outputs for Enabled SubSystem: '<S328>/StoreRPMStart1' incorporates:
       *  EnablePort: '<S347>/Enable'
       */
      if (BaseEngineController_LS_112_B.s345_RelationalOperator) {
        /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write' */
        /* Write to Data Storage as vector: MisfireDiag_StopRPM */
        {
          MisfireDiag_StopRPM_DataStore()[(uint32_T)(rtb_MinMax_d)] =
            BaseEngineController_LS_112_B.s345_SafeDivide.s352_Product;
        }

        /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write1' incorporates:
         *  Constant: '<S347>/Constant'
         */
        /* Write to Data Storage as vector: MisfireDiag_RPMDR */
        {
          MisfireDiag_RPMDR_DataStore()[(uint32_T)(rtb_MinMax_d)] = TRUE;
        }
      }

      /* End of Outputs for SubSystem: '<S328>/StoreRPMStart1' */

      /* Logic: '<S328>/Logical Operator2' */
      rtb_LogicalOperator3_a = (rtb_LogicalOperator_gs[0] ||
        rtb_LogicalOperator_gs[1] || rtb_LogicalOperator_gs[2] ||
        rtb_LogicalOperator_gs[3] || rtb_LogicalOperator_gs[4] ||
        rtb_LogicalOperator_gs[5] || rtb_LogicalOperator_gs[6] ||
        rtb_LogicalOperator_gs[7]);

      /* Memory: '<S351>/Memory' */
      rtb_Memory_h = BaseEngineController_LS_112_DWork.s351_Memory_PreviousInput;

      /* CombinatorialLogic: '<S351>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_a != 0);
        rowidx = (rowidx << 1) + (uint_T)
          (BaseEngineController_LS_112_B.s344_RelationalOperator != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory_h != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic_h[0] = BaseEngineController_LS_112_ConstP.pooled897[rowidx];
        rtb_Logic_h[1] = BaseEngineController_LS_112_ConstP.pooled897[rowidx + 8];
      }

      /* Outputs for Enabled SubSystem: '<S344>/GetInstRPM' */
      BaseEngineController_LS_112_GetInstRPM(rtb_Logic_h[1],
        &BaseEngineController_LS_112_B.s344_GetInstRPM);

      /* End of Outputs for SubSystem: '<S344>/GetInstRPM' */

      /* Switch: '<S344>/Switch' incorporates:
       *  Constant: '<S344>/Constant'
       *  Constant: '<S344>/Constant1'
       *  Sum: '<S344>/Sum'
       */
      if (rtb_Logic_h[1]) {
        rtb_Product_m = 0.0;
      } else {
        rtb_Product_m = 1.0 + rtb_UnitDelay2_h;
      }

      /* End of Switch: '<S344>/Switch' */

      /* Switch: '<S344>/Switch1' incorporates:
       *  Constant: '<S344>/Constant3'
       *  Sum: '<S344>/Sum1'
       */
      if (rtb_Logic_h[1]) {
        rtb_Sum_eb = 0U;
      } else {
        /* Sum: '<S344>/Sum1' */
        rtb_Sum3_l_0 = (uint32_T)
          BaseEngineController_LS_112_B.s344_GetInstRPM.s350_motohawk_encoder_instant_rpm
          + (uint32_T)rtb_UnitDelay1_n;
        if (rtb_Sum3_l_0 > 65535U) {
          rtb_Sum3_l_0 = 65535U;
        }

        /* End of Sum: '<S344>/Sum1' */
        rtb_Sum_eb = (uint16_T)rtb_Sum3_l_0;
      }

      /* End of Switch: '<S344>/Switch1' */

      /* Logic: '<S328>/Logical Operator3' */
      rtb_LogicalOperator3_a = (rtb_LogicalOperator1_gn[0] ||
        rtb_LogicalOperator1_gn[1] || rtb_LogicalOperator1_gn[2] ||
        rtb_LogicalOperator1_gn[3] || rtb_LogicalOperator1_gn[4] ||
        rtb_LogicalOperator1_gn[5] || rtb_LogicalOperator1_gn[6] ||
        rtb_LogicalOperator1_gn[7]);

      /* Memory: '<S354>/Memory' */
      rtb_Memory_h = BaseEngineController_LS_112_DWork.s354_Memory_PreviousInput;

      /* CombinatorialLogic: '<S354>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_a != 0);
        rowidx = (rowidx << 1) + (uint_T)
          (BaseEngineController_LS_112_B.s345_RelationalOperator != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory_h != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic_i[0] = BaseEngineController_LS_112_ConstP.pooled897[rowidx];
        rtb_Logic_i[1] = BaseEngineController_LS_112_ConstP.pooled897[rowidx + 8];
      }

      /* Outputs for Enabled SubSystem: '<S345>/GetInstRPM' */
      BaseEngineController_LS_112_GetInstRPM(rtb_Logic_i[1],
        &BaseEngineController_LS_112_B.s345_GetInstRPM);

      /* End of Outputs for SubSystem: '<S345>/GetInstRPM' */

      /* Switch: '<S345>/Switch' */
      if (rtb_Logic_i[1]) {
        /* Update for UnitDelay: '<S345>/Unit Delay2' incorporates:
         *  Constant: '<S345>/Constant1'
         */
        BaseEngineController_LS_112_DWork.s345_UnitDelay2_DSTATE = 0.0;
      } else {
        /* Update for UnitDelay: '<S345>/Unit Delay2' incorporates:
         *  Constant: '<S345>/Constant'
         *  Sum: '<S345>/Sum'
         */
        BaseEngineController_LS_112_DWork.s345_UnitDelay2_DSTATE = 1.0 +
          rtb_UnitDelay2_m;
      }

      /* End of Switch: '<S345>/Switch' */

      /* Switch: '<S345>/Switch1' */
      if (rtb_Logic_i[1]) {
        /* Update for UnitDelay: '<S345>/Unit Delay1' incorporates:
         *  Constant: '<S345>/Constant3'
         */
        BaseEngineController_LS_112_DWork.s345_UnitDelay1_DSTATE = 0U;
      } else {
        /* Sum: '<S345>/Sum1' */
        rtb_Sum3_l_0 = (uint32_T)
          BaseEngineController_LS_112_B.s345_GetInstRPM.s350_motohawk_encoder_instant_rpm
          + (uint32_T)rtb_UnitDelay1_cm;
        if (rtb_Sum3_l_0 > 65535U) {
          rtb_Sum3_l_0 = 65535U;
        }

        /* End of Sum: '<S345>/Sum1' */

        /* Update for UnitDelay: '<S345>/Unit Delay1' incorporates:
         *  Sum: '<S345>/Sum1'
         */
        BaseEngineController_LS_112_DWork.s345_UnitDelay1_DSTATE = (uint16_T)
          rtb_Sum3_l_0;
      }

      /* End of Switch: '<S345>/Switch1' */

      /* Update for UnitDelay: '<S331>/Unit Delay' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_DWork.s331_UnitDelay_DSTATE[i] =
          rtb_motohawk_data_read2_a[i];
      }

      /* End of UnitDelay: '<S331>/Unit Delay' */

      /* Update for UnitDelay: '<S344>/Unit Delay1' */
      BaseEngineController_LS_112_DWork.s344_UnitDelay1_DSTATE = rtb_Sum_eb;

      /* Update for UnitDelay: '<S344>/Unit Delay2' */
      BaseEngineController_LS_112_DWork.s344_UnitDelay2_DSTATE = rtb_Product_m;

      /* Update for Memory: '<S351>/Memory' */
      BaseEngineController_LS_112_DWork.s351_Memory_PreviousInput = rtb_Logic_h
        [0];

      /* Update for Memory: '<S354>/Memory' */
      BaseEngineController_LS_112_DWork.s354_Memory_PreviousInput = rtb_Logic_i
        [0];
    }
  }
}
