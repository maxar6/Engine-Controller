/*
 * Trigger_FGND_5XRTI_PERIODIC_7015p0012.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2103
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Nov 12 20:28:28 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_7015p0012(void)
{
  /* Named constants for Stateflow: '<S1000>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S13>/Coil Control' */
    {
      /* local block i/o variables */
      real_T rtb_StateO_n;
      uint32_T rtb_DataTypeConversion2_g;
      int16_T rtb_DataTypeConversion_ip;
      int16_T rtb_DataTypeConversion1_o;
      uint8_T rtb_SparkSequence_o1[8];
      uint8_T rtb_SparkSequence_o2[8];
      boolean_T rtb_RelOp_j;
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

      /* Logic: '<S909>/Logical Operator3' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S909>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_b = !DelayedEngineShutdownAction_DataStore();

      /* S-Function (motohawk_sfun_fault_action): '<S909>/motohawk_fault_action'
       *
       * Regarding '<S909>/motohawk_fault_action':
         Get Fault Action Status: EngineShutdown
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action = GetFaultActionStatus(8);
      }

      /* Logic: '<S909>/Logical Operator1' */
      rtb_LogicalOperator1_lu = !rtb_motohawk_fault_action;

      /* S-Function (motohawk_sfun_data_read): '<S909>/motohawk_data_read2' */
      rtb_motohawk_data_read2 = ECUP_Enabled_DataStore();

      /* Logic: '<S909>/Logical Operator4' incorporates:
       *  Constant: '<S913>/Constant'
       *  RelationalOperator: '<S913>/RelOp'
       *  S-Function (motohawk_sfun_data_read): '<S909>/motohawk_data_read3'
       */
      rtb_LogicalOperator4_p = !(((uint8_T)EngineState_DataStore()) == 1);

      /* Outputs for Atomic SubSystem: '<S909>/EST Enable TDC Counter' */
      /* UnitDelay: '<S914>/CrankCounter' */
      BaseEngineController_LS_B.s914_CrankCounter =
        BaseEngineController_LS_DWork.s914_CrankCounter_DSTATE;

      /* S-Function (motohawk_sfun_trigger): '<S914>/motohawk_trigger1' */
      /* Enable for Trigger_FGND_TDC_EVENT_6487p001 */
      if (BaseEngineController_LS_DWork.s914_motohawk_trigger1_DWORK1 == 0) {
        BaseEngineController_LS_DWork.s914_motohawk_trigger1_DWORK1 = 1;
      }

      /* RelationalOperator: '<S914>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S914>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s914_RelationalOperator1 =
        ((BaseEngineController_LS_B.s916_Switch1 >= ((uint8_T)
           (SparkEnableTDCCounts_DataStore()))));

      /* MATLAB Function Block: '<S914>/EST Enable TDC Counter Stateflow' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S914>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S914>/motohawk_data_read3'
       */

      /* MATLAB Function 'Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow': '<S915>:1' */
      if ((TDC_DataStore() == 0.0) &&
          (BaseEngineController_LS_B.s914_RelationalOperator1 == TRUE)) {
        /* '<S915>:1:3' */
        /* '<S915>:1:4' */
        rtb_StateO_n = 1.0;
      } else if ((TDC_DataStore() == 1.0) && (((uint8_T)EngineState_DataStore())
                  == 2) && (BaseEngineController_LS_B.s914_RelationalOperator1 ==
                            TRUE)) {
        /* '<S915>:1:5' */
        /* '<S915>:1:6' */
        rtb_StateO_n = 2.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 3)) {
        /* '<S915>:1:7' */
        /* '<S915>:1:8' */
        rtb_StateO_n = 3.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S915>:1:9' */
        /* '<S915>:1:10' */
        rtb_StateO_n = 0.0;
      } else if ((TDC_DataStore() == 3.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S915>:1:11' */
        /* '<S915>:1:12' */
        rtb_StateO_n = 0.0;
      } else {
        /* '<S915>:1:14' */
        rtb_StateO_n = TDC_DataStore();
      }

      if (TDC_DataStore() == 0.0) {
        /* '<S915>:1:17' */
        /* '<S915>:1:18' */
        rtb_ESTEnable = 0.0;

        /* '<S915>:1:19' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 1.0) {
        /* '<S915>:1:20' */
        /* '<S915>:1:21' */
        rtb_ESTEnable = 1.0;

        /* '<S915>:1:22' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 2.0) {
        /* '<S915>:1:23' */
        /* '<S915>:1:24' */
        rtb_ESTEnable = 1.0;

        /* '<S915>:1:25' */
        rtb_CounterReset = 1.0;
      } else if (TDC_DataStore() == 3.0) {
        /* '<S915>:1:26' */
        /* '<S915>:1:27' */
        rtb_ESTEnable = 1.0;

        /* '<S915>:1:28' */
        rtb_CounterReset = 1.0;
      } else {
        /* '<S915>:1:30' */
        rtb_ESTEnable = 0.0;

        /* '<S915>:1:31' */
        rtb_CounterReset = 0.0;
      }

      /* End of MATLAB Function Block: '<S914>/EST Enable TDC Counter Stateflow' */

      /* S-Function (motohawk_sfun_data_write): '<S914>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TDC */
      {
        TDC_DataStore() = rtb_StateO_n;
      }

      /* DataTypeConversion: '<S914>/Data Type Conversion' */
      tmp = (int32_T)rtb_ESTEnable;
      tmp_0 = fmod((real_T)tmp, 256.0);
      BaseEngineController_LS_B.s914_DataTypeConversion = (int8_T)(tmp_0 < 0.0 ?
        (int8_T)-(int8_T)(uint8_T)-tmp_0 : (int8_T)(uint8_T)tmp_0);

      /* Update for UnitDelay: '<S914>/CrankCounter' */
      BaseEngineController_LS_DWork.s914_CrankCounter_DSTATE = rtb_CounterReset;

      /* End of Outputs for SubSystem: '<S909>/EST Enable TDC Counter' */

      /* Logic: '<S852>/Logical Operator1' incorporates:
       *  Logic: '<S909>/Logical Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_calibration): '<S909>/motohawk_calibration9'
       */
      BaseEngineController_LS_B.s852_LogicalOperator1[0] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl1_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[0]));
      BaseEngineController_LS_B.s852_LogicalOperator1[1] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl2_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[1]));
      BaseEngineController_LS_B.s852_LogicalOperator1[2] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl3_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[2]));
      BaseEngineController_LS_B.s852_LogicalOperator1[3] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl4_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[3]));
      BaseEngineController_LS_B.s852_LogicalOperator1[4] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl5_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[4]));
      BaseEngineController_LS_B.s852_LogicalOperator1[5] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl6_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[5]));
      BaseEngineController_LS_B.s852_LogicalOperator1[6] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl7_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[6]));
      BaseEngineController_LS_B.s852_LogicalOperator1[7] =
        ((rtb_LogicalOperator3_b && rtb_LogicalOperator1_lu &&
          (SparkEnableCyl8_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_p &&
          (BaseEngineController_LS_B.s914_DataTypeConversion != 0) &&
          BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_LS_B.s22_LogicalOperator2[7]));

      /* If: '<S911>/If' incorporates:
       *  Inport: '<S933>/In1'
       *  Inport: '<S934>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S911>/override_enable'
       *  UnitDelay: '<S911>/Unit Delay'
       */
      if ((SparkStartAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S911>/NewValue' incorporates:
         *  ActionPort: '<S933>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_DWork.s911_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S911>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S911>/OldValue' incorporates:
         *  ActionPort: '<S934>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_LS_B.s23_Sum;

        /* End of Outputs for SubSystem: '<S911>/OldValue' */
      }

      /* End of If: '<S911>/If' */

      /* Sum: '<S911>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S911>/offset'
       */
      BaseEngineController_LS_B.s911_Sum = rtb_ESTEnable +
        (SparkStartAngle_offset_DataStore());

      /* DataTypeConversion: '<S852>/Data Type Conversion' incorporates:
       *  Gain: '<S852>/Gain'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_B.s911_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion_ip = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion_ip = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion_ip = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S852>/Data Type Conversion' */
      /* If: '<S912>/If' incorporates:
       *  Inport: '<S935>/In1'
       *  Inport: '<S936>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S912>/override_enable'
       *  UnitDelay: '<S912>/Unit Delay'
       */
      if ((SparkStopAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S912>/NewValue' incorporates:
         *  ActionPort: '<S935>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_LS_DWork.s912_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S912>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S912>/OldValue' incorporates:
         *  ActionPort: '<S936>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_LS_B.s135_SparkAdv;

        /* End of Outputs for SubSystem: '<S912>/OldValue' */
      }

      /* End of If: '<S912>/If' */

      /* Sum: '<S912>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S912>/offset'
       */
      BaseEngineController_LS_B.s912_Sum = rtb_CounterReset +
        (SparkStopAngle_offset_DataStore());

      /* DataTypeConversion: '<S852>/Data Type Conversion1' incorporates:
       *  Gain: '<S852>/Gain1'
       */
      tmp_0 = 16.0 * BaseEngineController_LS_B.s912_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion1_o = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion1_o = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion1_o = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S852>/Data Type Conversion1' */
      /* DataTypeConversion: '<S852>/Data Type Conversion2' incorporates:
       *  Gain: '<S852>/Gain2'
       *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration2'
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

      /* End of DataTypeConversion: '<S852>/Data Type Conversion2' */
      /* S-Function Block: <S852>/Spark Sequence Output Spark Sequence Diagnostics */
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
          (BaseEngineController_LS_B.s852_SparkSequence_o3)[i] =
            SparkSeqDiag_22_OpenADC[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_LS_B.s852_SparkSequence_o4)[i] =
            SparkSeqDiag_22_OnTime[i];
        }
      }

      /* RelationalOperator: '<S931>/RelOp' incorporates:
       *  Constant: '<S931>/Constant'
       */
      rtb_RelOp_j = ((rtb_SparkSequence_o1[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def' */

      /* Set Fault Suspected Status: EST1_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(36, rtb_RelOp_j);
        UpdateFault(36);
      }

      /* RelationalOperator: '<S932>/RelOp' incorporates:
       *  Constant: '<S932>/Constant'
       */
      rtb_RelOp_c = ((rtb_SparkSequence_o1[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: EST2_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(38, rtb_RelOp_c);
        UpdateFault(38);
      }

      /* RelationalOperator: '<S919>/RelOp' incorporates:
       *  Constant: '<S919>/Constant'
       */
      rtb_RelOp_p = ((rtb_SparkSequence_o1[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def10' */

      /* Set Fault Suspected Status: EST3_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(40, rtb_RelOp_p);
        UpdateFault(40);
      }

      /* RelationalOperator: '<S920>/RelOp' incorporates:
       *  Constant: '<S920>/Constant'
       */
      rtb_RelOp_h = ((rtb_SparkSequence_o1[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def11' */

      /* Set Fault Suspected Status: EST4_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(42, rtb_RelOp_h);
        UpdateFault(42);
      }

      /* RelationalOperator: '<S921>/RelOp' incorporates:
       *  Constant: '<S921>/Constant'
       */
      rtb_RelOp_m = ((rtb_SparkSequence_o1[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def12' */

      /* Set Fault Suspected Status: EST5_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(44, rtb_RelOp_m);
        UpdateFault(44);
      }

      /* RelationalOperator: '<S922>/RelOp' incorporates:
       *  Constant: '<S922>/Constant'
       */
      rtb_RelOp_ch = ((rtb_SparkSequence_o1[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def13' */

      /* Set Fault Suspected Status: EST6_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(46, rtb_RelOp_ch);
        UpdateFault(46);
      }

      /* RelationalOperator: '<S923>/RelOp' incorporates:
       *  Constant: '<S923>/Constant'
       */
      rtb_RelOp_b = ((rtb_SparkSequence_o1[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def14' */

      /* Set Fault Suspected Status: EST7_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(48, rtb_RelOp_b);
        UpdateFault(48);
      }

      /* RelationalOperator: '<S924>/RelOp' incorporates:
       *  Constant: '<S924>/Constant'
       */
      rtb_RelOp_jc = ((rtb_SparkSequence_o1[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def15' */

      /* Set Fault Suspected Status: EST8_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(50, rtb_RelOp_jc);
        UpdateFault(50);
      }

      /* RelationalOperator: '<S925>/RelOp' incorporates:
       *  Constant: '<S925>/Constant'
       */
      rtb_RelOp_n = ((rtb_SparkSequence_o2[2] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EST3_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(39, rtb_RelOp_n);
        UpdateFault(39);
      }

      /* RelationalOperator: '<S926>/RelOp' incorporates:
       *  Constant: '<S926>/Constant'
       */
      rtb_RelOp_ot = ((rtb_SparkSequence_o2[3] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EST4_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(41, rtb_RelOp_ot);
        UpdateFault(41);
      }

      /* RelationalOperator: '<S927>/RelOp' incorporates:
       *  Constant: '<S927>/Constant'
       */
      rtb_RelOp_mz = ((rtb_SparkSequence_o2[4] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: EST5_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(43, rtb_RelOp_mz);
        UpdateFault(43);
      }

      /* RelationalOperator: '<S928>/RelOp' incorporates:
       *  Constant: '<S928>/Constant'
       */
      rtb_RelOp_ps = ((rtb_SparkSequence_o2[5] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: EST6_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(45, rtb_RelOp_ps);
        UpdateFault(45);
      }

      /* RelationalOperator: '<S929>/RelOp' incorporates:
       *  Constant: '<S929>/Constant'
       */
      rtb_RelOp_hp = ((rtb_SparkSequence_o2[6] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: EST7_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(47, rtb_RelOp_hp);
        UpdateFault(47);
      }

      /* RelationalOperator: '<S930>/RelOp' incorporates:
       *  Constant: '<S930>/Constant'
       */
      rtb_RelOp_ol = ((rtb_SparkSequence_o2[7] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def7' */

      /* Set Fault Suspected Status: EST8_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(49, rtb_RelOp_ol);
        UpdateFault(49);
      }

      /* RelationalOperator: '<S917>/RelOp' incorporates:
       *  Constant: '<S917>/Constant'
       */
      rtb_RelOp_pr = ((rtb_SparkSequence_o2[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def8' */

      /* Set Fault Suspected Status: EST1_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(35, rtb_RelOp_pr);
        UpdateFault(35);
      }

      /* RelationalOperator: '<S918>/RelOp' incorporates:
       *  Constant: '<S918>/Constant'
       */
      rtb_RelOp_l = ((rtb_SparkSequence_o2[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S910>/motohawk_fault_def9' */

      /* Set Fault Suspected Status: EST2_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(37, rtb_RelOp_l);
        UpdateFault(37);
      }

      /* S-Function (motohawk_sfun_data_write): '<S909>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineShutdownAction */
      {
        EngineShutdownAction_DataStore() = rtb_motohawk_fault_action;
      }

      /* Update for UnitDelay: '<S911>/Unit Delay' */
      BaseEngineController_LS_DWork.s911_UnitDelay_DSTATE = rtb_ESTEnable;

      /* Update for UnitDelay: '<S912>/Unit Delay' */
      BaseEngineController_LS_DWork.s912_UnitDelay_DSTATE = rtb_CounterReset;

      /* S-Function Block: <S852>/Spark Sequence Update Spark Sequence */
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
              rtb_DataTypeConversion_ip;
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
            condition = ((BaseEngineController_LS_B.s852_LogicalOperator1)[cyl])
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
            SeqOutAttr.TimingObj.s2StartAngle = rtb_DataTypeConversion_ip;
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
