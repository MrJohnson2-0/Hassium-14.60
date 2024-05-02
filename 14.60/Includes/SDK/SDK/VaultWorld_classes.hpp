#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x2C9 - 0x2C0)
// BlueprintGeneratedClass VaultWorld.VaultWorld_C
class AVaultWorld_C : public AFortItemPreviewWorld
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bIsPrimaryBackgroundActive;                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AVaultWorld_C* GetDefaultObj();

	void GetVaultRotator(class AVaultRotator_C** VaultRotator, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator, bool K2Node_DynamicCast_bSuccess);
	void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FTrackDynamicBackground& BackgroundInfo);
	void OnTransitionBackground(bool bPlayForward);
	void ReceiveBeginPlay();
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void ExecuteUbergraph_VaultWorld(int32 EntryPoint, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FTrackDynamicBackground& K2Node_Event_BackgroundInfo, bool K2Node_Event_bPlayForward);
};

}


