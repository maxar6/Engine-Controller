#include "Application.h"
#include "BaseEngineController_LS.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define rtInf                          (100000000000000000.000000)
#define rtMinusInf                     (-100000000000000000.000000)

/*---- CALIBRATION ----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_cals_rodata.h>
#include <Pragma_Section_End_rodata.h>

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_sbss_zerovars.h>

/* Name: ForcedShutDownTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s879_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"System | Main Power Relay" Help:""   */

/* Name: ECUP_Enabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s862_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"System | Main Power Relay" Help:""  EnumDec:VarDecEnum_4 */

/* Name: ETC_ShutdownSetpointMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s27_SetpointMode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|ETC Adapt Request" Help:"Shutdown mode for ETC setpoint. 0=Passthrough, 1=LoAdapt, 2=SpringTest."   */

/* Name: ETCStallStateShutdown ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s28_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|ETCStallShutDown" Help:""  EnumDec:VarDecEnum_4 */

/* Name: ETCOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s51_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)" Help:"PID Final Output" Unit:%  */

/* Name: ETCPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s38_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)" Help:"PID Proportional Term" Unit:%  */

/* Name: ETCITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s48_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)" Help:"PID Integrator Term" Unit:%  */

/* Name: ETCDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s47_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)" Help:"PID Derivative Term" Unit:%  */

/* Name: ETCError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s38_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)" Help:"PID Error Term" Unit:%  */

/* Name: ETCDampTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s46_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)" Help:"PID Damper Term" Unit:%  */

/* Name: ETC_Setpoint ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s31_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)" Help:"Commanded electronic throttle position" Unit:%  */

/* Name: ETCDamperSwtichState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s35_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)|DamperSwitch" Help:""   */

/* Name: ETCDamperTPSThresh ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s41_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)|DamperSwitch" Help:""   */

/* Name: ETCDamperTPS ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s42_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|PID With Damper Terms (Tunable)|DamperSwitch" Help:""   */

/* Name: ETC_ShutDownTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s63_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|State  Manager" Help:""   */

/* Name: ETC_ECUPState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s32_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Electronic Throttle Controller|State  Manager" Help:""   */

/* Name: SparkDwell ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s87_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Spark Coil Characterization" Help:"Total electrical spark dwell time" Unit:ms  */

/* Name: SparkEnergyMonitor ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s92_SparkEnergy Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Spark Coil Characterization" Help:"Commanded spark energy, before conversion to dwell time" Unit:mJ  */

/* Name: SparkEnabled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Spark Coil Characterization" Help:"Enabled when spark energy is greater than zero" Unit:boolean  */

/* Name: BaseEquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s106_DesEquivRatio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Base Equiv Ratio" Help:"Base equivalence ratio for selected fuel system."   */

/* Name: DeltaMAP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s150_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: DeltaTPS ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s150_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: TransFuel_MAPFilt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s159_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: TransFuel_TPSFilt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s158_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: WarmUpO2AdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s167_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt|WarmUp Disable" Help:"Indicates whether FuelFlowComp map adapting is enabled due to WarmUp"  EnumDec:VarDecEnum_9 */

/* Name: FuelAdapt_Error_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s170_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt" Help:"Error in fuel flow at the current operating point, as compared to O2 sensor"   */

/* Name: FuelAdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s146_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt" Help:"Indicates whether FuelFlowComp map adapting is enabled"  EnumDec:VarDecEnum_9 */

/* Name: FuelAdapt_Error_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s169_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt" Help:"Error in fuel flow at the current operating point, as compared to O2 sensor"   */

/* Name: GlobalBaseFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Liquid fuel rate based on airflow and target equivalence ratio" Unit:g/s  */

/* Name: PerCylBaseFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s144_PerCylinderMassFlowRate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Liquid fuel mass flow rate based on airflow and target equivalence ratio per cylinder." Unit:g/s  */

/* Name: AdjustedPerCylFuelRate ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s144_ApplyMultipliersforO2KnockControlandEnrichment1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Desired fuel per cylinder after application of individual cylinder offsets and multipliers." Unit:g/s  */

/* Name: Desired_AF_Ratio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s149_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation|Calculate Fuel Flow" Help:"Desired Air to Fuel Ratio based on Ethanol Percentage" Unit:ratio  */

/* Name: O2TargetEquivRatio_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s228_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A" Help:"Current target equivalence ratio for closed-loop O2 control." Unit:ratio  */

/* Name: LiquidO2Control_PTerm_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s237_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control P-Term" Unit:mult  */

/* Name: LiquidO2Control_ITerm_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s239_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control I-Term" Unit:mult  */

/* Name: LiquidO2Control_DTerm_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s238_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control D-Term, for bank" Unit:mult  */

/* Name: LiquidO2Control_ErrorTerm_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s237_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control error-term, for bank" Unit:mult  */

/* Name: O2RichTime_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s235_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2LeanTime_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s235_Switch3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2NotActiveTime_BankA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s235_Switch4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank A|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2TargetEquivRatio_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s229_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B" Help:"Current target equivalence ratio for closed-loop O2 control." Unit:ratio  */

/* Name: LiquidO2Control_PTerm_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s249_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control P-Term" Unit:mult  */

/* Name: LiquidO2Control_ITerm_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s251_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control I-Term" Unit:mult  */

/* Name: LiquidO2Control_DTerm_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s250_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control D-Term, for bank" Unit:mult  */

/* Name: LiquidO2Control_ErrorTerm_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s249_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control error-term, for bank" Unit:mult  */

/* Name: O2RichTime_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s247_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2LeanTime_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s247_Switch3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2NotActiveTime_BankB ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s247_Switch4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller Bank B|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2CtrlMode ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s226_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_11 */

/* Name: O2TimeDelay ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s226_RelationalOperator5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: EnginSteadyState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s407_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: DesEquivInRange ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s226_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: O2SensorFaults ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s226_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: O2FuelMult ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s230_O2FuelMult Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2Arb" Help:"Closed-loop O2 control fuel multiplier." Unit:mult  */

/* Name: O2FaultDisable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s231_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2Disable" Help:""   */

/* Name: DFCOActive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s134_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"DFCO state"   */

/* Name: DFCODesEquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s132_Product1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"DFCO commanded equiv ratio"   */

/* Name: DFCODesSparkOutOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s132_SpkOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"DFCO spark output" Unit:degBTDC  */

/* Name: DFCOEnterCond ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s132_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"Conditions are correct for DFCO"   */

/* Name: BaseAirOffset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s197_DontallowsetpointtoeverdropbelowtheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|AiflowOffset" Help:"Base air request position, includes ramp into idle manager." Unit:%  */

/* Name: BaseAirflowAdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s188_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Base Airflow Table Adapt" Help:""  EnumDec:VarDecEnum_9 */

/* Name: IdleHandOffMult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s204_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: MinGovReset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s111_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: AirMinGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s111_MinGovAirPID Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:"Total output from min. gov. air PID controller." Unit:%  */

/* Name: SpkMinGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s111_IdleSpk Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: RPMCtrlMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s207_RelOp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Idle State Determination" Help:""   */

/* Name: IdleState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s206_IdleState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Idle State Determination" Help:"The idle governor may be one of: Flaring, OnIdle, OffIdle"  EnumDec:VarDecEnum_12 */

/* Name: RPMFalling ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s205_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Idle State Determination|Determine if RPM is Falling" Help:"Indicates whether the RPM is falling"  EnumDec:VarDecEnum_13 */

/* Name: MotoringDetectionTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s212_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|MotoringDetection" Help:""   */

/* Name: MotoringDetectionFlag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s192_RelationalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|MotoringDetection" Help:""   */

/* Name: MinGovRPMSetPt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s194_DontallowsetpointtoeverdropbelowtheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Ramp RPM" Help:""   */

/* Name: SpkMinGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s215_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PD (Tunable & Scheduled)" Help:"PID Proportional Term" Unit:degCA  */

/* Name: SpkMinGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s216_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PD (Tunable & Scheduled)" Help:"PID Derivative Term" Unit:degCA  */

/* Name: SpkMinGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s215_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PD (Tunable & Scheduled)" Help:"PID Error Term" Unit:degCA  */

/* Name: AirMinGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s220_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor P term"   */

/* Name: AirMinGovITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s222_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor I term"   */

/* Name: AirMinGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s221_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor D term"   */

/* Name: AirMinGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s220_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor P term"   */

/* Name: ACTempEnbl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s125_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACRpmLowEnbl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s124_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACRpmHighEnbl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s104_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACTpsEnble ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s104_LogicalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s104_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACLowChrg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s121_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACOverPressure ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s104_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: Fan1Cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s108_Switch4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|FAN Control" Help:"FAN 1 final request" Unit:%  */

/* Name: Fan2Cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s108_Switch5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|FAN Control" Help:"Fan 2 final command" Unit:%  */

/* Name: MaxGovIC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s171_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|I-Term Preload" Help:""   */

/* Name: TPSRequestLookupAirOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s110_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s175_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovETCMode ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s172_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_15 */

/* Name: MaxGovHold ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s172_DataTypeConversion1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_16 */

/* Name: MaxGovReset ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s172_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_17 */

/* Name: MaxGovState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s172_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_4 */

/* Name: MaxGovRPMSetpoint ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s173_DontallowsetpointtoevergoabovetheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Ramp RPM" Help:"RPMSetpoint of Max Gov controller." Unit:RPM  */

/* Name: MaxGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s182_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: MaxGovITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s184_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: MaxGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s183_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: MaxGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s182_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: Spark_Adv_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s265_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager" Help:""   */

/* Name: Tot_EqRatio_SpkOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s258_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|Desired Eq Ratio Offset" Help:"Total Spark Offset based on Desired Equivalence Ratio, engine speed and load" Unit:degCA  */

/* Name: Ethanol_Spk_Ofst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s259_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|Ethanol Spark Offset" Help:"Total Spark Offset based on ECT, IAT2, engine speed and load" Unit:degCA  */

/* Name: TotalSparkAdv ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s113_ApplyOffsetstoBaseSparkAdvance1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|SparkAdvanceLimiter" Help:""   */

/* Name: SpkOfstTempFnl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s262_Add Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|Temp Comp Offset" Help:"Total Spark Offset based on ECT, IAT, CAT, engine speed and load" Unit:degBTDC  */

/* Name: ETCRequestFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s105_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AirFlow Manager" Help:"Final ETC request sent to ETC controller from Run state." Unit:%  */

/* Name: FuelPumpTSE ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s275_UnitDelay Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Stall|Fuel Pump at Startup" Help:""   */

/* Name: ETCStallReq ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s268_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Stall|Stall Throttle" Help:"" Unit:%  */

/* Name: ETCReqFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s427_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:""   */

/* Name: FilteredETCRequest ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s445_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:"Final ETC request" Unit:%  */

/* Name: ETCRequestDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s427_RelationalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:""  EnumDec:VarDecEnum_21 */

/* Name: ECT_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s428_CollectAverage.s391_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed" Help:"" Unit:C  */

/* Name: IAT_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s429_CollectAverage.s391_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Capture IAT At Startup" Help:"" Unit:C  */

/* Name: CrankTDCs ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s455_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|EngineState|TDC_Counter" Help:""   */

/* Name: MisfireDiag_EncoderAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s326_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-32768.000000
   Max:32767.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|MISFIRE|MisfireDiagSub|MisfireDiagFunc|StoreRPMData" Help:""   */

/* Name: MisfireDiag_AverageStartRPMDR ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s327_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|MISFIRE|MisfireDiagSub|MisfireDiagFunc|StoreRPMData" Help:""   */

/* Name: MisfireDiag_AverageStartRPM ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s327_SafeDivide.s337_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|MISFIRE|MisfireDiagSub|MisfireDiagFunc|StoreRPMData" Help:""   */

/* Name: MisfireDiag_AverageStopRPMDR ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s328_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|MISFIRE|MisfireDiagSub|MisfireDiagFunc|StoreRPMData" Help:""   */

/* Name: MisfireDiag_AverageStopRPM ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s328_SafeDivide.s337_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|MISFIRE|MisfireDiagSub|MisfireDiagFunc|StoreRPMData" Help:""   */

/* Name: Fuel_Economy_Inst ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s282_Defaultifnoflow Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|Fuel Economy" Help:""   */

/* Name: Fuel_Economy_Filtered ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s299_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|Fuel Economy" Help:""   */

/* Name: EncoderFaultCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s535_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed|Encoder Diagnostics" Help:""   */

/* Name: ECT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s636_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: ECTADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s618_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: ECTRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s637_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: IAT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s654_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: IATADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s618_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: IATRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s655_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: EVAP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s645_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | EVAP" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: EVAPADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s618_motohawk_ain2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | EVAP" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: EVAPRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s646_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | EVAP" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: Fuel_Lvl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s624_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Fuel Level | Fuel_Lvl" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Fuel_LvlADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s617_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Fuel Level | Fuel_Lvl" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: Fuel_LvlRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s625_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Fuel Level | Fuel_Lvl" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: EST_TDCEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s799_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:""  EnumDec:VarDecEnum_4 */

/* Name: TDCCountThreshEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s799_RelationalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:""  EnumDec:VarDecEnum_4 */

/* Name: TDCCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s801_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:"Number of TDC events counted after stall.  This will reset once in Crank and Run."   */

/* Name: ESTOpenADC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s739_SparkSequence_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:65535.000000
   XLen:8 YLen:1   Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|EST Fault Management" Help:"ADC counts of measured voltage feedback for diagnosing the ESTs during stall state."   */

/* Name: EST_DiagDwell ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s739_SparkSequence_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:65535.000000
   XLen:8 YLen:1   Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|EST Fault Management" Help:"Dwell time used to diagnose ESTs during run-state." Unit:us  */

/* Name: CoilStartAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s796_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control" Help:"StartAngle for coils to establish dwell." Unit:degBTDC  */

/* Name: CoilStopAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s797_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control" Help:"Stop angle for coils to establish dwell." Unit:degBTDC  */

/* Name: CoilEnabled ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s739_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:1.000000
   XLen:8 YLen:1   Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control" Help:"Enable sate for coils." Unit:bool  */

/* Name: AC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s745_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|AC Control | AC" Help:"Display output in engineering units" Unit:bool  */

/* Name: PHI1_FiltFin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s768_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|AEM Infinity Dash|Dash Message 2|PHI_Filt" Help:""   */

/* Name: PHI2_FiltFin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s769_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|AEM Infinity Dash|Dash Message 2|PHI_Filt1" Help:""   */

/* Name: FAN1_PWMDutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s824_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FAN Control | FAN1_PWM" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: FAN2_PWMDutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s828_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FAN Control | FAN2_PWM" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: FUELP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s832_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FuelPump | FUELP" Help:"Display output in engineering units" Unit:bool  */

/* Name: ETB_Curr_Flt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s743_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|HBridge" Help:""   */

/* Name: ETC_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s743_motohawk_pwm1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-32768.000000
   Max:32767.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|HBridge" Help:"Current output of ETC duty cycle." Unit:mA  */

/* Name: ETC_DutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s743_ETC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|HBridge" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: InjTransitionCount ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s744_InjectorSequence_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:255.000000
   XLen:8 YLen:1   Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Injector Control" Help:""   */

/* Name: InjectorsEnabled ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s846_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:1.000000
   XLen:8 YLen:1   Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Injector Control" Help:"Enable state for injectors." Unit:bool  */

/* Name: InjDC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: InjEPW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: TotalFPC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s92_FPC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:"Total fuel per cylinder after application of transient algorithm" Unit:mg  */

/* Name: InjMPW ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: MaxAllowableMPW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: FuelDeltaPress ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s64_constreftoatm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization|DeltaPressureIndex" Help:"Fuel Delta Pressure - across the fuel injector" Unit:kPa  */

/* Name: RevLimiterState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s22_DataTypeConversion5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|SequenceCutPattern" Help:""  EnumDec:VarDecEnum_27 */

/* Name: BARO ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s390_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs" Help:"" Unit:kPa  */

/* Name: BaroDelayTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s386_Timer Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs" Help:"" Unit:s  */

/* Name: VEModelMAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s389_ModelAirMassFlowRate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Air Mass Flow Rate - Port Total" Unit:g/s  */

/* Name: VEIdealMAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s389_NominalAirFlowRate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Air Mass Flow Rate - ideal" Unit:g/s  */

/* Name: MAFFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s389_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Air mass flow rate at the intake manifold - Used by the fueling algorithm" Unit:g/s  */

/* Name: VEAdapting ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s389_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Indicates whether the volumetric efficiency map is currently being adjusted"  EnumDec:VarDecEnum_29 */

/* Name: VEFin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s389_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Final volumentric efficiency after adapt table" Unit:g/s  */

/* Name: VEAdaptAmnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s389_motohawk_interpolation_2d2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Volumetric efficiency adapt amount at the given speed and load" Unit:%  */

/* Name: FuelLvl_NVM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s381_motohawk_data_read Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|FuelLevel" Help:""   */

/* Name: FuelLvl_Fin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s402_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|FuelLevel" Help:""   */

/* Name: FuelLevel_RefuelEvent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s406_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|FuelLevel|RefuelEvent" Help:""   */

/* Name: SSEng ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s407_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSEngOpr ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s407_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs|Engine Steady-State Flag" Help:"Steady-State Engine Operation"  EnumDec:VarDecEnum_30 */

/* Name: SSRPMFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s408_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSRPMFiltered ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s411_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSRPMDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s408_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""  EnumDec:VarDecEnum_21 */

/* Name: SSLoadFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s409_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSLoadFiltered ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s414_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSLoadDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s409_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""  EnumDec:VarDecEnum_21 */

/* Name: APPPcnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s430_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed" Help:"APP used in controller (after power curve and CutThrottle limiting" Unit:%  */

/* Name: EngineAccel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s452_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Engine Accel" Help:"Acceleration rate of engine" Unit:RPM/s  */

/* Name: EngineStateRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s453_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|EngineState" Help:""   */

/* Name: CrankTrans ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s432_Crank Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|EngineState" Help:""   */

/* Name: FuelPulseStatePrb ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s432_motohawk_data_read Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|EngineState" Help:""  EnumDec:VarDecEnum_31 */

/* Name: FuelDeltaPressure ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s433_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Fuel Delta Pressure Calculation" Help:"Fuel pressure across injector (rail - manifold)" Unit:kPa  */

/* Name: GearEstimated ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s434_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Gear Estimator" Help:""   */

/* Name: O2BankA_O2Delag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s435_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|O2 De-lag" Help:""   */

/* Name: O2BankB_O2Delag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s435_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|O2 De-lag" Help:""   */

/* Name: TPSFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s437_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|TPS  Sensor Arbitration" Help:"" Unit:%  */

/* Name: TimeSinceKeyOn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s460_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Time Since Key On" Help:""   */

/* Name: TimeSinceRun ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s462_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Time Since Run" Help:""   */

/* Name: TimeSinceStall ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s464_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Time Since Stall" Help:"Indicates time since entering Stall State - saturates and disables at 2000 seconds" Unit:s  */

/* Name: VSPD_FinalFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s441_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|VSPD_Selector" Help:""   */

/* Name: GPS_Valid_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_Valid_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_YearUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_YearUTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Altitude_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_Altitude Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Course_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_Course Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_SatelliteCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_SatelliteCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_MonthUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_MonthUTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_DayUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_DayUTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_HoursUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_HoursUTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_MinutesUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_MinutesUTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_SecondsUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_SecondsUTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Latitude_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_Latitude Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Longitude_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_Longitude Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s476_GPS_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: Bank1_Lambda_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_Lambda Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_OxygenConcentration_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_OxygenConcentratio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_OxygenConcentration_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_OxygenConcentratio_d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_SystemVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SystemVolts_k Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_HeaterVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_HeaterVolts_d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_SensorDetectedStatus_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SensorDetectedStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_UsingFreeAreCalState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_UsingFreeAreCalState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_DataValidState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_DataValidState_f Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_SensorStatus_Prb ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SensorStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""  EnumDec:VarDecEnum_32 */

/* Name: Bank2_SensorFaultState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SensorFaultState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_SystemVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SystemVolts Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: O2_BankA_EquivRatio_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_HeaterVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_HeaterVolts Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_SensorDetectedStatus_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SensorDetectedStatus_m Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_UsingFreeAreCalState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_UsingFreeAreCalState_o Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_DataValidState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_DataValidState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_SensorStatus_Prb ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SensorStatus_e Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""  EnumDec:VarDecEnum_32 */

/* Name: Bank1_SensorFaultState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_SensorFaultState_m Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_Lambda_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_Lambda_c Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_EquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s484_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank1_EquivRatio" Help:"Final value after Linear Sensor Characterization" Unit:EquivRatio  */

/* Name: Bank1_EquivRatioADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_MathFunction Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank1_EquivRatio" Help:"Singal measured directly from sensor" Unit:EquivRatio  */

/* Name: Bank1_EquivRatioRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s478_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank1_EquivRatio" Help:"After conversion to engineering units, before range checking" Unit:EquivRatio  */

/* Name: Bank2_EquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s492_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank2_EquivRatio" Help:"Final value after Linear Sensor Characterization" Unit:EquivRatio  */

/* Name: Bank2_EquivRatioADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s477_MathFunction1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank2_EquivRatio" Help:"Singal measured directly from sensor" Unit:EquivRatio  */

/* Name: Bank2_EquivRatioRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s479_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank2_EquivRatio" Help:"After conversion to engineering units, before range checking" Unit:EquivRatio  */

/* Name: ACSw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s501_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ACSw" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: ACSw_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s496_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ACSw" Help:"Display output in engineering units" Unit:ADC  */

/* Name: ESTOP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s504_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ESTOP" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: ESTOP_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s471_motohawk_din Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ESTOP" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: MAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s511_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | MAF" Help:"Final value after Linear Sensor Characterization" Unit:g/s  */

/* Name: MAFADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s471_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | MAF" Help:"Signal measured directly from sensor" Unit:Hz  */

/* Name: MAFRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s512_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | MAF" Help:"After conversion to engineering units, before range checking" Unit:g/s  */

/* Name: VSPD ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s520_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | VSPD" Help:"Final value after Linear Sensor Characterization" Unit:MPH  */

/* Name: VSPDADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s471_Gain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | VSPD" Help:"Signal measured directly from sensor" Unit:Hz  */

/* Name: VSPDRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s521_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | VSPD" Help:"After conversion to engineering units, before range checking" Unit:MPH  */

/* Name: VSPD_DigFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s500_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital|VSPD_Filt" Help:""   */

/* Name: RPMInst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s472_RPMInst Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed" Help:""   */

/* Name: RPM ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s536_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed" Help:""   */

/* Name: EncoderFault ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s472_motohawk_encoder_fault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed|Encoder Diagnostics" Help:""  EnumDec:VarDecEnum_34 */

/* Name: EncoderState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s472_motohawk_encoder_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed" Help:""  EnumDec:VarDecEnum_35 */

/* Name: encoder_create ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:encoder_create Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | Encoder" Help:"Debug Variable" */
uint8_T encoder_create = 7;

/* Name: ACPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s550_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | ACPres" Help:"Final value after Linear Sensor Characterization" Unit:kPaGauge  */

/* Name: ACPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s473_motohawk_ain4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | ACPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: ACPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s537_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | ACPres" Help:"After conversion to engineering units, before range checking" Unit:kPaGauge  */

/* Name: FuelSens ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s558_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelSens" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: FuelSensADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s473_motohawk_frequency_in Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelSens" Help:"Singal measured directly from sensor" Unit:Hz  */

/* Name: FuelSensRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s538_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelSens" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: FuelPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s571_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelPres" Help:"Final value after Linear Sensor Characterization" Unit:kPaGauge  */

/* Name: FuelPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s473_motohawk_ain2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: FuelPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s539_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelPres" Help:"After conversion to engineering units, before range checking" Unit:kPaGauge  */

/* Name: MAP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s579_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAP" Help:"Final value after Linear Sensor Characterization" Unit:kPa  */

/* Name: MAPADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s542_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAP" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: MAPRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s540_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAP" Help:"After conversion to engineering units, before range checking" Unit:kPa  */

/* Name: MAPTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s587_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAPTime" Help:"Final value after Linear Sensor Characterization" Unit:kPa  */

/* Name: MAPTimeADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s473_motohawk_ain_read1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAPTime" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: MAPTimeRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s541_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAPTime" Help:"After conversion to engineering units, before range checking" Unit:kPa  */

/* Name: OilPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s597_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | OilPres" Help:"Final value after Linear Sensor Characterization" Unit:psi  */

/* Name: OilPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s473_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | OilPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: OilPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s543_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | OilPres" Help:"After conversion to engineering units, before range checking" Unit:psi  */

/* Name: SensVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s605_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SensVolt" Help:"Final value after Linear Sensor Characterization" Unit:Volts  */

/* Name: SensVoltADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s473_motohawk_ain3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SensVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: SensVoltRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s544_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SensVolt" Help:"After conversion to engineering units, before range checking" Unit:Volts  */

/* Name: SysVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s613_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SysVolt" Help:"Final value after Linear Sensor Characterization" Unit:Volts  */

/* Name: SysVoltADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s473_motohawk_ain14 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SysVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: SysVoltRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s545_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SysVolt" Help:"After conversion to engineering units, before range checking" Unit:Volts  */

/* Name: APP1_AdaptAdapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s669_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptAdapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s669_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptPercent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s683_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s661_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptPercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s673_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP2_AdaptAdapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s686_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptAdapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s686_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptPercent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s700_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s662_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptPercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s690_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: TPS1Adapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s703_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1Adapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s703_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s717_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s663_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1PercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s707_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS2Adapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s720_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2Adapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s720_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s734_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s664_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2PercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s724_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: EST_SparkCreate ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:EST_SparkCreate Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | SequenceOut" Help:"Debug Variable" */
uint8_T EST_SparkCreate = 7;

/* Name: NextSparkAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4
   CType:real_T Struct:NextSparkAngle Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:4.2
   UpdateID:BACKGND Group:"System | Debug | General | Spark Sequence" Help:"Debug Variable" */
real_T NextSparkAngle = 0.0;

/* Name: NextCylinderToSpark ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:uint8_T Struct:NextCylinderToSpark Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:3.0
   UpdateID:BACKGND Group:"System | Debug | General | Spark Sequence" Help:"Debug Variable" */
uint8_T NextCylinderToSpark = 0;

/* Name: EST_Spark ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:EST_Spark Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | SequenceOut" Help:"Debug Variable" */
uint8_T EST_Spark = 0;

/* Name: INJ_InjectorCreate ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:INJ_InjectorCreate Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | SequenceOut" Help:"Debug Variable" */
uint8_T INJ_InjectorCreate = 7;

/* Name: NextInjectorAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4
   CType:real_T Struct:NextInjectorAngle Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:4.2
   UpdateID:BACKGND Group:"System | Debug | General | Injector Sequence" Help:"Debug Variable" */
real_T NextInjectorAngle = 0.0;

/* Name: NextCylinderToInject ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:uint8_T Struct:NextCylinderToInject Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:3.0
   UpdateID:BACKGND Group:"System | Debug | General | Injector Sequence" Help:"Debug Variable" */
uint8_T NextCylinderToInject = 0;

/* Name: ain_create_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ECUP = RESOURCE_NOT_CREATED;

/* Name: ain_read_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ECUP = RESOURCE_NOT_CREATED;

/* Name: dout_create_DOut11990p0005 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut11990p0005 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut11990p0005 = 7;

/* Name: ain_create_MAPSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_MAPSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_MAPSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_MAPSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_MAPSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_MAPSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_ECTSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ECTSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ECTSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ECTSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ECTSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ECTSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_IATSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_IATSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_IATSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_IATSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_IATSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_IATSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_EVAPSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_EVAPSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_EVAPSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_EVAPSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_EVAPSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_EVAPSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_FuelLvlSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_FuelLvlSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_FuelLvlSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_FuelLvlSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_FuelLvlSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_FuelLvlSensorPin = RESOURCE_NOT_CREATED;

/* Name: dout_create_DOut9613p0006 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut9613p0006 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut9613p0006 = 7;

/* Name: ain_create_APP1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_APP1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_APP1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_APP1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_APP1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_APP1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_create_APP2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_APP2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_APP2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_APP2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_APP2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_APP2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_create_ACPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ACPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ACPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ACPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ACPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ACPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_ACSwPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ACSwPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ACSwPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ACSwPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ACSwPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ACSwPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_TPS1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_TPS1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_TPS1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_TPS1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_TPS1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_TPS1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_create_TPS2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_TPS2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_TPS2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_TPS2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_TPS2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_TPS2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: freq_in_create_FuelSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_FuelSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_FuelSensorPin = 7;

/* Name: freq_in_read_FuelSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_FuelSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_FuelSensorPin = 7;

/* Name: freq_in_create_VSPD_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_VSPD_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_VSPD_Pin = 7;

/* Name: freq_in_read_VSPD_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_VSPD_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_VSPD_Pin = 7;

/* Name: freq_in_create_MAF_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_MAF_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_MAF_Pin = 7;

/* Name: freq_in_read_MAF_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_MAF_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_MAF_Pin = 7;

/* Name: ain_create_SysVoltage ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_SysVoltage Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_SysVoltage = RESOURCE_NOT_CREATED;

/* Name: ain_read_SysVoltage ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_SysVoltage Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_SysVoltage = RESOURCE_NOT_CREATED;

/* Name: ain_create_FuelPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_FuelPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_FuelPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_FuelPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_FuelPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_FuelPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_OilPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_OilPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_OilPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_OilPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_OilPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_OilPresPin = RESOURCE_NOT_CREATED;

/* Name: pwm_create_FAN1Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_FAN1Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_FAN1Pin_PWM_PWMOutput = 7;

/* Name: pwm_set_FAN1Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_FAN1Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_FAN1Pin_PWM_PWMOutput = 0;

/* Name: pwm_create_FAN2Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_FAN2Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_FAN2Pin_PWM_PWMOutput = 7;

/* Name: pwm_set_FAN2Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_FAN2Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_FAN2Pin_PWM_PWMOutput = 0;

/* Name: dout_create_DOut10438p0009 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut10438p0009 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut10438p0009 = 7;

/* Name: din_create_ESTOPPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_create_ESTOPPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_create_ESTOPPin = RESOURCE_NOT_CREATED;

/* Name: din_read_ESTOPPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_read_ESTOPPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_read_ESTOPPin = RESOURCE_NOT_CREATED;

/* Name: pwm_create_ETCPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_ETCPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_ETCPin_PWMOutput = 7;

/* Name: pwm_set_ETCPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_ETCPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_ETCPin_PWMOutput = 0;

/* Name: ain_create_SensVoltSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_SensVoltSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_SensVoltSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_SensVoltSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_SensVoltSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_SensVoltSensorPin = RESOURCE_NOT_CREATED;

/* Name: resource_allocation ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:resource_allocation Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | Other" Help:"Debug Variable" */
uint8_T resource_allocation = 7;

/* Name: can_tx_err_CAN_1_0 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0 = 0;

/* Name: can_tx_err_CAN_2_0 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0 = 0;

/* Name: can_tx_err_CAN_1_0_54 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0_54 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0_54 = 0;

/* Name: can_tx_err_CAN_2_0_55 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0_55 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0_55 = 0;

/* Name: can_create_CAN_1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_create_CAN_1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_create_CAN_1 = 7;

/* Name: protocol_register_CAN_1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:protocol_register_CAN_1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T protocol_register_CAN_1 = 7;

/* Name: can_create_CAN_2 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_create_CAN_2 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_create_CAN_2 = 7;

/* Name: protocol_register_CAN_2 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:protocol_register_CAN_2 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T protocol_register_CAN_2 = 7;

#include <Pragma_Section_End_sbss.h>

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
