#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC80 - 0xC78)
// BlueprintGeneratedClass GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C
class UGA_HeldObject_Throw_Component_TnTina_C : public UGA_HeldObject_Throw_Component_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC78(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_HeldObject_Throw_Component_TnTina_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina(int32 EntryPoint);
};

}


