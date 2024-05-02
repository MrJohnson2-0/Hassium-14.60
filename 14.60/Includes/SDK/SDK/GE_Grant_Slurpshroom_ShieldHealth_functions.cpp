#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Grant_Slurpshroom_ShieldHealth.GE_Grant_Slurpshroom_ShieldHealth_C
// (None)

class UClass* UGE_Grant_Slurpshroom_ShieldHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Grant_Slurpshroom_ShieldHealth_C");

	return Clss;
}


// GE_Grant_Slurpshroom_ShieldHealth_C GE_Grant_Slurpshroom_ShieldHealth.Default__GE_Grant_Slurpshroom_ShieldHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Grant_Slurpshroom_ShieldHealth_C* UGE_Grant_Slurpshroom_ShieldHealth_C::GetDefaultObj()
{
	static class UGE_Grant_Slurpshroom_ShieldHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Grant_Slurpshroom_ShieldHealth_C*>(UGE_Grant_Slurpshroom_ShieldHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


