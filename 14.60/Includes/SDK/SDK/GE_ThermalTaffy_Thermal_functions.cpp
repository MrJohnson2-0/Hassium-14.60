#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ThermalTaffy_Thermal.GE_ThermalTaffy_Thermal_C
// (None)

class UClass* UGE_ThermalTaffy_Thermal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ThermalTaffy_Thermal_C");

	return Clss;
}


// GE_ThermalTaffy_Thermal_C GE_ThermalTaffy_Thermal.Default__GE_ThermalTaffy_Thermal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ThermalTaffy_Thermal_C* UGE_ThermalTaffy_Thermal_C::GetDefaultObj()
{
	static class UGE_ThermalTaffy_Thermal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ThermalTaffy_Thermal_C*>(UGE_ThermalTaffy_Thermal_C::StaticClass()->DefaultObject);

	return Default;
}

}


