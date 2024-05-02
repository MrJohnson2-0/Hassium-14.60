#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xBF0 - 0xBE0)
// BlueprintGeneratedClass B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C
class AB_Prj_Athena_BirthdayGiftBox_C : public AB_Prj_Athena_GiftBox_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       InAirAudio;                                        // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_Athena_BirthdayGiftBox_C* GetDefaultObj();

	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults);
};

}


