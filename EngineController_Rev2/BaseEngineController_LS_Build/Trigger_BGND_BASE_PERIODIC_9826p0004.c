/*
 * Trigger_BGND_BASE_PERIODIC_9826p0004.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.1987
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Oct 04 18:30:28 2020
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_BGND_BASE_PERIODIC_9826p0004(void)
{
  /* Named constants for Stateflow: '<S913>/ECUP Latch' */
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

      /* S-Function Block: <S929>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s929_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S913>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S913>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S913>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S913>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s913_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S929>/Switch' incorporates:
       *  Constant: '<S929>/Constant'
       *  Logic: '<S918>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S929>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S929>/motohawk_delta_time'
       *  Sum: '<S929>/Sum'
       */
      if (!BaseEngineController_LS_B.s913_RelationalOperator) {
        BaseEngineController_LS_B.s929_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_LS_B.s929_Switch = 0.0;
      }

      /* End of Switch: '<S929>/Switch' */
      /* Logic: '<S918>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S918>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S918>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_LS_B.s929_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S918>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S925>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S925>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(51);
          }
        }

        /* Outputs for Function Call SubSystem: '<S925>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S930>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S925>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S918>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S918>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s918_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S918>/Processor Reboot' incorporates:
       *  TriggerPort: '<S926>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s918_UnitDelay8_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S926>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S918>/Unit Delay8' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S918>/Processor Reboot' */

      /* UnitDelay: '<S918>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_LS_DWork.s918_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S918>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S927>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s918_UnitDelay6_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S927>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S931>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S927>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S918>/Unit Delay6' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S918>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S918>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_LS_DWork.s918_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S918>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S928>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s918_UnitDelay7_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S928>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S932>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S928>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S918>/Unit Delay7' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S918>/Shutdown power on ECU565//563' */

      /* Saturate: '<S929>/Saturation' */
      rtb_Saturation = BaseEngineController_LS_B.s929_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s929_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s929_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S929>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S914>/Logical Operator' incorporates:
       *  Logic: '<S914>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S914>/motohawk_calibration'
       *  UnitDelay: '<S914>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_LS_DWork.s914_UnitDelay_DSTATE);

      /* S-Function (motohawk_sfun_data_read): '<S913>/motohawk_data_read' */
      BaseEngineController_LS_B.s913_motohawk_data_read =
        ShutDownTasksComplete_DataStore();

      /* Stateflow: '<S913>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_LS_DWork.s917_is_c8_BaseEngineController_LS)
      {
       case BaseEngineController_LS_IN_PowerDown:
        /* During 'PowerDown': '<S917>:1' */
        if (BaseEngineController_LS_B.s913_RelationalOperator) {
          /* Transition: '<S917>:5' */
          BaseEngineController_LS_DWork.s917_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerUp;

          /* Entry 'PowerUp': '<S917>:2' */
          BaseEngineController_LS_B.s917_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_LS_IN_PowerUp:
        /* During 'PowerUp': '<S917>:2' */
        if ((!BaseEngineController_LS_B.s913_RelationalOperator) &&
            BaseEngineController_LS_B.s913_motohawk_data_read) {
          /* Transition: '<S917>:4' */
          BaseEngineController_LS_DWork.s917_is_c8_BaseEngineController_LS =
            BaseEngineController_LS_IN_PowerDown;

          /* Entry 'PowerDown': '<S917>:1' */
          BaseEngineController_LS_B.s917_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S917>:3' */
        BaseEngineController_LS_DWork.s917_is_c8_BaseEngineController_LS =
          BaseEngineController_LS_IN_PowerDown;

        /* Entry 'PowerDown': '<S917>:1' */
        BaseEngineController_LS_B.s917_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S913>/ECUP Latch' */

      /* Switch: '<S919>/Switch' incorporates:
       *  Constant: '<S919>/Constant1'
       *  DataTypeConversion: '<S919>/Data Type Conversion'
       *  Sum: '<S919>/Sum'
       *  UnitDelay: '<S919>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s917_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_LS_B.s917_MPRDState +
          BaseEngineController_LS_DWork.s919_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S919>/Switch' */

      /* Logic: '<S919>/Logical Operator2' incorporates:
       *  Constant: '<S919>/Constant2'
       *  RelationalOperator: '<S919>/Relational Operator1'
       */
      rtb_LogicalOperator2_o = (BaseEngineController_LS_B.s917_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S919>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_LS_B.s917_MPRDState;

      /* Switch: '<S919>/Switch1' incorporates:
       *  Constant: '<S919>/Constant3'
       *  DataTypeConversion: '<S919>/Data Type Conversion1'
       *  Sum: '<S919>/Sum1'
       *  UnitDelay: '<S919>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 + BaseEngineController_LS_DWork.s919_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S919>/Switch1' */

      /* Logic: '<S919>/Logical Operator1' incorporates:
       *  Constant: '<S919>/Constant4'
       *  RelationalOperator: '<S919>/Relational Operator2'
       */
      rtb_LogicalOperator1_n = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S933>/Memory' */
      rtb_Memory = BaseEngineController_LS_DWork.s933_Memory_PreviousInput;

      /* CombinatorialLogic: '<S933>/Logic' */
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

      /* Logic: '<S913>/Logical Operator' incorporates:
       *  Logic: '<S913>/Logical Operator1'
       */
      rtb_LogicalOperator_h = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S920>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s920_UnitDelay2_DSTATE;

      /* Logic: '<S920>/Logical Operator2' incorporates:
       *  UnitDelay: '<S920>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_h ||
        BaseEngineController_LS_DWork.s920_UnitDelay2_DSTATE);

      /* If: '<S938>/If' incorporates:
       *  Inport: '<S942>/In1'
       *  Inport: '<S943>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S938>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S938>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S938>/NewValue' incorporates:
         *  ActionPort: '<S942>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S938>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S938>/OldValue' incorporates:
         *  ActionPort: '<S943>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S938>/OldValue' */
      }

      /* End of If: '<S938>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S913>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S920>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S934>/Trigger'
       */
      if ((!rtb_LogicalOperator_h) &&
          (BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S934>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S939>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S934>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_h ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S920>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S920>/Processor Reboot' incorporates:
       *  EnablePort: '<S935>/Enable'
       *  TriggerPort: '<S935>/Trigger'
       */
      /* UnitDelay: '<S913>/Unit Delay5' */
      if (BaseEngineController_LS_DWork.s913_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S920>/Processor Reboot' incorporates:
         *  EnablePort: '<S935>/Enable'
         *  TriggerPort: '<S935>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S935>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S913>/Unit Delay5' */
      BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S920>/Processor Reboot' */

      /* UnitDelay: '<S920>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_LS_DWork.s920_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S920>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S936>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s920_UnitDelay_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S936>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S940>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S936>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S920>/Unit Delay' */
      BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S920>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S920>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_LS_DWork.s920_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S920>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S937>/Trigger'
       */
      if ((!BaseEngineController_LS_DWork.s920_UnitDelay1_DSTATE) &&
          (BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S937>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S941>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S937>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S920>/Unit Delay1' */
      BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S920>/Shutdown power on ECU565//563' */

      /* UnitDelay: '<S913>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_LS_DWork.s913_UnitDelay3_DSTATE;

      /* UnitDelay: '<S913>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_LS_DWork.s913_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S915>/Clear' incorporates:
       *  TriggerPort: '<S923>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S915>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S913>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S921>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S913>/motohawk_restore_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S915>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S916>/Clear' incorporates:
       *  TriggerPort: '<S924>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S913>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S922>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S913>/motohawk_store_nvmem' */
      }

      BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S916>/motohawk_calibration' */

      /* Update for UnitDelay: '<S918>/Unit Delay8' */
      BaseEngineController_LS_DWork.s918_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S918>/Unit Delay6' */
      BaseEngineController_LS_DWork.s918_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S918>/Unit Delay7' */
      BaseEngineController_LS_DWork.s918_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S914>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S914>/motohawk_calibration'
       */
      BaseEngineController_LS_DWork.s914_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S919>/Unit Delay' */
      BaseEngineController_LS_DWork.s919_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S919>/Unit Delay1' */
      BaseEngineController_LS_DWork.s919_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S933>/Memory' */
      BaseEngineController_LS_DWork.s933_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S920>/Unit Delay2' */
      BaseEngineController_LS_DWork.s920_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S913>/motohawk_dout' */

      /* S-Function Block: DOut9794p0004 */
      {
        DOut9794p0004_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S913>/Unit Delay5' */
      BaseEngineController_LS_DWork.s913_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S920>/Unit Delay' */
      BaseEngineController_LS_DWork.s920_UnitDelay_DSTATE =
        rtb_LogicalOperator_h;

      /* Update for UnitDelay: '<S920>/Unit Delay1' */
      BaseEngineController_LS_DWork.s920_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S913>/Unit Delay3' */
      BaseEngineController_LS_DWork.s913_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S913>/Unit Delay4' */
      BaseEngineController_LS_DWork.s913_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
