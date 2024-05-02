#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveStreamAnimation.LiveStreamAnimationChannel
// (None)

class UClass* ULiveStreamAnimationChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamAnimationChannel");

	return Clss;
}


// LiveStreamAnimationChannel LiveStreamAnimation.Default__LiveStreamAnimationChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveStreamAnimationChannel* ULiveStreamAnimationChannel::GetDefaultObj()
{
	static class ULiveStreamAnimationChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamAnimationChannel*>(ULiveStreamAnimationChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveStreamAnimation.LiveStreamAnimationDataHandler
// (None)

class UClass* ULiveStreamAnimationDataHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamAnimationDataHandler");

	return Clss;
}


// LiveStreamAnimationDataHandler LiveStreamAnimation.Default__LiveStreamAnimationDataHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveStreamAnimationDataHandler* ULiveStreamAnimationDataHandler::GetDefaultObj()
{
	static class ULiveStreamAnimationDataHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamAnimationDataHandler*>(ULiveStreamAnimationDataHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveStreamAnimation.LiveStreamAnimationSettings
// (None)

class UClass* ULiveStreamAnimationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamAnimationSettings");

	return Clss;
}


// LiveStreamAnimationSettings LiveStreamAnimation.Default__LiveStreamAnimationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveStreamAnimationSettings* ULiveStreamAnimationSettings::GetDefaultObj()
{
	static class ULiveStreamAnimationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamAnimationSettings*>(ULiveStreamAnimationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveStreamAnimation.LiveStreamAnimationSubsystem
// (None)

class UClass* ULiveStreamAnimationSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamAnimationSubsystem");

	return Clss;
}


// LiveStreamAnimationSubsystem LiveStreamAnimation.Default__LiveStreamAnimationSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveStreamAnimationSubsystem* ULiveStreamAnimationSubsystem::GetDefaultObj()
{
	static class ULiveStreamAnimationSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamAnimationSubsystem*>(ULiveStreamAnimationSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetRole
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELiveStreamAnimationRoleNewRole                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveStreamAnimationSubsystem::SetRole(enum class ELiveStreamAnimationRole NewRole)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "SetRole");

	Params::ULiveStreamAnimationSubsystem_SetRole_Params Parms{};

	Parms.NewRole = NewRole;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetAcceptClientPackets_Private
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                               bInShouldAcceptClientPackets                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveStreamAnimationSubsystem::SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "SetAcceptClientPackets_Private");

	Params::ULiveStreamAnimationSubsystem_SetAcceptClientPackets_Private_Params Parms{};

	Parms.bInShouldAcceptClientPackets = bInShouldAcceptClientPackets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetRole
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELiveStreamAnimationRoleReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELiveStreamAnimationRole ULiveStreamAnimationSubsystem::GetRole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "GetRole");

	Params::ULiveStreamAnimationSubsystem_GetRole_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetDataHandler
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class ULiveStreamAnimationDataHandler>Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULiveStreamAnimationDataHandler*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULiveStreamAnimationDataHandler* ULiveStreamAnimationSubsystem::GetDataHandler(TSubclassOf<class ULiveStreamAnimationDataHandler> Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "GetDataHandler");

	Params::ULiveStreamAnimationSubsystem_GetDataHandler_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


