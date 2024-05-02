#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Store_BannerMessage.Store_BannerMessage_C
// (None)

class UClass* UStore_BannerMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Store_BannerMessage_C");

	return Clss;
}


// Store_BannerMessage_C Store_BannerMessage.Default__Store_BannerMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStore_BannerMessage_C* UStore_BannerMessage_C::GetDefaultObj()
{
	static class UStore_BannerMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStore_BannerMessage_C*>(UStore_BannerMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Store_BannerMessage.Store_BannerMessage_C.Pulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStore_BannerMessage_C::Pulse(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Store_BannerMessage_C", "Pulse");

	Params::UStore_BannerMessage_C_Pulse_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


