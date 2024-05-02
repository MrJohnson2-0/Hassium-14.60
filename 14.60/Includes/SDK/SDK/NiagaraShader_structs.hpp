#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                            = 0,
	Warning                        = 1,
	Error                          = 2,
	FNiagaraCompileEventSeverity_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct NiagaraShader.SimulationStageMetaData
struct FSimulationStageMetaData
{
public:
	class FName                                  SimulationStageName;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IterationSource;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSpawnOnly : 1;                                    // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWritesParticles : 1;                              // Mask: 0x2, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPartialParticleUpdate : 1;                        // Mask: 0x4, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1D5 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1FCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OutputDestinations;                                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinStage;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStage;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
struct FNiagaraDataInterfaceGeneratedFunction
{
public:
	uint8                                        Pad_1FCF[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo
{
public:
	class FString                                DataInterfaceHLSLSymbol;                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIClassName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent
{
public:
	enum class EFNiagaraCompileEventSeverity     Severity;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NodeGuid;                                          // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PinGuid;                                           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         StackGuids;                                        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


