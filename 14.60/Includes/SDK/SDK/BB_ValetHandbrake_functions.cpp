#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_ValetHandbrake.BB_ValetHandbrake_C
// (None)

class UClass* UBB_ValetHandbrake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_ValetHandbrake_C");

	return Clss;
}


// BB_ValetHandbrake_C BB_ValetHandbrake.Default__BB_ValetHandbrake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_ValetHandbrake_C* UBB_ValetHandbrake_C::GetDefaultObj()
{
	static class UBB_ValetHandbrake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_ValetHandbrake_C*>(UBB_ValetHandbrake_C::StaticClass()->DefaultObject);

	return Default;
}

}


