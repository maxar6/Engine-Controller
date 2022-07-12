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

/* Name: ForcedShutDownTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s996_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"System | Main Power Relay" Help:""   */

/* Name: ECUP_Enabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s979_RelationalOperator Mask:FFFFFFFF
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

/* Name: SparkDwell ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s130_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Spark Coil Characterization" Help:"Total electrical spark dwell time" Unit:ms  */

/* Name: SparkEnergyMonitor ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s135_SparkEnergy Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Spark Coil Characterization" Help:"Commanded spark energy, before conversion to dwell time" Unit:mJ  */

/* Name: SparkEnabled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s24_OnlyEnableSparkwhenEnergyisAboveZero Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Spark Coil Characterization" Help:"Enabled when spark energy is greater than zero" Unit:boolean  */

/* Name: BaseEquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s146_DesEquivRatio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Base Equiv Ratio" Help:"Base equivalence ratio for selected fuel system."   */

/* Name: BoostControlAdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s174_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control|BoostControl Adapt" Help:""  EnumDec:VarDecEnum_10 */

/* Name: DeltaMAP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s212_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: DeltaTPS ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s212_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: TransFuel_MAPFilt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s221_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: TransFuel_TPSFilt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s220_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: WarmUpO2AdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s227_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt|WarmUp Disable" Help:"Indicates whether FuelFlowComp map adapting is enabled due to WarmUp"  EnumDec:VarDecEnum_10 */

/* Name: FuelAdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s208_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt" Help:"Indicates whether FuelFlowComp map adapting is enabled"  EnumDec:VarDecEnum_10 */

/* Name: FuelAdapt_Error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s229_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt" Help:"Error in fuel flow at the current operating point, as compared to O2 sensor"   */

/* Name: GlobalBaseFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s209_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Liquid fuel rate based on airflow and target equivalence ratio" Unit:g/s  */

/* Name: PerCylBaseFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s206_PerCylinderMassFlowRate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Liquid fuel mass flow rate based on airflow and target equivalence ratio per cylinder." Unit:g/s  */

/* Name: AdjustedPerCylFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s206_ApplyMultipliersforO2KnockControlandEnrichment1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Desired fuel per cylinder after application of individual cylinder offsets and multipliers." Unit:g/s  */

/* Name: Desired_AF_Ratio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s211_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation|Calculate Fuel Flow" Help:"Desired Air to Fuel Ratio based on Ethanol Percentage" Unit:ratio  */

/* Name: O2TargetEquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s286_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller" Help:"Current target equivalence ratio for closed-loop O2 control." Unit:ratio  */

/* Name: LiquidO2Control_PTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s292_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control P-Term" Unit:mult  */

/* Name: LiquidO2Control_ITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s294_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control I-Term" Unit:mult  */

/* Name: LiquidO2Control_DTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s293_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control D-Term, for bank" Unit:mult  */

/* Name: LiquidO2Control_ErrorTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s292_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller|Closed-Loop O2 PID Controller" Help:"Closed-loop O2 control error-term, for bank" Unit:mult  */

/* Name: O2RichTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s290_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2LeanTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s290_Switch3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2NotActiveTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s290_Switch4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller|Equivalence Ratio Perturbation" Help:""   */

/* Name: O2FuelMult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s154_O2FuelMult Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control" Help:"Closed-loop O2 control fuel multiplier." Unit:mult  */

/* Name: O2CtrlMode ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s284_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_11 */

/* Name: O2TimeDelay ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s284_RelationalOperator5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: EnginSteadyState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s392_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: DesEquivInRange ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s284_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: O2SensorFaults ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s284_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_4 */

/* Name: BaseAirOffset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|AiflowOffset" Help:"Base air request position, includes ramp into idle manager." Unit:%  */

/* Name: BaseAirflowAdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s247_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Base Airflow Table Adapt" Help:""  EnumDec:VarDecEnum_10 */

/* Name: IdleHandOffMult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s263_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: MinGovReset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s153_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: AirMinGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s153_MinGovAirPID Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:"Total output from min. gov. air PID controller." Unit:%  */

/* Name: SpkMinGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s153_IdleSpk Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: RPMCtrlMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s266_RelOp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Idle State Determination" Help:""   */

/* Name: IdleState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s265_IdleState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Idle State Determination" Help:"The idle governor may be one of: Flaring, OnIdle, OffIdle"  EnumDec:VarDecEnum_12 */

/* Name: RPMFalling ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s264_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Idle State Determination|Determine if RPM is Falling" Help:"Indicates whether the RPM is falling"  EnumDec:VarDecEnum_13 */

/* Name: MotoringDetectionTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s271_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|MotoringDetection" Help:""   */

/* Name: MotoringDetectionFlag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s251_RelationalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|MotoringDetection" Help:""   */

/* Name: MinGovRPMSetPt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s253_DontallowsetpointtoeverdropbelowtheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Ramp RPM" Help:""   */

/* Name: SpkMinGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s274_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PD (Tunable & Scheduled)" Help:"PID Proportional Term" Unit:degCA  */

/* Name: SpkMinGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s275_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PD (Tunable & Scheduled)" Help:"PID Derivative Term" Unit:degCA  */

/* Name: SpkMinGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s274_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PD (Tunable & Scheduled)" Help:"PID Error Term" Unit:degCA  */

/* Name: AirMinGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s279_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor P term"   */

/* Name: AirMinGovITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s281_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor I term"   */

/* Name: AirMinGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s280_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor D term"   */

/* Name: AirMinGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s279_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MinGovernor|Universal PID (Tunable & Scheduled)" Help:"Air min governor P term"   */

/* Name: MaxGovIC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s230_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|I-Term Preload" Help:""   */

/* Name: TPSRequestLookupAirOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s152_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s234_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovETCMode ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s231_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_15 */

/* Name: MaxGovHold ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s231_DataTypeConversion1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_16 */

/* Name: MaxGovReset ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s231_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_17 */

/* Name: MaxGovState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s231_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_4 */

/* Name: MaxGovRPMSetpoint ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s232_DontallowsetpointtoevergoabovetheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Ramp RPM" Help:"RPMSetpoint of Max Gov controller." Unit:RPM  */

/* Name: MaxGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s241_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: MaxGovITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s243_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: MaxGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s242_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: MaxGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s241_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|MaxGovernor|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: Spark_Adv_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s308_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager" Help:""   */

/* Name: Tot_EqRatio_SpkOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s301_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|Desired Eq Ratio Offset" Help:"Total Spark Offset based on Desired Equivalence Ratio, engine speed and load" Unit:degCA  */

/* Name: Ethanol_Spk_Ofst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s302_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|Ethanol Spark Offset" Help:"Total Spark Offset based on ECT, IAT2, engine speed and load" Unit:degCA  */

/* Name: TotalSparkAdv ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|SparkAdvanceLimiter" Help:""   */

/* Name: SpkOfstTempFnl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s305_Add Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Spark Manager|Temp Comp Offset" Help:"Total Spark Offset based on ECT, IAT, CAT, engine speed and load" Unit:degBTDC  */

/* Name: ACTempEnbl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s167_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACRpmLowEnbl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s166_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACRpmHighEnbl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s144_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACTpsEnble ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s144_LogicalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s144_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACLowChrg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s163_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ACOverPressure ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s144_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AC Control" Help:""   */

/* Name: ETCRequestFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s145_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|AirFlow Manager" Help:"Final ETC request sent to ETC controller from Run state." Unit:%  */

/* Name: BoostControlPID_ITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s186_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control" Help:"Boost controller PID I term"   */

/* Name: BoostControlPID ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s175_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control" Help:"Boost controller PID output" Unit:dutyCycle  */

/* Name: BoostControlTarget ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s147_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control" Help:"Final boost target" Unit:PSI  */

/* Name: BoostControlDutyCycleOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s147_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control" Help:"Boost controller final duty cycle out" Unit:dutyCycle  */

/* Name: BoostControlDutyCycleFF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s147_motohawk_interpolation_2d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control" Help:""   */

/* Name: BoostCtlPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s184_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control|Universal PID (Tunable & Scheduled)" Help:"Air min governor P term"   */

/* Name: BoostCtlITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s186_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control|Universal PID (Tunable & Scheduled)" Help:"Air min governor I term"   */

/* Name: BoostCtlDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s185_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control|Universal PID (Tunable & Scheduled)" Help:"Air min governor D term"   */

/* Name: BoostCtlError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s184_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|Boost Control|Universal PID (Tunable & Scheduled)" Help:"Air min governor P term"   */

/* Name: DFCOActive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s192_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"DFCO state"   */

/* Name: DFCODesEquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s190_Product1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"DFCO commanded equiv ratio"   */

/* Name: DFCODesSparkOutOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s190_SpkOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"DFCO spark output" Unit:degBTDC  */

/* Name: DFCOEnterCond ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s190_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|DFCO|DesEquivRatioMod" Help:"Conditions are correct for DFCO"   */

/* Name: Fan1Cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s149_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|FAN Control" Help:"FAN 1 final request" Unit:%  */

/* Name: Fan2Cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s149_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Run|FAN Control" Help:"Fan 2 final command" Unit:%  */

/* Name: FuelPumpTSE ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s321_UnitDelay Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Stall|Fuel Pump at Startup" Help:""   */

/* Name: ETCStallReq ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s311_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Stall|Stall Throttle" Help:"" Unit:%  */

/* Name: ETCStallAppOvrReq ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s311_Product1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Stall|Stall Throttle" Help:"" Unit:%  */

/* Name: ETCStallIceBreakReq ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s322_etc Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Controller|Stall|Stall Throttle" Help:"" Unit:%  */

/* Name: ETCReqFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s412_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:""   */

/* Name: FilteredETCRequest ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s430_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:"Final ETC request" Unit:%  */

/* Name: ETCRequestDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s412_RelationalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:""  EnumDec:VarDecEnum_21 */

/* Name: ECT_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s413_CollectAverage.s379_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed" Help:"" Unit:C  */

/* Name: IAT_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s414_CollectAverage.s379_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Capture IAT At Startup" Help:"" Unit:C  */

/* Name: CrankTDCs ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s439_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|EngineState|TDC_Counter" Help:""   */

/* Name: Fuel_Economy_Inst ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s327_Defaultifnoflow Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|Fuel Economy" Help:""   */

/* Name: Fuel_Economy_Filtered ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s344_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|Diagnostics|Fuel Economy" Help:""   */

/* Name: EncoderFaultCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s626_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed|Encoder Diagnostics" Help:""   */

/* Name: ECT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s737_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: ECTADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s709_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: ECTRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s738_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: IAT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s755_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: IATADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s709_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: IATRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s756_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: EVAP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s746_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | EVAP" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: EVAPADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s709_motohawk_ain2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | EVAP" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: EVAPRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s747_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | EVAP" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: CAT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s728_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | CAT" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: CATADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s709_motohawk_ain3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | CAT" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: CATRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s729_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Temp Sensors | CAT" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: Fuel_Lvl ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s715_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Fuel Level | Fuel_Lvl" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Fuel_LvlADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s708_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Fuel Level | Fuel_Lvl" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: Fuel_LvlRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s716_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|NonLinearSensors|Fuel Level | Fuel_Lvl" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: EST_TDCEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s893_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:""  EnumDec:VarDecEnum_4 */

/* Name: TDCCountThreshEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s893_RelationalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:""  EnumDec:VarDecEnum_4 */

/* Name: TDCCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s895_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:"Number of TDC events counted after stall.  This will reset once in Crank and Run."   */

/* Name: ESTOpenADC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s862_SparkSequence_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:65535.000000
   XLen:8 YLen:1   Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|EST Fault Management" Help:"ADC counts of measured voltage feedback for diagnosing the ESTs during stall state."   */

/* Name: EST_DiagDwell ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s862_SparkSequence_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:65535.000000
   XLen:8 YLen:1   Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control|EST Fault Management" Help:"Dwell time used to diagnose ESTs during run-state." Unit:us  */

/* Name: CoilStartAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s890_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control" Help:"StartAngle for coils to establish dwell." Unit:degBTDC  */

/* Name: CoilStopAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s891_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control" Help:"Stop angle for coils to establish dwell." Unit:degBTDC  */

/* Name: CoilEnabled ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s862_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:1.000000
   XLen:8 YLen:1   Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Coil Control" Help:"Enable sate for coils." Unit:bool  */

/* Name: AC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s870_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|AC Control | AC" Help:"Display output in engineering units" Unit:bool  */

/* Name: FAN1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s916_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FAN Control | FAN1" Help:"Display output in engineering units" Unit:bool  */

/* Name: FAN1_PWMDutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s926_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FAN Control | FAN1_PWM" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: FAN2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s917_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FAN Control | FAN2" Help:"Display output in engineering units" Unit:bool  */

/* Name: FAN2_PWMDutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s930_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FAN Control | FAN2_PWM" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: FUELP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s934_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|FuelPump | FUELP" Help:"Display output in engineering units" Unit:bool  */

/* Name: ETB_Curr_Flt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s866_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|HBridge" Help:""   */

/* Name: ETC_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s866_motohawk_pwm1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-32768.000000
   Max:32767.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|HBridge" Help:"Current output of ETC duty cycle." Unit:mA  */

/* Name: ETC_DutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s866_ETC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|HBridge" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: IAC_PDutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s944_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|IAC-Control | IAC_P" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: IAC_SDutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s948_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|IAC-Control | IAC_S" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: InjTransitionCount ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s868_InjectorSequence_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:255.000000
   XLen:8 YLen:1   Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Injector Control" Help:""   */

/* Name: InjectorsEnabled ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s958_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:1.000000
   XLen:8 YLen:1   Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|Injector Control" Help:"Enable state for injectors." Unit:bool  */

/* Name: WASTEGATEDutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s975_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Outputs|WASTEGATE-Control | WASTEGATE" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: InjDC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: InjEPW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: InjMPW ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: MaxAllowableMPW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s21_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization" Help:""   */

/* Name: FuelDeltaPress ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s64_constreftoatm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization|DeltaPressureIndex" Help:"Fuel Delta Pressure - across the fuel injector" Unit:kPa  */

/* Name: TotalFPC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s72_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|Injector Characterization|Fuel Inj Offsets" Help:"Total fuel per cylinder after application of transient algorithm" Unit:mg  */

/* Name: RevLimiterState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s22_DataTypeConversion5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|ActuatorCharacterization|SequenceCutPattern" Help:""  EnumDec:VarDecEnum_26 */

/* Name: BARO ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s378_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs" Help:"" Unit:kPa  */

/* Name: BaroDelayTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s374_Timer Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs" Help:"" Unit:s  */

/* Name: VEModelMAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s377_ModelAirMassFlowRate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Air Mass Flow Rate - Port Total" Unit:g/s  */

/* Name: VEIdealMAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s377_NominalAirFlowRate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Air Mass Flow Rate - ideal" Unit:g/s  */

/* Name: MAFFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s377_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Air mass flow rate at the intake manifold - Used by the fueling algorithm" Unit:g/s  */

/* Name: VEAdapting ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s377_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Indicates whether the volumetric efficiency map is currently being adjusted"  EnumDec:VarDecEnum_27 */

/* Name: VEFin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s377_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Final volumentric efficiency after adapt table" Unit:g/s  */

/* Name: VEAdaptAmnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s377_motohawk_interpolation_2d2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|AirCalcs|Speed Density - MAP Referenced - Adaptive" Help:"Volumetric efficiency adapt amount at the given speed and load" Unit:%  */

/* Name: FuelLvl_NVM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s369_motohawk_data_read Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|FuelLevel" Help:""   */

/* Name: FuelLvl_Fin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s388_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|FuelLevel" Help:""   */

/* Name: SSEng ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s392_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSEngOpr ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s392_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs|Engine Steady-State Flag" Help:"Steady-State Engine Operation"  EnumDec:VarDecEnum_28 */

/* Name: SSRPMFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s393_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSRPMFiltered ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s396_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSRPMDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s393_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""  EnumDec:VarDecEnum_21 */

/* Name: SSLoadFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s394_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSLoadFiltered ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s399_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSLoadDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s394_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""  EnumDec:VarDecEnum_21 */

/* Name: APPPcnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s415_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed" Help:"APP used in controller (after power curve and CutThrottle limiting" Unit:%  */

/* Name: EngineAccel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s437_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Engine Accel" Help:"Acceleration rate of engine" Unit:RPM/s  */

/* Name: EngineStateRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s438_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|EngineState" Help:""   */

/* Name: CrankTrans ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s417_Crank Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|EngineState" Help:""   */

/* Name: FuelDeltaPressure ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s418_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Fuel Delta Pressure Calculation" Help:"Fuel pressure across injector (rail - manifold)" Unit:kPa  */

/* Name: GearEstimated ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s419_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Gear Estimator" Help:""   */

/* Name: PreO2Delag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s420_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|O2 De-lag" Help:""   */

/* Name: PostO2Delag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s420_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|O2 De-lag" Help:""   */

/* Name: TPSFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s422_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|TPS  Sensor Arbitration" Help:"" Unit:%  */

/* Name: TimeSinceKeyOn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s441_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Time Since Key On" Help:""   */

/* Name: TimeSinceRun ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s443_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Time Since Run" Help:""   */

/* Name: TimeSinceStall ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s445_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|Time Since Stall" Help:"Indicates time since entering Stall State - saturates and disables at 2000 seconds" Unit:s  */

/* Name: VSPD_FinalFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s426_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Control|VirtualSensors|RawProcessed|VSPD_Selector" Help:""   */

/* Name: GPS_Valid_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_YearUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Altitude_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage2_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Course_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage2_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_SatelliteCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage2_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_MonthUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_DayUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_HoursUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage_o6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_MinutesUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage_o7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_SecondsUTC_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage_o8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Latitude_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Longitude_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage1_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: GPS_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s457_ReadCANMessage2_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM GPS" Help:""   */

/* Name: Bank1_Lambda_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_OxygenConcentration_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_OxygenConcentration_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_SystemVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_HeaterVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_SensorDetectedStatus_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_UsingFreeAreCalState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_DataValidState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_SensorStatus_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o9 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_SensorFaultState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o10 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1EquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_MathFunction Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2EquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_MathFunction1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_SystemVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: O2_EquivRatio_Avg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_HeaterVolts_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_SensorDetectedStatus_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_UsingFreeAreCalState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_DataValidState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_SensorStatus_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o9 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_SensorFaultState_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage_o10 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank2_Lambda_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_ReadCANMessage1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda" Help:""   */

/* Name: Bank1_EquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s522_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank1_EquivRatio" Help:"Final value after Linear Sensor Characterization" Unit:EquivRatio  */

/* Name: Bank1_EquivRatioADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_MathFunction Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank1_EquivRatio" Help:"Singal measured directly from sensor" Unit:EquivRatio  */

/* Name: Bank1_EquivRatioRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s498_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank1_EquivRatio" Help:"After conversion to engineering units, before range checking" Unit:EquivRatio  */

/* Name: Bank2_EquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s530_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank2_EquivRatio" Help:"Final value after Linear Sensor Characterization" Unit:EquivRatio  */

/* Name: Bank2_EquivRatioADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s458_MathFunction1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank2_EquivRatio" Help:"Singal measured directly from sensor" Unit:EquivRatio  */

/* Name: Bank2_EquivRatioRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s499_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|CAN|AEM X Lambda | Bank2_EquivRatio" Help:"After conversion to engineering units, before range checking" Unit:EquivRatio  */

/* Name: ACSw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s578_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ACSw" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: ACSw_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s570_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ACSw" Help:"Display output in engineering units" Unit:ADC  */

/* Name: ClutchSw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s581_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ClutchSw" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: ClutchSw_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s571_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ClutchSw" Help:"Display output in engineering units" Unit:ADC  */

/* Name: ESTOP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s584_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ESTOP" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: ESTOP_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s452_motohawk_din Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | ESTOP" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: MAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s591_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | MAF" Help:"Final value after Linear Sensor Characterization" Unit:g/s  */

/* Name: MAFADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s452_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | MAF" Help:"Signal measured directly from sensor" Unit:Hz  */

/* Name: MAFRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s592_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | MAF" Help:"After conversion to engineering units, before range checking" Unit:g/s  */

/* Name: Scramble ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s597_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | Scramble" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: Scramble_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s574_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | Scramble" Help:"Display output in engineering units" Unit:ADC  */

/* Name: TwoStep ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s602_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | TwoStep" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: TwoStep_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s452_motohawk_din2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | TwoStep" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: VSPD ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s610_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | VSPD" Help:"Final value after Linear Sensor Characterization" Unit:MPH  */

/* Name: VSPDADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s452_Gain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | VSPD" Help:"Signal measured directly from sensor" Unit:Hz  */

/* Name: VSPDRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s611_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital | VSPD" Help:"After conversion to engineering units, before range checking" Unit:MPH  */

/* Name: VSPD_RateReject_Enabled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s577_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital|VSPD_Filt" Help:""   */

/* Name: VSPD_ChangeReject_Enabled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s577_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital|VSPD_Filt" Help:""   */

/* Name: VSPD_DigFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s577_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|Digital|VSPD_Filt" Help:""   */

/* Name: RPMInst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s453_RPMInst Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed" Help:""   */

/* Name: RPM ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s627_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed" Help:""   */

/* Name: EncoderFault ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s453_motohawk_encoder_fault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed|Encoder Diagnostics" Help:""  EnumDec:VarDecEnum_30 */

/* Name: EncoderState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s453_motohawk_encoder_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|EngineSpeed" Help:""  EnumDec:VarDecEnum_31 */

/* Name: encoder_create ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:encoder_create Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | Encoder" Help:"Debug Variable" */
uint8_T encoder_create = 7;

/* Name: ACPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s641_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | ACPres" Help:"Final value after Linear Sensor Characterization" Unit:kPaGauge  */

/* Name: ACPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s454_motohawk_ain4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | ACPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: ACPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s628_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | ACPres" Help:"After conversion to engineering units, before range checking" Unit:kPaGauge  */

/* Name: FuelSens ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s649_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelSens" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: FuelSensADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s454_motohawk_frequency_in Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelSens" Help:"Singal measured directly from sensor" Unit:Hz  */

/* Name: FuelSensRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s629_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelSens" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: FuelPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s662_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelPres" Help:"Final value after Linear Sensor Characterization" Unit:kPaGauge  */

/* Name: FuelPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s454_motohawk_ain2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: FuelPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s630_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | FuelPres" Help:"After conversion to engineering units, before range checking" Unit:kPaGauge  */

/* Name: MAP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s670_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAP" Help:"Final value after Linear Sensor Characterization" Unit:kPa  */

/* Name: MAPADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s633_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAP" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: MAPRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s631_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAP" Help:"After conversion to engineering units, before range checking" Unit:kPa  */

/* Name: MAPTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s678_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAPTime" Help:"Final value after Linear Sensor Characterization" Unit:kPa  */

/* Name: MAPTimeADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s454_motohawk_ain_read1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAPTime" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: MAPTimeRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s632_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | MAPTime" Help:"After conversion to engineering units, before range checking" Unit:kPa  */

/* Name: OilPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s688_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | OilPres" Help:"Final value after Linear Sensor Characterization" Unit:psi  */

/* Name: OilPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s454_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | OilPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: OilPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s634_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | OilPres" Help:"After conversion to engineering units, before range checking" Unit:psi  */

/* Name: SensVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s696_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SensVolt" Help:"Final value after Linear Sensor Characterization" Unit:Volts  */

/* Name: SensVoltADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s454_motohawk_ain3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SensVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: SensVoltRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s635_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SensVolt" Help:"After conversion to engineering units, before range checking" Unit:Volts  */

/* Name: SysVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s704_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SysVolt" Help:"Final value after Linear Sensor Characterization" Unit:Volts  */

/* Name: SysVoltADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s454_motohawk_ain14 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SysVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: SysVoltRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s636_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|LinearSensors | SysVolt" Help:"After conversion to engineering units, before range checking" Unit:Volts  */

/* Name: APP1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s772_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: APP1ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s456_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: APP1Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s774_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: APP2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s784_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: APP2ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s456_motohawk_ain2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: APP2Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s786_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: APP1_AdaptAdapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s792_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptAdapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s792_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptPercent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s806_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s764_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP1_AdaptPercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s796_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP1_Adapt" Help:""   */

/* Name: APP2_AdaptAdapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s809_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptAdapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s809_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptPercent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s823_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s765_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: APP2_AdaptPercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s813_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | APP2_Adapt" Help:""   */

/* Name: TPS1Adapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s826_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1Adapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s826_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s840_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s766_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1PercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s830_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS2Adapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s843_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2Adapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s843_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s857_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s767_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_LS|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2PercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_LS Struct:BaseEngineController_LS_B.s847_MinMax1 Mask:FFFFFFFF
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

/* Name: dout_create_DOut9914p0004 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut9914p0004 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut9914p0004 = 7;

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

/* Name: ain_create_CATSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_CATSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_CATSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_CATSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_CATSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_CATSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_FuelLvlSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_FuelLvlSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_FuelLvlSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_FuelLvlSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_FuelLvlSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_FuelLvlSensorPin = RESOURCE_NOT_CREATED;

/* Name: dout_create_DOut8754p0001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut8754p0001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut8754p0001 = 7;

/* Name: freq_in_create_VSPD_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_VSPD_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_VSPD_Pin = 7;

/* Name: freq_in_read_VSPD_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_VSPD_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_VSPD_Pin = 7;

/* Name: ain_create_APP2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_APP2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_APP2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_APP2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_APP2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_APP2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_create_APP1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_APP1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_APP1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_APP1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_APP1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_APP1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_create_ACSwPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ACSwPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ACSwPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ACSwPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ACSwPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ACSwPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_ACPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ACPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ACPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ACPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ACPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ACPresPin = RESOURCE_NOT_CREATED;

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

/* Name: ain_create_SysVoltage ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_SysVoltage Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_SysVoltage = RESOURCE_NOT_CREATED;

/* Name: ain_read_SysVoltage ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_SysVoltage Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_SysVoltage = RESOURCE_NOT_CREATED;

/* Name: freq_in_create_MAF_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_MAF_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_MAF_Pin = 7;

/* Name: freq_in_read_MAF_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_MAF_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_MAF_Pin = 7;

/* Name: ain_create_ClutchSw_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ClutchSw_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ClutchSw_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ClutchSw_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ClutchSw_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ClutchSw_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_create_ScramblePin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ScramblePin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ScramblePin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ScramblePin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ScramblePin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ScramblePin = RESOURCE_NOT_CREATED;

/* Name: din_create_TwoStepPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_create_TwoStepPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_create_TwoStepPin = RESOURCE_NOT_CREATED;

/* Name: din_read_TwoStepPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_read_TwoStepPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_read_TwoStepPin = RESOURCE_NOT_CREATED;

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

/* Name: dout_create_DOut9366p0001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut9366p0001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut9366p0001 = 7;

/* Name: pwm_create_FAN1Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_FAN1Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_FAN1Pin_PWM_PWMOutput = 7;

/* Name: pwm_set_FAN1Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_FAN1Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_FAN1Pin_PWM_PWMOutput = 0;

/* Name: dout_create_DOut9367p0001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut9367p0001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut9367p0001 = 7;

/* Name: pwm_create_FAN2Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_FAN2Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_FAN2Pin_PWM_PWMOutput = 7;

/* Name: pwm_set_FAN2Pin_PWM_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_FAN2Pin_PWM_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_FAN2Pin_PWM_PWMOutput = 0;

/* Name: dout_create_DOut9387p0001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut9387p0001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut9387p0001 = 7;

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

/* Name: pwm_create_IAC_PPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_IAC_PPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_IAC_PPin_PWMOutput = 7;

/* Name: pwm_set_IAC_PPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_IAC_PPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_IAC_PPin_PWMOutput = 0;

/* Name: pwm_create_IAC_SPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_IAC_SPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_IAC_SPin_PWMOutput = 7;

/* Name: pwm_set_IAC_SPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_IAC_SPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_IAC_SPin_PWMOutput = 0;

/* Name: pwm_create_WASTEGATE_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_WASTEGATE_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_WASTEGATE_PWMOutput = 7;

/* Name: pwm_set_WASTEGATE_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_WASTEGATE_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_WASTEGATE_PWMOutput = 0;

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

/* Name: can_tx_err_CAN_1_0_50 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0_50 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0_50 = 0;

/* Name: can_tx_err_CAN_2_0_51 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0_51 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0_51 = 0;

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
