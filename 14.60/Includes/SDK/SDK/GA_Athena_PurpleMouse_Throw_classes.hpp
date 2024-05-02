#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0xE88 - 0xE24)
// BlueprintGeneratedClass GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C
class UGA_Athena_PurpleMouse_Throw_C : public UGA_ThrowConsumable_C
{
public:
	uint8                                        Pad_60EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              FX_OnHand;                                         // 0xE30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ChargeUpCue;                                       // 0xE38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        RectSize;                                          // 0xE40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Range;                                             // 0xE60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                AimedPlayer;                                       // 0xE80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_PurpleMouse_Throw_C* GetDefaultObj();

	void GetPlayer(class AActor* PlayerOrVehicle, class AActor** Player, const struct FGameplayTagContainer& PropTag, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class ABuildingGameplayActorPlayerPropAttachment* CallFunc_GetPossessedProp_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_PurpleMouse_Throw(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_GetFireLocation_ReturnValue);
};

}


