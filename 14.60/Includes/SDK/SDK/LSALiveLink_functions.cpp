#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LSALiveLink.LSALiveLinkDataHandler
// (None)

class UClass* ULSALiveLinkDataHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LSALiveLinkDataHandler");

	return Clss;
}


// LSALiveLinkDataHandler LSALiveLink.Default__LSALiveLinkDataHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class ULSALiveLinkDataHandler* ULSALiveLinkDataHandler::GetDefaultObj()
{
	static class ULSALiveLinkDataHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<ULSALiveLinkDataHandler*>(ULSALiveLinkDataHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function LSALiveLink.LSALiveLinkDataHandler.StopTrackingLiveLinkSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveStreamAnimationHandleWrapperRegisteredName                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULSALiveLinkDataHandler::StopTrackingLiveLinkSubject(const struct FLiveStreamAnimationHandleWrapper& RegisteredName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LSALiveLinkDataHandler", "StopTrackingLiveLinkSubject");

	Params::ULSALiveLinkDataHandler_StopTrackingLiveLinkSubject_Params Parms{};

	Parms.RegisteredName = RegisteredName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LSALiveLink.LSALiveLinkDataHandler.StartTrackingLiveLinkSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        LiveLinkSubject                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveStreamAnimationHandleWrapperRegisteredName                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLSALiveLinkSourceOptions   Options                                                          (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLiveStreamAnimationHandleWrapperTranslationProfile                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULSALiveLinkDataHandler::StartTrackingLiveLinkSubject(class FName LiveLinkSubject, const struct FLiveStreamAnimationHandleWrapper& RegisteredName, const struct FLSALiveLinkSourceOptions& Options, const struct FLiveStreamAnimationHandleWrapper& TranslationProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LSALiveLinkDataHandler", "StartTrackingLiveLinkSubject");

	Params::ULSALiveLinkDataHandler_StartTrackingLiveLinkSubject_Params Parms{};

	Parms.LiveLinkSubject = LiveLinkSubject;
	Parms.RegisteredName = RegisteredName;
	Parms.Options = Options;
	Parms.TranslationProfile = TranslationProfile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LSALiveLink.LSALiveLinkFrameTranslator
// (None)

class UClass* ULSALiveLinkFrameTranslator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LSALiveLinkFrameTranslator");

	return Clss;
}


// LSALiveLinkFrameTranslator LSALiveLink.Default__LSALiveLinkFrameTranslator
// (Public, ClassDefaultObject, ArchetypeObject)

class ULSALiveLinkFrameTranslator* ULSALiveLinkFrameTranslator::GetDefaultObj()
{
	static class ULSALiveLinkFrameTranslator* Default = nullptr;

	if (!Default)
		Default = static_cast<ULSALiveLinkFrameTranslator*>(ULSALiveLinkFrameTranslator::StaticClass()->DefaultObject);

	return Default;
}


// Class LSALiveLink.LSALiveLinkRole
// (None)

class UClass* ULSALiveLinkRole::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LSALiveLinkRole");

	return Clss;
}


// LSALiveLinkRole LSALiveLink.Default__LSALiveLinkRole
// (Public, ClassDefaultObject, ArchetypeObject)

class ULSALiveLinkRole* ULSALiveLinkRole::GetDefaultObj()
{
	static class ULSALiveLinkRole* Default = nullptr;

	if (!Default)
		Default = static_cast<ULSALiveLinkRole*>(ULSALiveLinkRole::StaticClass()->DefaultObject);

	return Default;
}


// Class LSALiveLink.LSALiveLinkSettings
// (None)

class UClass* ULSALiveLinkSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LSALiveLinkSettings");

	return Clss;
}


// LSALiveLinkSettings LSALiveLink.Default__LSALiveLinkSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULSALiveLinkSettings* ULSALiveLinkSettings::GetDefaultObj()
{
	static class ULSALiveLinkSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULSALiveLinkSettings*>(ULSALiveLinkSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LSALiveLink.LiveLinkTestSkelMeshTrackerComponent
// (None)

class UClass* ULiveLinkTestSkelMeshTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTestSkelMeshTrackerComponent");

	return Clss;
}


// LiveLinkTestSkelMeshTrackerComponent LSALiveLink.Default__LiveLinkTestSkelMeshTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTestSkelMeshTrackerComponent* ULiveLinkTestSkelMeshTrackerComponent::GetDefaultObj()
{
	static class ULiveLinkTestSkelMeshTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTestSkelMeshTrackerComponent*>(ULiveLinkTestSkelMeshTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StopTrackingSkelMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveLinkTestSkelMeshTrackerComponent::StopTrackingSkelMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkTestSkelMeshTrackerComponent", "StopTrackingSkelMesh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StartTrackingSkelMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InSubjectName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkTestSkelMeshTrackerComponent::StartTrackingSkelMesh(class FName InSubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkTestSkelMeshTrackerComponent", "StartTrackingSkelMesh");

	Params::ULiveLinkTestSkelMeshTrackerComponent_StartTrackingSkelMesh_Params Parms{};

	Parms.InSubjectName = InSubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


