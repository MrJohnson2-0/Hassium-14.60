#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_RoofO.NavLink_RoofO_C
// (None)

class UClass* UNavLink_RoofO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_RoofO_C");

	return Clss;
}


// NavLink_RoofO_C NavLink_RoofO.Default__NavLink_RoofO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_RoofO_C* UNavLink_RoofO_C::GetDefaultObj()
{
	static class UNavLink_RoofO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_RoofO_C*>(UNavLink_RoofO_C::StaticClass()->DefaultObject);

	return Default;
}

}


