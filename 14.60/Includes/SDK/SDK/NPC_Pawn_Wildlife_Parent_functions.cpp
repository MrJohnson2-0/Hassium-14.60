#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// (Actor, Pawn)

class UClass* ANPC_Pawn_Wildlife_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Pawn_Wildlife_Parent_C");

	return Clss;
}


// NPC_Pawn_Wildlife_Parent_C NPC_Pawn_Wildlife_Parent.Default__NPC_Pawn_Wildlife_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Pawn_Wildlife_Parent_C* ANPC_Pawn_Wildlife_Parent_C::GetDefaultObj()
{
	static class ANPC_Pawn_Wildlife_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Pawn_Wildlife_Parent_C*>(ANPC_Pawn_Wildlife_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


