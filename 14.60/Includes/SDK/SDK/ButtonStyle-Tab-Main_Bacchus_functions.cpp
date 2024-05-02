#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Main_Bacchus.ButtonStyle-Tab-Main_Bacchus_C
// (None)

class UClass* UButtonStyleMinusTabMinusMain_Bacchus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Main_Bacchus_C");

	return Clss;
}


// ButtonStyle-Tab-Main_Bacchus_C ButtonStyle-Tab-Main_Bacchus.Default__ButtonStyle-Tab-Main_Bacchus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusMain_Bacchus_C* UButtonStyleMinusTabMinusMain_Bacchus_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusMain_Bacchus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusMain_Bacchus_C*>(UButtonStyleMinusTabMinusMain_Bacchus_C::StaticClass()->DefaultObject);

	return Default;
}

}


