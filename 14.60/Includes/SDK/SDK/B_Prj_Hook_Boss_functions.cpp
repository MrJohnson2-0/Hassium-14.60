#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Hook_Boss.B_Prj_Hook_Boss_C
// (Actor)

class UClass* AB_Prj_Hook_Boss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Hook_Boss_C");

	return Clss;
}


// B_Prj_Hook_Boss_C B_Prj_Hook_Boss.Default__B_Prj_Hook_Boss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Hook_Boss_C* AB_Prj_Hook_Boss_C::GetDefaultObj()
{
	static class AB_Prj_Hook_Boss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Hook_Boss_C*>(AB_Prj_Hook_Boss_C::StaticClass()->DefaultObject);

	return Default;
}

}


