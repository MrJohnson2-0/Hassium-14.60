#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C
class UNPC_VoiceComponent_C : public UActorComponent
{
public:
	class UFortTaggedSoundBank*                  SoundBank;                                         // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioComponent;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       AttachComponent;                                   // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggerTimeThreshold;                              // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastTriggerTime;                                   // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNPC_VoiceComponent_C* GetDefaultObj();

	void SetSoundBank(class UFortTaggedSoundBank* SoundBank);
	void PlayVoiceLine(struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* CallFunc_GetSoundToPlay_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


