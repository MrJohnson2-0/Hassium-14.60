#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NetworkPrediction.NetworkPredictionComponent
// (None)

class UClass* UNetworkPredictionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetworkPredictionComponent");

	return Clss;
}


// NetworkPredictionComponent NetworkPrediction.Default__NetworkPredictionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetworkPredictionComponent* UNetworkPredictionComponent::GetDefaultObj()
{
	static class UNetworkPredictionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetworkPredictionComponent*>(UNetworkPredictionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FServerReplicationRPCParameterProxyParameter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNetworkPredictionComponent::ServerReceiveClientInput(struct FServerReplicationRPCParameter& ProxyParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetworkPredictionComponent", "ServerReceiveClientInput");

	Params::UNetworkPredictionComponent_ServerReceiveClientInput_Params Parms{};

	Parms.ProxyParameter = ProxyParameter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NetworkPrediction.NetworkPredictionPhysicsComponent
// (None)

class UClass* UNetworkPredictionPhysicsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetworkPredictionPhysicsComponent");

	return Clss;
}


// NetworkPredictionPhysicsComponent NetworkPrediction.Default__NetworkPredictionPhysicsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetworkPredictionPhysicsComponent* UNetworkPredictionPhysicsComponent::GetDefaultObj()
{
	static class UNetworkPredictionPhysicsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetworkPredictionPhysicsComponent*>(UNetworkPredictionPhysicsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NetworkPrediction.NetworkPredictionReplicatedManager
// (Actor)

class UClass* ANetworkPredictionReplicatedManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetworkPredictionReplicatedManager");

	return Clss;
}


// NetworkPredictionReplicatedManager NetworkPrediction.Default__NetworkPredictionReplicatedManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ANetworkPredictionReplicatedManager* ANetworkPredictionReplicatedManager::GetDefaultObj()
{
	static class ANetworkPredictionReplicatedManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ANetworkPredictionReplicatedManager*>(ANetworkPredictionReplicatedManager::StaticClass()->DefaultObject);

	return Default;
}


// Class NetworkPrediction.NetworkPredictionSettingsObject
// (None)

class UClass* UNetworkPredictionSettingsObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetworkPredictionSettingsObject");

	return Clss;
}


// NetworkPredictionSettingsObject NetworkPrediction.Default__NetworkPredictionSettingsObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetworkPredictionSettingsObject* UNetworkPredictionSettingsObject::GetDefaultObj()
{
	static class UNetworkPredictionSettingsObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetworkPredictionSettingsObject*>(UNetworkPredictionSettingsObject::StaticClass()->DefaultObject);

	return Default;
}


// Class NetworkPrediction.NetworkPredictionWorldManager
// (None)

class UClass* UNetworkPredictionWorldManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetworkPredictionWorldManager");

	return Clss;
}


// NetworkPredictionWorldManager NetworkPrediction.Default__NetworkPredictionWorldManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetworkPredictionWorldManager* UNetworkPredictionWorldManager::GetDefaultObj()
{
	static class UNetworkPredictionWorldManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetworkPredictionWorldManager*>(UNetworkPredictionWorldManager::StaticClass()->DefaultObject);

	return Default;
}

}


