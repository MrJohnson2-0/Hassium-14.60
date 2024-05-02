#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
struct FJsonToxicityBulkEvaluationResponse
{
public:
	TArray<bool>                                 IsToxic;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
struct FJsonToxicityEvaluationResponse
{
public:
	bool                                         Toxic;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
struct FJsonToxicityBulkEvaluationRequest
{
public:
	TArray<class FString>                        Texts;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
struct FJsonToxicityEvaluationRequest
{
public:
	class FString                                Text;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


