#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D8 - 0x2C8)
// Class HoagieUI.FortHoagieVehicleReticle
class UFortHoagieVehicleReticle : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_5A2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortHoagieVehicle*                    OwningHoagieVehicle;                               // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHoagieVehicleReticle* GetDefaultObj();

	void OnSetupComplete();
};

}


