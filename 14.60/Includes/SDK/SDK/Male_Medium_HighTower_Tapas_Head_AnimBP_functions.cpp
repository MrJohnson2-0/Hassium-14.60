#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Male_Medium_HighTower_Tapas_Head_AnimBP.Male_Medium_HighTower_Tapas_Head_AnimBP_C
// (None)

class UClass* UMale_Medium_HighTower_Tapas_Head_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Male_Medium_HighTower_Tapas_Head_AnimBP_C");

	return Clss;
}


// Male_Medium_HighTower_Tapas_Head_AnimBP_C Male_Medium_HighTower_Tapas_Head_AnimBP.Default__Male_Medium_HighTower_Tapas_Head_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMale_Medium_HighTower_Tapas_Head_AnimBP_C* UMale_Medium_HighTower_Tapas_Head_AnimBP_C::GetDefaultObj()
{
	static class UMale_Medium_HighTower_Tapas_Head_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMale_Medium_HighTower_Tapas_Head_AnimBP_C*>(UMale_Medium_HighTower_Tapas_Head_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


