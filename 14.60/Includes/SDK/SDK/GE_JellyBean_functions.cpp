#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_JellyBean.GE_JellyBean_C
// (None)

class UClass* UGE_JellyBean_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_JellyBean_C");

	return Clss;
}


// GE_JellyBean_C GE_JellyBean.Default__GE_JellyBean_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_JellyBean_C* UGE_JellyBean_C::GetDefaultObj()
{
	static class UGE_JellyBean_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_JellyBean_C*>(UGE_JellyBean_C::StaticClass()->DefaultObject);

	return Default;
}

}


