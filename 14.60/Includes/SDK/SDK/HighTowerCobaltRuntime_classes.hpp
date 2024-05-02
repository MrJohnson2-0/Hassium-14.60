#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xCD0 - 0xC20)
// Class HighTowerCobaltRuntime.FortAthenaMutator_CobaltHighTower
class AFortAthenaMutator_CobaltHighTower : public AFortAthenaMutator_Cobalt
{
public:
	struct FGameplayTag                          ShowAbilityIntroTag;                               // 0xC20(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bPreventDamageToBuildingsDuringWarmup;             // 0xC28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bAllowBuildingDuringWarmup;                        // 0xC48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGameplayEffect>           BlockBuildAbilityGameplayEffect;                   // 0xC68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          JumpAbilityActionTag;                              // 0xC70(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_InventoryOverride_Bucket* InventoryOverrideBucketMutator;                    // 0xC78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2154[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_CobaltHighTower* GetDefaultObj();

};

}


