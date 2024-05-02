#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C
// (Actor)

class UClass* ACCPM_HighTower_Tomato_Face_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_HighTower_Tomato_Face_C");

	return Clss;
}


// CCPM_HighTower_Tomato_Face_C CCPM_HighTower_Tomato_Face.Default__CCPM_HighTower_Tomato_Face_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_HighTower_Tomato_Face_C* ACCPM_HighTower_Tomato_Face_C::GetDefaultObj()
{
	static class ACCPM_HighTower_Tomato_Face_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_HighTower_Tomato_Face_C*>(ACCPM_HighTower_Tomato_Face_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.CreateMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_HighTower_Tomato_Face_C::CreateMIDs(int32 Temp_int_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, int32 Temp_int_Variable_1, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "CreateMIDs");

	Params::ACCPM_HighTower_Tomato_Face_C_CreateMIDs_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_HighTower_Tomato_Face_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "UserConstructionScript");

	Params::ACCPM_HighTower_Tomato_Face_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Face_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.AnimNotify_CasualToMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Face_C::AnimNotify_CasualToMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "AnimNotify_CasualToMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.AnimNotify_MaskToSuit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Face_C::AnimNotify_MaskToSuit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "AnimNotify_MaskToSuit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.AnimNotify_SuitToMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Face_C::AnimNotify_SuitToMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "AnimNotify_SuitToMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.AnimNotify_MaskToCasual
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Face_C::AnimNotify_MaskToCasual()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "AnimNotify_MaskToCasual");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Face.CCPM_HighTower_Tomato_Face_C.ExecuteUbergraph_CCPM_HighTower_Tomato_Face
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_HighTower_Tomato_Face_C::ExecuteUbergraph_CCPM_HighTower_Tomato_Face(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Face_C", "ExecuteUbergraph_CCPM_HighTower_Tomato_Face");

	Params::ACCPM_HighTower_Tomato_Face_C_ExecuteUbergraph_CCPM_HighTower_Tomato_Face_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


