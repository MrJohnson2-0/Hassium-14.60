#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BF_ManagedParticles.BF_ManagedParticles_C
class UBF_ManagedParticles_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBF_ManagedParticles_C* GetDefaultObj();

	void Set_Managed_Particles_Parameter__Bool_(class FName Name, bool Value, class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void Deactivate_Managed_Niagara(class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void Activate_Managed_Niagara(bool Reset, class UObject* __WorldContext, const struct FGameplayTag& Niagara, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void GetNiagaraParticles(class UObject* __WorldContext, struct FGameplayTagContainer* Gameplay_Tag_Container, const struct FGameplayTag& NiagaraTag, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue);
};

}


