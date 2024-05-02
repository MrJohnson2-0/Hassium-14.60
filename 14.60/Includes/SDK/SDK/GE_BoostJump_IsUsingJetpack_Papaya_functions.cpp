#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BoostJump_IsUsingJetpack_Papaya.GE_BoostJump_IsUsingJetpack_Papaya_C
// (None)

class UClass* UGE_BoostJump_IsUsingJetpack_Papaya_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BoostJump_IsUsingJetpack_Papaya_C");

	return Clss;
}


// GE_BoostJump_IsUsingJetpack_Papaya_C GE_BoostJump_IsUsingJetpack_Papaya.Default__GE_BoostJump_IsUsingJetpack_Papaya_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BoostJump_IsUsingJetpack_Papaya_C* UGE_BoostJump_IsUsingJetpack_Papaya_C::GetDefaultObj()
{
	static class UGE_BoostJump_IsUsingJetpack_Papaya_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BoostJump_IsUsingJetpack_Papaya_C*>(UGE_BoostJump_IsUsingJetpack_Papaya_C::StaticClass()->DefaultObject);

	return Default;
}

}


