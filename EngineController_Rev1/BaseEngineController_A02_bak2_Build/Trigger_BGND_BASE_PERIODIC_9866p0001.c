/*
 * Trigger_BGND_BASE_PERIODIC_9866p0001.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1532
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 10:29:48 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

void Trigger_BGND_BASE_PERIODIC_9866p0001(void)
{
  /* Named constants for Stateflow: '<S800>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S2>/Main Power Relay' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time;
      real_T rtb_Saturation;
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Logic[2];
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator2_b;
      boolean_T rtb_LogicalOperator1_jq;
      boolean_T rtb_Memory;
      boolean_T rtb_LogicalOperator5;
      boolean_T rtb_UnitDelay8;
      boolean_T rtb_UnitDelay6;
      boolean_T rtb_UnitDelay7;
      boolean_T rtb_LogicalOperator;
      real_T rtb_Switch;
      real_T rtb_Switch1;
      boolean_T rtb_LogicalOperator_bp;
      boolean_T rtb_LogicalOperator2;
      boolean_T rtb_UnitDelay3;
      boolean_T rtb_UnitDelay4;

      /* S-Function Block: <S816>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s816_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S800>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S800>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S800>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S800>/motohawk_calibration'
       */
      BaseEngineController_A02_bak2_B.s800_RelationalOperator =
        ((rtb_motohawk_ain5 >= ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S816>/Switch' incorporates:
       *  Constant: '<S816>/Constant'
       *  Logic: '<S805>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S816>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S816>/motohawk_delta_time'
       *  Sum: '<S816>/Sum'
       */
      if (!BaseEngineController_A02_bak2_B.s800_RelationalOperator) {
        BaseEngineController_A02_bak2_B.s816_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_A02_bak2_B.s816_Switch = 0.0;
      }

      /* End of Switch: '<S816>/Switch' */
      /* Logic: '<S805>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S805>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S805>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_A02_bak2_B.s816_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S805>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S812>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_j
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S812>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(34);
          }
        }

        /* Outputs for Function Call SubSystem: '<S812>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S817>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S812>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_bak2_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_j
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S805>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S805>/Unit Delay8' */
      rtb_UnitDelay8 =
        BaseEngineController_A02_bak2_DWork.s805_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S805>/Processor Reboot' incorporates:
       *  TriggerPort: '<S813>/Trigger'
       */
      if ((!BaseEngineController_A02_bak2_DWork.s805_UnitDelay8_DSTATE) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.ProcessorReboot_Trig_ZCE_b
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S813>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S805>/Unit Delay8' */
      BaseEngineController_A02_bak2_PrevZCSigState.ProcessorReboot_Trig_ZCE_b =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S805>/Processor Reboot' */

      /* UnitDelay: '<S805>/Unit Delay6' */
      rtb_UnitDelay6 =
        BaseEngineController_A02_bak2_DWork.s805_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S805>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S814>/Trigger'
       */
      if ((!BaseEngineController_A02_bak2_DWork.s805_UnitDelay6_DSTATE) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_i
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S814>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S818>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S814>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S805>/Unit Delay6' */
      BaseEngineController_A02_bak2_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_i
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S805>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S805>/Unit Delay7' */
      rtb_UnitDelay7 =
        BaseEngineController_A02_bak2_DWork.s805_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S805>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S815>/Trigger'
       */
      if ((!BaseEngineController_A02_bak2_DWork.s805_UnitDelay7_DSTATE) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_o
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S815>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S819>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S815>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S805>/Unit Delay7' */
      BaseEngineController_A02_bak2_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_o
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S805>/Shutdown power on ECU565//563' */

      /* Saturate: '<S816>/Saturation' */
      rtb_Saturation = BaseEngineController_A02_bak2_B.s816_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_A02_bak2_B.s816_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_bak2_B.s816_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S816>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S801>/Logical Operator' incorporates:
       *  Logic: '<S801>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S801>/motohawk_calibration'
       *  UnitDelay: '<S801>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_A02_bak2_DWork.s801_UnitDelay_DSTATE);

      /* S-Function (motohawk_sfun_data_read): '<S800>/motohawk_data_read' */
      BaseEngineController_A02_bak2_B.s800_motohawk_data_read =
        ShutDownTasksComplete_DataStore();

      /* Stateflow: '<S800>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch
        (BaseEngineController_A02_bak2_DWork.s804_is_c8_BaseEngineController_A02_bak2)
      {
       case BaseEngineController_A02_bak2_IN_PowerDown:
        /* During 'PowerDown': '<S804>:1' */
        if (BaseEngineController_A02_bak2_B.s800_RelationalOperator) {
          /* Transition: '<S804>:5' */
          BaseEngineController_A02_bak2_DWork.s804_is_c8_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_PowerUp;

          /* Entry 'PowerUp': '<S804>:2' */
          BaseEngineController_A02_bak2_B.s804_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_A02_bak2_IN_PowerUp:
        /* During 'PowerUp': '<S804>:2' */
        if ((!BaseEngineController_A02_bak2_B.s800_RelationalOperator) &&
            BaseEngineController_A02_bak2_B.s800_motohawk_data_read) {
          /* Transition: '<S804>:4' */
          BaseEngineController_A02_bak2_DWork.s804_is_c8_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_PowerDown;

          /* Entry 'PowerDown': '<S804>:1' */
          BaseEngineController_A02_bak2_B.s804_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S804>:3' */
        BaseEngineController_A02_bak2_DWork.s804_is_c8_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_PowerDown;

        /* Entry 'PowerDown': '<S804>:1' */
        BaseEngineController_A02_bak2_B.s804_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S800>/ECUP Latch' */

      /* Switch: '<S806>/Switch' incorporates:
       *  Constant: '<S806>/Constant1'
       *  DataTypeConversion: '<S806>/Data Type Conversion'
       *  Sum: '<S806>/Sum'
       *  UnitDelay: '<S806>/Unit Delay'
       */
      if (BaseEngineController_A02_bak2_B.s804_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_A02_bak2_B.s804_MPRDState +
          BaseEngineController_A02_bak2_DWork.s806_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S806>/Switch' */

      /* Logic: '<S806>/Logical Operator2' incorporates:
       *  Constant: '<S806>/Constant2'
       *  RelationalOperator: '<S806>/Relational Operator1'
       */
      rtb_LogicalOperator2_b = (BaseEngineController_A02_bak2_B.s804_MPRDState &&
                                (rtb_Switch >= 2.0));

      /* Logic: '<S806>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_A02_bak2_B.s804_MPRDState;

      /* Switch: '<S806>/Switch1' incorporates:
       *  Constant: '<S806>/Constant3'
       *  DataTypeConversion: '<S806>/Data Type Conversion1'
       *  Sum: '<S806>/Sum1'
       *  UnitDelay: '<S806>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 +
          BaseEngineController_A02_bak2_DWork.s806_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S806>/Switch1' */

      /* Logic: '<S806>/Logical Operator1' incorporates:
       *  Constant: '<S806>/Constant4'
       *  RelationalOperator: '<S806>/Relational Operator2'
       */
      rtb_LogicalOperator1_jq = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S820>/Memory' */
      rtb_Memory = BaseEngineController_A02_bak2_DWork.s820_Memory_PreviousInput;

      /* CombinatorialLogic: '<S820>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_b != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_jq != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic[0] = BaseEngineController_A02_bak2_ConstP.Logic_table[rowidx];
        rtb_Logic[1] = BaseEngineController_A02_bak2_ConstP.Logic_table[rowidx +
          8];
      }

      /* Logic: '<S800>/Logical Operator' incorporates:
       *  Logic: '<S800>/Logical Operator1'
       */
      rtb_LogicalOperator_bp = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S807>/Unit Delay2' */
      rtb_UnitDelay8 =
        BaseEngineController_A02_bak2_DWork.s807_UnitDelay2_DSTATE;

      /* Logic: '<S807>/Logical Operator2' incorporates:
       *  UnitDelay: '<S807>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_bp ||
        BaseEngineController_A02_bak2_DWork.s807_UnitDelay2_DSTATE);

      /* If: '<S825>/If' incorporates:
       *  Inport: '<S829>/In1'
       *  Inport: '<S830>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S825>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S825>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S825>/NewValue' incorporates:
         *  ActionPort: '<S829>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S825>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S825>/OldValue' incorporates:
         *  ActionPort: '<S830>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S825>/OldValue' */
      }

      /* End of If: '<S825>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S800>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S807>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S821>/Trigger'
       */
      if ((!rtb_LogicalOperator_bp) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S821>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S826>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S821>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_bak2_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_bp ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S807>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S807>/Processor Reboot' incorporates:
       *  EnablePort: '<S822>/Enable'
       *  TriggerPort: '<S822>/Trigger'
       */
      /* UnitDelay: '<S800>/Unit Delay5' */
      if (BaseEngineController_A02_bak2_DWork.s800_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S807>/Processor Reboot' incorporates:
         *  EnablePort: '<S822>/Enable'
         *  TriggerPort: '<S822>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_A02_bak2_PrevZCSigState.ProcessorReboot_Trig_ZCE
             != ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S822>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_A02_bak2_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S800>/Unit Delay5' */
      BaseEngineController_A02_bak2_PrevZCSigState.ProcessorReboot_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S807>/Processor Reboot' */

      /* UnitDelay: '<S807>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_A02_bak2_DWork.s807_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S807>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S823>/Trigger'
       */
      if ((!BaseEngineController_A02_bak2_DWork.s807_UnitDelay_DSTATE) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S823>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S827>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S823>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S807>/Unit Delay' */
      BaseEngineController_A02_bak2_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S807>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S807>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_A02_bak2_DWork.s807_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S807>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S824>/Trigger'
       */
      if ((!BaseEngineController_A02_bak2_DWork.s807_UnitDelay1_DSTATE) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S824>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S828>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S824>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S807>/Unit Delay1' */
      BaseEngineController_A02_bak2_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S807>/Shutdown power on ECU565//563' */

      /* UnitDelay: '<S800>/Unit Delay3' */
      rtb_UnitDelay3 =
        BaseEngineController_A02_bak2_DWork.s800_UnitDelay3_DSTATE;

      /* UnitDelay: '<S800>/Unit Delay4' */
      rtb_UnitDelay4 =
        BaseEngineController_A02_bak2_DWork.s800_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S802>/Clear' incorporates:
       *  TriggerPort: '<S810>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S802>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.Clear_Trig_ZCE_g !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S800>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S808>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S800>/motohawk_restore_nvmem' */
      }

      BaseEngineController_A02_bak2_PrevZCSigState.Clear_Trig_ZCE_g = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S802>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S803>/Clear' incorporates:
       *  TriggerPort: '<S811>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S803>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_A02_bak2_PrevZCSigState.Clear_Trig_ZCE !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S800>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S809>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S800>/motohawk_store_nvmem' */
      }

      BaseEngineController_A02_bak2_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S803>/motohawk_calibration' */

      /* Update for UnitDelay: '<S805>/Unit Delay8' */
      BaseEngineController_A02_bak2_DWork.s805_UnitDelay8_DSTATE =
        rtb_UnitDelay7;

      /* Update for UnitDelay: '<S805>/Unit Delay6' */
      BaseEngineController_A02_bak2_DWork.s805_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S805>/Unit Delay7' */
      BaseEngineController_A02_bak2_DWork.s805_UnitDelay7_DSTATE =
        rtb_UnitDelay6;

      /* Update for UnitDelay: '<S801>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S801>/motohawk_calibration'
       */
      BaseEngineController_A02_bak2_DWork.s801_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S806>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s806_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S806>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s806_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S820>/Memory' */
      BaseEngineController_A02_bak2_DWork.s820_Memory_PreviousInput = rtb_Logic
        [0];

      /* Update for UnitDelay: '<S807>/Unit Delay2' */
      BaseEngineController_A02_bak2_DWork.s807_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S800>/motohawk_dout' */

      /* S-Function Block: DOut9834p0001 */
      {
        DOut9834p0001_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S800>/Unit Delay5' */
      BaseEngineController_A02_bak2_DWork.s800_UnitDelay5_DSTATE =
        rtb_UnitDelay4;

      /* Update for UnitDelay: '<S807>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s807_UnitDelay_DSTATE =
        rtb_LogicalOperator_bp;

      /* Update for UnitDelay: '<S807>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s807_UnitDelay1_DSTATE =
        rtb_UnitDelay8;

      /* Update for UnitDelay: '<S800>/Unit Delay3' */
      BaseEngineController_A02_bak2_DWork.s800_UnitDelay3_DSTATE =
        rtb_LogicalOperator;

      /* Update for UnitDelay: '<S800>/Unit Delay4' */
      BaseEngineController_A02_bak2_DWork.s800_UnitDelay4_DSTATE =
        rtb_UnitDelay3;
    }
  }
}
