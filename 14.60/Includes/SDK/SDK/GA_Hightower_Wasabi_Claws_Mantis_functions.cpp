#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Hightower_Wasabi_Claws_Mantis.GA_Hightower_Wasabi_Claws_Mantis_C
// (None)

class UClass* UGA_Hightower_Wasabi_Claws_Mantis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Hightower_Wasabi_Claws_Mantis_C");

	return Clss;
}


// GA_Hightower_Wasabi_Claws_Mantis_C GA_Hightower_Wasabi_Claws_Mantis.Default__GA_Hightower_Wasabi_Claws_Mantis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Hightower_Wasabi_Claws_Mantis_C* UGA_Hightower_Wasabi_Claws_Mantis_C::GetDefaultObj()
{
	static class UGA_Hightower_Wasabi_Claws_Mantis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Hightower_Wasabi_Claws_Mantis_C*>(UGA_Hightower_Wasabi_Claws_Mantis_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Hightower_Wasabi_Claws_Mantis.GA_Hightower_Wasabi_Claws_Mantis_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Hightower_Wasabi_Claws_Mantis_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Hightower_Wasabi_Claws_Mantis_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Hightower_Wasabi_Claws_Mantis.GA_Hightower_Wasabi_Claws_Mantis_C.OnGenericNotifyFromAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Hightower_Wasabi_Claws_Mantis_C::OnGenericNotifyFromAnimation(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Hightower_Wasabi_Claws_Mantis_C", "OnGenericNotifyFromAnimation");

	Params::UGA_Hightower_Wasabi_Claws_Mantis_C_OnGenericNotifyFromAnimation_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Hightower_Wasabi_Claws_Mantis.GA_Hightower_Wasabi_Claws_Mantis_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Hightower_Wasabi_Claws_Mantis_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Hightower_Wasabi_Claws_Mantis_C", "K2_OnEndAbility");

	Params::UGA_Hightower_Wasabi_Claws_Mantis_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Hightower_Wasabi_Claws_Mantis.GA_Hightower_Wasabi_Claws_Mantis_C.ExecuteUbergraph_GA_Hightower_Wasabi_Claws_Mantis
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NotifyTag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Hightower_Wasabi_Claws_Mantis_C::ExecuteUbergraph_GA_Hightower_Wasabi_Claws_Mantis(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FGameplayTag& K2Node_Event_NotifyTag, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, bool CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Hightower_Wasabi_Claws_Mantis_C", "ExecuteUbergraph_GA_Hightower_Wasabi_Claws_Mantis");

	Params::UGA_Hightower_Wasabi_Claws_Mantis_C_ExecuteUbergraph_GA_Hightower_Wasabi_Claws_Mantis_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_Event_NotifyTag = K2Node_Event_NotifyTag;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;
	Parms.CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags = CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags;

	UObject::ProcessEvent(Func, &Parms);

}

}


