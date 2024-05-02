#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HoagieUI.FortHoagieVehicleReticle
// (None)

class UClass* UFortHoagieVehicleReticle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHoagieVehicleReticle");

	return Clss;
}


// FortHoagieVehicleReticle HoagieUI.Default__FortHoagieVehicleReticle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHoagieVehicleReticle* UFortHoagieVehicleReticle::GetDefaultObj()
{
	static class UFortHoagieVehicleReticle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHoagieVehicleReticle*>(UFortHoagieVehicleReticle::StaticClass()->DefaultObject);

	return Default;
}


// Function HoagieUI.FortHoagieVehicleReticle.OnSetupComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicleReticle::OnSetupComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicleReticle", "OnSetupComplete");



	UObject::ProcessEvent(Func, nullptr);

}

}


