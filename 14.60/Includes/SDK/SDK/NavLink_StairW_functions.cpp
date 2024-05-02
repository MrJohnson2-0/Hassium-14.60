#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_StairW.NavLink_StairW_C
// (None)

class UClass* UNavLink_StairW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_StairW_C");

	return Clss;
}


// NavLink_StairW_C NavLink_StairW.Default__NavLink_StairW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_StairW_C* UNavLink_StairW_C::GetDefaultObj()
{
	static class UNavLink_StairW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_StairW_C*>(UNavLink_StairW_C::StaticClass()->DefaultObject);

	return Default;
}

}


