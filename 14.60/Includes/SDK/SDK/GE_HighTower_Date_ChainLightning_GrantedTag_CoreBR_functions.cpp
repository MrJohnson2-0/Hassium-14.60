#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_Date_ChainLightning_GrantedTag_CoreBR.GE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C
// (None)

class UClass* UGE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C");

	return Clss;
}


// GE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C GE_HighTower_Date_ChainLightning_GrantedTag_CoreBR.Default__GE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C* UGE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C::GetDefaultObj()
{
	static class UGE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C*>(UGE_HighTower_Date_ChainLightning_GrantedTag_CoreBR_C::StaticClass()->DefaultObject);

	return Default;
}

}


