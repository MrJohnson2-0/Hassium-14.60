#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Hightower_Grape_Bramble.FoleyLib_Hightower_Grape_Bramble_C
// (None)

class UClass* UFoleyLib_Hightower_Grape_Bramble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Hightower_Grape_Bramble_C");

	return Clss;
}


// FoleyLib_Hightower_Grape_Bramble_C FoleyLib_Hightower_Grape_Bramble.Default__FoleyLib_Hightower_Grape_Bramble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Hightower_Grape_Bramble_C* UFoleyLib_Hightower_Grape_Bramble_C::GetDefaultObj()
{
	static class UFoleyLib_Hightower_Grape_Bramble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Hightower_Grape_Bramble_C*>(UFoleyLib_Hightower_Grape_Bramble_C::StaticClass()->DefaultObject);

	return Default;
}

}


