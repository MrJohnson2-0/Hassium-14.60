#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Decal_Hightower_Date_Chain.B_Decal_Hightower_Date_Chain_C
// (Actor)

class UClass* AB_Decal_Hightower_Date_Chain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Decal_Hightower_Date_Chain_C");

	return Clss;
}


// B_Decal_Hightower_Date_Chain_C B_Decal_Hightower_Date_Chain.Default__B_Decal_Hightower_Date_Chain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Decal_Hightower_Date_Chain_C* AB_Decal_Hightower_Date_Chain_C::GetDefaultObj()
{
	static class AB_Decal_Hightower_Date_Chain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Decal_Hightower_Date_Chain_C*>(AB_Decal_Hightower_Date_Chain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Decal_Hightower_Date_Chain.B_Decal_Hightower_Date_Chain_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_Hightower_Date_Chain_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Date_Chain_C", "UserConstructionScript");

	Params::AB_Decal_Hightower_Date_Chain_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Decal_Hightower_Date_Chain.B_Decal_Hightower_Date_Chain_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_Hightower_Date_Chain_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Date_Chain_C", "FadeIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_Hightower_Date_Chain.B_Decal_Hightower_Date_Chain_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_Hightower_Date_Chain_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Date_Chain_C", "FadeIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_Hightower_Date_Chain.B_Decal_Hightower_Date_Chain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Decal_Hightower_Date_Chain_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Date_Chain_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_Hightower_Date_Chain.B_Decal_Hightower_Date_Chain_C.ExecuteUbergraph_B_Decal_Hightower_Date_Chain
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_Hightower_Date_Chain_C::ExecuteUbergraph_B_Decal_Hightower_Date_Chain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_Hightower_Date_Chain_C", "ExecuteUbergraph_B_Decal_Hightower_Date_Chain");

	Params::AB_Decal_Hightower_Date_Chain_C_ExecuteUbergraph_B_Decal_Hightower_Date_Chain_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


