#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x12D8 - 0x1294)
// BlueprintGeneratedClass B_Assault_Stark_Athena.B_Assault_Stark_Athena_C
class AB_Assault_Stark_Athena_C : public AB_Assault_Generic_C
{
public:
	uint8                                        Pad_70B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsTargetting;                                      // 0x12A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            TransformIntoADSAudio;                             // 0x12A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            TransformOutOfADSAudio;                            // 0x12B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ADSColor;                                          // 0x12B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HipfireColor;                                      // 0x12C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Assault_Stark_Athena_C* GetDefaultObj();

	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void ExecuteUbergraph_B_Assault_Stark_Athena(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UParticleSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bNewIsTargeting, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1);
};

}


