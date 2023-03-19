/*
 * Trigger_FGND_5XRTI_PERIODIC_11294p0006.c
 *
 * Code generation for model "BaseEngineController_LS_128.mdl".
 *
 * Model version              : 1.2189
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:22:09 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_128.h"
#include "BaseEngineController_LS_128_private.h"

void Trigger_FGND_5XRTI_PERIODIC_11294p0006(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
#define BaseEngineController_LS_128_IN_PowerDown (1U)
#define BaseEngineController_LS_128_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_128_DWork.s13_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S13>/Coil Control' */
    {
      /* local block i/o variables */
      real_T rtb_StateO_e;
      uint32_T rtb_DataTypeConversion2_l;
      int16_T rtb_DataTypeConversion_g;
      int16_T rtb_DataTypeConversion1_i;
      uint8_T rtb_SparkSequence_o1[8];
      uint8_T rtb_SparkSequence_o2[8];
      boolean_T rtb_RelOp_e;
      boolean_T rtb_RelOp_ad;
      boolean_T rtb_RelOp_k;
      boolean_T rtb_RelOp_i;
      boolean_T rtb_RelOp_m;
      boolean_T rtb_RelOp_kb;
      boolean_T rtb_RelOp_p;
      boolean_T rtb_RelOp_f2;
      boolean_T rtb_RelOp_m1;
      boolean_T rtb_RelOp_h;
      boolean_T rtb_RelOp_d;
      boolean_T rtb_RelOp_fk;
      boolean_T rtb_RelOp_o;
      boolean_T rtb_RelOp_mz;
      boolean_T rtb_RelOp_fc;
      boolean_T rtb_RelOp_c;
      boolean_T rtb_motohawk_fault_action_a;
      boolean_T rtb_motohawk_data_read2_b;
      boolean_T rtb_LogicalOperator3_ge;
      boolean_T rtb_LogicalOperator1_m2;
      boolean_T rtb_LogicalOperator4_c;
      real_T rtb_ESTEnable;
      real_T rtb_CounterReset;
      int32_T tmp;
      real_T tmp_0;

      /* Logic: '<S849>/Logical Operator3' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S849>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ge = !DelayedEngineShutdownAction_DataStore();

      /* S-Function (motohawk_sfun_fault_action): '<S849>/motohawk_fault_action'
       *
       * Regarding '<S849>/motohawk_fault_action':
         Get Fault Action Status: EngineShutdown
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action_a = GetFaultActionStatus(10);
      }

      /* Logic: '<S849>/Logical Operator1' */
      rtb_LogicalOperator1_m2 = !rtb_motohawk_fault_action_a;

      /* S-Function (motohawk_sfun_data_read): '<S849>/motohawk_data_read2' */
      rtb_motohawk_data_read2_b = ECUP_Enabled_DataStore();

      /* Logic: '<S849>/Logical Operator4' incorporates:
       *  Constant: '<S853>/Constant'
       *  RelationalOperator: '<S853>/RelOp'
       *  S-Function (motohawk_sfun_data_read): '<S849>/motohawk_data_read3'
       */
      rtb_LogicalOperator4_c = !(((uint8_T)EngineState_DataStore()) == 1);

      /* Outputs for Atomic SubSystem: '<S849>/EST Enable TDC Counter' */
      /* UnitDelay: '<S854>/CrankCounter' */
      BaseEngineController_LS_128_B.s854_CrankCounter =
        BaseEngineController_LS_128_DWork.s854_CrankCounter_DSTATE;

      /* S-Function (motohawk_sfun_trigger): '<S854>/motohawk_trigger1' */
      /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
      if (BaseEngineController_LS_128_DWork.s854_motohawk_trigger1_DWORK1 == 0)
      {
        BaseEngineController_LS_128_DWork.s854_motohawk_trigger1_DWORK1 = 1;
      }

      /* RelationalOperator: '<S854>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S854>/motohawk_calibration1'
       */
      BaseEngineController_LS_128_B.s854_RelationalOperator1 =
        ((BaseEngineController_LS_128_B.s856_Switch1 >= ((uint8_T)
           (SparkEnableTDCCounts_DataStore()))));

      /* MATLAB Function Block: '<S854>/EST Enable TDC Counter Stateflow' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S854>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S854>/motohawk_data_read3'
       */

      /* MATLAB Function 'Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow': '<S855>:1' */
      if ((TDC_DataStore() == 0.0) &&
          (BaseEngineController_LS_128_B.s854_RelationalOperator1 == TRUE)) {
        /* '<S855>:1:3' */
        /* '<S855>:1:4' */
        rtb_StateO_e = 1.0;
      } else if ((TDC_DataStore() == 1.0) && (((uint8_T)EngineState_DataStore())
                  == 2) &&
                 (BaseEngineController_LS_128_B.s854_RelationalOperator1 == TRUE))
      {
        /* '<S855>:1:5' */
        /* '<S855>:1:6' */
        rtb_StateO_e = 2.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 3)) {
        /* '<S855>:1:7' */
        /* '<S855>:1:8' */
        rtb_StateO_e = 3.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S855>:1:9' */
        /* '<S855>:1:10' */
        rtb_StateO_e = 0.0;
      } else if ((TDC_DataStore() == 3.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S855>:1:11' */
        /* '<S855>:1:12' */
        rtb_StateO_e = 0.0;
      } else {
        /* '<S855>:1:14' */
        rtb_StateO_e = TDC_DataStore();
      }

      if (TDC_DataStore() == 0.0) {
        /* '<S855>:1:17' */
        /* '<S855>:1:18' */
        rtb_ESTEnable = 0.0;

        /* '<S855>:1:19' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 1.0) {
        /* '<S855>:1:20' */
        /* '<S855>:1:21' */
        rtb_ESTEnable = 1.0;

        /* '<S855>:1:22' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 2.0) {
        /* '<S855>:1:23' */
        /* '<S855>:1:24' */
        rtb_ESTEnable = 1.0;

        /* '<S855>:1:25' */
        rtb_CounterReset = 1.0;
      } else if (TDC_DataStore() == 3.0) {
        /* '<S855>:1:26' */
        /* '<S855>:1:27' */
        rtb_ESTEnable = 1.0;

        /* '<S855>:1:28' */
        rtb_CounterReset = 1.0;
      } else {
        /* '<S855>:1:30' */
        rtb_ESTEnable = 0.0;

        /* '<S855>:1:31' */
        rtb_CounterReset = 0.0;
      }

      /* End of MATLAB Function Block: '<S854>/EST Enable TDC Counter Stateflow' */

      /* S-Function (motohawk_sfun_data_write): '<S854>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TDC */
      {
        TDC_DataStore() = rtb_StateO_e;
      }

      /* DataTypeConversion: '<S854>/Data Type Conversion' */
      tmp = (int32_T)rtb_ESTEnable;
      tmp_0 = fmod((real_T)tmp, 256.0);
      BaseEngineController_LS_128_B.s854_DataTypeConversion = (int8_T)(tmp_0 <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-tmp_0 : (int8_T)(uint8_T)tmp_0);

      /* Update for UnitDelay: '<S854>/CrankCounter' */
      BaseEngineController_LS_128_DWork.s854_CrankCounter_DSTATE =
        rtb_CounterReset;

      /* End of Outputs for SubSystem: '<S849>/EST Enable TDC Counter' */

      /* Logic: '<S792>/Logical Operator1' incorporates:
       *  Logic: '<S849>/Logical Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_calibration): '<S849>/motohawk_calibration9'
       */
      BaseEngineController_LS_128_B.s792_LogicalOperator1[0] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl1_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[0]));
      BaseEngineController_LS_128_B.s792_LogicalOperator1[1] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl2_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[1]));
      BaseEngineController_LS_128_B.s792_LogicalOperator1[2] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl3_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[2]));
      BaseEngineController_LS_128_B.s792_LogicalOperator1[3] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl4_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[3]));
      BaseEngineController_LS_128_B.s792_LogicalOperator1[4] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl5_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[4]));
      BaseEngineController_LS_128_B.s792_LogicalOperator1[5] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl6_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[5]));
      BaseEngineController_LS_128_B.s792_LogicalOperator1[6] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl7_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[6]));
      BaseEngineController_LS_128_B.s792_LogicalOperator1[7] =
        ((rtb_LogicalOperator3_ge && rtb_LogicalOperator1_m2 &&
          (SparkEnableCyl8_DataStore()) && rtb_motohawk_data_read2_b &&
          rtb_LogicalOperator4_c &&
          (BaseEngineController_LS_128_B.s854_DataTypeConversion != 0) &&
          BaseEngineController_LS_128_B.s24_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_LS_128_B.s22_LogicalOperator2[7]));

      /* If: '<S851>/If' incorporates:
       *  Inport: '<S873>/In1'
       *  Inport: '<S874>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S851>/override_enable'
       *  UnitDelay: '<S851>/Unit Delay'
       */
      if ((SparkStartAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S851>/NewValue' incorporates:
         *  ActionPort: '<S873>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_128_DWork.s851_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S851>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S851>/OldValue' incorporates:
         *  ActionPort: '<S874>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_128_B.s23_Sum;

        /* End of Outputs for SubSystem: '<S851>/OldValue' */
      }

      /* End of If: '<S851>/If' */

      /* Sum: '<S851>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S851>/offset'
       */
      BaseEngineController_LS_128_B.s851_Sum = rtb_ESTEnable +
        (SparkStartAngle_offset_DataStore());

      /* DataTypeConversion: '<S792>/Data Type Conversion' incorporates:
       *  Gain: '<S792>/Gain'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_128_B.s851_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion_g = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion_g = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion_g = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S792>/Data Type Conversion' */
      /* If: '<S852>/If' incorporates:
       *  Inport: '<S875>/In1'
       *  Inport: '<S876>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S852>/override_enable'
       *  UnitDelay: '<S852>/Unit Delay'
       */
      if ((SparkStopAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S852>/NewValue' incorporates:
         *  ActionPort: '<S875>/Action Port'
         */
        rtb_CounterReset =
          BaseEngineController_LS_128_DWork.s852_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S852>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S852>/OldValue' incorporates:
         *  ActionPort: '<S876>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_LS_128_B.s92_SparkAdv;

        /* End of Outputs for SubSystem: '<S852>/OldValue' */
      }

      /* End of If: '<S852>/If' */

      /* Sum: '<S852>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S852>/offset'
       */
      BaseEngineController_LS_128_B.s852_Sum = rtb_CounterReset +
        (SparkStopAngle_offset_DataStore());

      /* DataTypeConversion: '<S792>/Data Type Conversion1' incorporates:
       *  Gain: '<S792>/Gain1'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_128_B.s852_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion1_i = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion1_i = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion1_i = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S792>/Data Type Conversion1' */
      /* DataTypeConversion: '<S792>/Data Type Conversion2' incorporates:
       *  Gain: '<S792>/Gain2'
       *  S-Function (motohawk_sfun_calibration): '<S792>/motohawk_calibration2'
       */
      tmp_0 = 1000.0 * (SparkMaxDuration_DataStore());
      if (tmp_0 < 4.294967296E+9) {
        if (tmp_0 >= 0.0) {
          rtb_DataTypeConversion2_l = (uint32_T)tmp_0;
        } else {
          rtb_DataTypeConversion2_l = 0U;
        }
      } else {
        rtb_DataTypeConversion2_l = MAX_uint32_T;
      }

      /* End of DataTypeConversion: '<S792>/Data Type Conversion2' */
      /* S-Function Block: <S792>/Spark Sequence Output Spark Sequence Diagnostics */
      {
        extern int32_T SparkSeqDiag_22_LastPin;
        extern uint8_T SparkSeqDiag_22_Open[8];
        extern uint8_T SparkSeqDiag_22_Short[8];
        extern uint16_T SparkSeqDiag_22_OpenADC[8];
        extern uint16_T SparkSeqDiag_22_OnTime[8];
        int32_T i;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o1)[i] = SparkSeqDiag_22_Short[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o2)[i] = SparkSeqDiag_22_Open[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_LS_128_B.s792_SparkSequence_o3)[i] =
            SparkSeqDiag_22_OpenADC[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_LS_128_B.s792_SparkSequence_o4)[i] =
            SparkSeqDiag_22_OnTime[i];
        }
      }

      /* RelationalOperator: '<S871>/RelOp' incorporates:
       *  Constant: '<S871>/Constant'
       */
      rtb_RelOp_e = ((rtb_SparkSequence_o1[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def' */

      /* Set Fault Suspected Status: EST1_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(47, rtb_RelOp_e);
        UpdateFault(47);
      }

      /* RelationalOperator: '<S872>/RelOp' incorporates:
       *  Constant: '<S872>/Constant'
       */
      rtb_RelOp_ad = ((rtb_SparkSequence_o1[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: EST2_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(49, rtb_RelOp_ad);
        UpdateFault(49);
      }

      /* RelationalOperator: '<S859>/RelOp' incorporates:
       *  Constant: '<S859>/Constant'
       */
      rtb_RelOp_k = ((rtb_SparkSequence_o1[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def10' */

      /* Set Fault Suspected Status: EST3_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(51, rtb_RelOp_k);
        UpdateFault(51);
      }

      /* RelationalOperator: '<S860>/RelOp' incorporates:
       *  Constant: '<S860>/Constant'
       */
      rtb_RelOp_i = ((rtb_SparkSequence_o1[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def11' */

      /* Set Fault Suspected Status: EST4_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(53, rtb_RelOp_i);
        UpdateFault(53);
      }

      /* RelationalOperator: '<S861>/RelOp' incorporates:
       *  Constant: '<S861>/Constant'
       */
      rtb_RelOp_m = ((rtb_SparkSequence_o1[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def12' */

      /* Set Fault Suspected Status: EST5_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(55, rtb_RelOp_m);
        UpdateFault(55);
      }

      /* RelationalOperator: '<S862>/RelOp' incorporates:
       *  Constant: '<S862>/Constant'
       */
      rtb_RelOp_kb = ((rtb_SparkSequence_o1[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def13' */

      /* Set Fault Suspected Status: EST6_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(57, rtb_RelOp_kb);
        UpdateFault(57);
      }

      /* RelationalOperator: '<S863>/RelOp' incorporates:
       *  Constant: '<S863>/Constant'
       */
      rtb_RelOp_p = ((rtb_SparkSequence_o1[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def14' */

      /* Set Fault Suspected Status: EST7_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(59, rtb_RelOp_p);
        UpdateFault(59);
      }

      /* RelationalOperator: '<S864>/RelOp' incorporates:
       *  Constant: '<S864>/Constant'
       */
      rtb_RelOp_f2 = ((rtb_SparkSequence_o1[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def15' */

      /* Set Fault Suspected Status: EST8_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(61, rtb_RelOp_f2);
        UpdateFault(61);
      }

      /* RelationalOperator: '<S865>/RelOp' incorporates:
       *  Constant: '<S865>/Constant'
       */
      rtb_RelOp_m1 = ((rtb_SparkSequence_o2[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EST3_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(50, rtb_RelOp_m1);
        UpdateFault(50);
      }

      /* RelationalOperator: '<S866>/RelOp' incorporates:
       *  Constant: '<S866>/Constant'
       */
      rtb_RelOp_h = ((rtb_SparkSequence_o2[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EST4_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(52, rtb_RelOp_h);
        UpdateFault(52);
      }

      /* RelationalOperator: '<S867>/RelOp' incorporates:
       *  Constant: '<S867>/Constant'
       */
      rtb_RelOp_d = ((rtb_SparkSequence_o2[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: EST5_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(54, rtb_RelOp_d);
        UpdateFault(54);
      }

      /* RelationalOperator: '<S868>/RelOp' incorporates:
       *  Constant: '<S868>/Constant'
       */
      rtb_RelOp_fk = ((rtb_SparkSequence_o2[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: EST6_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(56, rtb_RelOp_fk);
        UpdateFault(56);
      }

      /* RelationalOperator: '<S869>/RelOp' incorporates:
       *  Constant: '<S869>/Constant'
       */
      rtb_RelOp_o = ((rtb_SparkSequence_o2[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: EST7_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(58, rtb_RelOp_o);
        UpdateFault(58);
      }

      /* RelationalOperator: '<S870>/RelOp' incorporates:
       *  Constant: '<S870>/Constant'
       */
      rtb_RelOp_mz = ((rtb_SparkSequence_o2[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: EST8_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(60, rtb_RelOp_mz);
        UpdateFault(60);
      }

      /* RelationalOperator: '<S857>/RelOp' incorporates:
       *  Constant: '<S857>/Constant'
       */
      rtb_RelOp_fc = ((rtb_SparkSequence_o2[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def8' */

      /* Set Fault Suspected Status: EST1_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(46, rtb_RelOp_fc);
        UpdateFault(46);
      }

      /* RelationalOperator: '<S858>/RelOp' incorporates:
       *  Constant: '<S858>/Constant'
       */
      rtb_RelOp_c = ((rtb_SparkSequence_o2[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S850>/motohawk_fault_def9' */

      /* Set Fault Suspected Status: EST2_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(48, rtb_RelOp_c);
        UpdateFault(48);
      }

      /* S-Function (motohawk_sfun_data_write): '<S849>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineShutdownAction */
      {
        EngineShutdownAction_DataStore() = rtb_motohawk_fault_action_a;
      }

      /* Update for UnitDelay: '<S851>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s851_UnitDelay_DSTATE = rtb_ESTEnable;

      /* Update for UnitDelay: '<S852>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s852_UnitDelay_DSTATE = rtb_CounterReset;

      /* S-Function Block: <S792>/Spark Sequence Update Spark Sequence */
      {
        extern uint8_T motohawk_encoder_status;
        S_SeqOutAttributes SeqOutAttr;
        E_ResourceBehaviour behaviour;
        NativeError_S sErrorResult;
        E_SeqOutCond condition;
        int32_T resource;
        int32_T index;
        int32_T count;
        int32_T cyl;
        SeqOutAttr.uValidAttributesMask = USE_SEQ_PULSE_COND | USE_SEQ_TIMING |
          USE_SEQ_UPDATE_MODE | USE_SEQ_MAX_DURATION | USE_SEQ_MIN_DURATION;
        SeqOutAttr.eUpdateMode = SEQ_UPDATE_OS_PROTECTED;
        SeqOutAttr.TimingObj.eCtrlMode = ANGLE_CTRL;
        SeqOutAttr.uMinPulseDurationInMicroSecs = 1500;
        condition = SEQ_DISABLED;
        if (motohawk_encoder_status >= (uint8_T) ENC_SYNC_CAM_UNKNOWN) {
          condition = SEQ_DISNEXT;
        }

        index = 0;
        if ((condition != SEQ_DISABLED) && (((EST_SequenceType_DataStore()) == 2)
             || ((EST_SequenceType_DataStore()) == 3))) {
          int32_T next_index = 0;
          int16_T max_angle_diff = 0;
          int16_T angle_diff;
          int16_T current_angle;
          current_angle = 720*16 - GetEncoderEngAngle();
          for (index=0; index < (EncoderNumCylinders_DataStore()); index++) {
            int16_T cylinder_angle;
            cyl = (EncoderTDCOrder_DataStore())[index];
            cylinder_angle = (EncoderTDCAngles_DataStore())[cyl] -
              rtb_DataTypeConversion_g;
            angle_diff = current_angle - cylinder_angle;
            while (angle_diff < 0) {
              angle_diff += 720*16;
            }

            while (angle_diff >= 720*16) {
              angle_diff -= 720*16;
            }

            if (angle_diff > max_angle_diff) {
              max_angle_diff = angle_diff;
              next_index = index;
            }
          }

          index = next_index;

          {
            extern real_T NextSparkAngle;
            NextSparkAngle = (real_T) (EncoderTDCAngles_DataStore())
              [(EncoderTDCOrder_DataStore())[index]]/16.0;
          }

          {
            extern uint8_T NextCylinderToSpark;
            NextCylinderToSpark = (uint8_T) (EncoderTDCOrder_DataStore())[index]
              +1;
          }
        }

        for (count=0; count < (EncoderNumCylinders_DataStore()); count++) {
          boolean_T bValid = 1;
          cyl = (EncoderTDCOrder_DataStore())[index];
          if (condition != SEQ_DISABLED) {
            condition = ((BaseEngineController_LS_128_B.s792_LogicalOperator1)
                         [cyl]) ? SEQ_ENABLED : SEQ_DISNEXT;
          }

          if ((EST_SequenceType_DataStore()) == 0) {
            SeqOutAttr.u1AffectedPulse = 0;
            resource = (EST_InitialPin_DataStore()) + cyl;
            behaviour = BEHAVIOUR_EST_SEQ;
          } else if ((EST_SequenceType_DataStore()) == 1) {
            SeqOutAttr.u1AffectedPulse = 0;
            resource = (EST_InitialPin_DataStore()) + cyl;
            behaviour = BEHAVIOUR_BANK_EST_SEQ;
          } else if ((EST_SequenceType_DataStore()) == 2) {
            SeqOutAttr.u1AffectedPulse = (ESTPinMapArr_PulseNum_22_DataStore())
              [cyl];
            resource = (ESTPinMapArr_Resource_22_DataStore())[cyl];
            behaviour = BEHAVIOUR_EST_SEQ;
          } else if ((EST_SequenceType_DataStore()) == 3) {
            bValid = (cyl < MAX_MUX_PULSES_SUPPORTED);
            SeqOutAttr.u1AffectedPulse = cyl;
            resource = (EST_InitialPin_DataStore());
            behaviour = BEHAVIOUR_MUX_EST_SEQ;
          }

          if (bValid) {
            SeqOutAttr.eResourceCondition = condition;
            SeqOutAttr.TimingObj.s2StartAngle = rtb_DataTypeConversion_g;
            SeqOutAttr.TimingObj.s2StopAngle = rtb_DataTypeConversion1_i;
            SeqOutAttr.u4MaxDurationInMicroSecs = rtb_DataTypeConversion2_l;
            SeqOutAttr.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
            SeqOutAttr.eDiagCond = RES_ENABLED;
            sErrorResult = SetResourceAttributesSequenceOut((E_ModuleResource)
              resource, &SeqOutAttr, behaviour);

            {
              extern uint8_T EST_Spark;
              if (SUCCESS(sErrorResult))
                EST_Spark = 0;
              else
                EST_Spark = (uint8_T) GetErrorCode(sErrorResult);
            }
          }

          index++;
          if (index >= (EncoderNumCylinders_DataStore())) {
            index = 0;
          }
        }
      }
    }
  }
}
