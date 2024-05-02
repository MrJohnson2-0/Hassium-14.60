#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Petrol_Explode_VehicleDamage.GE_Petrol_Explode_VehicleDamage_C
// (None)

class UClass* UGE_Petrol_Explode_VehicleDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Petrol_Explode_VehicleDamage_C");

	return Clss;
}


// GE_Petrol_Explode_VehicleDamage_C GE_Petrol_Explode_VehicleDamage.Default__GE_Petrol_Explode_VehicleDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Petrol_Explode_VehicleDamage_C* UGE_Petrol_Explode_VehicleDamage_C::GetDefaultObj()
{
	static class UGE_Petrol_Explode_VehicleDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Petrol_Explode_VehicleDamage_C*>(UGE_Petrol_Explode_VehicleDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


