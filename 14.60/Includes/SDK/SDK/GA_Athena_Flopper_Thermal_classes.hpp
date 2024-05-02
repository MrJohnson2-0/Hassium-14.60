#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xBE8 - 0xBE0)
// BlueprintGeneratedClass GA_Athena_Flopper_Thermal.GA_Athena_Flopper_Thermal_C
class UGA_Athena_Flopper_Thermal_C : public UGA_Athena_MedConsumable_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_Flopper_Thermal_C* GetDefaultObj();

	void K2_CommitExecute();
	void ExecuteUbergraph_GA_Athena_Flopper_Thermal(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue);
};

}


