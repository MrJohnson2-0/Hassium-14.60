#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPS12MainRoomPOITag.BPS12MainRoomPOITag_C
// (None)

class UClass* UBPS12MainRoomPOITag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPS12MainRoomPOITag_C");

	return Clss;
}


// BPS12MainRoomPOITag_C BPS12MainRoomPOITag.Default__BPS12MainRoomPOITag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPS12MainRoomPOITag_C* UBPS12MainRoomPOITag_C::GetDefaultObj()
{
	static class UBPS12MainRoomPOITag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPS12MainRoomPOITag_C*>(UBPS12MainRoomPOITag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.Animate POI Title
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        POI_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPS12MainRoomPOITag_C::Animate_POI_Title(class FText POI_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12MainRoomPOITag_C", "Animate POI Title");

	Params::UBPS12MainRoomPOITag_C_Animate_POI_Title_Params Parms{};

	Parms.POI_Name = POI_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBPS12MainRoomPOITag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12MainRoomPOITag_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.CollapseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPS12MainRoomPOITag_C::CollapseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12MainRoomPOITag_C", "CollapseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.ExecuteUbergraph_BPS12MainRoomPOITag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_POI_Name                                      (None)

void UBPS12MainRoomPOITag_C::ExecuteUbergraph_BPS12MainRoomPOITag(int32 EntryPoint, class FText K2Node_CustomEvent_POI_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12MainRoomPOITag_C", "ExecuteUbergraph_BPS12MainRoomPOITag");

	Params::UBPS12MainRoomPOITag_C_ExecuteUbergraph_BPS12MainRoomPOITag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_POI_Name = K2Node_CustomEvent_POI_Name;

	UObject::ProcessEvent(Func, &Parms);

}

}


