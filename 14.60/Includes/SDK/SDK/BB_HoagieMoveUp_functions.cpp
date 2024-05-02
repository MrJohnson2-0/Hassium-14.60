#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_HoagieMoveUp.BB_HoagieMoveUp_C
// (None)

class UClass* UBB_HoagieMoveUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_HoagieMoveUp_C");

	return Clss;
}


// BB_HoagieMoveUp_C BB_HoagieMoveUp.Default__BB_HoagieMoveUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_HoagieMoveUp_C* UBB_HoagieMoveUp_C::GetDefaultObj()
{
	static class UBB_HoagieMoveUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_HoagieMoveUp_C*>(UBB_HoagieMoveUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


