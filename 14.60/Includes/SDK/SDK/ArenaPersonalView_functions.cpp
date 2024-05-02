#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ArenaPersonalView.ArenaPersonalView_C
// (None)

class UClass* UArenaPersonalView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArenaPersonalView_C");

	return Clss;
}


// ArenaPersonalView_C ArenaPersonalView.Default__ArenaPersonalView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArenaPersonalView_C* UArenaPersonalView_C::GetDefaultObj()
{
	static class UArenaPersonalView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArenaPersonalView_C*>(UArenaPersonalView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArenaPersonalView.ArenaPersonalView_C.Colorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  Color_Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UArenaPersonalView_C::Colorize(const struct FFortTournamentDisplayInfo& Color_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaPersonalView_C", "Colorize");

	Params::UArenaPersonalView_C_Colorize_Params Parms{};

	Parms.Color_Info = Color_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaPersonalView.ArenaPersonalView_C.ExecuteUbergraph_ArenaPersonalView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_Color_Info                                    (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaPersonalView_C::ExecuteUbergraph_ArenaPersonalView(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_Color_Info, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaPersonalView_C", "ExecuteUbergraph_ArenaPersonalView");

	Params::UArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Color_Info = K2Node_CustomEvent_Color_Info;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


