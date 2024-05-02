#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xAF8 - 0xAE9)
// BlueprintGeneratedClass GA_HighTower_Date_ChainLightning_Ranged_Projectile.GA_HighTower_Date_ChainLightning_Ranged_Projectile_C
class UGA_HighTower_Date_ChainLightning_Ranged_Projectile_C : public UGA_Ranged_GenericDamage_C
{
public:
	uint8                                        Pad_75E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_HighTower_Date_ChainLightning_Ranged_Projectile_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_HighTower_Date_ChainLightning_Ranged_Projectile(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


