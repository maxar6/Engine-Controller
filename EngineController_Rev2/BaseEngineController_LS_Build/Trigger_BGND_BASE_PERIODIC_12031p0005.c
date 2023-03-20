/*
 * Trigger_BGND_BASE_PERIODIC_12031p0005.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2222
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_BGND_BASE_PERIODIC_12031p0005(void)
{
  /* Named constants for Stateflow: '<S862>/ECUP Latch' */
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

      /* S-Function Block: <S879>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s879_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S862>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S862>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S862>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S862>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s862_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S879>/Switch' incorporates:
       *  Constant: '<S879>/Constant'
       *  Logic: '<S867>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S879>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S879>/motohawk_delta_time'
       *  Sum: '<S879>/Sum'
       */
      if (!BaseEngineController_LS_B.s862_RelationalOperator) {
        BaseEngineController_LS_B.s879_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_LS_B.s879_Switch = 0.0;
      }

      /* End of Switch: '<S879>/Switch' */
      /* Logic: '<S867>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S867>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S867>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_LS_B.s879_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S867>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S875>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S875>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(56);
          }
        }

        /* Outputs for Function Call SubSystem: '<S875>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S880>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S875>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S867>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S867>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s867_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S867>/Processor Reboot' incorporates:
       *  TriggerPort: '<S876>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s867_UnitDelay8_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S876>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S867>/Unit Delay8' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S867>/Processor Reboot' */

      /* UnitDelay: '<S867>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_LS_DWork.s867_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S867>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S877>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s867_UnitDelay6_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S877>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S881>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S877>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S867>/Unit Delay6' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S867>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S867>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_LS_DWork.s867_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S867>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S878>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s867_UnitDelay7_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S878>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S882>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S878>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S867>/Unit Delay7' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S867>/Shutdown power on ECU565//563' */

      /* Saturate: '<S879>/Saturation' */
      rtb_Saturation = BaseEngineController_LS_B.s879_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s879_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s879_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S879>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S863>/Logical Operator' incorporates:
       *  Logic: '<S863>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S863>/motohawk_calibration'
       *  UnitDelay: '<S863>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_LS_DWork.s863_UnitDelay_DSTATE);

      /* S-Function Block: <S870>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s870_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
      }

      /* Logic: '<S862>/Logical Operator3' */
      rtb_LogicalOperator2_o =
        !BaseEngineController_LS_B.s862_RelationalOperator;

      /* Switch: '<S870>/Switch' incorporates:
       *  Constant: '<S870>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S870>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S870>/motohawk_delta_time'
       *  Sum: '<S870>/Sum'
       */
      if (rtb_LogicalOperator2_o) {
        rtb_Switch_i = rtb_motohawk_delta_time_g + TimeSinceShutdown_DataStore();
      } else {
        rtb_Switch_i = 0.0;
      }

      /* End of Switch: '<S870>/Switch' */
      /* RelationalOperator: '<S862>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S862>/motohawk_calibration1'
       */
      rtb_UnitDelay8 = (rtb_Switch_i >= (Shutdown_Delay_DataStore()));

      /* Logic: '<S862>/Logical Operator2' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S862>/motohawk_data_read'
       */
      BaseEngineController_LS_B.s862_LogicalOperator2 = ((rtb_UnitDelay8 &&
        rtb_LogicalOperator2_o && ShutDownTasksComplete_DataStore()));

      /* Stateflow: '<S862>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_LS_DWork.s866_is_c8_BaseEngineController_LS)
      {
       case BaseEngineController_LS_IN_PowerDown:
        /* During 'PowerDown': '<S866>:1' */
        if (BaseEngineController_LS_B.s862_RelationalOperator) {
          /* Transition: '<S866>:5' */
          BaseEngineController_LS_DWork.s866_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerUp;

          /* Entry 'PowerUp': '<S866>:2' */
          BaseEngineController_LS_B.s866_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_LS_IN_PowerUp:
        /* During 'PowerUp': '<S866>:2' */
        if ((!BaseEngineController_LS_B.s862_RelationalOperator) &&
            BaseEngineController_LS_B.s862_LogicalOperator2) {
          /* Transition: '<S866>:4' */
          BaseEngineController_LS_DWork.s866_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerDown;

          /* Entry 'PowerDown': '<S866>:1' */
          BaseEngineController_LS_B.s866_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S866>:3' */
        BaseEngineController_LS_DWork.s866_is_c8_BaseEngineController_LS =
          BaseEngineController_LS_IN_PowerDown;

        /* Entry 'PowerDown': '<S866>:1' */
        BaseEngineController_LS_B.s866_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S862>/ECUP Latch' */

      /* Switch: '<S868>/Switch' incorporates:
       *  Constant: '<S868>/Constant1'
       *  DataTypeConversion: '<S868>/Data Type Conversion'
       *  Sum: '<S868>/Sum'
       *  UnitDelay: '<S868>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s866_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_LS_B.s866_MPRDState +
          BaseEngineController_LS_DWork.s868_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S868>/Switch' */

      /* Logic: '<S868>/Logical Operator2' incorporates:
       *  Constant: '<S868>/Constant2'
       *  RelationalOperator: '<S868>/Relational Operator1'
       */
      rtb_LogicalOperator2_o = (BaseEngineController_LS_B.s866_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S868>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_LS_B.s866_MPRDState;

      /* Switch: '<S868>/Switch1' incorporates:
       *  Constant: '<S868>/Constant3'
       *  DataTypeConversion: '<S868>/Data Type Conversion1'
       *  Sum: '<S868>/Sum1'
       *  UnitDelay: '<S868>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 + BaseEngineController_LS_DWork.s868_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S868>/Switch1' */

      /* Logic: '<S868>/Logical Operator1' incorporates:
       *  Constant: '<S868>/Constant4'
       *  RelationalOperator: '<S868>/Relational Operator2'
       */
      rtb_LogicalOperator1_n = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S883>/Memory' */
      rtb_Memory = BaseEngineController_LS_DWork.s883_Memory_PreviousInput;

      /* CombinatorialLogic: '<S883>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_o != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_n != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic[0] = BaseEngineController_LS_ConstP.pooled810[rowidx];
        rtb_Logic[1] = BaseEngineController_LS_ConstP.pooled810[rowidx + 8];
      }

      /* Logic: '<S862>/Logical Operator' incorporates:
       *  Logic: '<S862>/Logical Operator1'
       */
      rtb_LogicalOperator_h = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S869>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s869_UnitDelay2_DSTATE;

      /* Logic: '<S869>/Logical Operator2' incorporates:
       *  UnitDelay: '<S869>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_h ||
        BaseEngineController_LS_DWork.s869_UnitDelay2_DSTATE);

      /* If: '<S888>/If' incorporates:
       *  Inport: '<S892>/In1'
       *  Inport: '<S893>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S888>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S888>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S888>/NewValue' incorporates:
         *  ActionPort: '<S892>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S888>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S888>/OldValue' incorporates:
         *  ActionPort: '<S893>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S888>/OldValue' */
      }

      /* End of If: '<S888>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S862>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S869>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S884>/Trigger'
       */
      if ((!rtb_LogicalOperator_h) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S884>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S889>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S884>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_h ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S869>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S869>/Processor Reboot' incorporates:
       *  EnablePort: '<S885>/Enable'
       *  TriggerPort: '<S885>/Trigger'
       */
      /* UnitDelay: '<S862>/Unit Delay5' */
      if (BaseEngineController_LS_DWork.s862_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S869>/Processor Reboot' incorporates:
         *  EnablePort: '<S885>/Enable'
         *  TriggerPort: '<S885>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S885>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S862>/Unit Delay5' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S869>/Processor Reboot' */

      /* UnitDelay: '<S869>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s869_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S869>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S886>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s869_UnitDelay_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S886>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S890>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S886>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S869>/Unit Delay' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S869>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S869>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_LS_DWork.s869_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S869>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S887>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s869_UnitDelay1_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S887>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S891>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S887>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S869>/Unit Delay1' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S869>/Shutdown power on ECU565//563' */

      /* Saturate: '<S870>/Saturation' */
      rtb_Saturation_o = rtb_Switch_i >= 16000.0 ? 16000.0 : rtb_Switch_i <= 0.0
        ? 0.0 : rtb_Switch_i;

      /* S-Function (motohawk_sfun_data_write): '<S870>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TimeSinceShutdown */
      {
        TimeSinceShutdown_DataStore() = rtb_Saturation_o;
      }

      /* UnitDelay: '<S862>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_LS_DWork.s862_UnitDelay3_DSTATE;

      /* UnitDelay: '<S862>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_LS_DWork.s862_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S864>/Clear' incorporates:
       *  TriggerPort: '<S873>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S864>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S862>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S871>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S862>/motohawk_restore_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S864>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S865>/Clear' incorporates:
       *  TriggerPort: '<S874>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S865>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S862>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S872>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S862>/motohawk_store_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S865>/motohawk_calibration' */

      /* Update for UnitDelay: '<S867>/Unit Delay8' */
      BaseEngineController_LS_DWork.s867_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S867>/Unit Delay6' */
      BaseEngineController_LS_DWork.s867_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S867>/Unit Delay7' */
      BaseEngineController_LS_DWork.s867_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S863>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S863>/motohawk_calibration'
       */
      BaseEngineController_LS_DWork.s863_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S868>/Unit Delay' */
      BaseEngineController_LS_DWork.s868_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S868>/Unit Delay1' */
      BaseEngineController_LS_DWork.s868_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S883>/Memory' */
      BaseEngineController_LS_DWork.s883_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S869>/Unit Delay2' */
      BaseEngineController_LS_DWork.s869_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S862>/motohawk_dout' */

      /* S-Function Block: DOut11990p0005 */
      {
        DOut11990p0005_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S862>/Unit Delay5' */
      BaseEngineController_LS_DWork.s862_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S869>/Unit Delay' */
      BaseEngineController_LS_DWork.s869_UnitDelay_DSTATE =
        rtb_LogicalOperator_h;

      /* Update for UnitDelay: '<S869>/Unit Delay1' */
      BaseEngineController_LS_DWork.s869_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S862>/Unit Delay3' */
      BaseEngineController_LS_DWork.s862_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S862>/Unit Delay4' */
      BaseEngineController_LS_DWork.s862_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
