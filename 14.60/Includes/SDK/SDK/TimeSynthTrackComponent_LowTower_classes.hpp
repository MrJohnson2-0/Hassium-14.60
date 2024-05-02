#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x230 - 0x209)
// BlueprintGeneratedClass TimeSynthTrackComponent_LowTower.TimeSynthTrackComponent_LowTower_C
class UTimeSynthTrackComponent_LowTower_C : public UBP_TimeSynthTrackComponent_DataTracker_C
{
public:
	uint8                                        Pad_780E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          UnawareTag;                                        // 0x20C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AlertedTag;                                        // 0x214(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AggressiveTag;                                     // 0x21C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        UnawareInterp;                                     // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AlertedInterp;                                     // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AggressiveInterp;                                  // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTimeSynthTrackComponent_LowTower_C* GetDefaultObj();

	void GetRemainingEventCooldown(float* Cooldown, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void OnDataTrackerUpdate(float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_GetEventValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetEventValue_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1, float CallFunc_GetEventValue_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue_2);
};

}


