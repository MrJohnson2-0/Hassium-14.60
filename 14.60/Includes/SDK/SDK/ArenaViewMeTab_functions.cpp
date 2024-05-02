#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ArenaViewMeTab.ArenaViewMeTab_C
// (None)

class UClass* UArenaViewMeTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArenaViewMeTab_C");

	return Clss;
}


// ArenaViewMeTab_C ArenaViewMeTab.Default__ArenaViewMeTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArenaViewMeTab_C* UArenaViewMeTab_C::GetDefaultObj()
{
	static class UArenaViewMeTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArenaViewMeTab_C*>(UArenaViewMeTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArenaViewMeTab.ArenaViewMeTab_C.Colorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  ColorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UArenaViewMeTab_C::Colorize(const struct FFortTournamentDisplayInfo& ColorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaViewMeTab_C", "Colorize");

	Params::UArenaViewMeTab_C_Colorize_Params Parms{};

	Parms.ColorInfo = ColorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaViewMeTab.ArenaViewMeTab_C.ExecuteUbergraph_ArenaViewMeTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_ColorInfo                                     (None)
// class UArenaPersonalView_C*        K2Node_DynamicCast_AsArena_Personal_View                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArenaViewMeTab_C::ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_ColorInfo, class UArenaPersonalView_C* K2Node_DynamicCast_AsArena_Personal_View, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaViewMeTab_C", "ExecuteUbergraph_ArenaViewMeTab");

	Params::UArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ColorInfo = K2Node_CustomEvent_ColorInfo;
	Parms.K2Node_DynamicCast_AsArena_Personal_View = K2Node_DynamicCast_AsArena_Personal_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


