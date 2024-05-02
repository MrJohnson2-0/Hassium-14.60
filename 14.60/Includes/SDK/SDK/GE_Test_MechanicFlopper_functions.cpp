#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Test_MechanicFlopper.GE_Test_MechanicFlopper_C
// (None)

class UClass* UGE_Test_MechanicFlopper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Test_MechanicFlopper_C");

	return Clss;
}


// GE_Test_MechanicFlopper_C GE_Test_MechanicFlopper.Default__GE_Test_MechanicFlopper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Test_MechanicFlopper_C* UGE_Test_MechanicFlopper_C::GetDefaultObj()
{
	static class UGE_Test_MechanicFlopper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Test_MechanicFlopper_C*>(UGE_Test_MechanicFlopper_C::StaticClass()->DefaultObject);

	return Default;
}

}


