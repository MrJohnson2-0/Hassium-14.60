#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x390 - 0x380)
// Class HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro
class AFortAthenaMutator_HighTowerAbilityIntro : public AFortAthenaMutator_GameModeBase
{
public:
	struct FGameplayTag                          ShowAbilityIntroTag;                               // 0x380(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPlayOnlyOnce;                                     // 0x388(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B5F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_HighTowerAbilityIntro* GetDefaultObj();

	void OnBeginSkydiveFromBus(class AFortPlayerControllerZone* PlayerController);
};

// 0x10 (0x300 - 0x2F0)
// Class HighTowerRuntime.FortItemLayerAnimInstance_DateGaunlets
class UFortItemLayerAnimInstance_DateGaunlets : public UFortBaseLayerAnimInstance
{
public:
	bool                                         bIsBoostJumping;                                   // 0x2F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B63[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemLayerAnimInstance_DateGaunlets* GetDefaultObj();

};

}


