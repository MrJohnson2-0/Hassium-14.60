#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PurpleMouse_ApplyLOSChecker.GE_PurpleMouse_ApplyLOSChecker_C
// (None)

class UClass* UGE_PurpleMouse_ApplyLOSChecker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PurpleMouse_ApplyLOSChecker_C");

	return Clss;
}


// GE_PurpleMouse_ApplyLOSChecker_C GE_PurpleMouse_ApplyLOSChecker.Default__GE_PurpleMouse_ApplyLOSChecker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PurpleMouse_ApplyLOSChecker_C* UGE_PurpleMouse_ApplyLOSChecker_C::GetDefaultObj()
{
	static class UGE_PurpleMouse_ApplyLOSChecker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PurpleMouse_ApplyLOSChecker_C*>(UGE_PurpleMouse_ApplyLOSChecker_C::StaticClass()->DefaultObject);

	return Default;
}

}


