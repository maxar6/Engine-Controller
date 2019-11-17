/*
 * Trigger_FGND_5XRTI_PERIODIC_8449p0001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.1767
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 17 02:36:28 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_8449p0001(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S13>/Coil Control' */
    {
      /* local block i/o variables */
      real_T rtb_StateO_n;
      uint32_T rtb_DataTypeConversion2_g;
      int16_T rtb_DataTypeConversion_i;
      int16_T rtb_DataTypeConversion1_o;
      uint8_T rtb_SparkSequence_o1[8];
      uint8_T rtb_SparkSequence_o2[8];
      boolean_T rtb_RelOp_jk;
      boolean_T rtb_RelOp_c;
      boolean_T rtb_RelOp_p;
      boolean_T rtb_RelOp_h;
      boolean_T rtb_RelOp_m;
      boolean_T rtb_RelOp_ch;
      boolean_T rtb_RelOp_b;
      boolean_T rtb_RelOp_jc;
      boolean_T rtb_RelOp_n;
      boolean_T rtb_RelOp_ot;
      boolean_T rtb_RelOp_mz;
      boolean_T rtb_RelOp_ps;
      boolean_T rtb_RelOp_hp;
      boolean_T rtb_RelOp_ol;
      boolean_T rtb_RelOp_pr;
      boolean_T rtb_RelOp_l;
      boolean_T rtb_motohawk_fault_action;
      boolean_T rtb_motohawk_data_read2;
      boolean_T rtb_LogicalOperator3_b;
      boolean_T rtb_LogicalOperator1_lu;
      boolean_T rtb_LogicalOperator4_p;
      real_T rtb_ESTEnable;
      real_T rtb_CounterReset;
      int32_T tmp;
      real_T tmp_0;

      /* Logic: '<S710>/Logical Operator3' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_b = !DelayedEngineShutdownAction_DataStore();

      /* S-Function (motohawk_sfun_fault_action): '<S710>/motohawk_fault_action'
       *
       * Regarding '<S710>/motohawk_fault_action':
         Get Fault Action Status: EngineShutdown
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action = GetFaultActionStatus(7);
      }

      /* Logic: '<S710>/Logical Operator1' */
      rtb_LogicalOperator1_lu = !rtb_motohawk_fault_action;

      /* S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read2' */
      rtb_motohawk_data_read2 = ECUP_Enabled_DataStore();

      /* Logic: '<S710>/Logical Operator4' incorporates:
       *  Constant: '<S714>/Constant'
       *  RelationalOperator: '<S714>/RelOp'
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read3'
       */
      rtb_LogicalOperator4_p = !(((uint8_T)EngineState_DataStore()) == 1);

      /* Outputs for Atomic SubSystem: '<S710>/EST Enable TDC Counter' */
      /* UnitDelay: '<S715>/CrankCounter' */
      BaseEngineController_LS_B.s715_CrankCounter =
        BaseEngineController_LS_DWork.s715_CrankCounter_DSTATE;

      /* S-Function (motohawk_sfun_trigger): '<S715>/motohawk_trigger1' */
      /* Enable for Trigger_FGND_TDC_EVENT_7962p0001 */
      if (BaseEngineController_LS_DWork.s715_motohawk_trigger1_DWORK1 == 0) {
        BaseEngineController_LS_DWork.s715_motohawk_trigger1_DWORK1 = 1;
      }

      /* RelationalOperator: '<S715>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S715>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s715_RelationalOperator1 =
        ((BaseEngineController_LS_B.s717_Switch1 >= ((uint8_T)
           (SparkEnableTDCCounts_DataStore()))));

      /* MATLAB Function Block: '<S715>/EST Enable TDC Counter Stateflow' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S715>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S715>/motohawk_data_read3'
       */

      /* MATLAB Function 'Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow': '<S716>:1' */
      if ((TDC_DataStore() == 0.0) &&
          (BaseEngineController_LS_B.s715_RelationalOperator1 == TRUE)) {
        /* '<S716>:1:3' */
        /* '<S716>:1:4' */
        rtb_StateO_n = 1.0;
      } else if ((TDC_DataStore() == 1.0) && (((uint8_T)EngineState_DataStore())
                  == 2) && (BaseEngineController_LS_B.s715_RelationalOperator1 ==
                            TRUE)) {
        /* '<S716>:1:5' */
        /* '<S716>:1:6' */
        rtb_StateO_n = 2.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 3)) {
        /* '<S716>:1:7' */
        /* '<S716>:1:8' */
        rtb_StateO_n = 3.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S716>:1:9' */
        /* '<S716>:1:10' */
        rtb_StateO_n = 0.0;
      } else if ((TDC_DataStore() == 3.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S716>:1:11' */
        /* '<S716>:1:12' */
        rtb_StateO_n = 0.0;
      } else {
        /* '<S716>:1:14' */
        rtb_StateO_n = TDC_DataStore();
      }

      if (TDC_DataStore() == 0.0) {
        /* '<S716>:1:17' */
        /* '<S716>:1:18' */
        rtb_ESTEnable = 0.0;

        /* '<S716>:1:19' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 1.0) {
        /* '<S716>:1:20' */
        /* '<S716>:1:21' */
        rtb_ESTEnable = 1.0;

        /* '<S716>:1:22' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 2.0) {
        /* '<S716>:1:23' */
        /* '<S716>:1:24' */
        rtb_ESTEnable = 1.0;

        /* '<S716>:1:25' */
        rtb_CounterReset = 1.0;
      } else if (TDC_DataStore() == 3.0) {
        /* '<S716>:1:26' */
        /* '<S716>:1:27' */
        rtb_ESTEnable = 1.0;

        /* '<S716>:1:28' */
        rtb_CounterReset = 1.0;
      } else {
        /* '<S716>:1:30' */
        rtb_ESTEnable = 0.0;

        /* '<S716>:1:31' */
        rtb_CounterReset = 0.0;
      }

      /* End of MATLAB Function Block: '<S715>/EST Enable TDC Counter Stateflow' */

      /* S-Function (motohawk_sfun_data_write): '<S715>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TDC */
      {
        TDC_DataStore() = rtb_StateO_n;
      }

      /* DataTypeConversion: '<S715>/Data Type Conversion' */
      tmp = (int32_T)rtb_ESTEnable;
      tmp_0 = fmod((real_T)tmp, 256.0);
      BaseEngineController_LS_B.s715_DataTypeConversion = (int8_T)(tmp_0 < 0.0 ?
        (int8_T)-(int8_T)(uint8_T)-tmp_0 : (int8_T)(uint8_T)tmp_0);

      /* Update for UnitDelay: '<S715>/CrankCounter' */
      BaseEngineController_LS_DWork.s715_CrankCounter_DSTATE = rtb_CounterReset;

      /* End of Outputs for SubSystem: '<S710>/EST Enable TDC Counter' */

      /* Logic: '<S699>/Logical Operator1' incorporates:
       *  Logic: '<S710>/Logical Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration9'
       */
      BaseEngineController_LS_B.s699_LogicalOperator1[0] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl1_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[0]));
      BaseEngineController_LS_B.s699_LogicalOperator1[1] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl2_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[1]));
      BaseEngineController_LS_B.s699_LogicalOperator1[2] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl3_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[2]));
      BaseEngineController_LS_B.s699_LogicalOperator1[3] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl4_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[3]));
      BaseEngineController_LS_B.s699_LogicalOperator1[4] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl5_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[4]));
      BaseEngineController_LS_B.s699_LogicalOperator1[5] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl6_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[5]));
      BaseEngineController_LS_B.s699_LogicalOperator1[6] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl7_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[6]));
      BaseEngineController_LS_B.s699_LogicalOperator1[7] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl8_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s715_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[7]));

      /* If: '<S712>/If' incorporates:
       *  Inport: '<S734>/In1'
       *  Inport: '<S735>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S712>/override_enable'
       *  UnitDelay: '<S712>/Unit Delay'
       */
      if ((SparkStartAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S712>/NewValue' incorporates:
         *  ActionPort: '<S734>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_DWork.s712_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S712>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S712>/OldValue' incorporates:
         *  ActionPort: '<S735>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_B.s23_Sum;

        /* End of Outputs for SubSystem: '<S712>/OldValue' */
      }

      /* End of If: '<S712>/If' */

      /* Sum: '<S712>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S712>/offset'
       */
      BaseEngineController_LS_B.s712_Sum = rtb_ESTEnable +
        (SparkStartAngle_offset_DataStore());

      /* DataTypeConversion: '<S699>/Data Type Conversion' incorporates:
       *  Gain: '<S699>/Gain'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_B.s712_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion_i = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion_i = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion_i = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S699>/Data Type Conversion' */
      /* If: '<S713>/If' incorporates:
       *  Inport: '<S736>/In1'
       *  Inport: '<S737>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S713>/override_enable'
       *  UnitDelay: '<S713>/Unit Delay'
       */
      if ((SparkStopAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S713>/NewValue' incorporates:
         *  ActionPort: '<S736>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S713>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S713>/OldValue' incorporates:
         *  ActionPort: '<S737>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_LS_B.s118_SparkAdv;

        /* End of Outputs for SubSystem: '<S713>/OldValue' */
      }

      /* End of If: '<S713>/If' */

      /* Sum: '<S713>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S713>/offset'
       */
      BaseEngineController_LS_B.s713_Sum = rtb_CounterReset +
        (SparkStopAngle_offset_DataStore());

      /* DataTypeConversion: '<S699>/Data Type Conversion1' incorporates:
       *  Gain: '<S699>/Gain1'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_B.s713_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion1_o = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion1_o = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion1_o = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S699>/Data Type Conversion1' */
      /* DataTypeConversion: '<S699>/Data Type Conversion2' incorporates:
       *  Gain: '<S699>/Gain2'
       *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration2'
       */
      tmp_0 = 1000.0 * (SparkMaxDuration_DataStore());
      if (tmp_0 < 4.294967296E+9) {
        if (tmp_0 >= 0.0) {
          rtb_DataTypeConversion2_g = (uint32_T)tmp_0;
        } else {
          rtb_DataTypeConversion2_g = 0U;
        }
      } else {
        rtb_DataTypeConversion2_g = MAX_uint32_T;
      }

      /* End of DataTypeConversion: '<S699>/Data Type Conversion2' */
      /* S-Function Block: <S699>/Spark Sequence Output Spark Sequence Diagnostics */
      {
        extern int32_T SparkSeqDiag_21_LastPin;
        extern uint8_T SparkSeqDiag_21_Open[8];
        extern uint8_T SparkSeqDiag_21_Short[8];
        extern uint16_T SparkSeqDiag_21_OpenADC[8];
        extern uint16_T SparkSeqDiag_21_OnTime[8];
        int32_T i;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o1)[i] = SparkSeqDiag_21_Short[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o2)[i] = SparkSeqDiag_21_Open[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_LS_B.s699_SparkSequence_o3)[i] =
            SparkSeqDiag_21_OpenADC[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_LS_B.s699_SparkSequence_o4)[i] =
            SparkSeqDiag_21_OnTime[i];
        }
      }

      /* RelationalOperator: '<S732>/RelOp' incorporates:
       *  Constant: '<S732>/Constant'
       */
      rtb_RelOp_jk = ((rtb_SparkSequence_o1[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def' */

      /* Set Fault Suspected Status: EST1_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(24, rtb_RelOp_jk);
        UpdateFault(24);
      }

      /* RelationalOperator: '<S733>/RelOp' incorporates:
       *  Constant: '<S733>/Constant'
       */
      rtb_RelOp_c = ((rtb_SparkSequence_o1[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: EST2_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_RelOp_c);
        UpdateFault(26);
      }

      /* RelationalOperator: '<S720>/RelOp' incorporates:
       *  Constant: '<S720>/Constant'
       */
      rtb_RelOp_p = ((rtb_SparkSequence_o1[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def10' */

      /* Set Fault Suspected Status: EST3_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(28, rtb_RelOp_p);
        UpdateFault(28);
      }

      /* RelationalOperator: '<S721>/RelOp' incorporates:
       *  Constant: '<S721>/Constant'
       */
      rtb_RelOp_h = ((rtb_SparkSequence_o1[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def11' */

      /* Set Fault Suspected Status: EST4_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(30, rtb_RelOp_h);
        UpdateFault(30);
      }

      /* RelationalOperator: '<S722>/RelOp' incorporates:
       *  Constant: '<S722>/Constant'
       */
      rtb_RelOp_m = ((rtb_SparkSequence_o1[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def12' */

      /* Set Fault Suspected Status: EST5_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(32, rtb_RelOp_m);
        UpdateFault(32);
      }

      /* RelationalOperator: '<S723>/RelOp' incorporates:
       *  Constant: '<S723>/Constant'
       */
      rtb_RelOp_ch = ((rtb_SparkSequence_o1[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def13' */

      /* Set Fault Suspected Status: EST6_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(34, rtb_RelOp_ch);
        UpdateFault(34);
      }

      /* RelationalOperator: '<S724>/RelOp' incorporates:
       *  Constant: '<S724>/Constant'
       */
      rtb_RelOp_b = ((rtb_SparkSequence_o1[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def14' */

      /* Set Fault Suspected Status: EST7_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(36, rtb_RelOp_b);
        UpdateFault(36);
      }

      /* RelationalOperator: '<S725>/RelOp' incorporates:
       *  Constant: '<S725>/Constant'
       */
      rtb_RelOp_jc = ((rtb_SparkSequence_o1[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def15' */

      /* Set Fault Suspected Status: EST8_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(38, rtb_RelOp_jc);
        UpdateFault(38);
      }

      /* RelationalOperator: '<S726>/RelOp' incorporates:
       *  Constant: '<S726>/Constant'
       */
      rtb_RelOp_n = ((rtb_SparkSequence_o2[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EST3_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_RelOp_n);
        UpdateFault(27);
      }

      /* RelationalOperator: '<S727>/RelOp' incorporates:
       *  Constant: '<S727>/Constant'
       */
      rtb_RelOp_ot = ((rtb_SparkSequence_o2[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EST4_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(29, rtb_RelOp_ot);
        UpdateFault(29);
      }

      /* RelationalOperator: '<S728>/RelOp' incorporates:
       *  Constant: '<S728>/Constant'
       */
      rtb_RelOp_mz = ((rtb_SparkSequence_o2[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: EST5_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(31, rtb_RelOp_mz);
        UpdateFault(31);
      }

      /* RelationalOperator: '<S729>/RelOp' incorporates:
       *  Constant: '<S729>/Constant'
       */
      rtb_RelOp_ps = ((rtb_SparkSequence_o2[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: EST6_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(33, rtb_RelOp_ps);
        UpdateFault(33);
      }

      /* RelationalOperator: '<S730>/RelOp' incorporates:
       *  Constant: '<S730>/Constant'
       */
      rtb_RelOp_hp = ((rtb_SparkSequence_o2[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: EST7_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(35, rtb_RelOp_hp);
        UpdateFault(35);
      }

      /* RelationalOperator: '<S731>/RelOp' incorporates:
       *  Constant: '<S731>/Constant'
       */
      rtb_RelOp_ol = ((rtb_SparkSequence_o2[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: EST8_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(37, rtb_RelOp_ol);
        UpdateFault(37);
      }

      /* RelationalOperator: '<S718>/RelOp' incorporates:
       *  Constant: '<S718>/Constant'
       */
      rtb_RelOp_pr = ((rtb_SparkSequence_o2[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def8' */

      /* Set Fault Suspected Status: EST1_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(23, rtb_RelOp_pr);
        UpdateFault(23);
      }

      /* RelationalOperator: '<S719>/RelOp' incorporates:
       *  Constant: '<S719>/Constant'
       */
      rtb_RelOp_l = ((rtb_SparkSequence_o2[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def9' */

      /* Set Fault Suspected Status: EST2_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(25, rtb_RelOp_l);
        UpdateFault(25);
      }

      /* S-Function (motohawk_sfun_data_write): '<S710>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineShutdownAction */
      {
        EngineShutdownAction_DataStore() = rtb_motohawk_fault_action;
      }

      /* Update for UnitDelay: '<S712>/Unit Delay' */
      BaseEngineController_LS_DWork.s712_UnitDelay_DSTATE = rtb_ESTEnable;

      /* Update for UnitDelay: '<S713>/Unit Delay' */
      BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE = rtb_CounterReset;

      /* S-Function Block: <S699>/Spark Sequence Update Spark Sequence */
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
            condition = ((BaseEngineController_LS_B.s699_LogicalOperator1)[cyl])
              ? SEQ_ENABLED : SEQ_DISNEXT;
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
            SeqOutAttr.u1AffectedPulse = (ESTPinMapArr_PulseNum_21_DataStore())
              [cyl];
            resource = (ESTPinMapArr_Resource_21_DataStore())[cyl];
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
            SeqOutAttr.TimingObj.s2StopAngle = rtb_DataTypeConversion1_o;
            SeqOutAttr.u4MaxDurationInMicroSecs = rtb_DataTypeConversion2_g;
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
