#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x481 - 0x450)
// BlueprintGeneratedClass CCPM_EyeFlash.CCPM_EyeFlash_C
class ACCPM_EyeFlash_C : public ACCPM_Parent_WatchCosmeticStat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS;                                                // 0x458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EffectColor;                                       // 0x460(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EffectPositionOffset;                              // 0x470(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        KillCount;                                         // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FXgate;                                            // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACCPM_EyeFlash_C* GetDefaultObj();

	void UserConstructionScript();
	void OnStatChanged_1F1873BA408CFFA47B9E30A71CDCAA22(class FName StatName, int32 StatValue);
	void UpdateBasedOnKills();
	void CustomEvent(int32 StageNumBeingActivated);
	void OnPostResIn();
	void OnPawnAndPartChanged();
	void ReceiveDestroyed();
	void CE_FX_color_change(const struct FLinearColor& NewParam);
	void PreDestruction();
	void ExecuteUbergraph_CCPM_EyeFlash(int32 EntryPoint, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class FName Temp_name_Variable, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, int32 K2Node_Event_StageNumBeingActivated, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_NewParam, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess);
};

}


