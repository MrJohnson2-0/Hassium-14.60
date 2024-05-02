#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidekickVoiceChannelHeader.SidekickVoiceChannelHeader_C
// (None)

class UClass* USidekickVoiceChannelHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidekickVoiceChannelHeader_C");

	return Clss;
}


// SidekickVoiceChannelHeader_C SidekickVoiceChannelHeader.Default__SidekickVoiceChannelHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidekickVoiceChannelHeader_C* USidekickVoiceChannelHeader_C::GetDefaultObj()
{
	static class USidekickVoiceChannelHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidekickVoiceChannelHeader_C*>(USidekickVoiceChannelHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SidekickVoiceChannelHeader.SidekickVoiceChannelHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USidekickVoiceChannelHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickVoiceChannelHeader_C", "PreConstruct");

	Params::USidekickVoiceChannelHeader_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidekickVoiceChannelHeader.SidekickVoiceChannelHeader_C.ExecuteUbergraph_SidekickVoiceChannelHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void USidekickVoiceChannelHeader_C::ExecuteUbergraph_SidekickVoiceChannelHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickVoiceChannelHeader_C", "ExecuteUbergraph_SidekickVoiceChannelHeader");

	Params::USidekickVoiceChannelHeader_C_ExecuteUbergraph_SidekickVoiceChannelHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


