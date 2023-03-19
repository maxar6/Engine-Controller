/*
 * Trigger_FGND_5XRTI_PERIODIC_11294p0006.c
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

void Trigger_FGND_5XRTI_PERIODIC_11294p0006(void)
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

  if (BaseEngineController_LS_112_DWork.s13_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S13>/Coil Control' */
    {
      /* local block i/o variables */
      real_T rtb_StateO_d;
      uint32_T rtb_DataTypeConversion2_m;
      int16_T rtb_DataTypeConversion_nk;
      int16_T rtb_DataTypeConversion1_p;
      uint8_T rtb_SparkSequence_o1[8];
      uint8_T rtb_SparkSequence_o2[8];
      boolean_T rtb_RelOp_o;
      boolean_T rtb_RelOp_j;
      boolean_T rtb_RelOp_g;
      boolean_T rtb_RelOp_e;
      boolean_T rtb_RelOp_p;
      boolean_T rtb_RelOp_g0;
      boolean_T rtb_RelOp_ep;
      boolean_T rtb_RelOp_nj;
      boolean_T rtb_RelOp_go;
      boolean_T rtb_RelOp_a;
      boolean_T rtb_RelOp_e3;
      boolean_T rtb_RelOp_nz;
      boolean_T rtb_RelOp_h;
      boolean_T rtb_RelOp_p3;
      boolean_T rtb_RelOp_nm;
      boolean_T rtb_RelOp_eh;
      boolean_T rtb_motohawk_fault_action_a5;
      boolean_T rtb_motohawk_data_read2_i;
      boolean_T rtb_LogicalOperator3_ni;
      boolean_T rtb_LogicalOperator1_i;
      boolean_T rtb_LogicalOperator4_i;
      real_T rtb_ESTEnable;
      real_T rtb_CounterReset;
      int32_T tmp;
      real_T tmp_0;

      /* Logic: '<S847>/Logical Operator3' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S847>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ni = !DelayedEngineShutdownAction_DataStore();

      /* S-Function (motohawk_sfun_fault_action): '<S847>/motohawk_fault_action'
       *
       * Regarding '<S847>/motohawk_fault_action':
         Get Fault Action Status: EngineShutdown
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action_a5 = GetFaultActionStatus(10);
      }

      /* Logic: '<S847>/Logical Operator1' */
      rtb_LogicalOperator1_i = !rtb_motohawk_fault_action_a5;

      /* S-Function (motohawk_sfun_data_read): '<S847>/motohawk_data_read2' */
      rtb_motohawk_data_read2_i = ECUP_Enabled_DataStore();

      /* Logic: '<S847>/Logical Operator4' incorporates:
       *  Constant: '<S851>/Constant'
       *  RelationalOperator: '<S851>/RelOp'
       *  S-Function (motohawk_sfun_data_read): '<S847>/motohawk_data_read3'
       */
      rtb_LogicalOperator4_i = !(((uint8_T)EngineState_DataStore()) == 1);

      /* Outputs for Atomic SubSystem: '<S847>/EST Enable TDC Counter' */
      /* UnitDelay: '<S852>/CrankCounter' */
      BaseEngineController_LS_112_B.s852_CrankCounter =
        BaseEngineController_LS_112_DWork.s852_CrankCounter_DSTATE;

      /* S-Function (motohawk_sfun_trigger): '<S852>/motohawk_trigger1' */
      /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
      if (BaseEngineController_LS_112_DWork.s852_motohawk_trigger1_DWORK1 == 0)
      {
        BaseEngineController_LS_112_DWork.s852_motohawk_trigger1_DWORK1 = 1;
      }

      /* RelationalOperator: '<S852>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration1'
       */
      BaseEngineController_LS_112_B.s852_RelationalOperator1 =
        ((BaseEngineController_LS_112_B.s854_Switch1 >= ((uint8_T)
           (SparkEnableTDCCounts_DataStore()))));

      /* MATLAB Function Block: '<S852>/EST Enable TDC Counter Stateflow' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S852>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S852>/motohawk_data_read3'
       */

      /* MATLAB Function 'Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow': '<S853>:1' */
      if ((TDC_DataStore() == 0.0) &&
          (BaseEngineController_LS_112_B.s852_RelationalOperator1 == TRUE)) {
        /* '<S853>:1:3' */
        /* '<S853>:1:4' */
        rtb_StateO_d = 1.0;
      } else if ((TDC_DataStore() == 1.0) && (((uint8_T)EngineState_DataStore())
                  == 2) &&
                 (BaseEngineController_LS_112_B.s852_RelationalOperator1 == TRUE))
      {
        /* '<S853>:1:5' */
        /* '<S853>:1:6' */
        rtb_StateO_d = 2.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 3)) {
        /* '<S853>:1:7' */
        /* '<S853>:1:8' */
        rtb_StateO_d = 3.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S853>:1:9' */
        /* '<S853>:1:10' */
        rtb_StateO_d = 0.0;
      } else if ((TDC_DataStore() == 3.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S853>:1:11' */
        /* '<S853>:1:12' */
        rtb_StateO_d = 0.0;
      } else {
        /* '<S853>:1:14' */
        rtb_StateO_d = TDC_DataStore();
      }

      if (TDC_DataStore() == 0.0) {
        /* '<S853>:1:17' */
        /* '<S853>:1:18' */
        rtb_ESTEnable = 0.0;

        /* '<S853>:1:19' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 1.0) {
        /* '<S853>:1:20' */
        /* '<S853>:1:21' */
        rtb_ESTEnable = 1.0;

        /* '<S853>:1:22' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 2.0) {
        /* '<S853>:1:23' */
        /* '<S853>:1:24' */
        rtb_ESTEnable = 1.0;

        /* '<S853>:1:25' */
        rtb_CounterReset = 1.0;
      } else if (TDC_DataStore() == 3.0) {
        /* '<S853>:1:26' */
        /* '<S853>:1:27' */
        rtb_ESTEnable = 1.0;

        /* '<S853>:1:28' */
        rtb_CounterReset = 1.0;
      } else {
        /* '<S853>:1:30' */
        rtb_ESTEnable = 0.0;

        /* '<S853>:1:31' */
        rtb_CounterReset = 0.0;
      }

      /* End of MATLAB Function Block: '<S852>/EST Enable TDC Counter Stateflow' */

      /* S-Function (motohawk_sfun_data_write): '<S852>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TDC */
      {
        TDC_DataStore() = rtb_StateO_d;
      }

      /* DataTypeConversion: '<S852>/Data Type Conversion' */
      tmp = (int32_T)rtb_ESTEnable;
      tmp_0 = fmod((real_T)tmp, 256.0);
      BaseEngineController_LS_112_B.s852_DataTypeConversion = (int8_T)(tmp_0 <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-tmp_0 : (int8_T)(uint8_T)tmp_0);

      /* Update for UnitDelay: '<S852>/CrankCounter' */
      BaseEngineController_LS_112_DWork.s852_CrankCounter_DSTATE =
        rtb_CounterReset;

      /* End of Outputs for SubSystem: '<S847>/EST Enable TDC Counter' */

      /* Logic: '<S790>/Logical Operator1' incorporates:
       *  Logic: '<S847>/Logical Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration9'
       */
      BaseEngineController_LS_112_B.s790_LogicalOperator1[0] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl1_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[0]));
      BaseEngineController_LS_112_B.s790_LogicalOperator1[1] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl2_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[1]));
      BaseEngineController_LS_112_B.s790_LogicalOperator1[2] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl3_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[2]));
      BaseEngineController_LS_112_B.s790_LogicalOperator1[3] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl4_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[3]));
      BaseEngineController_LS_112_B.s790_LogicalOperator1[4] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl5_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[4]));
      BaseEngineController_LS_112_B.s790_LogicalOperator1[5] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl6_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[5]));
      BaseEngineController_LS_112_B.s790_LogicalOperator1[6] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl7_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[6]));
      BaseEngineController_LS_112_B.s790_LogicalOperator1[7] =
        ((rtb_LogicalOperator3_ni && rtb_LogicalOperator1_i &&
          (SparkEnableCyl8_DataStore()) && rtb_motohawk_data_read2_i &&
          rtb_LogicalOperator4_i &&
          (BaseEngineController_LS_112_B.s852_DataTypeConversion != 0) &&
          BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_112_B.s22_LogicalOperator2[7]));

      /* If: '<S849>/If' incorporates:
       *  Inport: '<S871>/In1'
       *  Inport: '<S872>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S849>/override_enable'
       *  UnitDelay: '<S849>/Unit Delay'
       */
      if ((SparkStartAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S849>/NewValue' incorporates:
         *  ActionPort: '<S871>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_112_DWork.s849_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S849>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S849>/OldValue' incorporates:
         *  ActionPort: '<S872>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_112_B.s23_Sum;

        /* End of Outputs for SubSystem: '<S849>/OldValue' */
      }

      /* End of If: '<S849>/If' */

      /* Sum: '<S849>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S849>/offset'
       */
      BaseEngineController_LS_112_B.s849_Sum = rtb_ESTEnable +
        (SparkStartAngle_offset_DataStore());

      /* DataTypeConversion: '<S790>/Data Type Conversion' incorporates:
       *  Gain: '<S790>/Gain'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_112_B.s849_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion_nk = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion_nk = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion_nk = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S790>/Data Type Conversion' */
      /* If: '<S850>/If' incorporates:
       *  Inport: '<S873>/In1'
       *  Inport: '<S874>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S850>/override_enable'
       *  UnitDelay: '<S850>/Unit Delay'
       */
      if ((SparkStopAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S850>/NewValue' incorporates:
         *  ActionPort: '<S873>/Action Port'
         */
        rtb_CounterReset =
          BaseEngineController_LS_112_DWork.s850_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S850>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S850>/OldValue' incorporates:
         *  ActionPort: '<S874>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_LS_112_B.s92_SparkAdv;

        /* End of Outputs for SubSystem: '<S850>/OldValue' */
      }

      /* End of If: '<S850>/If' */

      /* Sum: '<S850>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S850>/offset'
       */
      BaseEngineController_LS_112_B.s850_Sum = rtb_CounterReset +
        (SparkStopAngle_offset_DataStore());

      /* DataTypeConversion: '<S790>/Data Type Conversion1' incorporates:
       *  Gain: '<S790>/Gain1'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_112_B.s850_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion1_p = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion1_p = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion1_p = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S790>/Data Type Conversion1' */
      /* DataTypeConversion: '<S790>/Data Type Conversion2' incorporates:
       *  Gain: '<S790>/Gain2'
       *  S-Function (motohawk_sfun_calibration): '<S790>/motohawk_calibration2'
       */
      tmp_0 = 1000.0 * (SparkMaxDuration_DataStore());
      if (tmp_0 < 4.294967296E+9) {
        if (tmp_0 >= 0.0) {
          rtb_DataTypeConversion2_m = (uint32_T)tmp_0;
        } else {
          rtb_DataTypeConversion2_m = 0U;
        }
      } else {
        rtb_DataTypeConversion2_m = MAX_uint32_T;
      }

      /* End of DataTypeConversion: '<S790>/Data Type Conversion2' */
      /* S-Function Block: <S790>/Spark Sequence Output Spark Sequence Diagnostics */
      {
        int32_T i;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o1)[i] = 0;
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o2)[i] = 0;
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_LS_112_B.s790_SparkSequence_o3)[i] = 0;
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_LS_112_B.s790_SparkSequence_o4)[i] = 0;
        }
      }

      /* RelationalOperator: '<S869>/RelOp' incorporates:
       *  Constant: '<S869>/Constant'
       */
      rtb_RelOp_o = ((rtb_SparkSequence_o1[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def' */

      /* Set Fault Suspected Status: EST1_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(47, rtb_RelOp_o);
        UpdateFault(47);
      }

      /* RelationalOperator: '<S870>/RelOp' incorporates:
       *  Constant: '<S870>/Constant'
       */
      rtb_RelOp_j = ((rtb_SparkSequence_o1[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: EST2_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(49, rtb_RelOp_j);
        UpdateFault(49);
      }

      /* RelationalOperator: '<S857>/RelOp' incorporates:
       *  Constant: '<S857>/Constant'
       */
      rtb_RelOp_g = ((rtb_SparkSequence_o1[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def10' */

      /* Set Fault Suspected Status: EST3_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(51, rtb_RelOp_g);
        UpdateFault(51);
      }

      /* RelationalOperator: '<S858>/RelOp' incorporates:
       *  Constant: '<S858>/Constant'
       */
      rtb_RelOp_e = ((rtb_SparkSequence_o1[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def11' */

      /* Set Fault Suspected Status: EST4_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(53, rtb_RelOp_e);
        UpdateFault(53);
      }

      /* RelationalOperator: '<S859>/RelOp' incorporates:
       *  Constant: '<S859>/Constant'
       */
      rtb_RelOp_p = ((rtb_SparkSequence_o1[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def12' */

      /* Set Fault Suspected Status: EST5_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(55, rtb_RelOp_p);
        UpdateFault(55);
      }

      /* RelationalOperator: '<S860>/RelOp' incorporates:
       *  Constant: '<S860>/Constant'
       */
      rtb_RelOp_g0 = ((rtb_SparkSequence_o1[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def13' */

      /* Set Fault Suspected Status: EST6_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(57, rtb_RelOp_g0);
        UpdateFault(57);
      }

      /* RelationalOperator: '<S861>/RelOp' incorporates:
       *  Constant: '<S861>/Constant'
       */
      rtb_RelOp_ep = ((rtb_SparkSequence_o1[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def14' */

      /* Set Fault Suspected Status: EST7_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(59, rtb_RelOp_ep);
        UpdateFault(59);
      }

      /* RelationalOperator: '<S862>/RelOp' incorporates:
       *  Constant: '<S862>/Constant'
       */
      rtb_RelOp_nj = ((rtb_SparkSequence_o1[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def15' */

      /* Set Fault Suspected Status: EST8_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(61, rtb_RelOp_nj);
        UpdateFault(61);
      }

      /* RelationalOperator: '<S863>/RelOp' incorporates:
       *  Constant: '<S863>/Constant'
       */
      rtb_RelOp_go = ((rtb_SparkSequence_o2[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EST3_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(50, rtb_RelOp_go);
        UpdateFault(50);
      }

      /* RelationalOperator: '<S864>/RelOp' incorporates:
       *  Constant: '<S864>/Constant'
       */
      rtb_RelOp_a = ((rtb_SparkSequence_o2[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EST4_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(52, rtb_RelOp_a);
        UpdateFault(52);
      }

      /* RelationalOperator: '<S865>/RelOp' incorporates:
       *  Constant: '<S865>/Constant'
       */
      rtb_RelOp_e3 = ((rtb_SparkSequence_o2[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: EST5_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(54, rtb_RelOp_e3);
        UpdateFault(54);
      }

      /* RelationalOperator: '<S866>/RelOp' incorporates:
       *  Constant: '<S866>/Constant'
       */
      rtb_RelOp_nz = ((rtb_SparkSequence_o2[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: EST6_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(56, rtb_RelOp_nz);
        UpdateFault(56);
      }

      /* RelationalOperator: '<S867>/RelOp' incorporates:
       *  Constant: '<S867>/Constant'
       */
      rtb_RelOp_h = ((rtb_SparkSequence_o2[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: EST7_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(58, rtb_RelOp_h);
        UpdateFault(58);
      }

      /* RelationalOperator: '<S868>/RelOp' incorporates:
       *  Constant: '<S868>/Constant'
       */
      rtb_RelOp_p3 = ((rtb_SparkSequence_o2[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: EST8_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(60, rtb_RelOp_p3);
        UpdateFault(60);
      }

      /* RelationalOperator: '<S855>/RelOp' incorporates:
       *  Constant: '<S855>/Constant'
       */
      rtb_RelOp_nm = ((rtb_SparkSequence_o2[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def8' */

      /* Set Fault Suspected Status: EST1_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(46, rtb_RelOp_nm);
        UpdateFault(46);
      }

      /* RelationalOperator: '<S856>/RelOp' incorporates:
       *  Constant: '<S856>/Constant'
       */
      rtb_RelOp_eh = ((rtb_SparkSequence_o2[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S848>/motohawk_fault_def9' */

      /* Set Fault Suspected Status: EST2_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(48, rtb_RelOp_eh);
        UpdateFault(48);
      }

      /* S-Function (motohawk_sfun_data_write): '<S847>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineShutdownAction */
      {
        EngineShutdownAction_DataStore() = rtb_motohawk_fault_action_a5;
      }

      /* Update for UnitDelay: '<S849>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s849_UnitDelay_DSTATE = rtb_ESTEnable;

      /* Update for UnitDelay: '<S850>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s850_UnitDelay_DSTATE = rtb_CounterReset;

      /* Update for S-Function (motohawk_sfun_spark_sequence): '<S790>/Spark Sequence' */

      /* Update Spark Sequence */
      {
        extern NativeBool CNK_Encoder_PulseScheduling_IsPossible(void);

        {
          typedef void (*PSPOutput_HardStart_HardStop_SetPtr)(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST1_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST2_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST3_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST4_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST5_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST6_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST7_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          extern void EST8_PSPOutput_HardStart_HardStop_Set(uint8_T pulse,
            uint8_T state, int16_T startAngle, int16_T stopAngle, uint32_T
            maxDuration);
          static const PSPOutput_HardStart_HardStop_SetPtr
            pfnHardStart_HardStop_Arr[8] = {
            EST1_PSPOutput_HardStart_HardStop_Set,
            EST2_PSPOutput_HardStart_HardStop_Set,
            EST3_PSPOutput_HardStart_HardStop_Set,
            EST4_PSPOutput_HardStart_HardStop_Set,
            EST5_PSPOutput_HardStart_HardStop_Set,
            EST6_PSPOutput_HardStart_HardStop_Set,
            EST7_PSPOutput_HardStart_HardStop_Set,
            EST8_PSPOutput_HardStart_HardStop_Set,
          };

          NativeVar_U cyl;
          for (cyl = 0; cyl < (EncoderNumCylinders_DataStore()); cyl++) {
            int16_T start_angle;
            int16_T stop_angle;
            uint8_T state;
            if (CNK_Encoder_PulseScheduling_IsPossible()) {
              state = ((BaseEngineController_LS_112_B.s790_LogicalOperator1)[cyl])
                ? 1 : 2;
            } else {
              state = 0;
            }

            start_angle = (rtb_DataTypeConversion_nk) -
              (EncoderTDCAngles_DataStore())[cyl];
            stop_angle = (rtb_DataTypeConversion1_p) -
              (EncoderTDCAngles_DataStore())[cyl];
            pfnHardStart_HardStop_Arr[cyl](0, state, start_angle, stop_angle,
              rtb_DataTypeConversion2_m);
          }
        }
      }
    }
  }
}
