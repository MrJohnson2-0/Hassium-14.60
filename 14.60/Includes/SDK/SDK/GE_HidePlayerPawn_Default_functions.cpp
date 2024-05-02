#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HidePlayerPawn_Default.GE_HidePlayerPawn_Default_C
// (None)

class UClass* UGE_HidePlayerPawn_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HidePlayerPawn_Default_C");

	return Clss;
}


// GE_HidePlayerPawn_Default_C GE_HidePlayerPawn_Default.Default__GE_HidePlayerPawn_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HidePlayerPawn_Default_C* UGE_HidePlayerPawn_Default_C::GetDefaultObj()
{
	static class UGE_HidePlayerPawn_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HidePlayerPawn_Default_C*>(UGE_HidePlayerPawn_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


