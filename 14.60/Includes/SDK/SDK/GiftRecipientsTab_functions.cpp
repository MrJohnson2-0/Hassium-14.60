#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GiftRecipientsTab.GiftRecipientsTab_C
// (None)

class UClass* UGiftRecipientsTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiftRecipientsTab_C");

	return Clss;
}


// GiftRecipientsTab_C GiftRecipientsTab.Default__GiftRecipientsTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiftRecipientsTab_C* UGiftRecipientsTab_C::GetDefaultObj()
{
	static class UGiftRecipientsTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiftRecipientsTab_C*>(UGiftRecipientsTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


