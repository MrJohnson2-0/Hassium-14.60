#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EventMode_Activator_Component.EventMode_Activator_Component_C
// (None)

class UClass* UEventMode_Activator_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventMode_Activator_Component_C");

	return Clss;
}


// EventMode_Activator_Component_C EventMode_Activator_Component.Default__EventMode_Activator_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventMode_Activator_Component_C* UEventMode_Activator_Component_C::GetDefaultObj()
{
	static class UEventMode_Activator_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventMode_Activator_Component_C*>(UEventMode_Activator_Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


