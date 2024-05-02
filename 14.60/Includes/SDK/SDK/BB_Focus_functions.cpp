#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_Focus.BB_Focus_C
// (None)

class UClass* UBB_Focus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_Focus_C");

	return Clss;
}


// BB_Focus_C BB_Focus.Default__BB_Focus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_Focus_C* UBB_Focus_C::GetDefaultObj()
{
	static class UBB_Focus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_Focus_C*>(UBB_Focus_C::StaticClass()->DefaultObject);

	return Default;
}

}


