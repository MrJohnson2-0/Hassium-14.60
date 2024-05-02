#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x320 - 0x318)
// Class HydrogenUI.HydrogenWidgetBase
class UHydrogenWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_Hydrogen*           CachedHydrogenMutator;                             // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHydrogenWidgetBase* GetDefaultObj();

	void OnMutatorAvailable(class AFortGameplayMutator* MutatorActor);
	void MutatorReady(class AFortAthenaMutator_Hydrogen* MutatorActor);
	class AFortAthenaMutator_Hydrogen* GetHydrogenMutator();
	float GetCaptureProgressPercent(class AHydrogenObjectiveActor* InObjective);
};

}


