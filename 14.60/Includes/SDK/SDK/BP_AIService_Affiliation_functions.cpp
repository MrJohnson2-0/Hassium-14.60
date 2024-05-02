#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIService_Affiliation.BP_AIService_Affiliation_C
// (None)

class UClass* UBP_AIService_Affiliation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIService_Affiliation_C");

	return Clss;
}


// BP_AIService_Affiliation_C BP_AIService_Affiliation.Default__BP_AIService_Affiliation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIService_Affiliation_C* UBP_AIService_Affiliation_C::GetDefaultObj()
{
	static class UBP_AIService_Affiliation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIService_Affiliation_C*>(UBP_AIService_Affiliation_C::StaticClass()->DefaultObject);

	return Default;
}

}


