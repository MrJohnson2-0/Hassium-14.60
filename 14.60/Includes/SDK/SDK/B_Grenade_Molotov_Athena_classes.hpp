#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0xD28 - 0xD01)
// BlueprintGeneratedClass B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C
class AB_Grenade_Molotov_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	uint8                                        Pad_6D49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AmbientAudio;                                      // 0xD10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara_Light;                                     // 0xD18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xD20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Grenade_Molotov_Athena_C* GetDefaultObj();

	void OnWeaponAttached();
	void K2_OnUnEquip();
	void ExecuteUbergraph_B_Grenade_Molotov_Athena(int32 EntryPoint);
};

}


