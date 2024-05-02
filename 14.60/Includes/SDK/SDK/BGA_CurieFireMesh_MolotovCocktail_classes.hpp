#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x850 - 0x830)
// BlueprintGeneratedClass BGA_CurieFireMesh_MolotovCocktail.BGA_CurieFireMesh_MolotovCocktail_C
class ABGA_CurieFireMesh_MolotovCocktail_C : public ABGA_GenericCurieFuel_Parent_C
{
public:
	struct FScalableFloat                        SelfPropagationFuelRowValue;                       // 0x830(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABGA_CurieFireMesh_MolotovCocktail_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
};

}


