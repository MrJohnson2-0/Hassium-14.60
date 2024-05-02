#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C
// (Actor)

class UClass* ABGA_HeldWeapon_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_HeldWeapon_Parent_C");

	return Clss;
}


// BGA_HeldWeapon_Parent_C BGA_HeldWeapon_Parent.Default__BGA_HeldWeapon_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_HeldWeapon_Parent_C* ABGA_HeldWeapon_Parent_C::GetDefaultObj()
{
	static class ABGA_HeldWeapon_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_HeldWeapon_Parent_C*>(ABGA_HeldWeapon_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.SetHeldWeaponVisualComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             HeldWeaponVisualComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_HeldWeapon_Parent_C::SetHeldWeaponVisualComponent(class USceneComponent* HeldWeaponVisualComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_HeldWeapon_Parent_C", "SetHeldWeaponVisualComponent");

	Params::ABGA_HeldWeapon_Parent_C_SetHeldWeaponVisualComponent_Params Parms{};

	Parms.HeldWeaponVisualComponent = HeldWeaponVisualComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.OnRep_bHeldWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_HeldWeapon_Parent_C::OnRep_bHeldWeaponEquipped(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_HeldWeapon_Parent_C", "OnRep_bHeldWeaponEquipped");

	Params::ABGA_HeldWeapon_Parent_C_OnRep_bHeldWeaponEquipped_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.HeldWeaponSetEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEquipped                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_HeldWeapon_Parent_C::HeldWeaponSetEquipped(bool bEquipped, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_HeldWeapon_Parent_C", "HeldWeaponSetEquipped");

	Params::ABGA_HeldWeapon_Parent_C_HeldWeaponSetEquipped_Params Parms{};

	Parms.bEquipped = bEquipped;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.OnHeldWeaponEquipToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEquipped                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_HeldWeapon_Parent_C::OnHeldWeaponEquipToggled(bool bEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_HeldWeapon_Parent_C", "OnHeldWeaponEquipToggled");

	Params::ABGA_HeldWeapon_Parent_C_OnHeldWeaponEquipToggled_Params Parms{};

	Parms.bEquipped = bEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.ExecuteUbergraph_BGA_HeldWeapon_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEquipped                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_HeldWeapon_Parent_C::ExecuteUbergraph_BGA_HeldWeapon_Parent(int32 EntryPoint, bool K2Node_CustomEvent_bEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_HeldWeapon_Parent_C", "ExecuteUbergraph_BGA_HeldWeapon_Parent");

	Params::ABGA_HeldWeapon_Parent_C_ExecuteUbergraph_BGA_HeldWeapon_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bEquipped = K2Node_CustomEvent_bEquipped;

	UObject::ProcessEvent(Func, &Parms);

}

}


