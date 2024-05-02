#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SolarisInterop.VerseCoroutineLib
// (None)

class UClass* UVerseCoroutineLib::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseCoroutineLib");

	return Clss;
}


// VerseCoroutineLib SolarisInterop.Default__VerseCoroutineLib
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseCoroutineLib* UVerseCoroutineLib::GetDefaultObj()
{
	static class UVerseCoroutineLib* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseCoroutineLib*>(UVerseCoroutineLib::StaticClass()->DefaultObject);

	return Default;
}


// Function SolarisInterop.VerseCoroutineLib.GetState
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVerseCoroutineLib::GetState(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCoroutineLib", "GetState");

	Params::UVerseCoroutineLib_GetState_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarisInterop.VerseCoroutineLib.Deallocate
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseCoroutineLib::Deallocate(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCoroutineLib", "Deallocate");

	Params::UVerseCoroutineLib_Deallocate_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SolarisInterop.VerseCoroutineLib.Allocate
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                      Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallerResumeState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVerseCoroutineLib::Allocate(class UClass* Type, class UObject* Caller, int32 CallerResumeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCoroutineLib", "Allocate");

	Params::UVerseCoroutineLib_Allocate_Params Parms{};

	Parms.Type = Type;
	Parms.Caller = Caller;
	Parms.CallerResumeState = CallerResumeState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarisInterop.VerseCoroutineLib.Abort
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAbortCallers                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseCoroutineLib::Abort(class UObject* Context, bool bAbortCallers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCoroutineLib", "Abort");

	Params::UVerseCoroutineLib_Abort_Params Parms{};

	Parms.Context = Context;
	Parms.bAbortCallers = bAbortCallers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SolarisInterop.CoroutineContextPlaceholder
// (None)

class UClass* UCoroutineContextPlaceholder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoroutineContextPlaceholder");

	return Clss;
}


// CoroutineContextPlaceholder SolarisInterop.Default__CoroutineContextPlaceholder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoroutineContextPlaceholder* UCoroutineContextPlaceholder::GetDefaultObj()
{
	static class UCoroutineContextPlaceholder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoroutineContextPlaceholder*>(UCoroutineContextPlaceholder::StaticClass()->DefaultObject);

	return Default;
}

}


