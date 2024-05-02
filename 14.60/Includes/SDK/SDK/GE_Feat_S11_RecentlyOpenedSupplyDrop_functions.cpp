#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Feat_S11_RecentlyOpenedSupplyDrop.GE_Feat_S11_RecentlyOpenedSupplyDrop_C
// (None)

class UClass* UGE_Feat_S11_RecentlyOpenedSupplyDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Feat_S11_RecentlyOpenedSupplyDrop_C");

	return Clss;
}


// GE_Feat_S11_RecentlyOpenedSupplyDrop_C GE_Feat_S11_RecentlyOpenedSupplyDrop.Default__GE_Feat_S11_RecentlyOpenedSupplyDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Feat_S11_RecentlyOpenedSupplyDrop_C* UGE_Feat_S11_RecentlyOpenedSupplyDrop_C::GetDefaultObj()
{
	static class UGE_Feat_S11_RecentlyOpenedSupplyDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Feat_S11_RecentlyOpenedSupplyDrop_C*>(UGE_Feat_S11_RecentlyOpenedSupplyDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


