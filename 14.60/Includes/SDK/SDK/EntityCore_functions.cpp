#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EntityCore.EntityComponent
// (None)

class UClass* UEntityComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityComponent");

	return Clss;
}


// EntityComponent EntityCore.Default__EntityComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityComponent* UEntityComponent::GetDefaultObj()
{
	static class UEntityComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityComponent*>(UEntityComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityEnableableComponent
// (None)

class UClass* UEntityEnableableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityEnableableComponent");

	return Clss;
}


// EntityEnableableComponent EntityCore.Default__EntityEnableableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityEnableableComponent* UEntityEnableableComponent::GetDefaultObj()
{
	static class UEntityEnableableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityEnableableComponent*>(UEntityEnableableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityCore.EntityEnableableComponent.OnRep_Enabled
// (Final, Native, Private)
// Parameters:

void UEntityEnableableComponent::OnRep_Enabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityEnableableComponent", "OnRep_Enabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class EntityCore.EntityDataBackedComponent
// (None)

class UClass* UEntityDataBackedComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityDataBackedComponent");

	return Clss;
}


// EntityDataBackedComponent EntityCore.Default__EntityDataBackedComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityDataBackedComponent* UEntityDataBackedComponent::GetDefaultObj()
{
	static class UEntityDataBackedComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityDataBackedComponent*>(UEntityDataBackedComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityPositionComponent
// (None)

class UClass* UEntityPositionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityPositionComponent");

	return Clss;
}


// EntityPositionComponent EntityCore.Default__EntityPositionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityPositionComponent* UEntityPositionComponent::GetDefaultObj()
{
	static class UEntityPositionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityPositionComponent*>(UEntityPositionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityRotationComponent
// (None)

class UClass* UEntityRotationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityRotationComponent");

	return Clss;
}


// EntityRotationComponent EntityCore.Default__EntityRotationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityRotationComponent* UEntityRotationComponent::GetDefaultObj()
{
	static class UEntityRotationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityRotationComponent*>(UEntityRotationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityScaleComponent
// (None)

class UClass* UEntityScaleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityScaleComponent");

	return Clss;
}


// EntityScaleComponent EntityCore.Default__EntityScaleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityScaleComponent* UEntityScaleComponent::GetDefaultObj()
{
	static class UEntityScaleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityScaleComponent*>(UEntityScaleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.Entity
// (None)

class UClass* UEntity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Entity");

	return Clss;
}


// Entity EntityCore.Default__Entity
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntity* UEntity::GetDefaultObj()
{
	static class UEntity* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntity*>(UEntity::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityCoreSubsystem
// (None)

class UClass* UEntityCoreSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityCoreSubsystem");

	return Clss;
}


// EntityCoreSubsystem EntityCore.Default__EntityCoreSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityCoreSubsystem* UEntityCoreSubsystem::GetDefaultObj()
{
	static class UEntityCoreSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityCoreSubsystem*>(UEntityCoreSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
// (None)

class UClass* UEntityCoreDataBackedRelativePositionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityCoreDataBackedRelativePositionComponent");

	return Clss;
}


// EntityCoreDataBackedRelativePositionComponent EntityCore.Default__EntityCoreDataBackedRelativePositionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityCoreDataBackedRelativePositionComponent* UEntityCoreDataBackedRelativePositionComponent::GetDefaultObj()
{
	static class UEntityCoreDataBackedRelativePositionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityCoreDataBackedRelativePositionComponent*>(UEntityCoreDataBackedRelativePositionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityTickableComponent
// (None)

class UClass* UEntityTickableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityTickableComponent");

	return Clss;
}


// EntityTickableComponent EntityCore.Default__EntityTickableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityTickableComponent* UEntityTickableComponent::GetDefaultObj()
{
	static class UEntityTickableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityTickableComponent*>(UEntityTickableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityCore.EntityScriptComponent
// (None)

class UClass* UEntityScriptComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityScriptComponent");

	return Clss;
}


// EntityScriptComponent EntityCore.Default__EntityScriptComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityScriptComponent* UEntityScriptComponent::GetDefaultObj()
{
	static class UEntityScriptComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityScriptComponent*>(UEntityScriptComponent::StaticClass()->DefaultObject);

	return Default;
}

}


