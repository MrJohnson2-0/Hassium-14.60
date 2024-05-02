#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SrirachaRanch.RadioContentSourceItemDefinition
// (None)

class UClass* URadioContentSourceItemDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioContentSourceItemDefinition");

	return Clss;
}


// RadioContentSourceItemDefinition SrirachaRanch.Default__RadioContentSourceItemDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class URadioContentSourceItemDefinition* URadioContentSourceItemDefinition::GetDefaultObj()
{
	static class URadioContentSourceItemDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioContentSourceItemDefinition*>(URadioContentSourceItemDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class SrirachaRanch.StreamingRadioAudioShapeComponent
// (None)

class UClass* UStreamingRadioAudioShapeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioAudioShapeComponent");

	return Clss;
}


// StreamingRadioAudioShapeComponent SrirachaRanch.Default__StreamingRadioAudioShapeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamingRadioAudioShapeComponent* UStreamingRadioAudioShapeComponent::GetDefaultObj()
{
	static class UStreamingRadioAudioShapeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamingRadioAudioShapeComponent*>(UStreamingRadioAudioShapeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
// (None)

class UClass* USrirachaRanchComponentTemplateWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SrirachaRanchComponentTemplateWrapper");

	return Clss;
}


// SrirachaRanchComponentTemplateWrapper SrirachaRanch.Default__SrirachaRanchComponentTemplateWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class USrirachaRanchComponentTemplateWrapper* USrirachaRanchComponentTemplateWrapper::GetDefaultObj()
{
	static class USrirachaRanchComponentTemplateWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<USrirachaRanchComponentTemplateWrapper*>(USrirachaRanchComponentTemplateWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class SrirachaRanch.StreamingRadioPlayerComponent
// (None)

class UClass* UStreamingRadioPlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioPlayerComponent");

	return Clss;
}


// StreamingRadioPlayerComponent SrirachaRanch.Default__StreamingRadioPlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamingRadioPlayerComponent* UStreamingRadioPlayerComponent::GetDefaultObj()
{
	static class UStreamingRadioPlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamingRadioPlayerComponent*>(UStreamingRadioPlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::ToggleRadioActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ToggleRadioActive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Milliseconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::StopRadioWithFadeout(int32 Milliseconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopRadioWithFadeout");

	Params::UStreamingRadioPlayerComponent_StopRadioWithFadeout_Params Parms{};

	Parms.Milliseconds = Milliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::StopRadio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopRadio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::StopIfNoDriver(TScriptInterface<class IFortVehicleInterface>& Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopIfNoDriver");

	Params::UStreamingRadioPlayerComponent_StopIfNoDriver_Params Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              IdxToPlay                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFallbackOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::StartRadio(int32 IdxToPlay, bool bFallbackOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StartRadio");

	Params::UStreamingRadioPlayerComponent_StartRadio_Params Parms{};

	Parms.IdxToPlay = IdxToPlay;
	Parms.bFallbackOverride = bFallbackOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SoundMixUpdateWeaponState");

	Params::UStreamingRadioPlayerComponent_SoundMixUpdateWeaponState_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
// (Final, Native, Private)
// Parameters:
// bool                               bNewIsTargeting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SoundMixUpdateTargetingState(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SoundMixUpdateTargetingState");

	Params::UStreamingRadioPlayerComponent_SoundMixUpdateTargetingState_Params Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SetInteriorVolume(TScriptInterface<class IFortVehicleInterface>& Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetInteriorVolume");

	Params::UStreamingRadioPlayerComponent_SetInteriorVolume_Params Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SetExteriorVolume(TScriptInterface<class IFortVehicleInterface>& Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetExteriorVolume");

	Params::UStreamingRadioPlayerComponent_SetExteriorVolume_Params Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::PlayPrevIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayPrevIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::PlayNextIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayNextIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::PlayDefaultIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayDefaultIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL
// (Final, Native, Protected)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnSuccessfulURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnSuccessfulURL");

	Params::UStreamingRadioPlayerComponent_OnSuccessfulURL_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnRep_RadioSourceData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnRep_RadioSourceData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bPiPPlayerBlocking                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPiPPlayerBlockedChanged");

	Params::UStreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged_Params Parms{};

	Parms.bPiPPlayerBlocking = bPiPPlayerBlocking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnExitVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnExitVehicle");

	Params::UStreamingRadioPlayerComponent_OnPawnExitVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnExitSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnExitSeat");

	Params::UStreamingRadioPlayerComponent_OnPawnExitSeat_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnEnterVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnEnterVehicle");

	Params::UStreamingRadioPlayerComponent_OnPawnEnterVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnEnterSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnEnterSeat");

	Params::UStreamingRadioPlayerComponent_OnPawnEnterSeat_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortAthenaVehicle*          DeadVehicle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AController*                 EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwningVehicleDied");

	Params::UStreamingRadioPlayerComponent_OnOwningVehicleDied_Params Parms{};

	Parms.DeadVehicle = DeadVehicle;
	Parms.InTags = InTags;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerUnpowered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerUnpowered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerReFueled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerReFueled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerOutOfFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerOutOfFuel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerExploded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerExploded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL
// (Final, Native, Protected)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnFailedURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnFailedURL");

	Params::UStreamingRadioPlayerComponent_OnFailedURL_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnExitVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnExitVehicle");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnExitVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnExitSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnExitSeat");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnExitSeat_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnEnterVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnEnterVehicle");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnEnterVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class AFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnEnterSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnEnterSeat");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnEnterSeat_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MulticastClearRadioSourceOverride
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void UStreamingRadioPlayerComponent::MulticastClearRadioSourceOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MulticastClearRadioSourceOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady
// (Final, Native, Protected)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::MediaReady(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaReady");

	Params::UStreamingRadioPlayerComponent_MediaReady_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::MediaPlayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaPlayed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::MediaLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaLoad");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::MediaFinishedOrClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaFinishedOrClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen
// (Final, Native, Protected)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::MediaFailedToOpen(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaFailedToOpen");

	Params::UStreamingRadioPlayerComponent_MediaFailedToOpen_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose
// (Final, Native, Protected)
// Parameters:
// bool                               bReallyExplicit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::MediaExplicitClose(bool bReallyExplicit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaExplicitClose");

	Params::UStreamingRadioPlayerComponent_MediaExplicitClose_Params Parms{};

	Parms.bReallyExplicit = bReallyExplicit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamingRadioPlayerComponent::IsPlayingLiveFeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "IsPlayingLiveFeed");

	Params::UStreamingRadioPlayerComponent_IsPlayingLiveFeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SeatIdx                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamingRadioPlayerComponent::IsExternalSeat(int32 SeatIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "IsExternalSeat");

	Params::UStreamingRadioPlayerComponent_IsExternalSeat_Params Parms{};

	Parms.SeatIdx = SeatIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Idx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URadioContentSourceItemDefinition*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URadioContentSourceItemDefinition* UStreamingRadioPlayerComponent::GetOptionAt(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "GetOptionAt");

	Params::UStreamingRadioPlayerComponent_GetOptionAt_Params Parms{};

	Parms.Idx = Idx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthStopRadio
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:

void UStreamingRadioPlayerComponent::AuthStopRadio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "AuthStopRadio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSetDisabledForCurrentPlayerState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                               bShouldDisableForCurrentPlayerState                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::AuthSetDisabledForCurrentPlayerState(bool bShouldDisableForCurrentPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "AuthSetDisabledForCurrentPlayerState");

	Params::UStreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState_Params Parms{};

	Parms.bShouldDisableForCurrentPlayerState = bShouldDisableForCurrentPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveFadeOutTime
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// float                              FadeoutSeconds                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::AuthSaveFadeOutTime(float FadeoutSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "AuthSaveFadeOutTime");

	Params::UStreamingRadioPlayerComponent_AuthSaveFadeOutTime_Params Parms{};

	Parms.FadeoutSeconds = FadeoutSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSavedSource
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class URadioContentSourceItemDefinition*Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::AuthSavedSource(class URadioContentSourceItemDefinition* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "AuthSavedSource");

	Params::UStreamingRadioPlayerComponent_AuthSavedSource_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveAutoStart
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                               bAutoStart                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::AuthSaveAutoStart(bool bAutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "AuthSaveAutoStart");

	Params::UStreamingRadioPlayerComponent_AuthSaveAutoStart_Params Parms{};

	Parms.bAutoStart = bAutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthPlayIndex
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::AuthPlayIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "AuthPlayIndex");

	Params::UStreamingRadioPlayerComponent_AuthPlayIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


