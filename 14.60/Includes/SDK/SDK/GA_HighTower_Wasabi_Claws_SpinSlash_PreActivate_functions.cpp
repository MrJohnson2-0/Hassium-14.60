#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate.GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C
// (None)

class UClass* UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C");

	return Clss;
}


// GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate.Default__GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C* UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C::GetDefaultObj()
{
	static class UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C*>(UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate.GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate.GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C.ExecuteUbergraph_GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C::ExecuteUbergraph_GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C", "ExecuteUbergraph_GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate");

	Params::UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C_ExecuteUbergraph_GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


