#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xAD0 - 0xAB9)
// BlueprintGeneratedClass GAT_DanceGrenade.GAT_DanceGrenade_C
class UGAT_DanceGrenade_C : public UGAT_TriggeredAbility_C
{
public:
	uint8                                        Pad_5DF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAT_DanceGrenade_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_DanceGrenade(int32 EntryPoint);
};

}


