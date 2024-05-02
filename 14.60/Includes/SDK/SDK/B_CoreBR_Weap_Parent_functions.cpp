#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CoreBR_Weap_Parent.B_CoreBR_Weap_Parent_C
// (Actor)

class UClass* AB_CoreBR_Weap_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CoreBR_Weap_Parent_C");

	return Clss;
}


// B_CoreBR_Weap_Parent_C B_CoreBR_Weap_Parent.Default__B_CoreBR_Weap_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CoreBR_Weap_Parent_C* AB_CoreBR_Weap_Parent_C::GetDefaultObj()
{
	static class AB_CoreBR_Weap_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CoreBR_Weap_Parent_C*>(AB_CoreBR_Weap_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


