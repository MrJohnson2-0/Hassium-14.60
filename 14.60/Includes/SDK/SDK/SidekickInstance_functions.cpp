#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidekickInstance.SidekickInstance_C
// (None)

class UClass* USidekickInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidekickInstance_C");

	return Clss;
}


// SidekickInstance_C SidekickInstance.Default__SidekickInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidekickInstance_C* USidekickInstance_C::GetDefaultObj()
{
	static class USidekickInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidekickInstance_C*>(USidekickInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SidekickInstance.SidekickInstance_C.OnAudioStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESidekickVoiceChatAudioStatusAudioStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidekickInstance_C::OnAudioStatus(enum class ESidekickVoiceChatAudioStatus AudioStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickInstance_C", "OnAudioStatus");

	Params::USidekickInstance_C_OnAudioStatus_Params Parms{};

	Parms.AudioStatus = AudioStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidekickInstance.SidekickInstance_C.OnVideoStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESidekickVoiceChatVideoStatusVideoStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidekickInstance_C::OnVideoStatus(enum class ESidekickVoiceChatVideoStatus VideoStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickInstance_C", "OnVideoStatus");

	Params::USidekickInstance_C_OnVideoStatus_Params Parms{};

	Parms.VideoStatus = VideoStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidekickInstance.SidekickInstance_C.OnTalkingStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTalking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USidekickInstance_C::OnTalkingStatus(bool bTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickInstance_C", "OnTalkingStatus");

	Params::USidekickInstance_C_OnTalkingStatus_Params Parms{};

	Parms.bTalking = bTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidekickInstance.SidekickInstance_C.OnVideoPaused
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPaused                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USidekickInstance_C::OnVideoPaused(bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickInstance_C", "OnVideoPaused");

	Params::USidekickInstance_C_OnVideoPaused_Params Parms{};

	Parms.bPaused = bPaused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidekickInstance.SidekickInstance_C.ExecuteUbergraph_SidekickInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESidekickVoiceChatAudioStatusK2Node_Event_AudioStatus                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESidekickVoiceChatVideoStatusK2Node_Event_VideoStatus                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bTalking                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPaused                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidekickInstance_C::ExecuteUbergraph_SidekickInstance(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_1, enum class ESidekickVoiceChatAudioStatus K2Node_Event_AudioStatus, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ESidekickVoiceChatVideoStatus K2Node_Event_VideoStatus, bool K2Node_Event_bTalking, bool K2Node_Event_bPaused, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickInstance_C", "ExecuteUbergraph_SidekickInstance");

	Params::USidekickInstance_C_ExecuteUbergraph_SidekickInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_AudioStatus = K2Node_Event_AudioStatus;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_VideoStatus = K2Node_Event_VideoStatus;
	Parms.K2Node_Event_bTalking = K2Node_Event_bTalking;
	Parms.K2Node_Event_bPaused = K2Node_Event_bPaused;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


