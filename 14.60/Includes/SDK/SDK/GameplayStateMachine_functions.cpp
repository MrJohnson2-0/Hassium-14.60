#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayStateMachine.GameplayState
// (None)

class UClass* UGameplayState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayState");

	return Clss;
}


// GameplayState GameplayStateMachine.Default__GameplayState
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayState* UGameplayState::GetDefaultObj()
{
	static class UGameplayState* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayState*>(UGameplayState::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayStateMachine.GameplayState.UpdateState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::UpdateState(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayState", "UpdateState");

	Params::UGameplayState_UpdateState_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayStateMachine.GameplayState.GetStateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UGameplayState::GetStateId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayState", "GetStateId");

	Params::UGameplayState_GetStateId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayState.EndState
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NextStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::EndState(struct FGameplayTag& NextStateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayState", "EndState");

	Params::UGameplayState_EndState_Params Parms{};

	Parms.NextStateId = NextStateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayStateMachine.GameplayState.BeginState
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                PrevStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::BeginState(struct FGameplayTag& PrevStateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayState", "BeginState");

	Params::UGameplayState_BeginState_Params Parms{};

	Parms.PrevStateId = PrevStateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayStateMachine.GameplayStateMachine
// (None)

class UClass* UGameplayStateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayStateMachine");

	return Clss;
}


// GameplayStateMachine GameplayStateMachine.Default__GameplayStateMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayStateMachine* UGameplayStateMachine::GetDefaultObj()
{
	static class UGameplayStateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayStateMachine*>(UGameplayStateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayStateMachine.GameplayStateMachine.SetState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InStateId                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayStateMachine::SetState(struct FGameplayTag& InStateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayStateMachine", "SetState");

	Params::UGameplayStateMachine_SetState_Params Parms{};

	Parms.InStateId = InStateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData
// (Final, Native, Private)
// Parameters:

void UGameplayStateMachine::OnRep_ActiveGameplayStateData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayStateMachine", "OnRep_ActiveGameplayStateData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UGameplayStateMachine::GetStateMachineId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayStateMachine", "GetStateMachineId");

	Params::UGameplayStateMachine_GetStateMachineId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayState*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayState* UGameplayStateMachine::GetActiveStateObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayStateMachine", "GetActiveStateObject");

	Params::UGameplayStateMachine_GetActiveStateObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UGameplayStateMachine::GetActiveStateId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayStateMachine", "GetActiveStateId");

	Params::UGameplayStateMachine_GetActiveStateId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGameplayStateMachine::EvaluateStateTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayStateMachine", "EvaluateStateTransition");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayStateMachine.GameplayStateMachineManager
// (None)

class UClass* UGameplayStateMachineManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayStateMachineManager");

	return Clss;
}


// GameplayStateMachineManager GameplayStateMachine.Default__GameplayStateMachineManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayStateMachineManager* UGameplayStateMachineManager::GetDefaultObj()
{
	static class UGameplayStateMachineManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayStateMachineManager*>(UGameplayStateMachineManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayStateMachine.GameplayStateMachineSubsystem
// (None)

class UClass* UGameplayStateMachineSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayStateMachineSubsystem");

	return Clss;
}


// GameplayStateMachineSubsystem GameplayStateMachine.Default__GameplayStateMachineSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayStateMachineSubsystem* UGameplayStateMachineSubsystem::GetDefaultObj()
{
	static class UGameplayStateMachineSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayStateMachineSubsystem*>(UGameplayStateMachineSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


