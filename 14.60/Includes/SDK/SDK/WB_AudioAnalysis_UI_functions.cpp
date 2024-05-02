#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// (None)

class UClass* UWB_AudioAnalysis_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_AudioAnalysis_UI_C");

	return Clss;
}


// WB_AudioAnalysis_UI_C WB_AudioAnalysis_UI.Default__WB_AudioAnalysis_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_AudioAnalysis_UI_C* UWB_AudioAnalysis_UI_C::GetDefaultObj()
{
	static class UWB_AudioAnalysis_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_AudioAnalysis_UI_C*>(UWB_AudioAnalysis_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddMPCParameter
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialParameterCollection*Collection                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Vec4Index                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AudioAnalysis_UI_C::AddMPCParameter(class FName ParamName, class UMaterialParameterCollection* Collection, int32 Vec4Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "AddMPCParameter");

	Params::UWB_AudioAnalysis_UI_C_AddMPCParameter_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.Collection = Collection;
	Parms.Vec4Index = Vec4Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ParamName                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialParameterCollection*K2Node_Event_Collection                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Vec4Index                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_AudioAnalysis_FloatGraph_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AudioAnalysis_UI_C::ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint, class FName K2Node_Event_ParamName, class UMaterialParameterCollection* K2Node_Event_Collection, int32 K2Node_Event_Vec4Index, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "ExecuteUbergraph_WB_AudioAnalysis_UI");

	Params::UWB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ParamName = K2Node_Event_ParamName;
	Parms.K2Node_Event_Collection = K2Node_Event_Collection;
	Parms.K2Node_Event_Vec4Index = K2Node_Event_Vec4Index;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


