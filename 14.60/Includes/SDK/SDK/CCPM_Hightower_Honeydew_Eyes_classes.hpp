#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4A8 - 0x498)
// BlueprintGeneratedClass CCPM_Hightower_Honeydew_Eyes.CCPM_Hightower_Honeydew_Eyes_C
class ACCPM_Hightower_Honeydew_Eyes_C : public ACCPM_HoneyDew_Body_Optomized_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     FX_Eyes;                                           // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_Hightower_Honeydew_Eyes_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void OnPawnAndPartChanged();
	void ExecuteUbergraph_CCPM_Hightower_Honeydew_Eyes(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


