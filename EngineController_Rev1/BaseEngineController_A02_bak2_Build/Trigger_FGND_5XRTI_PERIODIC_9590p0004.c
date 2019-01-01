/*
 * Trigger_FGND_5XRTI_PERIODIC_9590p0004.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1531
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 09:48:38 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

void Trigger_FGND_5XRTI_PERIODIC_9590p0004(void)
{
  /* Named constants for Stateflow: '<S798>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s5_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S5>/Coil Control' */
    {
      /* local block i/o variables */
      real_T rtb_StateO_m;
      uint32_T rtb_DataTypeConversion2_m;
      int16_T rtb_DataTypeConversion_i;
      int16_T rtb_DataTypeConversion1_m;
      uint8_T rtb_SparkSequence_o1[8];
      uint8_T rtb_SparkSequence_o2[8];
      boolean_T rtb_RelOp_o;
      boolean_T rtb_RelOp_m;
      boolean_T rtb_RelOp_d;
      boolean_T rtb_RelOp_f;
      boolean_T rtb_RelOp_i;
      boolean_T rtb_RelOp_hq;
      boolean_T rtb_RelOp_l;
      boolean_T rtb_RelOp_g;
      boolean_T rtb_RelOp_e;
      boolean_T rtb_RelOp_ge;
      boolean_T rtb_RelOp_mu;
      boolean_T rtb_RelOp_p;
      boolean_T rtb_RelOp_be;
      boolean_T rtb_RelOp_b4;
      boolean_T rtb_RelOp_c;
      boolean_T rtb_RelOp_n;
      boolean_T rtb_motohawk_fault_action;
      boolean_T rtb_motohawk_data_read2;
      boolean_T rtb_LogicalOperator3_k;
      boolean_T rtb_LogicalOperator1_k;
      boolean_T rtb_LogicalOperator4_j;
      real_T rtb_ESTEnable;
      real_T rtb_CounterReset;
      int32_T tmp;
      real_T tmp_0;

      /* Logic: '<S716>/Logical Operator3' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S716>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_k = !DelayedEngineShutdownAction_DataStore();

      /* S-Function (motohawk_sfun_fault_action): '<S716>/motohawk_fault_action'
       *
       * Regarding '<S716>/motohawk_fault_action':
         Get Fault Action Status: EngineShutdown
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action = GetFaultActionStatus(6);
      }

      /* Logic: '<S716>/Logical Operator1' */
      rtb_LogicalOperator1_k = !rtb_motohawk_fault_action;

      /* S-Function (motohawk_sfun_data_read): '<S716>/motohawk_data_read2' */
      rtb_motohawk_data_read2 = ECUP_Enabled_DataStore();

      /* Logic: '<S716>/Logical Operator4' incorporates:
       *  Constant: '<S720>/Constant'
       *  RelationalOperator: '<S720>/RelOp'
       *  S-Function (motohawk_sfun_data_read): '<S716>/motohawk_data_read3'
       */
      rtb_LogicalOperator4_j = !(((uint8_T)EngineState_DataStore()) == 1);

      /* Outputs for Atomic SubSystem: '<S716>/EST Enable TDC Counter' */
      /* UnitDelay: '<S721>/CrankCounter' */
      BaseEngineController_A02_bak2_B.s721_CrankCounter =
        BaseEngineController_A02_bak2_DWork.s721_CrankCounter_DSTATE;

      /* S-Function (motohawk_sfun_trigger): '<S721>/motohawk_trigger1' */
      /* Enable for Trigger_FGND_TDC_EVENT_9072p0002 */
      if (BaseEngineController_A02_bak2_DWork.s721_motohawk_trigger1_DWORK1 == 0)
      {
        BaseEngineController_A02_bak2_DWork.s721_motohawk_trigger1_DWORK1 = 1;
      }

      /* RelationalOperator: '<S721>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S721>/motohawk_calibration1'
       */
      BaseEngineController_A02_bak2_B.s721_RelationalOperator1 =
        ((BaseEngineController_A02_bak2_B.s723_Switch1 >= ((uint8_T)
           (SparkEnableTDCCounts_DataStore()))));

      /* MATLAB Function Block: '<S721>/EST Enable TDC Counter Stateflow' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S721>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S721>/motohawk_data_read3'
       */

      /* MATLAB Function 'Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow': '<S722>:1' */
      if ((TDC_DataStore() == 0.0) &&
          (BaseEngineController_A02_bak2_B.s721_RelationalOperator1 == TRUE)) {
        /* '<S722>:1:3' */
        /* '<S722>:1:4' */
        rtb_StateO_m = 1.0;
      } else if ((TDC_DataStore() == 1.0) && (((uint8_T)EngineState_DataStore())
                  == 2) &&
                 (BaseEngineController_A02_bak2_B.s721_RelationalOperator1 ==
                  TRUE)) {
        /* '<S722>:1:5' */
        /* '<S722>:1:6' */
        rtb_StateO_m = 2.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 3)) {
        /* '<S722>:1:7' */
        /* '<S722>:1:8' */
        rtb_StateO_m = 3.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S722>:1:9' */
        /* '<S722>:1:10' */
        rtb_StateO_m = 0.0;
      } else if ((TDC_DataStore() == 3.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S722>:1:11' */
        /* '<S722>:1:12' */
        rtb_StateO_m = 0.0;
      } else {
        /* '<S722>:1:14' */
        rtb_StateO_m = TDC_DataStore();
      }

      if (TDC_DataStore() == 0.0) {
        /* '<S722>:1:17' */
        /* '<S722>:1:18' */
        rtb_ESTEnable = 0.0;

        /* '<S722>:1:19' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 1.0) {
        /* '<S722>:1:20' */
        /* '<S722>:1:21' */
        rtb_ESTEnable = 1.0;

        /* '<S722>:1:22' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 2.0) {
        /* '<S722>:1:23' */
        /* '<S722>:1:24' */
        rtb_ESTEnable = 1.0;

        /* '<S722>:1:25' */
        rtb_CounterReset = 1.0;
      } else if (TDC_DataStore() == 3.0) {
        /* '<S722>:1:26' */
        /* '<S722>:1:27' */
        rtb_ESTEnable = 1.0;

        /* '<S722>:1:28' */
        rtb_CounterReset = 1.0;
      } else {
        /* '<S722>:1:30' */
        rtb_ESTEnable = 0.0;

        /* '<S722>:1:31' */
        rtb_CounterReset = 0.0;
      }

      /* End of MATLAB Function Block: '<S721>/EST Enable TDC Counter Stateflow' */

      /* S-Function (motohawk_sfun_data_write): '<S721>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TDC */
      {
        TDC_DataStore() = rtb_StateO_m;
      }

      /* DataTypeConversion: '<S721>/Data Type Conversion' */
      tmp = (int32_T)rtb_ESTEnable;
      tmp_0 = fmod((real_T)tmp, 256.0);
      BaseEngineController_A02_bak2_B.s721_DataTypeConversion = (int8_T)(tmp_0 <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-tmp_0 : (int8_T)(uint8_T)tmp_0);

      /* Update for UnitDelay: '<S721>/CrankCounter' */
      BaseEngineController_A02_bak2_DWork.s721_CrankCounter_DSTATE =
        rtb_CounterReset;

      /* End of Outputs for SubSystem: '<S716>/EST Enable TDC Counter' */

      /* Logic: '<S705>/Logical Operator1' incorporates:
       *  Logic: '<S716>/Logical Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_calibration): '<S716>/motohawk_calibration9'
       */
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[0] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl1_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[0]));
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[1] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl2_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[1]));
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[2] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl3_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[2]));
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[3] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl4_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[3]));
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[4] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl5_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[4]));
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[5] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl6_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[5]));
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[6] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl7_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[6]));
      BaseEngineController_A02_bak2_B.s705_LogicalOperator1[7] =
        ((rtb_LogicalOperator3_k && rtb_LogicalOperator1_k &&
          (SparkEnableCyl8_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_j &&
          (BaseEngineController_A02_bak2_B.s721_DataTypeConversion != 0) &&
          BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero
          && BaseEngineController_A02_bak2_B.s14_LogicalOperator2[7]));

      /* If: '<S718>/If' incorporates:
       *  Inport: '<S740>/In1'
       *  Inport: '<S741>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S718>/override_enable'
       *  UnitDelay: '<S718>/Unit Delay'
       */
      if ((SparkStartAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S718>/NewValue' incorporates:
         *  ActionPort: '<S740>/Action Port'
         */
        rtb_ESTEnable =
          BaseEngineController_A02_bak2_DWork.s718_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S718>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S718>/OldValue' incorporates:
         *  ActionPort: '<S741>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_A02_bak2_B.s15_Sum;

        /* End of Outputs for SubSystem: '<S718>/OldValue' */
      }

      /* End of If: '<S718>/If' */

      /* Sum: '<S718>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S718>/offset'
       */
      BaseEngineController_A02_bak2_B.s718_Sum = rtb_ESTEnable +
        (SparkStartAngle_offset_DataStore());

      /* DataTypeConversion: '<S705>/Data Type Conversion' incorporates:
       *  Gain: '<S705>/Gain'
       */
      tmp_0 = 16.0 * BaseEngineController_A02_bak2_B.s718_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion_i = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion_i = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion_i = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S705>/Data Type Conversion' */
      /* If: '<S719>/If' incorporates:
       *  Inport: '<S742>/In1'
       *  Inport: '<S743>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S719>/override_enable'
       *  UnitDelay: '<S719>/Unit Delay'
       */
      if ((SparkStopAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S719>/NewValue' incorporates:
         *  ActionPort: '<S742>/Action Port'
         */
        rtb_CounterReset =
          BaseEngineController_A02_bak2_DWork.s719_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S719>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S719>/OldValue' incorporates:
         *  ActionPort: '<S743>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_A02_bak2_B.s111_SparkAdv;

        /* End of Outputs for SubSystem: '<S719>/OldValue' */
      }

      /* End of If: '<S719>/If' */

      /* Sum: '<S719>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S719>/offset'
       */
      BaseEngineController_A02_bak2_B.s719_Sum = rtb_CounterReset +
        (SparkStopAngle_offset_DataStore());

      /* DataTypeConversion: '<S705>/Data Type Conversion1' incorporates:
       *  Gain: '<S705>/Gain1'
       */
      tmp_0 = 16.0 * BaseEngineController_A02_bak2_B.s719_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion1_m = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion1_m = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion1_m = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S705>/Data Type Conversion1' */
      /* DataTypeConversion: '<S705>/Data Type Conversion2' incorporates:
       *  Gain: '<S705>/Gain2'
       *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration2'
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

      /* End of DataTypeConversion: '<S705>/Data Type Conversion2' */
      /* S-Function Block: <S705>/Spark Sequence Output Spark Sequence Diagnostics */
      {
        extern int32_T SparkSeqDiag_24_LastPin;
        extern uint8_T SparkSeqDiag_24_Open[8];
        extern uint8_T SparkSeqDiag_24_Short[8];
        extern uint16_T SparkSeqDiag_24_OpenADC[8];
        extern uint16_T SparkSeqDiag_24_OnTime[8];
        int32_T i;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o1)[i] = SparkSeqDiag_24_Short[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o2)[i] = SparkSeqDiag_24_Open[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_A02_bak2_B.s705_SparkSequence_o3)[i] =
            SparkSeqDiag_24_OpenADC[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_A02_bak2_B.s705_SparkSequence_o4)[i] =
            SparkSeqDiag_24_OnTime[i];
        }
      }

      /* RelationalOperator: '<S738>/RelOp' incorporates:
       *  Constant: '<S738>/Constant'
       */
      rtb_RelOp_o = ((rtb_SparkSequence_o1[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def' */

      /* Set Fault Suspected Status: EST1_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(19, rtb_RelOp_o);
        UpdateFault(19);
      }

      /* RelationalOperator: '<S739>/RelOp' incorporates:
       *  Constant: '<S739>/Constant'
       */
      rtb_RelOp_m = ((rtb_SparkSequence_o1[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: EST2_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(21, rtb_RelOp_m);
        UpdateFault(21);
      }

      /* RelationalOperator: '<S726>/RelOp' incorporates:
       *  Constant: '<S726>/Constant'
       */
      rtb_RelOp_d = ((rtb_SparkSequence_o1[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def10' */

      /* Set Fault Suspected Status: EST3_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(23, rtb_RelOp_d);
        UpdateFault(23);
      }

      /* RelationalOperator: '<S727>/RelOp' incorporates:
       *  Constant: '<S727>/Constant'
       */
      rtb_RelOp_f = ((rtb_SparkSequence_o1[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def11' */

      /* Set Fault Suspected Status: EST4_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(25, rtb_RelOp_f);
        UpdateFault(25);
      }

      /* RelationalOperator: '<S728>/RelOp' incorporates:
       *  Constant: '<S728>/Constant'
       */
      rtb_RelOp_i = ((rtb_SparkSequence_o1[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def12' */

      /* Set Fault Suspected Status: EST5_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_RelOp_i);
        UpdateFault(27);
      }

      /* RelationalOperator: '<S729>/RelOp' incorporates:
       *  Constant: '<S729>/Constant'
       */
      rtb_RelOp_hq = ((rtb_SparkSequence_o1[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def13' */

      /* Set Fault Suspected Status: EST6_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(29, rtb_RelOp_hq);
        UpdateFault(29);
      }

      /* RelationalOperator: '<S730>/RelOp' incorporates:
       *  Constant: '<S730>/Constant'
       */
      rtb_RelOp_l = ((rtb_SparkSequence_o1[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def14' */

      /* Set Fault Suspected Status: EST7_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(31, rtb_RelOp_l);
        UpdateFault(31);
      }

      /* RelationalOperator: '<S731>/RelOp' incorporates:
       *  Constant: '<S731>/Constant'
       */
      rtb_RelOp_g = ((rtb_SparkSequence_o1[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def15' */

      /* Set Fault Suspected Status: EST8_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(33, rtb_RelOp_g);
        UpdateFault(33);
      }

      /* RelationalOperator: '<S732>/RelOp' incorporates:
       *  Constant: '<S732>/Constant'
       */
      rtb_RelOp_e = ((rtb_SparkSequence_o2[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EST3_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(22, rtb_RelOp_e);
        UpdateFault(22);
      }

      /* RelationalOperator: '<S733>/RelOp' incorporates:
       *  Constant: '<S733>/Constant'
       */
      rtb_RelOp_ge = ((rtb_SparkSequence_o2[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EST4_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(24, rtb_RelOp_ge);
        UpdateFault(24);
      }

      /* RelationalOperator: '<S734>/RelOp' incorporates:
       *  Constant: '<S734>/Constant'
       */
      rtb_RelOp_mu = ((rtb_SparkSequence_o2[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: EST5_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_RelOp_mu);
        UpdateFault(26);
      }

      /* RelationalOperator: '<S735>/RelOp' incorporates:
       *  Constant: '<S735>/Constant'
       */
      rtb_RelOp_p = ((rtb_SparkSequence_o2[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: EST6_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(28, rtb_RelOp_p);
        UpdateFault(28);
      }

      /* RelationalOperator: '<S736>/RelOp' incorporates:
       *  Constant: '<S736>/Constant'
       */
      rtb_RelOp_be = ((rtb_SparkSequence_o2[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: EST7_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(30, rtb_RelOp_be);
        UpdateFault(30);
      }

      /* RelationalOperator: '<S737>/RelOp' incorporates:
       *  Constant: '<S737>/Constant'
       */
      rtb_RelOp_b4 = ((rtb_SparkSequence_o2[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: EST8_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(32, rtb_RelOp_b4);
        UpdateFault(32);
      }

      /* RelationalOperator: '<S724>/RelOp' incorporates:
       *  Constant: '<S724>/Constant'
       */
      rtb_RelOp_c = ((rtb_SparkSequence_o2[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def8' */

      /* Set Fault Suspected Status: EST1_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(18, rtb_RelOp_c);
        UpdateFault(18);
      }

      /* RelationalOperator: '<S725>/RelOp' incorporates:
       *  Constant: '<S725>/Constant'
       */
      rtb_RelOp_n = ((rtb_SparkSequence_o2[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S717>/motohawk_fault_def9' */

      /* Set Fault Suspected Status: EST2_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(20, rtb_RelOp_n);
        UpdateFault(20);
      }

      /* S-Function (motohawk_sfun_data_write): '<S716>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineShutdownAction */
      {
        EngineShutdownAction_DataStore() = rtb_motohawk_fault_action;
      }

      /* Update for UnitDelay: '<S718>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s718_UnitDelay_DSTATE = rtb_ESTEnable;

      /* Update for UnitDelay: '<S719>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s719_UnitDelay_DSTATE =
        rtb_CounterReset;

      /* S-Function Block: <S705>/Spark Sequence Update Spark Sequence */
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
              rtb_DataTypeConversion_i;
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
            condition = ((BaseEngineController_A02_bak2_B.s705_LogicalOperator1)
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
            SeqOutAttr.u1AffectedPulse = (ESTPinMapArr_PulseNum_24_DataStore())
              [cyl];
            resource = (ESTPinMapArr_Resource_24_DataStore())[cyl];
            behaviour = BEHAVIOUR_EST_SEQ;
          } else if ((EST_SequenceType_DataStore()) == 3) {
            bValid = (cyl < MAX_MUX_PULSES_SUPPORTED);
            SeqOutAttr.u1AffectedPulse = cyl;
            resource = (EST_InitialPin_DataStore());
            behaviour = BEHAVIOUR_MUX_EST_SEQ;
          }

          if (bValid) {
            SeqOutAttr.eResourceCondition = condition;
            SeqOutAttr.TimingObj.s2StartAngle = rtb_DataTypeConversion_i;
            SeqOutAttr.TimingObj.s2StopAngle = rtb_DataTypeConversion1_m;
            SeqOutAttr.u4MaxDurationInMicroSecs = rtb_DataTypeConversion2_m;
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
