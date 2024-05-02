#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x248 - 0x238)
// BlueprintGeneratedClass Frontend_BP14_Room_A_Art.Frontend_BP14_Room_A_Art_C
class AFrontend_BP14_Room_A_Art_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAmbientSound*                         S14_AMB_MainRoom_Cue_2_ExecuteUbergraph_Frontend_BP14_Room_A_Art_RefProperty; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_BP14_Room_A_Art_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_BP14_Room_A_Art(int32 EntryPoint);
};

}


