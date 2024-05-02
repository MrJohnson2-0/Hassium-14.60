#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7A (0xC32 - 0xBB8)
// BlueprintGeneratedClass Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C
class ACreative_Device_Prop_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreative_VisibleInGame_Component_C*   VisibleInGameComponent;                            // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCreative_Enabled_Component_C*         EnabledComponent;                                  // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameProgressComponent*        FortMinigameProgress;                              // 0xBD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xBD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        ActivateOnGamePhase;                               // 0xBE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EnabledIndex;                                      // 0xBE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Device_Activated;                               // 0xBE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AController*                           Instigating_Controller;                            // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsVisible;                                        // 0xC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_69A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Device_Initialized;                             // 0xC08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Knob_Health;                                       // 0xC18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Play_Mode_Changed;                              // 0xC20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Update_on_Minigame_State_Change;                   // 0xC30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Update_on_Play_Mode_Changed;                       // 0xC31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACreative_Device_Prop_Parent_C* GetDefaultObj();

	void GetVisibilityComponentsWithCollisionOverrides(TMap<class USceneComponent*, enum class ECollisionEnabled>* VisibilityComponents, TMap<class USceneComponent*, enum class ECollisionEnabled> K2Node_MakeMap_Map);
	void GetVisibilityComponents(TArray<class USceneComponent*>* VisibilityComponents, TArray<class USceneComponent*>& K2Node_MakeArray_Array);
	void Update_Visibility_In_Game(bool Temp_bool_Variable, enum class EVisibleInGameState Temp_byte_Variable, enum class EVisibleInGameState Temp_byte_Variable_1, bool CallFunc_Is_Visible_In_Game_Visible, enum class EVisibleInGameState K2Node_Select_Default);
	void Is_Visible_In_Game(bool* Visible);
	void IsInPlayMode(bool* bIsInPlayMode, bool CallFunc_IsInPlayMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	float BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser, bool CallFunc_IsInPlayMode_bIsInPlayMode, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Activate_Device_Failed();
	void Attempt_Activate_Device(class AController* Instigating_Controller, bool Additional_Requirements, bool CallFunc_IsEnabled_Enabled, bool CallFunc_BooleanAND_ReturnValue);
	void Initialize_Device(bool CallFunc_IsInPlayMode_bIsInPlayMode);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, bool bInteractSuccess, bool CallFunc_IsInPlayMode_bIsInPlayMode, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void Activate_Device();
	void Activate_on_Phase(enum class EFortMinigameState State, bool CallFunc_IsInPlayMode_bIsInPlayMode, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsActivatedOnPhase_Enabled);
	void PlayModeChanged(class AFortMinigame* Minigame, bool bIsInPlayMode, bool CallFunc_HasAuthority_ReturnValue);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void On_Mingame_State_Changed(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
	void ReceiveBeginPlay();
	void OnWorldReady();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature();
	void OnMinigameStarted();
	void OnMinigameEnded();
	void ExecuteUbergraph_Creative_Device_Prop_Parent(int32 EntryPoint, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame, bool CallFunc_IsValid_ReturnValue, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortMinigame* K2Node_CustomEvent_Minigame, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class USceneComponent*>& CallFunc_GetVisibilityComponents_VisibilityComponents, TMap<class USceneComponent*, enum class ECollisionEnabled> CallFunc_GetVisibilityComponentsWithCollisionOverrides_VisibilityComponents);
	void On_Play_Mode_Changed__DelegateSignature(bool New_Play_Mode);
	void On_Device_Initialized__DelegateSignature();
	void On_Device_Activated__DelegateSignature();
};

}


