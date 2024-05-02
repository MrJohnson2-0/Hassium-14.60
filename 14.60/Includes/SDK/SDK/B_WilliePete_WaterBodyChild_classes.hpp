#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF30 - 0xF20)
// BlueprintGeneratedClass B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C
class AB_WilliePete_WaterBodyChild_C : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Debug;                                             // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_WilliePete_WaterBodyChild_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_WilliePete_WaterBodyChild(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
};

}


