#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_HoagieMoveDown.BB_HoagieMoveDown_C
// (None)

class UClass* UBB_HoagieMoveDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_HoagieMoveDown_C");

	return Clss;
}


// BB_HoagieMoveDown_C BB_HoagieMoveDown.Default__BB_HoagieMoveDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_HoagieMoveDown_C* UBB_HoagieMoveDown_C::GetDefaultObj()
{
	static class UBB_HoagieMoveDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_HoagieMoveDown_C*>(UBB_HoagieMoveDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


