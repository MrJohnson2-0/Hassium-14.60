#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_RoofI.NavLink_RoofI_C
// (None)

class UClass* UNavLink_RoofI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_RoofI_C");

	return Clss;
}


// NavLink_RoofI_C NavLink_RoofI.Default__NavLink_RoofI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_RoofI_C* UNavLink_RoofI_C::GetDefaultObj()
{
	static class UNavLink_RoofI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_RoofI_C*>(UNavLink_RoofI_C::StaticClass()->DefaultObject);

	return Default;
}

}


