#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Interrogate_GC.GE_Interrogate_GC_C
// (None)

class UClass* UGE_Interrogate_GC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Interrogate_GC_C");

	return Clss;
}


// GE_Interrogate_GC_C GE_Interrogate_GC.Default__GE_Interrogate_GC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Interrogate_GC_C* UGE_Interrogate_GC_C::GetDefaultObj()
{
	static class UGE_Interrogate_GC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Interrogate_GC_C*>(UGE_Interrogate_GC_C::StaticClass()->DefaultObject);

	return Default;
}

}


