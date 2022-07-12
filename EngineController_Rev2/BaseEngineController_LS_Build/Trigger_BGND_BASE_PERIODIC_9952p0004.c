/*
 * Trigger_BGND_BASE_PERIODIC_9952p0004.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2021
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Jul 11 23:56:32 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_BGND_BASE_PERIODIC_9952p0004(void)
{
  /* Named constants for Stateflow: '<S979>/ECUP Latch' */
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

  {
    /* Output and update for function-call system: '<S3>/Main Power Relay' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time;
      real_T rtb_Saturation;
      real_T rtb_motohawk_delta_time_g;
      real_T rtb_Saturation_o;
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Logic[2];
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator2_o;
      boolean_T rtb_LogicalOperator1_n;
      boolean_T rtb_Memory;
      boolean_T rtb_LogicalOperator5;
      boolean_T rtb_UnitDelay8;
      boolean_T rtb_UnitDelay6;
      boolean_T rtb_UnitDelay7;
      boolean_T rtb_LogicalOperator;
      real_T rtb_Switch_i;
      real_T rtb_Switch;
      real_T rtb_Switch1;
      boolean_T rtb_LogicalOperator_h;
      boolean_T rtb_LogicalOperator2;
      boolean_T rtb_UnitDelay3;
      boolean_T rtb_UnitDelay4;

      /* S-Function Block: <S996>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s996_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S979>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S979>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S979>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S979>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s979_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S996>/Switch' incorporates:
       *  Constant: '<S996>/Constant'
       *  Logic: '<S984>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S996>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S996>/motohawk_delta_time'
       *  Sum: '<S996>/Sum'
       */
      if (!BaseEngineController_LS_B.s979_RelationalOperator) {
        BaseEngineController_LS_B.s996_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_LS_B.s996_Switch = 0.0;
      }

      /* End of Switch: '<S996>/Switch' */
      /* Logic: '<S984>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S984>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S984>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_LS_B.s996_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S984>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S992>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S992>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(51);
          }
        }

        /* Outputs for Function Call SubSystem: '<S992>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S997>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S992>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S984>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S984>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s984_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S984>/Processor Reboot' incorporates:
       *  TriggerPort: '<S993>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s984_UnitDelay8_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S993>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S984>/Unit Delay8' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S984>/Processor Reboot' */

      /* UnitDelay: '<S984>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_LS_DWork.s984_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S984>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S994>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s984_UnitDelay6_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S994>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S998>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S994>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S984>/Unit Delay6' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S984>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S984>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_LS_DWork.s984_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S984>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S995>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s984_UnitDelay7_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S995>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S999>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S995>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S984>/Unit Delay7' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S984>/Shutdown power on ECU565//563' */

      /* Saturate: '<S996>/Saturation' */
      rtb_Saturation = BaseEngineController_LS_B.s996_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s996_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s996_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S996>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S980>/Logical Operator' incorporates:
       *  Logic: '<S980>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S980>/motohawk_calibration'
       *  UnitDelay: '<S980>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_LS_DWork.s980_UnitDelay_DSTATE);

      /* S-Function Block: <S987>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s987_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
      }

      /* Switch: '<S987>/Switch' incorporates:
       *  Constant: '<S987>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S987>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S987>/motohawk_delta_time'
       *  Sum: '<S987>/Sum'
       */
      if (BaseEngineController_LS_B.s979_RelationalOperator) {
        rtb_Switch_i = rtb_motohawk_delta_time_g + TimeSinceShutdown_DataStore();
      } else {
        rtb_Switch_i = 0.0;
      }

      /* End of Switch: '<S987>/Switch' */
      /* RelationalOperator: '<S979>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S979>/motohawk_calibration1'
       */
      rtb_UnitDelay8 = (rtb_Switch_i >= (Shutdown_Delay_DataStore()));

      /* Logic: '<S979>/Logical Operator2' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S979>/motohawk_data_read'
       */
      BaseEngineController_LS_B.s979_LogicalOperator2 = ((rtb_UnitDelay8 &&
        ShutDownTasksComplete_DataStore()));

      /* Stateflow: '<S979>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_LS_DWork.s983_is_c8_BaseEngineController_LS)
      {
       case BaseEngineController_LS_IN_PowerDown:
        /* During 'PowerDown': '<S983>:1' */
        if (BaseEngineController_LS_B.s979_RelationalOperator) {
          /* Transition: '<S983>:5' */
          BaseEngineController_LS_DWork.s983_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerUp;

          /* Entry 'PowerUp': '<S983>:2' */
          BaseEngineController_LS_B.s983_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_LS_IN_PowerUp:
        /* During 'PowerUp': '<S983>:2' */
        if ((!BaseEngineController_LS_B.s979_RelationalOperator) &&
            BaseEngineController_LS_B.s979_LogicalOperator2) {
          /* Transition: '<S983>:4' */
          BaseEngineController_LS_DWork.s983_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerDown;

          /* Entry 'PowerDown': '<S983>:1' */
          BaseEngineController_LS_B.s983_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S983>:3' */
        BaseEngineController_LS_DWork.s983_is_c8_BaseEngineController_LS =
          BaseEngineController_LS_IN_PowerDown;

        /* Entry 'PowerDown': '<S983>:1' */
        BaseEngineController_LS_B.s983_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S979>/ECUP Latch' */

      /* Switch: '<S985>/Switch' incorporates:
       *  Constant: '<S985>/Constant1'
       *  DataTypeConversion: '<S985>/Data Type Conversion'
       *  Sum: '<S985>/Sum'
       *  UnitDelay: '<S985>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s983_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_LS_B.s983_MPRDState +
          BaseEngineController_LS_DWork.s985_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S985>/Switch' */

      /* Logic: '<S985>/Logical Operator2' incorporates:
       *  Constant: '<S985>/Constant2'
       *  RelationalOperator: '<S985>/Relational Operator1'
       */
      rtb_LogicalOperator2_o = (BaseEngineController_LS_B.s983_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S985>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_LS_B.s983_MPRDState;

      /* Switch: '<S985>/Switch1' incorporates:
       *  Constant: '<S985>/Constant3'
       *  DataTypeConversion: '<S985>/Data Type Conversion1'
       *  Sum: '<S985>/Sum1'
       *  UnitDelay: '<S985>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 + BaseEngineController_LS_DWork.s985_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S985>/Switch1' */

      /* Logic: '<S985>/Logical Operator1' incorporates:
       *  Constant: '<S985>/Constant4'
       *  RelationalOperator: '<S985>/Relational Operator2'
       */
      rtb_LogicalOperator1_n = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S1000>/Memory' */
      rtb_Memory = BaseEngineController_LS_DWork.s1000_Memory_PreviousInput;

      /* CombinatorialLogic: '<S1000>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_o != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_n != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic[0] = BaseEngineController_LS_ConstP.pooled906[rowidx];
        rtb_Logic[1] = BaseEngineController_LS_ConstP.pooled906[rowidx + 8];
      }

      /* Logic: '<S979>/Logical Operator' incorporates:
       *  Logic: '<S979>/Logical Operator1'
       */
      rtb_LogicalOperator_h = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S986>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s986_UnitDelay2_DSTATE;

      /* Logic: '<S986>/Logical Operator2' incorporates:
       *  UnitDelay: '<S986>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_h ||
        BaseEngineController_LS_DWork.s986_UnitDelay2_DSTATE);

      /* If: '<S1005>/If' incorporates:
       *  Inport: '<S1009>/In1'
       *  Inport: '<S1010>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S1005>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S1005>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S1005>/NewValue' incorporates:
         *  ActionPort: '<S1009>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S1005>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S1005>/OldValue' incorporates:
         *  ActionPort: '<S1010>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S1005>/OldValue' */
      }

      /* End of If: '<S1005>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S979>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S986>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S1001>/Trigger'
       */
      if ((!rtb_LogicalOperator_h) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S1001>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S1006>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S1001>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_h ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S986>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S986>/Processor Reboot' incorporates:
       *  EnablePort: '<S1002>/Enable'
       *  TriggerPort: '<S1002>/Trigger'
       */
      /* UnitDelay: '<S979>/Unit Delay5' */
      if (BaseEngineController_LS_DWork.s979_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S986>/Processor Reboot' incorporates:
         *  EnablePort: '<S1002>/Enable'
         *  TriggerPort: '<S1002>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S1002>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S979>/Unit Delay5' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S986>/Processor Reboot' */

      /* UnitDelay: '<S986>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s986_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S986>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S1003>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s986_UnitDelay_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S1003>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S1007>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S1003>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S986>/Unit Delay' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S986>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S986>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_LS_DWork.s986_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S986>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S1004>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s986_UnitDelay1_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S1004>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S1008>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S1004>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S986>/Unit Delay1' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S986>/Shutdown power on ECU565//563' */

      /* Saturate: '<S987>/Saturation' */
      rtb_Saturation_o = rtb_Switch_i >= 16000.0 ? 16000.0 : rtb_Switch_i <= 0.0
        ? 0.0 : rtb_Switch_i;

      /* S-Function (motohawk_sfun_data_write): '<S987>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TimeSinceShutdown */
      {
        TimeSinceShutdown_DataStore() = rtb_Saturation_o;
      }

      /* UnitDelay: '<S979>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_LS_DWork.s979_UnitDelay3_DSTATE;

      /* UnitDelay: '<S979>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_LS_DWork.s979_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S981>/Clear' incorporates:
       *  TriggerPort: '<S990>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S981>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S979>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S988>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S979>/motohawk_restore_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S981>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S982>/Clear' incorporates:
       *  TriggerPort: '<S991>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S982>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S979>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S989>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S979>/motohawk_store_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S982>/motohawk_calibration' */

      /* Update for UnitDelay: '<S984>/Unit Delay8' */
      BaseEngineController_LS_DWork.s984_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S984>/Unit Delay6' */
      BaseEngineController_LS_DWork.s984_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S984>/Unit Delay7' */
      BaseEngineController_LS_DWork.s984_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S980>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S980>/motohawk_calibration'
       */
      BaseEngineController_LS_DWork.s980_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S985>/Unit Delay' */
      BaseEngineController_LS_DWork.s985_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S985>/Unit Delay1' */
      BaseEngineController_LS_DWork.s985_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S1000>/Memory' */
      BaseEngineController_LS_DWork.s1000_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S986>/Unit Delay2' */
      BaseEngineController_LS_DWork.s986_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S979>/motohawk_dout' */

      /* S-Function Block: DOut9914p0004 */
      {
        DOut9914p0004_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S979>/Unit Delay5' */
      BaseEngineController_LS_DWork.s979_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S986>/Unit Delay' */
      BaseEngineController_LS_DWork.s986_UnitDelay_DSTATE =
        rtb_LogicalOperator_h;

      /* Update for UnitDelay: '<S986>/Unit Delay1' */
      BaseEngineController_LS_DWork.s986_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S979>/Unit Delay3' */
      BaseEngineController_LS_DWork.s979_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S979>/Unit Delay4' */
      BaseEngineController_LS_DWork.s979_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
