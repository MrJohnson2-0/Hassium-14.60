#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC40 - 0xC34)
// BlueprintGeneratedClass GA_Throw_FireExtinguisher_AsHeldObjectBGA.GA_Throw_FireExtinguisher_AsHeldObjectBGA_C
class UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C : public UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C
{
public:
	uint8                                        Pad_552B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C* GetDefaultObj();

	void UpdateDummyProjectileBGA();
	void UpdateSpawnedBGA_ServerOnly_();
	void ExecuteUbergraph_GA_Throw_FireExtinguisher_AsHeldObjectBGA(int32 EntryPoint, class ABGA_FireExtinguisher_Pickup_C* K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup, bool K2Node_DynamicCast_bSuccess, class UFortItemEntryComponent* CallFunc_GetComponentByClass_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_TakeItemFromInventoryOwner_InventoryOwner_CastInput, bool CallFunc_TakeItemFromInventoryOwner_ReturnValue);
};

}


