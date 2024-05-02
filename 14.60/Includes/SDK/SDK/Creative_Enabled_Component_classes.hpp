#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAB (0x163 - 0xB8)
// BlueprintGeneratedClass Creative_Enabled_Component.Creative_Enabled_Component_C
class UCreative_Enabled_Component_C : public UCreative_DeviceComponent_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FCreative_EnabledState                EnabledState;                                      // 0xC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Enabled_State_Changed;                          // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         EnabledDuringPlayMode;                             // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnabledDuringEditMode;                             // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Reset_Complete;                                 // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          Reset_Timer;                                       // 0xF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSet<enum class EFortMinigameState>          IgnorePhases;                                      // 0xF8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ResetDelay;                                        // 0x148(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Enabled_Index;                                     // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Can_be_Enabled_During_Edit_Mode;                   // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMinigameLogicComponent*           Logic_Component;                                   // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Switch_On_Phase_Change;                            // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Switch_On_Play_Change;                             // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanBeEnabledDuringPreview;                         // 0x162(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCreative_Enabled_Component_C* GetDefaultObj();

	void Can_be_Enabled(bool* TURR, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInPlayMode_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess);
	void OnRep_EIsEnabled(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void IsResetting(bool* TURR, float* Remaining_Time, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Reset_Delay_Start(float Delay, const struct FCreative_EnabledState& K2Node_MakeStruct_Creative_EnabledState, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsEnabled_Enabled, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsResetting_True, float CallFunc_IsResetting_Remaining_Time, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void Reset_Delay_Complete(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Set_Enabled_on_Play_Mode(bool Play_Mode);
	void Set_Enabled(bool bEnabled, enum class EEnabledState Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EEnabledState Temp_byte_Variable_1, bool CallFunc_Can_be_Enabled_True, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, enum class EEnabledState K2Node_Select_Default, const struct FCreative_EnabledState& K2Node_MakeStruct_Creative_EnabledState, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void IsEnabled(bool* Enabled, bool CallFunc_Can_be_Enabled_True, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_Enabled_on_Phase(enum class EFortMinigameState State, int32 EnabledIndex, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsEnabledPhaseMatch_Enabled, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize_Component(class UFortMinigameLogicComponent* Logic_Component, int32 Enabled_Index);
	void Bind_to_Minigame(class AFortMinigame* Minigame);
	void Minigame_State_Changed(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
	void Minigame_Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void ExecuteUbergraph_Creative_Enabled_Component(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortMinigameLogicComponent* K2Node_CustomEvent_Logic_Component, int32 K2Node_CustomEvent_Enabled_Index, class AFortMinigame* K2Node_CustomEvent_Minigame_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortMinigame* K2Node_CustomEvent_Minigame_1, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, class AActor* CallFunc_GetOwner_ReturnValue, class AFortMinigame* K2Node_CustomEvent_Minigame, bool K2Node_CustomEvent_bIsInPlayMode, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void On_Reset_Complete__DelegateSignature();
	void On_Enabled_State_Changed__DelegateSignature(bool Enabled);
};

}


