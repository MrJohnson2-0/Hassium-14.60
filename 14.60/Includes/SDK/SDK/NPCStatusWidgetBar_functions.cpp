#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NPCStatusWidgetBar.NPCStatusWidgetBar_C
// (None)

class UClass* UNPCStatusWidgetBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCStatusWidgetBar_C");

	return Clss;
}


// NPCStatusWidgetBar_C NPCStatusWidgetBar.Default__NPCStatusWidgetBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPCStatusWidgetBar_C* UNPCStatusWidgetBar_C::GetDefaultObj()
{
	static class UNPCStatusWidgetBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPCStatusWidgetBar_C*>(UNPCStatusWidgetBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCStatusWidgetBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "PreConstruct");

	Params::UNPCStatusWidgetBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidgetBar_C::SetPercent(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "SetPercent");

	Params::UNPCStatusWidgetBar_C_SetPercent_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.ExecuteUbergraph_NPCStatusWidgetBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCStatusWidgetBar_C::ExecuteUbergraph_NPCStatusWidgetBar(int32 EntryPoint, float K2Node_CustomEvent_Value, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "ExecuteUbergraph_NPCStatusWidgetBar");

	Params::UNPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


