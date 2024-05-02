#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x838 - 0x830)
// BlueprintGeneratedClass BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C
class ABGA_CurieFireMesh_FrostedTips_Fireball_C : public ABGA_GenericCurieFuel_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x830(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABGA_CurieFireMesh_FrostedTips_Fireball_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball(int32 EntryPoint);
};

}


