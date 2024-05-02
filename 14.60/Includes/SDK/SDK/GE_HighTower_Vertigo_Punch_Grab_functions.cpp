#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_Vertigo_Punch_Grab.GE_HighTower_Vertigo_Punch_Grab_C
// (None)

class UClass* UGE_HighTower_Vertigo_Punch_Grab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_Vertigo_Punch_Grab_C");

	return Clss;
}


// GE_HighTower_Vertigo_Punch_Grab_C GE_HighTower_Vertigo_Punch_Grab.Default__GE_HighTower_Vertigo_Punch_Grab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_Vertigo_Punch_Grab_C* UGE_HighTower_Vertigo_Punch_Grab_C::GetDefaultObj()
{
	static class UGE_HighTower_Vertigo_Punch_Grab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_Vertigo_Punch_Grab_C*>(UGE_HighTower_Vertigo_Punch_Grab_C::StaticClass()->DefaultObject);

	return Default;
}

}


