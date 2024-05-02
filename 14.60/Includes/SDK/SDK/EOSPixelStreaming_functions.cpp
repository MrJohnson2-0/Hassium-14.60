#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EOSPixelStreaming.EOSPixelStreamerDelegates
// (None)

class UClass* UEOSPixelStreamerDelegates::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSPixelStreamerDelegates");

	return Clss;
}


// EOSPixelStreamerDelegates EOSPixelStreaming.Default__EOSPixelStreamerDelegates
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSPixelStreamerDelegates* UEOSPixelStreamerDelegates::GetDefaultObj()
{
	static class UEOSPixelStreamerDelegates* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSPixelStreamerDelegates*>(UEOSPixelStreamerDelegates::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction EOSPixelStreaming.EOSPixelStreamerDelegates.OnAllConnectionsClosed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UEOSPixelStreamerDelegates::OnAllConnectionsClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPixelStreamerDelegates", "OnAllConnectionsClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOSPixelStreaming.EOSPixelStreamerDelegates.GetPixelStreamerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEOSPixelStreamerDelegates*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEOSPixelStreamerDelegates* UEOSPixelStreamerDelegates::GetPixelStreamerDelegates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPixelStreamerDelegates", "GetPixelStreamerDelegates");

	Params::UEOSPixelStreamerDelegates_GetPixelStreamerDelegates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EOSPixelStreaming.EOSPixelStreamerInputComponent
// (None)

class UClass* UEOSPixelStreamerInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSPixelStreamerInputComponent");

	return Clss;
}


// EOSPixelStreamerInputComponent EOSPixelStreaming.Default__EOSPixelStreamerInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSPixelStreamerInputComponent* UEOSPixelStreamerInputComponent::GetDefaultObj()
{
	static class UEOSPixelStreamerInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSPixelStreamerInputComponent*>(UEOSPixelStreamerInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EOSPixelStreaming.EOSPixelStreamerInputComponent.SendPixelStreamingResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Descriptor                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSPixelStreamerInputComponent::SendPixelStreamingResponse(const class FString& Descriptor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPixelStreamerInputComponent", "SendPixelStreamingResponse");

	Params::UEOSPixelStreamerInputComponent_SendPixelStreamingResponse_Params Parms{};

	Parms.Descriptor = Descriptor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction EOSPixelStreaming.EOSPixelStreamerInputComponent.OnInput__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Descriptor                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSPixelStreamerInputComponent::OnInput__DelegateSignature(const class FString& Descriptor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPixelStreamerInputComponent", "OnInput__DelegateSignature");

	Params::UEOSPixelStreamerInputComponent_OnInput__DelegateSignature_Params Parms{};

	Parms.Descriptor = Descriptor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOSPixelStreaming.EOSPixelStreamerInputComponent.GetJsonStringValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Descriptor                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSPixelStreamerInputComponent::GetJsonStringValue(const class FString& Descriptor, const class FString& FieldName, class FString* StringValue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPixelStreamerInputComponent", "GetJsonStringValue");

	Params::UEOSPixelStreamerInputComponent_GetJsonStringValue_Params Parms{};

	Parms.Descriptor = Descriptor;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StringValue != nullptr)
		*StringValue = std::move(Parms.StringValue);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function EOSPixelStreaming.EOSPixelStreamerInputComponent.AddJsonStringValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Descriptor                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewDescriptor                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSPixelStreamerInputComponent::AddJsonStringValue(const class FString& Descriptor, const class FString& FieldName, const class FString& StringValue, class FString* NewDescriptor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPixelStreamerInputComponent", "AddJsonStringValue");

	Params::UEOSPixelStreamerInputComponent_AddJsonStringValue_Params Parms{};

	Parms.Descriptor = Descriptor;
	Parms.FieldName = FieldName;
	Parms.StringValue = StringValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewDescriptor != nullptr)
		*NewDescriptor = std::move(Parms.NewDescriptor);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Class EOSPixelStreaming.EOSPixelStreamingSettings
// (None)

class UClass* UEOSPixelStreamingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSPixelStreamingSettings");

	return Clss;
}


// EOSPixelStreamingSettings EOSPixelStreaming.Default__EOSPixelStreamingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSPixelStreamingSettings* UEOSPixelStreamingSettings::GetDefaultObj()
{
	static class UEOSPixelStreamingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSPixelStreamingSettings*>(UEOSPixelStreamingSettings::StaticClass()->DefaultObject);

	return Default;
}

}


