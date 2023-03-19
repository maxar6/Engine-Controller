
@if exist .\rtwtypes.h del /Q /F .\rtwtypes.h > NUL
@if ERRORLEVEL 1 exit junk


@echo ### Parsing VarDecs in Source Code
@if exist .\TDB rmdir /Q /S .\TDB > NUL
@if ERRORLEVEL 1 exit junk
@mkdir .\TDB
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\MotoParserXML" /LIB /verbosity=7 /d="C:\Users\maxar\Documents\GitHub\Engine-Controller\EngineController_112Branch\BaseEngineController_LS_112_Build" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API\MPC5554" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\GlobalDefinitions\MotoTron" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\GlobalDefinitions\ProcessorDefinitions" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\GlobalDefinitions\ModuleDefinitions" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\Processor\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\Processor\MPC55xx\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\Processor\MPC55xx\API\RegisterFiles" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\DeviceDrivers\BootMailBox\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\DeviceDrivers\Generic\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\DeviceDrivers\MPC55xxFlash\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\eTPU\Generic\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\ModuleSupport\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\ModuleSupport\Pcm09xx\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\Key\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\ERI\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\CANKing\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\MotProg\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\Crypto\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Security\DefaultSecurity\API" TDB/ParsedVardecs.xml
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" -o TDB/ParsedAndCombinedVardecs.xml TDB/ParsedVardecs.xml "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="file:///C:/Users/maxar/Documents/GitHub/Engine-Controller/EngineController_112Branch/BaseEngineController_LS_112_Build/MotoCoderVarDecs.xml"
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" -o TDB/BaseEngin_034.xml TDB/ParsedAndCombinedVardecs.xml "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\VarDecs_Reorder.xsl" intermediate-url="file:///C:/Users/maxar/Documents/GitHub/Engine-Controller/EngineController_112Branch/BaseEngineController_LS_112_Build/MotoCoder_Intermediate.xml" maxTableSize=65535
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" TDB/BaseEngin_034.xml "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\VarDecs_Transform.xsl" includeFiles="CommonInclude.h,BaseEngineController_LS_112.h,TaskKernel_GenAPI.h,ERIRequestTables_GenAPI.h,MotoCoder.h" GenDLL=1 GenTDB=1
@if ERRORLEVEL 1 exit junk


@echo ### Generating MotoTune DLL
@copy "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\TDB\*.*" .\TDB > NUL
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\bin\nant\bin\nant" -buildfile:TDB\Database.build -D:required.installdir="C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\win32-pe\4_4_0" -D:database.basename=BaseEngin_034 -q -nologo rebuild
@if ERRORLEVEL 1 exit junk


@echo ### Compiling and Linking
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\nant\bin\nant.exe" -buildfile:BaseEngineController_LS_112.build -nologo rebuild
@if ERRORLEVEL 1 exit junk


@echo ### Generating Symbol file and Processing Map file
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\MotoConvert.exe" -project=MPC55xx -toolchain=GCC -TransformBetween=0x00040000-0x002FFFFF -InitialisedRAM=.cals,.flashcals -InitialisedRAM=.fixed_ramcals,.fixed_romcals -InitialisedRAM=.ramcals,.romcals -map=Target\BaseEngineController_LS_112.map -srec=Target\BaseEngineController_LS_112.run -out=Target\BaseEngineController_LS_112.sr -encrypt=Target\BaseEngineController_LS_112.srz -tdbver=1 -tdb=EriRequestTableList -crctable=g_pCRCBlockPtr
@if ERRORLEVEL 1 exit junk


@echo ### Copy BaseEngin_034.dll and BaseEngineController_LS_112_034.srz
@if exist C:\ECUFiles\TDBDLL\*.* copy /Y .\TDB\BaseEngin_034.dll C:\ECUFiles\TDBDLL > NUL
@if ERRORLEVEL 1 exit junk
@if exist C:\ECUFiles\Programs\*.* copy /Y .\Target\BaseEngineController_LS_112.srz C:\ECUFiles\Programs\BaseEngineController_LS_112_034.srz > NUL
@if ERRORLEVEL 1 exit junk


@echo ### Dumping DLL to XML
@"C:\PROGRA~2\Woodward\MCS\MotoHawk\2011A_~1.184\Bin\motohawk_dumpdll.exe" -xml "C:\Users\maxar\Documents\GitHub\Engine-Controller\EngineController_112Branch\BaseEngineController_LS_112_Build\TDB\BaseEngin_034.dll" > "C:\Users\maxar\Documents\GitHub\Engine-Controller\EngineController_112Branch\BaseEngineController_LS_112_Build\TDB\BaseEngin_034.xml"
@if ERRORLEVEL 1 exit junk


@echo ### Creating Build Statistics
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\MotoElfParser.exe" -i "Target\BaseEngineController_LS_112.elf" -o "Target\BaseEngineController_LS_112_elf.xml"
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" -o "Target\BaseEngineController_LS_112_symbols.xml" "Target\BaseEngineController_LS_112_elf.xml" "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\BuildStats_IntermediateGenerate.xsl" LinkerDefinitionXML="file:///C:/Users/maxar/Documents/GitHub/Engine-Controller/EngineController_112Branch/BaseEngineController_LS_112_Build/LinkerDefinition.xml"
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" "Target\BaseEngineController_LS_112_symbols.xml" "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\BuildStats_Print.xsl" BuildStatsSymbolsXML="file:///C:/Users/maxar/Documents/GitHub/Engine-Controller/EngineController_112Branch/BaseEngineController_LS_112_Build/BuildStatsSymbols.xml"
@if ERRORLEVEL 1 exit junk


@echo ### Generating ASAP2 file
@"C:\PROGRA~2\Woodward\MCS\MotoHawk\2011A_~1.184\Bin\ASAP2.exe" -m "C:\Users\maxar\Documents\GitHub\Engine-Controller\EngineController_112Branch\BaseEngineController_LS_112_Build\TDB\BaseEngin_034.xml" -o "C:\Users\maxar\Documents\GitHub\Engine-Controller\EngineController_112Branch\BaseEngineController_LS_112_Build\TDB\BaseEngin_034.a2l" -u VirtualCalSpace -asap1b "C:\Users\maxar\Documents\GitHub\Engine-Controller\EngineController_112Branch\BaseEngineController_LS_112_Build\mh_asap1b_ccp_CCP1.xml"
@if ERRORLEVEL 1 exit junk


@echo ### Installing ASAP2 file in c:\ecufiles\tdbdll
@copy "C:\Users\maxar\Documents\GitHub\Engine-Controller\EngineController_112Branch\BaseEngineController_LS_112_Build\TDB\BaseEngin_034.a2l" "c:\ecufiles\tdbdll" > NUL
@if ERRORLEVEL 1 exit junk


@echo ### Successful Build with MotoCoder
