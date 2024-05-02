#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4A8 - 0x498)
// BlueprintGeneratedClass SoldierMannequin_Male.SoldierMannequin_Male_C
class ASoldierMannequin_Male_C : public AFortPlayerMannequin
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       MannequinAudio;                                    // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASoldierMannequin_Male_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_SoldierMannequin_Male(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


