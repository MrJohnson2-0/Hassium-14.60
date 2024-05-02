#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9A1 - 0x998)
// BlueprintGeneratedClass BGA_LowTower_Held_Chaplin_Parent.BGA_LowTower_Held_Chaplin_Parent_C
class ABGA_LowTower_Held_Chaplin_Parent_C : public ABGA_HeldWeapon_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x998(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bHasExploded;                                      // 0x9A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABGA_LowTower_Held_Chaplin_Parent_C* GetDefaultObj();

	void OnRep_bHasExploded();
	void OnExplosionNotify(bool Exploded);
	void ExecuteUbergraph_BGA_LowTower_Held_Chaplin_Parent(int32 EntryPoint, bool K2Node_CustomEvent_Exploded);
};

}


