#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Awakening_HightowerDate.GE_Awakening_HightowerDate_C
// (None)

class UClass* UGE_Awakening_HightowerDate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Awakening_HightowerDate_C");

	return Clss;
}


// GE_Awakening_HightowerDate_C GE_Awakening_HightowerDate.Default__GE_Awakening_HightowerDate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Awakening_HightowerDate_C* UGE_Awakening_HightowerDate_C::GetDefaultObj()
{
	static class UGE_Awakening_HightowerDate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Awakening_HightowerDate_C*>(UGE_Awakening_HightowerDate_C::StaticClass()->DefaultObject);

	return Default;
}

}


