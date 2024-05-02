#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FoleySound.FoleySoundSubsystem
// (None)

class UClass* UFoleySoundSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleySoundSubsystem");

	return Clss;
}


// FoleySoundSubsystem FoleySound.Default__FoleySoundSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoleySoundSubsystem* UFoleySoundSubsystem::GetDefaultObj()
{
	static class UFoleySoundSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleySoundSubsystem*>(UFoleySoundSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function FoleySound.FoleySoundSubsystem.RemoveLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFoleySoundLibrary>Library                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFoleySoundSubsystem::RemoveLibrary(class AActor* Actor, TSubclassOf<class UFoleySoundLibrary> Library)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoleySoundSubsystem", "RemoveLibrary");

	Params::UFoleySoundSubsystem_RemoveLibrary_Params Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FoleySound.FoleySoundSubsystem.AddLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFoleySoundLibrary>Library                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFoleySoundSubsystem::AddLibrary(class AActor* Actor, TSubclassOf<class UFoleySoundLibrary> Library)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoleySoundSubsystem", "AddLibrary");

	Params::UFoleySoundSubsystem_AddLibrary_Params Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FoleySound.FoleySoundLibrary
// (None)

class UClass* UFoleySoundLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleySoundLibrary");

	return Clss;
}


// FoleySoundLibrary FoleySound.Default__FoleySoundLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoleySoundLibrary* UFoleySoundLibrary::GetDefaultObj()
{
	static class UFoleySoundLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleySoundLibrary*>(UFoleySoundLibrary::StaticClass()->DefaultObject);

	return Default;
}

}


