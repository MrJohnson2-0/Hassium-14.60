#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Athena_WitchBroom__Camera_LensEffect.BP_Athena_WitchBroom__Camera_LensEffect_C
// (Actor)

class UClass* ABP_Athena_WitchBroom__Camera_LensEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Athena_WitchBroom__Camera_LensEffect_C");

	return Clss;
}


// BP_Athena_WitchBroom__Camera_LensEffect_C BP_Athena_WitchBroom__Camera_LensEffect.Default__BP_Athena_WitchBroom__Camera_LensEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Athena_WitchBroom__Camera_LensEffect_C* ABP_Athena_WitchBroom__Camera_LensEffect_C::GetDefaultObj()
{
	static class ABP_Athena_WitchBroom__Camera_LensEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Athena_WitchBroom__Camera_LensEffect_C*>(ABP_Athena_WitchBroom__Camera_LensEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


