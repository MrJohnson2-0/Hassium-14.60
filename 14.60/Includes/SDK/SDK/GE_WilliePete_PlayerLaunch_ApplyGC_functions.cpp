#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WilliePete_PlayerLaunch_ApplyGC.GE_WilliePete_PlayerLaunch_ApplyGC_C
// (None)

class UClass* UGE_WilliePete_PlayerLaunch_ApplyGC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WilliePete_PlayerLaunch_ApplyGC_C");

	return Clss;
}


// GE_WilliePete_PlayerLaunch_ApplyGC_C GE_WilliePete_PlayerLaunch_ApplyGC.Default__GE_WilliePete_PlayerLaunch_ApplyGC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WilliePete_PlayerLaunch_ApplyGC_C* UGE_WilliePete_PlayerLaunch_ApplyGC_C::GetDefaultObj()
{
	static class UGE_WilliePete_PlayerLaunch_ApplyGC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WilliePete_PlayerLaunch_ApplyGC_C*>(UGE_WilliePete_PlayerLaunch_ApplyGC_C::StaticClass()->DefaultObject);

	return Default;
}

}


