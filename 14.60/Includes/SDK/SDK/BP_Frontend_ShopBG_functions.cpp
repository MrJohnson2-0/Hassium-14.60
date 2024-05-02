#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
// (Actor)

class UClass* ABP_Frontend_ShopBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_ShopBG_C");

	return Clss;
}


// BP_Frontend_ShopBG_C BP_Frontend_ShopBG.Default__BP_Frontend_ShopBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_ShopBG_C* ABP_Frontend_ShopBG_C::GetDefaultObj()
{
	static class ABP_Frontend_ShopBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_ShopBG_C*>(ABP_Frontend_ShopBG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_ShopBG_C::SetDynamicBG(class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicBG");

	Params::ABP_Frontend_ShopBG_C_SetDynamicBG_Params Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::EnableDynamicShopBG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "EnableDynamicShopBG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InPresetEnvName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Frontend_ShopBG_C::SetDynamicEnvironmentEvent(const class FString& InPresetEnvName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicEnvironmentEvent");

	Params::ABP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent_Params Parms{};

	Parms.InPresetEnvName = InPresetEnvName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::DebugShopBG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DebugShopBG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::HandleRequestHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleRequestHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::HandleItemShopEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleItemShopEntered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::HandleStoreEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleStoreEntered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::ResetDonut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ResetDonut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InPresetEnvName                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACMSLobbyDirector_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ACMSLobbyDirector_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_CustomEvent_InTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_ShopBG_C::ExecuteUbergraph_BP_Frontend_ShopBG(int32 EntryPoint, const class FString& K2Node_CustomEvent_InPresetEnvName, bool K2Node_SwitchString_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class ACMSLobbyDirector_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ACMSLobbyDirector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchString_CmpSuccess_1, class UTexture* K2Node_CustomEvent_InTexture, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ExecuteUbergraph_BP_Frontend_ShopBG");

	Params::ABP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InPresetEnvName = K2Node_CustomEvent_InPresetEnvName;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.K2Node_CustomEvent_InTexture = K2Node_CustomEvent_InTexture;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchString_CmpSuccess_2 = K2Node_SwitchString_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue = CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1 = CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


