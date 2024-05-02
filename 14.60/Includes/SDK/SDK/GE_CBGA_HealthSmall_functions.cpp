#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CBGA_HealthSmall.GE_CBGA_HealthSmall_C
// (None)

class UClass* UGE_CBGA_HealthSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CBGA_HealthSmall_C");

	return Clss;
}


// GE_CBGA_HealthSmall_C GE_CBGA_HealthSmall.Default__GE_CBGA_HealthSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CBGA_HealthSmall_C* UGE_CBGA_HealthSmall_C::GetDefaultObj()
{
	static class UGE_CBGA_HealthSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CBGA_HealthSmall_C*>(UGE_CBGA_HealthSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


