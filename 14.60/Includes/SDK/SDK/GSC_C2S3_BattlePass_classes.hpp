#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x368 - 0x360)
// BlueprintGeneratedClass GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C
class UGSC_C2S3_BattlePass_C : public UFortGameStateComponent_EventLevel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGSC_C2S3_BattlePass_C* GetDefaultObj();

	void OnNavActorSelected();
	void OnNavActorHovered();
	void ExecuteUbergraph_GSC_C2S3_BattlePass(int32 EntryPoint);
};

}


