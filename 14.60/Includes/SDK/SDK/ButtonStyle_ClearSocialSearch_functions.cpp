#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_ClearSocialSearch.ButtonStyle_ClearSocialSearch_C
// (None)

class UClass* UButtonStyle_ClearSocialSearch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_ClearSocialSearch_C");

	return Clss;
}


// ButtonStyle_ClearSocialSearch_C ButtonStyle_ClearSocialSearch.Default__ButtonStyle_ClearSocialSearch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_ClearSocialSearch_C* UButtonStyle_ClearSocialSearch_C::GetDefaultObj()
{
	static class UButtonStyle_ClearSocialSearch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_ClearSocialSearch_C*>(UButtonStyle_ClearSocialSearch_C::StaticClass()->DefaultObject);

	return Default;
}

}


