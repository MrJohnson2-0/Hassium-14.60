#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_RoofD.NavLink_RoofD_C
// (None)

class UClass* UNavLink_RoofD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_RoofD_C");

	return Clss;
}


// NavLink_RoofD_C NavLink_RoofD.Default__NavLink_RoofD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_RoofD_C* UNavLink_RoofD_C::GetDefaultObj()
{
	static class UNavLink_RoofD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_RoofD_C*>(UNavLink_RoofD_C::StaticClass()->DefaultObject);

	return Default;
}

}


