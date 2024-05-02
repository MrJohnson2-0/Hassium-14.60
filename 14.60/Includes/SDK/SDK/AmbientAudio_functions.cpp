#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AmbientAudio.AmbientAudioDataAsset
// (None)

class UClass* UAmbientAudioDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientAudioDataAsset");

	return Clss;
}


// AmbientAudioDataAsset AmbientAudio.Default__AmbientAudioDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientAudioDataAsset* UAmbientAudioDataAsset::GetDefaultObj()
{
	static class UAmbientAudioDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientAudioDataAsset*>(UAmbientAudioDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AmbientAudio.AmbientAudioStatics
// (None)

class UClass* UAmbientAudioStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientAudioStatics");

	return Clss;
}


// AmbientAudioStatics AmbientAudio.Default__AmbientAudioStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientAudioStatics* UAmbientAudioStatics::GetDefaultObj()
{
	static class UAmbientAudioStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientAudioStatics*>(UAmbientAudioStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::RemoveAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioStatics", "RemoveAmbientGameplayTag");

	Params::UAmbientAudioStatics_RemoveAmbientGameplayTag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::RemoveAmbientEntry(class UObject* WorldContextObject, class FName AmbientName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioStatics", "RemoveAmbientEntry");

	Params::UAmbientAudioStatics_RemoveAmbientEntry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AmbientName = AmbientName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioStatics.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioStatics", "PlaySoundAtLocation");

	Params::UAmbientAudioStatics_PlaySoundAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioStatics.CreateAudioComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioComponent* UAmbientAudioStatics::CreateAudioComponent(class UObject* WorldContextObject, class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioStatics", "CreateAudioComponent");

	Params::UAmbientAudioStatics_CreateAudioComponent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AmbientAudio.AmbientAudioStatics.AddAmbientGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::AddAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioStatics", "AddAmbientGameplayTag");

	Params::UAmbientAudioStatics_AddAmbientGameplayTag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioStatics.AddAmbientEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbientAudioDataAsset*      Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CrossfadeTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::AddAmbientEntry(class UObject* WorldContextObject, class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioStatics", "AddAmbientEntry");

	Params::UAmbientAudioStatics_AddAmbientEntry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AmbientName = AmbientName;
	Parms.Asset = Asset;
	Parms.Priority = Priority;
	Parms.CrossfadeTime = CrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AmbientAudio.AmbientAudioSubsystem
// (None)

class UClass* UAmbientAudioSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientAudioSubsystem");

	return Clss;
}


// AmbientAudioSubsystem AmbientAudio.Default__AmbientAudioSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientAudioSubsystem* UAmbientAudioSubsystem::GetDefaultObj()
{
	static class UAmbientAudioSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientAudioSubsystem*>(UAmbientAudioSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::RemoveGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveGameplayTag");

	Params::UAmbientAudioSubsystem_RemoveGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::RemoveAmbientEntry(class FName AmbientName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveAmbientEntry");

	Params::UAmbientAudioSubsystem_RemoveAmbientEntry_Params Parms{};

	Parms.AmbientName = AmbientName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::AddGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "AddGameplayTag");

	Params::UAmbientAudioSubsystem_AddGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbientAudioDataAsset*      Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CrossfadeTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "AddAmbientEntry");

	Params::UAmbientAudioSubsystem_AddAmbientEntry_Params Parms{};

	Parms.AmbientName = AmbientName;
	Parms.Asset = Asset;
	Parms.Priority = Priority;
	Parms.CrossfadeTime = CrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AmbientAudio.AmbientVolume
// (Actor)

class UClass* AAmbientVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientVolume");

	return Clss;
}


// AmbientVolume AmbientAudio.Default__AmbientVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAmbientVolume* AAmbientVolume::GetDefaultObj()
{
	static class AAmbientVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAmbientVolume*>(AAmbientVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function AmbientAudio.AmbientVolume.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetPriority(int32 NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetPriority");

	Params::AAmbientVolume_SetPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetEnabled");

	Params::AAmbientVolume_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.SetCrossfadeTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCrossfadeTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetCrossfadeTime(float NewCrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetCrossfadeTime");

	Params::AAmbientVolume_SetCrossfadeTime_Params Parms{};

	Parms.NewCrossfadeTime = NewCrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.SetAmbientAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAmbientAudioDataAsset*      NewAmbientAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetAmbientAsset");

	Params::AAmbientVolume_SetAmbientAsset_Params Parms{};

	Parms.NewAmbientAsset = NewAmbientAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.OnRep_bEnabled
// (Native, Protected)
// Parameters:

void AAmbientVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "OnRep_bEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


