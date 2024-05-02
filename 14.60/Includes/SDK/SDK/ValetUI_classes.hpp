#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// Class ValetUI.FortAthenaVehicleDashboardWidget_Valet
class UFortAthenaVehicleDashboardWidget_Valet : public UFortAthenaVehicleDashboardWidget
{
public:
	uint8                                        Pad_23C3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaVehicleDashboardWidget_Valet* GetDefaultObj();

	void SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost);
	void OnWidgetVisibilityChanged(bool bNewVisibility);
	void OnValetNameUpdated();
	void OnUpdateRechargeableBoostPercent(float BoostPercent);
	void OnRPMChanged(float NormalizedRPM);
	void OnRechargableBoostFilled();
	class AFortDagwoodVehicle* GetDagwoodVehicle();
};

// 0x8 (0x100 - 0xF8)
// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
class UFortMobileActionButtonBehavior_ValetBoost : public UFortMobileActionButtonBehavior
{
public:
	uint8                                        Pad_23C4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMobileActionButtonBehavior_ValetBoost* GetDefaultObj();

};

}


