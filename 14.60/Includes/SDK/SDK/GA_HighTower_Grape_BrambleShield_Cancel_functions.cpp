#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Grape_BrambleShield_Cancel.GA_HighTower_Grape_BrambleShield_Cancel_C
// (None)

class UClass* UGA_HighTower_Grape_BrambleShield_Cancel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Grape_BrambleShield_Cancel_C");

	return Clss;
}


// GA_HighTower_Grape_BrambleShield_Cancel_C GA_HighTower_Grape_BrambleShield_Cancel.Default__GA_HighTower_Grape_BrambleShield_Cancel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Grape_BrambleShield_Cancel_C* UGA_HighTower_Grape_BrambleShield_Cancel_C::GetDefaultObj()
{
	static class UGA_HighTower_Grape_BrambleShield_Cancel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Grape_BrambleShield_Cancel_C*>(UGA_HighTower_Grape_BrambleShield_Cancel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_Grape_BrambleShield_Cancel.GA_HighTower_Grape_BrambleShield_Cancel_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HighTower_Grape_BrambleShield_Cancel_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Grape_BrambleShield_Cancel_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Grape_BrambleShield_Cancel.GA_HighTower_Grape_BrambleShield_Cancel_C.ExecuteUbergraph_GA_HighTower_Grape_BrambleShield_Cancel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_HighTower_Grape_BrambleShield_Cancel_C::ExecuteUbergraph_GA_HighTower_Grape_BrambleShield_Cancel(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Grape_BrambleShield_Cancel_C", "ExecuteUbergraph_GA_HighTower_Grape_BrambleShield_Cancel");

	Params::UGA_HighTower_Grape_BrambleShield_Cancel_C_ExecuteUbergraph_GA_HighTower_Grape_BrambleShield_Cancel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


