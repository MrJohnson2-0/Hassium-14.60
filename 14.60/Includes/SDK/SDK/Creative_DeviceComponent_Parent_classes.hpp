#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// BlueprintGeneratedClass Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C
class UCreative_DeviceComponent_Parent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCreative_DeviceComponent_Parent_C* GetDefaultObj();

	void Owning_Actor_Activated();
	void Owning_Actor_Initialized();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Creative_DeviceComponent_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACreative_Device_Prop_Parent_C* K2Node_DynamicCast_AsCreative_Device_Prop_Parent, bool K2Node_DynamicCast_bSuccess);
};

}


