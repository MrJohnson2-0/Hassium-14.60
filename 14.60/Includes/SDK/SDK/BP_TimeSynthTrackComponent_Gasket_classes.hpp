#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x230 - 0x209)
// BlueprintGeneratedClass BP_TimeSynthTrackComponent_Gasket.BP_TimeSynthTrackComponent_Gasket_C
class UBP_TimeSynthTrackComponent_Gasket_C : public UBP_TimeSynthTrackComponent_DataTracker_C
{
public:
	uint8                                        Pad_6056[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpFloat_Unaware;                               // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpFloat_Alerted;                               // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpFloat_Aggressive;                            // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AccumulationTag_Agressive;                         // 0x218(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AccumulationTag_Alerted;                           // 0x220(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AccumulationTag_Unaware;                           // 0x228(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_TimeSynthTrackComponent_Gasket_C* GetDefaultObj();

	void HandleMixState(float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3);
	void GetRemainingEventCooldown(float* Cooldown, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void OnDataTrackerUpdate(float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTrackerComponent, float CallFunc_GetAccumulationValue_ReturnValue, float CallFunc_GetAccumulationValue_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, float CallFunc_GetAccumulationValue_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue_2);
};

}


