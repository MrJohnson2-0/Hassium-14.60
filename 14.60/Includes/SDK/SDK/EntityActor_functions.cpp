#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EntityActor.ActorToEntityAdapterComponent
// (None)

class UClass* UActorToEntityAdapterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorToEntityAdapterComponent");

	return Clss;
}


// ActorToEntityAdapterComponent EntityActor.Default__ActorToEntityAdapterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UActorToEntityAdapterComponent* UActorToEntityAdapterComponent::GetDefaultObj()
{
	static class UActorToEntityAdapterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorToEntityAdapterComponent*>(UActorToEntityAdapterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.EntityActorCollisionComponent
// (None)

class UClass* UEntityActorCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorCollisionComponent");

	return Clss;
}


// EntityActorCollisionComponent EntityActor.Default__EntityActorCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorCollisionComponent* UEntityActorCollisionComponent::GetDefaultObj()
{
	static class UEntityActorCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorCollisionComponent*>(UEntityActorCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UEntityActorCollisionComponent::OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentHit");

	Params::UEntityActorCollisionComponent_OnNativeComponentHit_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorCollisionComponent::OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentEndOverlap");

	Params::UEntityActorCollisionComponent_OnNativeComponentEndOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UEntityActorCollisionComponent::OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentBeginOverlap");

	Params::UEntityActorCollisionComponent_OnNativeComponentBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EntityActor.EntityActorCustomReplicationComponent
// (None)

class UClass* UEntityActorCustomReplicationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorCustomReplicationComponent");

	return Clss;
}


// EntityActorCustomReplicationComponent EntityActor.Default__EntityActorCustomReplicationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorCustomReplicationComponent* UEntityActorCustomReplicationComponent::GetDefaultObj()
{
	static class UEntityActorCustomReplicationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorCustomReplicationComponent*>(UEntityActorCustomReplicationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.EntityActorLocalInputComponent
// (None)

class UClass* UEntityActorLocalInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorLocalInputComponent");

	return Clss;
}


// EntityActorLocalInputComponent EntityActor.Default__EntityActorLocalInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorLocalInputComponent* UEntityActorLocalInputComponent::GetDefaultObj()
{
	static class UEntityActorLocalInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorLocalInputComponent*>(UEntityActorLocalInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.EntityActorPlayerComponent
// (None)

class UClass* UEntityActorPlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorPlayerComponent");

	return Clss;
}


// EntityActorPlayerComponent EntityActor.Default__EntityActorPlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorPlayerComponent* UEntityActorPlayerComponent::GetDefaultObj()
{
	static class UEntityActorPlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorPlayerComponent*>(UEntityActorPlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.EntityActorPositionComponent
// (None)

class UClass* UEntityActorPositionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorPositionComponent");

	return Clss;
}


// EntityActorPositionComponent EntityActor.Default__EntityActorPositionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorPositionComponent* UEntityActorPositionComponent::GetDefaultObj()
{
	static class UEntityActorPositionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorPositionComponent*>(UEntityActorPositionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*             InRootComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRootComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorPositionComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorPositionComponent", "OnRootComponentChanged");

	Params::UEntityActorPositionComponent_OnRootComponentChanged_Params Parms{};

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EntityActor.EntityActorRotationComponent
// (None)

class UClass* UEntityActorRotationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorRotationComponent");

	return Clss;
}


// EntityActorRotationComponent EntityActor.Default__EntityActorRotationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorRotationComponent* UEntityActorRotationComponent::GetDefaultObj()
{
	static class UEntityActorRotationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorRotationComponent*>(UEntityActorRotationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*             InRootComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRootComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorRotationComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorRotationComponent", "OnRootComponentChanged");

	Params::UEntityActorRotationComponent_OnRootComponentChanged_Params Parms{};

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EntityActor.EntityActorScaleComponent
// (None)

class UClass* UEntityActorScaleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorScaleComponent");

	return Clss;
}


// EntityActorScaleComponent EntityActor.Default__EntityActorScaleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorScaleComponent* UEntityActorScaleComponent::GetDefaultObj()
{
	static class UEntityActorScaleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorScaleComponent*>(UEntityActorScaleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*             InRootComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRootComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorScaleComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorScaleComponent", "OnRootComponentChanged");

	Params::UEntityActorScaleComponent_OnRootComponentChanged_Params Parms{};

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EntityActor.EntityActorSkeletalMeshRenderComponent
// (None)

class UClass* UEntityActorSkeletalMeshRenderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorSkeletalMeshRenderComponent");

	return Clss;
}


// EntityActorSkeletalMeshRenderComponent EntityActor.Default__EntityActorSkeletalMeshRenderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorSkeletalMeshRenderComponent* UEntityActorSkeletalMeshRenderComponent::GetDefaultObj()
{
	static class UEntityActorSkeletalMeshRenderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorSkeletalMeshRenderComponent*>(UEntityActorSkeletalMeshRenderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.EntityActorStaticMeshRenderComponent
// (None)

class UClass* UEntityActorStaticMeshRenderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorStaticMeshRenderComponent");

	return Clss;
}


// EntityActorStaticMeshRenderComponent EntityActor.Default__EntityActorStaticMeshRenderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorStaticMeshRenderComponent* UEntityActorStaticMeshRenderComponent::GetDefaultObj()
{
	static class UEntityActorStaticMeshRenderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorStaticMeshRenderComponent*>(UEntityActorStaticMeshRenderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.EntityActorSubsystem
// (None)

class UClass* UEntityActorSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorSubsystem");

	return Clss;
}


// EntityActorSubsystem EntityActor.Default__EntityActorSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorSubsystem* UEntityActorSubsystem::GetDefaultObj()
{
	static class UEntityActorSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorSubsystem*>(UEntityActorSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.EntityActorTextDisplayComponent
// (None)

class UClass* UEntityActorTextDisplayComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityActorTextDisplayComponent");

	return Clss;
}


// EntityActorTextDisplayComponent EntityActor.Default__EntityActorTextDisplayComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityActorTextDisplayComponent* UEntityActorTextDisplayComponent::GetDefaultObj()
{
	static class UEntityActorTextDisplayComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityActorTextDisplayComponent*>(UEntityActorTextDisplayComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize
// (Final, Native, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetWorldSize(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetWorldSize");

	Params::UEntityActorTextDisplayComponent_SetWorldSize_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EVerticalTextAligment   Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetVerticalAlignment(enum class EVerticalTextAligment Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetVerticalAlignment");

	Params::UEntityActorTextDisplayComponent_SetVerticalAlignment_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FColor                      Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetTextRenderColor(const struct FColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetTextRenderColor");

	Params::UEntityActorTextDisplayComponent_SetTextRenderColor_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetText
// (Final, Native, Public)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetText");

	Params::UEntityActorTextDisplayComponent_SetText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     RelativeScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetRelativeScale(const struct FVector& RelativeScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeScale");

	Params::UEntityActorTextDisplayComponent_SetRelativeScale_Params Parms{};

	Parms.RelativeScale = RelativeScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                    RelativeRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetRelativeRotation(const struct FRotator& RelativeRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeRotation");

	Params::UEntityActorTextDisplayComponent_SetRelativeRotation_Params Parms{};

	Parms.RelativeRotation = RelativeRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     RelativeLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetRelativeLocation(const struct FVector& RelativeLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeLocation");

	Params::UEntityActorTextDisplayComponent_SetRelativeLocation_Params Parms{};

	Parms.RelativeLocation = RelativeLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EHorizTextAligment      Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetHorizontalAlignment(enum class EHorizTextAligment Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetHorizontalAlignment");

	Params::UEntityActorTextDisplayComponent_SetHorizontalAlignment_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UEntityActorTextDisplayComponent::GetWorldSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetWorldSize");

	Params::UEntityActorTextDisplayComponent_GetWorldSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EVerticalTextAligment   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVerticalTextAligment UEntityActorTextDisplayComponent::GetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetVerticalAlignment");

	Params::UEntityActorTextDisplayComponent_GetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FColor                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UEntityActorTextDisplayComponent::GetTextRenderColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetTextRenderColor");

	Params::UEntityActorTextDisplayComponent_GetTextRenderColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetText
// (Final, Native, Public, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEntityActorTextDisplayComponent::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetText");

	Params::UEntityActorTextDisplayComponent_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEntityActorTextDisplayComponent::GetRelativeLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetRelativeLocation");

	Params::UEntityActorTextDisplayComponent_GetRelativeLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EHorizTextAligment      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizTextAligment UEntityActorTextDisplayComponent::GetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetHorizontalAlignment");

	Params::UEntityActorTextDisplayComponent_GetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EntityActor.EntityDynamicActivationComponent
// (None)

class UClass* UEntityDynamicActivationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityDynamicActivationComponent");

	return Clss;
}


// EntityDynamicActivationComponent EntityActor.Default__EntityDynamicActivationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityDynamicActivationComponent* UEntityDynamicActivationComponent::GetDefaultObj()
{
	static class UEntityDynamicActivationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityDynamicActivationComponent*>(UEntityDynamicActivationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget
// (Final, Native, Private)
// Parameters:

void UEntityDynamicActivationComponent::OnRep_TransitionTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityDynamicActivationComponent", "OnRep_TransitionTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
// (Final, Native, Public)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityDynamicActivationComponent::OnEnabledChanged(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityDynamicActivationComponent", "OnEnabledChanged");

	Params::UEntityDynamicActivationComponent_OnEnabledChanged_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EntityActor.EntityToActorAdapterComponent
// (None)

class UClass* UEntityToActorAdapterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityToActorAdapterComponent");

	return Clss;
}


// EntityToActorAdapterComponent EntityActor.Default__EntityToActorAdapterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityToActorAdapterComponent* UEntityToActorAdapterComponent::GetDefaultObj()
{
	static class UEntityToActorAdapterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityToActorAdapterComponent*>(UEntityToActorAdapterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityActor.SimObject
// (Actor)

class UClass* ASimObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimObject");

	return Clss;
}


// SimObject EntityActor.Default__SimObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ASimObject* ASimObject::GetDefaultObj()
{
	static class ASimObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimObject*>(ASimObject::StaticClass()->DefaultObject);

	return Default;
}

}


