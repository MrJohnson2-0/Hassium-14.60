#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xD10 - 0xD01)
// BlueprintGeneratedClass B_Keycard_Athena_Parent.B_Keycard_Athena_Parent_C
class AB_Keycard_Athena_Parent_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	uint8                                        Pad_3576[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xD08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Keycard_Athena_Parent_C* GetDefaultObj();

};

}


