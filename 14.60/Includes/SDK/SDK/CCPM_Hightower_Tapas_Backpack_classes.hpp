#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x418 - 0x3F9)
// BlueprintGeneratedClass CCPM_Hightower_Tapas_Backpack.CCPM_Hightower_Tapas_Backpack_C
class ACCPM_Hightower_Tapas_Backpack_C : public ACCPM_Base_C
{
public:
	uint8                                        Pad_7C29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Backpack_Lightning;                                // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Backpack_Sparkles;                                 // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_Hightower_Tapas_Backpack_C* GetDefaultObj();

	void OnPawnAndPartChanged();
	void ExecuteUbergraph_CCPM_Hightower_Tapas_Backpack(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


