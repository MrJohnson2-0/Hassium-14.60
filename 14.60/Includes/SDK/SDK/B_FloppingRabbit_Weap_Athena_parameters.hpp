#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x2C - 0x0)
// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.DetermineFishLootTierNameAndSetLootForSpawner
struct AB_FloppingRabbit_Weap_Athena_C_DetermineFishLootTierNameAndSetLootForSpawner_Params
{
public:
	bool                                         bIsExplosion;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_635C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_635D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortFishingInterface> K2Node_DynamicCast_AsFort_Fishing_Interface;       // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_635E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_DetermineFishLootTierNameAndSetLootForSpawner_ReturnValue; // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ExecuteUbergraph_B_FloppingRabbit_Weap_Athena
struct AB_FloppingRabbit_Weap_Athena_C_ExecuteUbergraph_B_FloppingRabbit_Weap_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_635F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_Athena_FloppingRabbit_Wire_C*       K2Node_DynamicCast_AsB_Athena_Flopping_Rabbit_Wire; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


