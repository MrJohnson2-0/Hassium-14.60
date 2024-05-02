#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_ValetBoost.BB_ValetBoost_C
// (None)

class UClass* UBB_ValetBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_ValetBoost_C");

	return Clss;
}


// BB_ValetBoost_C BB_ValetBoost.Default__BB_ValetBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_ValetBoost_C* UBB_ValetBoost_C::GetDefaultObj()
{
	static class UBB_ValetBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_ValetBoost_C*>(UBB_ValetBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


