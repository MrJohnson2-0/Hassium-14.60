#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Honeydew_Fist_Dodge.GCNL_Honeydew_Fist_Dodge_C
// (Actor)

class UClass* AGCNL_Honeydew_Fist_Dodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Honeydew_Fist_Dodge_C");

	return Clss;
}


// GCNL_Honeydew_Fist_Dodge_C GCNL_Honeydew_Fist_Dodge.Default__GCNL_Honeydew_Fist_Dodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Honeydew_Fist_Dodge_C* AGCNL_Honeydew_Fist_Dodge_C::GetDefaultObj()
{
	static class AGCNL_Honeydew_Fist_Dodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Honeydew_Fist_Dodge_C*>(AGCNL_Honeydew_Fist_Dodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


