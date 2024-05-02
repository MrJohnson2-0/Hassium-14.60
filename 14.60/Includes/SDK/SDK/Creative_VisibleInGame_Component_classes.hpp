#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B (0x143 - 0xB8)
// BlueprintGeneratedClass Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C
class UCreative_VisibleInGame_Component_C : public UCreative_DeviceComponent_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            On_Visibility_Changed;                             // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class USceneComponent*>               VisibleSceneComponents;                            // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         bEnableCollisionUpdates;                           // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ECollisionEnabled                 Default_Collision_Enabled_State;                   // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 Collision_Disabled_State;                          // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVisibleInGameState               VisibleDuringPhase;                                // 0xE3(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bResetOnComponentActivation;                       // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          RetryBindMiniGameEventsTimer;                      // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class USceneComponent*, enum class ECollisionEnabled> Collision_Enabled_Overrides;                       // 0xF0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class Enum_ForcedValueDuringGame        ForcedVisibilityDuringGame;                        // 0x140(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSetHiddenInGame;                               // 0x141(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Update_Foliage_on_Visibility_Change;               // 0x142(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCreative_VisibleInGame_Component_C* GetDefaultObj();

	void Update_Foliage(bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess);
	void OnRep_ForcedVisibilityDuringGame();
	void SetForcedVisibilityDuringGame(enum class Enum_ForcedValueDuringGame NewForcedVisibilityDuringGame, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void Update_Array_Visibility(TArray<class USceneComponent*>& Array, bool CacheVisible, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Conv_IntToBool_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Should_Be_Visible_Visible);
	void Set_Visibility_Components_with_Collision(TMap<class USceneComponent*, enum class ECollisionEnabled> Collision_Overrides, TArray<class USceneComponent*>& CallFunc_Map_Keys_Keys);
	void Should_Be_Visible(bool* Visible, bool Temp_bool_Variable, bool CallFunc_Is_In_Play_Mode_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class Enum_ForcedValueDuringGame Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_Select_Default);
	void OnRep_VisibleDuringPhase();
	void Set_Visibility_Components(TArray<class USceneComponent*>& Scene_Components, const TArray<enum class ECollisionEnabled>& Local_Collision_List);
	bool Is_In_Play_Mode(class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AFortVolume* CallFunc_GetVolumeForActor_ReturnValue, class AFortMinigame* CallFunc_GetMinigameForVolume_ReturnValue, bool CallFunc_IsReadOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsInPlayMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void Update_Particle_Component(class UParticleSystemComponent* Particle_Component, bool Visible, bool CallFunc_IsValid_ReturnValue);
	void Update_Audio_Component(class UAudioComponent* Audio_Component, bool Visible, bool CallFunc_IsValid_ReturnValue);
	void Update_Primitive_Component_Collision(class UPrimitiveComponent* Primitive_Component, bool Visible, bool CallFunc_IsValid_ReturnValue, enum class ECollisionEnabled CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ECollisionEnabled K2Node_Select_Default, enum class ECollisionEnabled K2Node_Select_Default_1);
	void Update_Component_Visibility(class USceneComponent* Component, bool Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UParticleSystemComponent* K2Node_DynamicCast_AsParticle_System_Component, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* K2Node_DynamicCast_AsAudio_Component, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess_2);
	void Set_Visiblity_During_Phase(enum class EVisibleInGameState New_Visible_During_Phase, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void Update_Visibility(TArray<class USceneComponent*>& CallFunc_Get_Visibility_Components_Components);
	void Get_Visibility_Components(TArray<class USceneComponent*>* Components);
	void ReceiveBeginPlay();
	void OnPlayModeChangedDelegate(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void Bind_Minigame_Events();
	void OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
	void ExecuteUbergraph_Creative_VisibleInGame_Component(int32 EntryPoint, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, class AFortMinigame* K2Node_CustomEvent_Minigame_1, bool K2Node_CustomEvent_bIsInPlayMode, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AFortMinigame* CallFunc_GetMinigameFromVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortMinigame* K2Node_CustomEvent_Minigame, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void On_Visibility_Changed__DelegateSignature(bool Visible);
};

}


