#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_RoofS.NavLink_RoofS_C
// (None)

class UClass* UNavLink_RoofS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_RoofS_C");

	return Clss;
}


// NavLink_RoofS_C NavLink_RoofS.Default__NavLink_RoofS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_RoofS_C* UNavLink_RoofS_C::GetDefaultObj()
{
	static class UNavLink_RoofS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_RoofS_C*>(UNavLink_RoofS_C::StaticClass()->DefaultObject);

	return Default;
}

}


