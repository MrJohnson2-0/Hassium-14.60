#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x278 - 0x269)
// BlueprintGeneratedClass BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C
class ABP_AppleSun_ProjectileTrajectory_Athena_C : public ABP_ProjectileTrajectory_Athena_C
{
public:
	uint8                                        Pad_1B67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_AppleSun_ProjectileTrajectory_Athena_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


