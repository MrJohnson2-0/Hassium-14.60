#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BuiltInEmotePopUP.BuiltInEmotePopUP_C
// (None)

class UClass* UBuiltInEmotePopUP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuiltInEmotePopUP_C");

	return Clss;
}


// BuiltInEmotePopUP_C BuiltInEmotePopUP.Default__BuiltInEmotePopUP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuiltInEmotePopUP_C* UBuiltInEmotePopUP_C::GetDefaultObj()
{
	static class UBuiltInEmotePopUP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuiltInEmotePopUP_C*>(UBuiltInEmotePopUP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequestFadeIn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuiltInEmotePopUP_C::RequestFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuiltInEmotePopUP_C", "RequestFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequuestFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuiltInEmotePopUP_C::RequuestFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuiltInEmotePopUP_C", "RequuestFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.ExecuteUbergraph_BuiltInEmotePopUP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuiltInEmotePopUP_C::ExecuteUbergraph_BuiltInEmotePopUP(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuiltInEmotePopUP_C", "ExecuteUbergraph_BuiltInEmotePopUP");

	Params::UBuiltInEmotePopUP_C_ExecuteUbergraph_BuiltInEmotePopUP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


