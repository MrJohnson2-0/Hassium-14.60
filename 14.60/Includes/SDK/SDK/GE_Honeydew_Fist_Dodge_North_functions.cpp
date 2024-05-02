#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Honeydew_Fist_Dodge_North.GE_Honeydew_Fist_Dodge_North_C
// (None)

class UClass* UGE_Honeydew_Fist_Dodge_North_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Honeydew_Fist_Dodge_North_C");

	return Clss;
}


// GE_Honeydew_Fist_Dodge_North_C GE_Honeydew_Fist_Dodge_North.Default__GE_Honeydew_Fist_Dodge_North_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Honeydew_Fist_Dodge_North_C* UGE_Honeydew_Fist_Dodge_North_C::GetDefaultObj()
{
	static class UGE_Honeydew_Fist_Dodge_North_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Honeydew_Fist_Dodge_North_C*>(UGE_Honeydew_Fist_Dodge_North_C::StaticClass()->DefaultObject);

	return Default;
}

}


