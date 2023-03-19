/*
 * Trigger_BGND_BASE_PERIODIC_11570p0004.c
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

void Trigger_BGND_BASE_PERIODIC_11570p0004(void)
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

  {
    /* Output and update for function-call system: '<S3>/Main Power Relay' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time;
      real_T rtb_Saturation;
      real_T rtb_motohawk_delta_time_c;
      real_T rtb_Saturation_o;
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Logic[2];
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator1_g;
      boolean_T rtb_Memory;
      boolean_T rtb_LogicalOperator2_g;
      boolean_T rtb_LogicalOperator5;
      boolean_T rtb_UnitDelay8;
      boolean_T rtb_UnitDelay6;
      boolean_T rtb_UnitDelay7;
      boolean_T rtb_LogicalOperator;
      real_T rtb_Switch_j;
      real_T rtb_Switch;
      real_T rtb_Switch1;
      boolean_T rtb_LogicalOperator_b;
      boolean_T rtb_LogicalOperator2;
      boolean_T rtb_UnitDelay3;
      boolean_T rtb_UnitDelay4;

      /* S-Function Block: <S947>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s947_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S930>/motohawk_ain5 Resource: ECUP */
      rtb_motohawk_ain5 = ECUP_AnalogInput_Get();

      /* RelationalOperator: '<S930>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S930>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S930>/motohawk_calibration'
       */
      BaseEngineController_LS_112_B.s930_RelationalOperator =
        ((rtb_motohawk_ain5 >= ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S947>/Switch' incorporates:
       *  Constant: '<S947>/Constant'
       *  Logic: '<S935>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S947>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S947>/motohawk_delta_time'
       *  Sum: '<S947>/Sum'
       */
      if (!BaseEngineController_LS_112_B.s930_RelationalOperator) {
        BaseEngineController_LS_112_B.s947_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_LS_112_B.s947_Switch = 0.0;
      }

      /* End of Switch: '<S947>/Switch' */
      /* Logic: '<S935>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S935>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S935>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_LS_112_B.s947_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S935>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S943>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_LS_112_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_a
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S943>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(62);
          }
        }

        /* Outputs for Function Call SubSystem: '<S943>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S948>/motohawk_event_call */
        {
          extern void SHUTDOWNTask_PostEvent(void);
          extern void SHUTDOWNTask_SendEvent(void);

          /* post the event */
          SHUTDOWNTask_PostEvent();
        }

        /* End of Outputs for SubSystem: '<S943>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_112_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_a
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S935>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S935>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_LS_112_DWork.s935_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S935>/Processor Reboot' incorporates:
       *  TriggerPort: '<S944>/Trigger'
       */
      if ((!BaseEngineController_LS_112_DWork.s935_UnitDelay8_DSTATE) &&
          (BaseEngineController_LS_112_PrevZCSigState.ProcessorReboot_Trig_ZCE_f
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S944>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S935>/Unit Delay8' */
      BaseEngineController_LS_112_PrevZCSigState.ProcessorReboot_Trig_ZCE_f =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S935>/Processor Reboot' */

      /* UnitDelay: '<S935>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_LS_112_DWork.s935_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S935>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S945>/Trigger'
       */
      if ((!BaseEngineController_LS_112_DWork.s935_UnitDelay6_DSTATE) &&
          (BaseEngineController_LS_112_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_e
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S945>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S949>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S945>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S935>/Unit Delay6' */
      BaseEngineController_LS_112_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_e
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S935>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S935>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_LS_112_DWork.s935_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S935>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S946>/Trigger'
       */
      if ((!BaseEngineController_LS_112_DWork.s935_UnitDelay7_DSTATE) &&
          (BaseEngineController_LS_112_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_p
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S946>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S950>/motohawk_shutdown_power */
        {
          /* Shut down the MotoCoder-generated OS */
          extern void Module_Shutdown(boolean_T shutdownPower);
          Module_Shutdown(1);
        }

        /* End of Outputs for SubSystem: '<S946>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S935>/Unit Delay7' */
      BaseEngineController_LS_112_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_p
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S935>/Shutdown power on ECU565//563' */

      /* Saturate: '<S947>/Saturation' */
      rtb_Saturation = BaseEngineController_LS_112_B.s947_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_112_B.s947_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_112_B.s947_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S947>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S931>/Logical Operator' incorporates:
       *  Logic: '<S931>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S931>/motohawk_calibration'
       *  UnitDelay: '<S931>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_LS_112_DWork.s931_UnitDelay_DSTATE);

      /* S-Function Block: <S938>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s938_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* Logic: '<S930>/Logical Operator3' */
      rtb_LogicalOperator2_g =
        !BaseEngineController_LS_112_B.s930_RelationalOperator;

      /* Switch: '<S938>/Switch' incorporates:
       *  Constant: '<S938>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S938>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S938>/motohawk_delta_time'
       *  Sum: '<S938>/Sum'
       */
      if (rtb_LogicalOperator2_g) {
        rtb_Switch_j = rtb_motohawk_delta_time_c + TimeSinceShutdown_DataStore();
      } else {
        rtb_Switch_j = 0.0;
      }

      /* End of Switch: '<S938>/Switch' */
      /* RelationalOperator: '<S930>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S930>/motohawk_calibration1'
       */
      rtb_UnitDelay8 = (rtb_Switch_j >= (Shutdown_Delay_DataStore()));

      /* Logic: '<S930>/Logical Operator2' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S930>/motohawk_data_read'
       */
      BaseEngineController_LS_112_B.s930_LogicalOperator2 = ((rtb_UnitDelay8 &&
        rtb_LogicalOperator2_g && ShutDownTasksComplete_DataStore()));

      /* Stateflow: '<S930>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch
        (BaseEngineController_LS_112_DWork.s934_is_c8_BaseEngineController_LS_112)
      {
       case BaseEngineController_LS_112_IN_PowerDown:
        /* During 'PowerDown': '<S934>:1' */
        if (BaseEngineController_LS_112_B.s930_RelationalOperator) {
          /* Transition: '<S934>:5' */
          BaseEngineController_LS_112_DWork.s934_is_c8_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_PowerUp;

          /* Entry 'PowerUp': '<S934>:2' */
          BaseEngineController_LS_112_B.s934_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_LS_112_IN_PowerUp:
        /* During 'PowerUp': '<S934>:2' */
        if ((!BaseEngineController_LS_112_B.s930_RelationalOperator) &&
            BaseEngineController_LS_112_B.s930_LogicalOperator2) {
          /* Transition: '<S934>:4' */
          BaseEngineController_LS_112_DWork.s934_is_c8_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_PowerDown;

          /* Entry 'PowerDown': '<S934>:1' */
          BaseEngineController_LS_112_B.s934_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S934>:3' */
        BaseEngineController_LS_112_DWork.s934_is_c8_BaseEngineController_LS_112
          = BaseEngineController_LS_112_IN_PowerDown;

        /* Entry 'PowerDown': '<S934>:1' */
        BaseEngineController_LS_112_B.s934_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S930>/ECUP Latch' */

      /* Switch: '<S936>/Switch' incorporates:
       *  Constant: '<S936>/Constant1'
       *  DataTypeConversion: '<S936>/Data Type Conversion'
       *  Sum: '<S936>/Sum'
       *  UnitDelay: '<S936>/Unit Delay'
       */
      if (BaseEngineController_LS_112_B.s934_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_LS_112_B.s934_MPRDState +
          BaseEngineController_LS_112_DWork.s936_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S936>/Switch' */

      /* Logic: '<S936>/Logical Operator2' incorporates:
       *  Constant: '<S936>/Constant2'
       *  RelationalOperator: '<S936>/Relational Operator1'
       */
      rtb_LogicalOperator2_g = (BaseEngineController_LS_112_B.s934_MPRDState &&
                                (rtb_Switch >= 2.0));

      /* Logic: '<S936>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_LS_112_B.s934_MPRDState;

      /* Switch: '<S936>/Switch1' incorporates:
       *  Constant: '<S936>/Constant3'
       *  DataTypeConversion: '<S936>/Data Type Conversion1'
       *  Sum: '<S936>/Sum1'
       *  UnitDelay: '<S936>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 +
          BaseEngineController_LS_112_DWork.s936_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S936>/Switch1' */

      /* Logic: '<S936>/Logical Operator1' incorporates:
       *  Constant: '<S936>/Constant4'
       *  RelationalOperator: '<S936>/Relational Operator2'
       */
      rtb_LogicalOperator1_g = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S951>/Memory' */
      rtb_Memory = BaseEngineController_LS_112_DWork.s951_Memory_PreviousInput;

      /* CombinatorialLogic: '<S951>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_g != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_g != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic[0] = BaseEngineController_LS_112_ConstP.pooled897[rowidx];
        rtb_Logic[1] = BaseEngineController_LS_112_ConstP.pooled897[rowidx + 8];
      }

      /* Logic: '<S930>/Logical Operator' incorporates:
       *  Logic: '<S930>/Logical Operator1'
       */
      rtb_LogicalOperator_b = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S937>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_LS_112_DWork.s937_UnitDelay2_DSTATE;

      /* Logic: '<S937>/Logical Operator2' incorporates:
       *  UnitDelay: '<S937>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_b ||
        BaseEngineController_LS_112_DWork.s937_UnitDelay2_DSTATE);

      /* If: '<S956>/If' incorporates:
       *  Inport: '<S960>/In1'
       *  Inport: '<S961>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S956>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S956>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S956>/NewValue' incorporates:
         *  ActionPort: '<S960>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S956>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S956>/OldValue' incorporates:
         *  ActionPort: '<S961>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S956>/OldValue' */
      }

      /* End of If: '<S956>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S930>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S937>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S952>/Trigger'
       */
      if ((!rtb_LogicalOperator_b) &&
          (BaseEngineController_LS_112_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S952>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S957>/motohawk_event_call */
        {
          extern void SHUTDOWNTask_PostEvent(void);
          extern void SHUTDOWNTask_SendEvent(void);

          /* post the event */
          SHUTDOWNTask_PostEvent();
        }

        /* End of Outputs for SubSystem: '<S952>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_112_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_b ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S937>/Processor Reboot' incorporates:
       *  EnablePort: '<S953>/Enable'
       *  TriggerPort: '<S953>/Trigger'
       */
      /* UnitDelay: '<S930>/Unit Delay5' */
      if (BaseEngineController_LS_112_DWork.s930_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S937>/Processor Reboot' incorporates:
         *  EnablePort: '<S953>/Enable'
         *  TriggerPort: '<S953>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_LS_112_PrevZCSigState.ProcessorReboot_Trig_ZCE
             != ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S953>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_LS_112_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S930>/Unit Delay5' */
      BaseEngineController_LS_112_PrevZCSigState.ProcessorReboot_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Processor Reboot' */

      /* UnitDelay: '<S937>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_LS_112_DWork.s937_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S937>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S954>/Trigger'
       */
      if ((!BaseEngineController_LS_112_DWork.s937_UnitDelay_DSTATE) &&
          (BaseEngineController_LS_112_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S954>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S958>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S954>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S937>/Unit Delay' */
      BaseEngineController_LS_112_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S937>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_LS_112_DWork.s937_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S937>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S955>/Trigger'
       */
      if ((!BaseEngineController_LS_112_DWork.s937_UnitDelay1_DSTATE) &&
          (BaseEngineController_LS_112_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S955>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S959>/motohawk_shutdown_power */
        {
          /* Shut down the MotoCoder-generated OS */
          extern void Module_Shutdown(boolean_T shutdownPower);
          Module_Shutdown(1);
        }

        /* End of Outputs for SubSystem: '<S955>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S937>/Unit Delay1' */
      BaseEngineController_LS_112_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Shutdown power on ECU565//563' */

      /* Saturate: '<S938>/Saturation' */
      rtb_Saturation_o = rtb_Switch_j >= 16000.0 ? 16000.0 : rtb_Switch_j <= 0.0
        ? 0.0 : rtb_Switch_j;

      /* S-Function (motohawk_sfun_data_write): '<S938>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TimeSinceShutdown */
      {
        TimeSinceShutdown_DataStore() = rtb_Saturation_o;
      }

      /* UnitDelay: '<S930>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_LS_112_DWork.s930_UnitDelay3_DSTATE;

      /* UnitDelay: '<S930>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_LS_112_DWork.s930_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S932>/Clear' incorporates:
       *  TriggerPort: '<S941>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S932>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_LS_112_PrevZCSigState.Clear_Trig_ZCE_j !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S930>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S939>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S930>/motohawk_restore_nvmem' */
      }

      BaseEngineController_LS_112_PrevZCSigState.Clear_Trig_ZCE_j = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S932>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S933>/Clear' incorporates:
       *  TriggerPort: '<S942>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S933>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_LS_112_PrevZCSigState.Clear_Trig_ZCE !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S930>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S940>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S930>/motohawk_store_nvmem' */
      }

      BaseEngineController_LS_112_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S933>/motohawk_calibration' */

      /* Update for UnitDelay: '<S935>/Unit Delay8' */
      BaseEngineController_LS_112_DWork.s935_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S935>/Unit Delay6' */
      BaseEngineController_LS_112_DWork.s935_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S935>/Unit Delay7' */
      BaseEngineController_LS_112_DWork.s935_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S931>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S931>/motohawk_calibration'
       */
      BaseEngineController_LS_112_DWork.s931_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S936>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s936_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S936>/Unit Delay1' */
      BaseEngineController_LS_112_DWork.s936_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S951>/Memory' */
      BaseEngineController_LS_112_DWork.s951_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S937>/Unit Delay2' */
      BaseEngineController_LS_112_DWork.s937_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S930>/motohawk_dout' */

      /* S-Function Block: DOut11529p0004 */
      {
        DOut11529p0004_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S930>/Unit Delay5' */
      BaseEngineController_LS_112_DWork.s930_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S937>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s937_UnitDelay_DSTATE =
        rtb_LogicalOperator_b;

      /* Update for UnitDelay: '<S937>/Unit Delay1' */
      BaseEngineController_LS_112_DWork.s937_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S930>/Unit Delay3' */
      BaseEngineController_LS_112_DWork.s930_UnitDelay3_DSTATE =
        rtb_LogicalOperator;

      /* Update for UnitDelay: '<S930>/Unit Delay4' */
      BaseEngineController_LS_112_DWork.s930_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
