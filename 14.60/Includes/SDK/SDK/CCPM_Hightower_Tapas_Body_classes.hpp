#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x418 - 0x3F9)
// BlueprintGeneratedClass CCPM_Hightower_Tapas_Body.CCPM_Hightower_Tapas_Body_C
class ACCPM_Hightower_Tapas_Body_C : public ACCPM_Base_C
{
public:
	uint8                                        Pad_7C1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     FX_Eyes_Idle;                                      // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Body_Sparkles;                                     // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_Hightower_Tapas_Body_C* GetDefaultObj();

	void OnPawnAndPartChanged();
	void ExecuteUbergraph_CCPM_Hightower_Tapas_Body(int32 EntryPoint, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
};

}


