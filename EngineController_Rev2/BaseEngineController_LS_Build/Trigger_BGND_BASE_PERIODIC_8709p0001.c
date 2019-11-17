/*
 * Trigger_BGND_BASE_PERIODIC_8709p0001.c
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

void Trigger_BGND_BASE_PERIODIC_8709p0001(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S3>/Main Power Relay' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time;
      real_T rtb_Saturation;
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
      real_T rtb_Switch;
      real_T rtb_Switch1;
      boolean_T rtb_LogicalOperator_h;
      boolean_T rtb_LogicalOperator2;
      boolean_T rtb_UnitDelay3;
      boolean_T rtb_UnitDelay4;

      /* S-Function Block: <S807>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s807_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S791>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S791>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S791>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S791>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s791_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S807>/Switch' incorporates:
       *  Constant: '<S807>/Constant'
       *  Logic: '<S796>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S807>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S807>/motohawk_delta_time'
       *  Sum: '<S807>/Sum'
       */
      if (!BaseEngineController_LS_B.s791_RelationalOperator) {
        BaseEngineController_LS_B.s807_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_LS_B.s807_Switch = 0.0;
      }

      /* End of Switch: '<S807>/Switch' */
      /* Logic: '<S796>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S796>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_LS_B.s807_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S796>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S803>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S803>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(39);
          }
        }

        /* Outputs for Function Call SubSystem: '<S803>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S808>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S803>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S796>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S796>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s796_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S796>/Processor Reboot' incorporates:
       *  TriggerPort: '<S804>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s796_UnitDelay8_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S804>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S796>/Unit Delay8' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S796>/Processor Reboot' */

      /* UnitDelay: '<S796>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_LS_DWork.s796_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S796>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S805>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s796_UnitDelay6_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S805>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S809>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S805>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S796>/Unit Delay6' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S796>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S796>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_LS_DWork.s796_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S796>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S806>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s796_UnitDelay7_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S806>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S810>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S806>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S796>/Unit Delay7' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S796>/Shutdown power on ECU565//563' */

      /* Saturate: '<S807>/Saturation' */
      rtb_Saturation = BaseEngineController_LS_B.s807_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s807_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s807_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S807>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S792>/Logical Operator' incorporates:
       *  Logic: '<S792>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S792>/motohawk_calibration'
       *  UnitDelay: '<S792>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_LS_DWork.s792_UnitDelay_DSTATE);

      /* S-Function (motohawk_sfun_data_read): '<S791>/motohawk_data_read' */
      BaseEngineController_LS_B.s791_motohawk_data_read =
        ShutDownTasksComplete_DataStore();

      /* Stateflow: '<S791>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_LS_DWork.s795_is_c8_BaseEngineController_LS)
      {
       case BaseEngineController_LS_IN_PowerDown:
        /* During 'PowerDown': '<S795>:1' */
        if (BaseEngineController_LS_B.s791_RelationalOperator) {
          /* Transition: '<S795>:5' */
          BaseEngineController_LS_DWork.s795_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerUp;

          /* Entry 'PowerUp': '<S795>:2' */
          BaseEngineController_LS_B.s795_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_LS_IN_PowerUp:
        /* During 'PowerUp': '<S795>:2' */
        if ((!BaseEngineController_LS_B.s791_RelationalOperator) &&
            BaseEngineController_LS_B.s791_motohawk_data_read) {
          /* Transition: '<S795>:4' */
          BaseEngineController_LS_DWork.s795_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerDown;

          /* Entry 'PowerDown': '<S795>:1' */
          BaseEngineController_LS_B.s795_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S795>:3' */
        BaseEngineController_LS_DWork.s795_is_c8_BaseEngineController_LS =
          BaseEngineController_LS_IN_PowerDown;

        /* Entry 'PowerDown': '<S795>:1' */
        BaseEngineController_LS_B.s795_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S791>/ECUP Latch' */

      /* Switch: '<S797>/Switch' incorporates:
       *  Constant: '<S797>/Constant1'
       *  DataTypeConversion: '<S797>/Data Type Conversion'
       *  Sum: '<S797>/Sum'
       *  UnitDelay: '<S797>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s795_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_LS_B.s795_MPRDState +
          BaseEngineController_LS_DWork.s797_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S797>/Switch' */

      /* Logic: '<S797>/Logical Operator2' incorporates:
       *  Constant: '<S797>/Constant2'
       *  RelationalOperator: '<S797>/Relational Operator1'
       */
      rtb_LogicalOperator2_o = (BaseEngineController_LS_B.s795_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S797>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_LS_B.s795_MPRDState;

      /* Switch: '<S797>/Switch1' incorporates:
       *  Constant: '<S797>/Constant3'
       *  DataTypeConversion: '<S797>/Data Type Conversion1'
       *  Sum: '<S797>/Sum1'
       *  UnitDelay: '<S797>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 + BaseEngineController_LS_DWork.s797_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S797>/Switch1' */

      /* Logic: '<S797>/Logical Operator1' incorporates:
       *  Constant: '<S797>/Constant4'
       *  RelationalOperator: '<S797>/Relational Operator2'
       */
      rtb_LogicalOperator1_n = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S811>/Memory' */
      rtb_Memory = BaseEngineController_LS_DWork.s811_Memory_PreviousInput;

      /* CombinatorialLogic: '<S811>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_o != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_n != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic[0] = BaseEngineController_LS_ConstP.Logic_table[rowidx];
        rtb_Logic[1] = BaseEngineController_LS_ConstP.Logic_table[rowidx + 8];
      }

      /* Logic: '<S791>/Logical Operator' incorporates:
       *  Logic: '<S791>/Logical Operator1'
       */
      rtb_LogicalOperator_h = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S798>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s798_UnitDelay2_DSTATE;

      /* Logic: '<S798>/Logical Operator2' incorporates:
       *  UnitDelay: '<S798>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_h ||
        BaseEngineController_LS_DWork.s798_UnitDelay2_DSTATE);

      /* If: '<S816>/If' incorporates:
       *  Inport: '<S820>/In1'
       *  Inport: '<S821>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S816>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S816>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S816>/NewValue' incorporates:
         *  ActionPort: '<S820>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S816>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S816>/OldValue' incorporates:
         *  ActionPort: '<S821>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S816>/OldValue' */
      }

      /* End of If: '<S816>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S791>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S798>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S812>/Trigger'
       */
      if ((!rtb_LogicalOperator_h) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S812>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S817>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S812>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_h ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S798>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S798>/Processor Reboot' incorporates:
       *  EnablePort: '<S813>/Enable'
       *  TriggerPort: '<S813>/Trigger'
       */
      /* UnitDelay: '<S791>/Unit Delay5' */
      if (BaseEngineController_LS_DWork.s791_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S798>/Processor Reboot' incorporates:
         *  EnablePort: '<S813>/Enable'
         *  TriggerPort: '<S813>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S813>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S791>/Unit Delay5' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S798>/Processor Reboot' */

      /* UnitDelay: '<S798>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s798_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S798>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S814>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s798_UnitDelay_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S814>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S818>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S814>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S798>/Unit Delay' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S798>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S798>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_LS_DWork.s798_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S798>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S815>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s798_UnitDelay1_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S815>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S819>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S815>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S798>/Unit Delay1' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S798>/Shutdown power on ECU565//563' */

      /* UnitDelay: '<S791>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_LS_DWork.s791_UnitDelay3_DSTATE;

      /* UnitDelay: '<S791>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_LS_DWork.s791_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S793>/Clear' incorporates:
       *  TriggerPort: '<S801>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S791>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S799>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S791>/motohawk_restore_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S794>/Clear' incorporates:
       *  TriggerPort: '<S802>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S791>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S800>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S791>/motohawk_store_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration' */

      /* Update for UnitDelay: '<S796>/Unit Delay8' */
      BaseEngineController_LS_DWork.s796_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S796>/Unit Delay6' */
      BaseEngineController_LS_DWork.s796_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S796>/Unit Delay7' */
      BaseEngineController_LS_DWork.s796_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S792>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S792>/motohawk_calibration'
       */
      BaseEngineController_LS_DWork.s792_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S797>/Unit Delay' */
      BaseEngineController_LS_DWork.s797_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S797>/Unit Delay1' */
      BaseEngineController_LS_DWork.s797_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S811>/Memory' */
      BaseEngineController_LS_DWork.s811_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S798>/Unit Delay2' */
      BaseEngineController_LS_DWork.s798_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S791>/motohawk_dout' */

      /* S-Function Block: DOut8677p0001 */
      {
        DOut8677p0001_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S791>/Unit Delay5' */
      BaseEngineController_LS_DWork.s791_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S798>/Unit Delay' */
      BaseEngineController_LS_DWork.s798_UnitDelay_DSTATE =
        rtb_LogicalOperator_h;

      /* Update for UnitDelay: '<S798>/Unit Delay1' */
      BaseEngineController_LS_DWork.s798_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S791>/Unit Delay3' */
      BaseEngineController_LS_DWork.s791_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S791>/Unit Delay4' */
      BaseEngineController_LS_DWork.s791_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
