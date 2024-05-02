#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_RadioNext.BB_RadioNext_C
// (None)

class UClass* UBB_RadioNext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_RadioNext_C");

	return Clss;
}


// BB_RadioNext_C BB_RadioNext.Default__BB_RadioNext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_RadioNext_C* UBB_RadioNext_C::GetDefaultObj()
{
	static class UBB_RadioNext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_RadioNext_C*>(UBB_RadioNext_C::StaticClass()->DefaultObject);

	return Default;
}

}


