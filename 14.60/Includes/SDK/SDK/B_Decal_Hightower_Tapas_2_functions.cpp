#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Decal_Hightower_Tapas_2.B_Decal_Hightower_Tapas_2_C
// (Actor)

class UClass* AB_Decal_Hightower_Tapas_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Decal_Hightower_Tapas_2_C");

	return Clss;
}


// B_Decal_Hightower_Tapas_2_C B_Decal_Hightower_Tapas_2.Default__B_Decal_Hightower_Tapas_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Decal_Hightower_Tapas_2_C* AB_Decal_Hightower_Tapas_2_C::GetDefaultObj()
{
	static class AB_Decal_Hightower_Tapas_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Decal_Hightower_Tapas_2_C*>(AB_Decal_Hightower_Tapas_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Decal_Hightower_Tapas_2.B_Decal_Hightower_Tapas_2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_Hightower_Tapas_2_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Tapas_2_C", "UserConstructionScript");

	Params::AB_Decal_Hightower_Tapas_2_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Decal_Hightower_Tapas_2.B_Decal_Hightower_Tapas_2_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_Hightower_Tapas_2_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Tapas_2_C", "FadeIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_Hightower_Tapas_2.B_Decal_Hightower_Tapas_2_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_Hightower_Tapas_2_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Tapas_2_C", "FadeIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_Hightower_Tapas_2.B_Decal_Hightower_Tapas_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Decal_Hightower_Tapas_2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Tapas_2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_Hightower_Tapas_2.B_Decal_Hightower_Tapas_2_C.ExecuteUbergraph_B_Decal_Hightower_Tapas_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_Hightower_Tapas_2_C::ExecuteUbergraph_B_Decal_Hightower_Tapas_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Tapas_2_C", "ExecuteUbergraph_B_Decal_Hightower_Tapas_2");

	Params::AB_Decal_Hightower_Tapas_2_C_ExecuteUbergraph_B_Decal_Hightower_Tapas_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


