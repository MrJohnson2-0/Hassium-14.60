#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Melee_Dodge.GCNL_Melee_Dodge_C
// (Actor)

class UClass* AGCNL_Melee_Dodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Melee_Dodge_C");

	return Clss;
}


// GCNL_Melee_Dodge_C GCNL_Melee_Dodge.Default__GCNL_Melee_Dodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Melee_Dodge_C* AGCNL_Melee_Dodge_C::GetDefaultObj()
{
	static class AGCNL_Melee_Dodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Melee_Dodge_C*>(AGCNL_Melee_Dodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


