#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x8B8 - 0x830)
// BlueprintGeneratedClass BGA_HighTower_Date_BallLightning_FireMesh.BGA_HighTower_Date_BallLightning_FireMesh_C
class ABGA_HighTower_Date_BallLightning_FireMesh_C : public ABGA_GenericCurieFuel_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x830(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                        Data_SelfPropagationFuel;                          // 0x838(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Data_IgniteNearbyMaterialsRadius;                  // 0x858(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Data_IgniteNearbyMaterialsFireMagnitude;           // 0x878(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Data_IgniteNearbyLandscapeRadius;                  // 0x898(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABGA_HighTower_Date_BallLightning_FireMesh_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue);
	void ExecuteUbergraph_BGA_HighTower_Date_BallLightning_FireMesh(int32 EntryPoint);
};

}


