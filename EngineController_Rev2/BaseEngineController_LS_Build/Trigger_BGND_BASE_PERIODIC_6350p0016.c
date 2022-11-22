/*
 * Trigger_BGND_BASE_PERIODIC_6350p0016.c
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

void Trigger_BGND_BASE_PERIODIC_6350p0016(void)
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
      boolean_T rtb_LogicalOperator1_n;
      boolean_T rtb_Memory;
      boolean_T rtb_LogicalOperator2_o;
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

      /* S-Function Block: <S949>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s949_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S932>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S932>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S932>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S932>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s932_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S949>/Switch' incorporates:
       *  Constant: '<S949>/Constant'
       *  Logic: '<S937>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S949>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S949>/motohawk_delta_time'
       *  Sum: '<S949>/Sum'
       */
      if (!BaseEngineController_LS_B.s932_RelationalOperator) {
        BaseEngineController_LS_B.s949_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_LS_B.s949_Switch = 0.0;
      }

      /* End of Switch: '<S949>/Switch' */
      /* Logic: '<S937>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S937>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S937>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_LS_B.s949_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S937>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S945>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S945>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(62);
          }
        }

        /* Outputs for Function Call SubSystem: '<S945>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S950>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S945>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S937>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s937_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S937>/Processor Reboot' incorporates:
       *  TriggerPort: '<S946>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s937_UnitDelay8_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S946>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S937>/Unit Delay8' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Processor Reboot' */

      /* UnitDelay: '<S937>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_LS_DWork.s937_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S937>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S947>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s937_UnitDelay6_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S947>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S951>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S947>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S937>/Unit Delay6' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S937>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_LS_DWork.s937_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S937>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S948>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s937_UnitDelay7_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S948>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S952>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S948>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S937>/Unit Delay7' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S937>/Shutdown power on ECU565//563' */

      /* Saturate: '<S949>/Saturation' */
      rtb_Saturation = BaseEngineController_LS_B.s949_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s949_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s949_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S949>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S933>/Logical Operator' incorporates:
       *  Logic: '<S933>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S933>/motohawk_calibration'
       *  UnitDelay: '<S933>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_LS_DWork.s933_UnitDelay_DSTATE);

      /* S-Function Block: <S940>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s940_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
      }

      /* Logic: '<S932>/Logical Operator3' */
      rtb_LogicalOperator2_o =
        !BaseEngineController_LS_B.s932_RelationalOperator;

      /* Switch: '<S940>/Switch' incorporates:
       *  Constant: '<S940>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S940>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S940>/motohawk_delta_time'
       *  Sum: '<S940>/Sum'
       */
      if (rtb_LogicalOperator2_o) {
        rtb_Switch_i = rtb_motohawk_delta_time_g + TimeSinceShutdown_DataStore();
      } else {
        rtb_Switch_i = 0.0;
      }

      /* End of Switch: '<S940>/Switch' */
      /* RelationalOperator: '<S932>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S932>/motohawk_calibration1'
       */
      rtb_UnitDelay8 = (rtb_Switch_i >= (Shutdown_Delay_DataStore()));

      /* Logic: '<S932>/Logical Operator2' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S932>/motohawk_data_read'
       */
      BaseEngineController_LS_B.s932_LogicalOperator2 = ((rtb_UnitDelay8 &&
        rtb_LogicalOperator2_o && ShutDownTasksComplete_DataStore()));

      /* Stateflow: '<S932>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_LS_DWork.s936_is_c8_BaseEngineController_LS)
      {
       case BaseEngineController_LS_IN_PowerDown:
        /* During 'PowerDown': '<S936>:1' */
        if (BaseEngineController_LS_B.s932_RelationalOperator) {
          /* Transition: '<S936>:5' */
          BaseEngineController_LS_DWork.s936_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerUp;

          /* Entry 'PowerUp': '<S936>:2' */
          BaseEngineController_LS_B.s936_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_LS_IN_PowerUp:
        /* During 'PowerUp': '<S936>:2' */
        if ((!BaseEngineController_LS_B.s932_RelationalOperator) &&
            BaseEngineController_LS_B.s932_LogicalOperator2) {
          /* Transition: '<S936>:4' */
          BaseEngineController_LS_DWork.s936_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerDown;

          /* Entry 'PowerDown': '<S936>:1' */
          BaseEngineController_LS_B.s936_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S936>:3' */
        BaseEngineController_LS_DWork.s936_is_c8_BaseEngineController_LS =
          BaseEngineController_LS_IN_PowerDown;

        /* Entry 'PowerDown': '<S936>:1' */
        BaseEngineController_LS_B.s936_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S932>/ECUP Latch' */

      /* Switch: '<S938>/Switch' incorporates:
       *  Constant: '<S938>/Constant1'
       *  DataTypeConversion: '<S938>/Data Type Conversion'
       *  Sum: '<S938>/Sum'
       *  UnitDelay: '<S938>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s936_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_LS_B.s936_MPRDState +
          BaseEngineController_LS_DWork.s938_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S938>/Switch' */

      /* Logic: '<S938>/Logical Operator2' incorporates:
       *  Constant: '<S938>/Constant2'
       *  RelationalOperator: '<S938>/Relational Operator1'
       */
      rtb_LogicalOperator2_o = (BaseEngineController_LS_B.s936_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S938>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_LS_B.s936_MPRDState;

      /* Switch: '<S938>/Switch1' incorporates:
       *  Constant: '<S938>/Constant3'
       *  DataTypeConversion: '<S938>/Data Type Conversion1'
       *  Sum: '<S938>/Sum1'
       *  UnitDelay: '<S938>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 + BaseEngineController_LS_DWork.s938_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S938>/Switch1' */

      /* Logic: '<S938>/Logical Operator1' incorporates:
       *  Constant: '<S938>/Constant4'
       *  RelationalOperator: '<S938>/Relational Operator2'
       */
      rtb_LogicalOperator1_n = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S953>/Memory' */
      rtb_Memory = BaseEngineController_LS_DWork.s953_Memory_PreviousInput;

      /* CombinatorialLogic: '<S953>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_o != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_n != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic[0] = BaseEngineController_LS_ConstP.pooled889[rowidx];
        rtb_Logic[1] = BaseEngineController_LS_ConstP.pooled889[rowidx + 8];
      }

      /* Logic: '<S932>/Logical Operator' incorporates:
       *  Logic: '<S932>/Logical Operator1'
       */
      rtb_LogicalOperator_h = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S939>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s939_UnitDelay2_DSTATE;

      /* Logic: '<S939>/Logical Operator2' incorporates:
       *  UnitDelay: '<S939>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_h ||
        BaseEngineController_LS_DWork.s939_UnitDelay2_DSTATE);

      /* If: '<S958>/If' incorporates:
       *  Inport: '<S962>/In1'
       *  Inport: '<S963>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S958>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S958>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S958>/NewValue' incorporates:
         *  ActionPort: '<S962>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S958>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S958>/OldValue' incorporates:
         *  ActionPort: '<S963>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S958>/OldValue' */
      }

      /* End of If: '<S958>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S932>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S939>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S954>/Trigger'
       */
      if ((!rtb_LogicalOperator_h) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S954>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S959>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S954>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_h ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S939>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S939>/Processor Reboot' incorporates:
       *  EnablePort: '<S955>/Enable'
       *  TriggerPort: '<S955>/Trigger'
       */
      /* UnitDelay: '<S932>/Unit Delay5' */
      if (BaseEngineController_LS_DWork.s932_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S939>/Processor Reboot' incorporates:
         *  EnablePort: '<S955>/Enable'
         *  TriggerPort: '<S955>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S955>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S932>/Unit Delay5' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S939>/Processor Reboot' */

      /* UnitDelay: '<S939>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s939_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S939>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S956>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s939_UnitDelay_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S956>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S960>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S956>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S939>/Unit Delay' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S939>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S939>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_LS_DWork.s939_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S939>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S957>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s939_UnitDelay1_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S957>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S961>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S957>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S939>/Unit Delay1' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S939>/Shutdown power on ECU565//563' */

      /* Saturate: '<S940>/Saturation' */
      rtb_Saturation_o = rtb_Switch_i >= 16000.0 ? 16000.0 : rtb_Switch_i <= 0.0
        ? 0.0 : rtb_Switch_i;

      /* S-Function (motohawk_sfun_data_write): '<S940>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TimeSinceShutdown */
      {
        TimeSinceShutdown_DataStore() = rtb_Saturation_o;
      }

      /* UnitDelay: '<S932>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_LS_DWork.s932_UnitDelay3_DSTATE;

      /* UnitDelay: '<S932>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_LS_DWork.s932_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S934>/Clear' incorporates:
       *  TriggerPort: '<S943>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S934>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S932>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S941>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S932>/motohawk_restore_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S934>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S935>/Clear' incorporates:
       *  TriggerPort: '<S944>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S935>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S932>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S942>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S932>/motohawk_store_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S935>/motohawk_calibration' */

      /* Update for UnitDelay: '<S937>/Unit Delay8' */
      BaseEngineController_LS_DWork.s937_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S937>/Unit Delay6' */
      BaseEngineController_LS_DWork.s937_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S937>/Unit Delay7' */
      BaseEngineController_LS_DWork.s937_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S933>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S933>/motohawk_calibration'
       */
      BaseEngineController_LS_DWork.s933_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S938>/Unit Delay' */
      BaseEngineController_LS_DWork.s938_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S938>/Unit Delay1' */
      BaseEngineController_LS_DWork.s938_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S953>/Memory' */
      BaseEngineController_LS_DWork.s953_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S939>/Unit Delay2' */
      BaseEngineController_LS_DWork.s939_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S932>/motohawk_dout' */

      /* S-Function Block: DOut6309p0016 */
      {
        DOut6309p0016_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S932>/Unit Delay5' */
      BaseEngineController_LS_DWork.s932_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S939>/Unit Delay' */
      BaseEngineController_LS_DWork.s939_UnitDelay_DSTATE =
        rtb_LogicalOperator_h;

      /* Update for UnitDelay: '<S939>/Unit Delay1' */
      BaseEngineController_LS_DWork.s939_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S932>/Unit Delay3' */
      BaseEngineController_LS_DWork.s932_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S932>/Unit Delay4' */
      BaseEngineController_LS_DWork.s932_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
