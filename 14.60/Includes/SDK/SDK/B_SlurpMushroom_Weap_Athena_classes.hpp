#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xD18 - 0xD01)
// BlueprintGeneratedClass B_SlurpMushroom_Weap_Athena.B_SlurpMushroom_Weap_Athena_C
class AB_SlurpMushroom_Weap_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	uint8                                        Pad_2173[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  SM_Motes;                                          // 0xD08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xD10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_SlurpMushroom_Weap_Athena_C* GetDefaultObj();

};

}


