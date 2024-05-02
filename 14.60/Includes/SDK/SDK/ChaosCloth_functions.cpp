#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosCloth.ChaosClothConfig
// (None)

class UClass* UChaosClothConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothConfig");

	return Clss;
}


// ChaosClothConfig ChaosCloth.Default__ChaosClothConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothConfig* UChaosClothConfig::GetDefaultObj()
{
	static class UChaosClothConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothConfig*>(UChaosClothConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCloth.ChaosClothSharedSimConfig
// (None)

class UClass* UChaosClothSharedSimConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothSharedSimConfig");

	return Clss;
}


// ChaosClothSharedSimConfig ChaosCloth.Default__ChaosClothSharedSimConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothSharedSimConfig* UChaosClothSharedSimConfig::GetDefaultObj()
{
	static class UChaosClothSharedSimConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothSharedSimConfig*>(UChaosClothSharedSimConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCloth.ChaosClothingSimulationFactory
// (None)

class UClass* UChaosClothingSimulationFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothingSimulationFactory");

	return Clss;
}


// ChaosClothingSimulationFactory ChaosCloth.Default__ChaosClothingSimulationFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothingSimulationFactory* UChaosClothingSimulationFactory::GetDefaultObj()
{
	static class UChaosClothingSimulationFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothingSimulationFactory*>(UChaosClothingSimulationFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCloth.ChaosClothingSimulationInteractor
// (None)

class UClass* UChaosClothingSimulationInteractor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothingSimulationInteractor");

	return Clss;
}


// ChaosClothingSimulationInteractor ChaosCloth.Default__ChaosClothingSimulationInteractor
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothingSimulationInteractor* UChaosClothingSimulationInteractor::GetDefaultObj()
{
	static class UChaosClothingSimulationInteractor* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothingSimulationInteractor*>(UChaosClothingSimulationInteractor::StaticClass()->DefaultObject);

	return Default;
}

}


