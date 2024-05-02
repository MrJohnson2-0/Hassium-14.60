#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C
// (None)

class UClass* UGSC_C2S3_BattlePass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GSC_C2S3_BattlePass_C");

	return Clss;
}


// GSC_C2S3_BattlePass_C GSC_C2S3_BattlePass.Default__GSC_C2S3_BattlePass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGSC_C2S3_BattlePass_C* UGSC_C2S3_BattlePass_C::GetDefaultObj()
{
	static class UGSC_C2S3_BattlePass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGSC_C2S3_BattlePass_C*>(UGSC_C2S3_BattlePass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.OnNavActorSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_C2S3_BattlePass_C::OnNavActorSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSC_C2S3_BattlePass_C", "OnNavActorSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.OnNavActorHovered
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_C2S3_BattlePass_C::OnNavActorHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSC_C2S3_BattlePass_C", "OnNavActorHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.ExecuteUbergraph_GSC_C2S3_BattlePass
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGSC_C2S3_BattlePass_C::ExecuteUbergraph_GSC_C2S3_BattlePass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSC_C2S3_BattlePass_C", "ExecuteUbergraph_GSC_C2S3_BattlePass");

	Params::UGSC_C2S3_BattlePass_C_ExecuteUbergraph_GSC_C2S3_BattlePass_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


