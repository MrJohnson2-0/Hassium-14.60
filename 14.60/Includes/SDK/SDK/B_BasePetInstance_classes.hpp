#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A0 - 0x290)
// BlueprintGeneratedClass B_BasePetInstance.B_BasePetInstance_C
class AB_BasePetInstance_C : public AFortPlayerPet
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                LinkedLayerAnimClass;                              // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_BasePetInstance_C* GetDefaultObj();

	void PetMaterialsOverride();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_BasePetInstance(int32 EntryPoint, bool CallFunc_IsValidClass_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, bool CallFunc_IsInFrontEndHologram_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


