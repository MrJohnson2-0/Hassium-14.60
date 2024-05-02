#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x460 - 0x270)
// Class ScoreRuntime.FortAthenaMutator_Score
class AFortAthenaMutator_Score : public AFortAthenaMutator
{
public:
	int32                                        NumCoinWaves;                                      // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsRespawnConfig;                            // 0x274(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRespawnsAllowed;                                  // 0x275(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2406[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        StopRespawnPhase;                                  // 0x278(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortRespawnLogicData                 RespawnLogicData;                                  // 0x298(0x100)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  GameMsgText_Intro;                                 // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  GameMsgText_FirstCoinsSpawned;                     // 0x3B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  GameMsgText_CoinsSpawned;                          // 0x3C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAthenaGameMessageData                GameMsg_NoMoreRespawnsWarning;                     // 0x3E0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAthenaGameMessageData                GameMsg_NoMoreRespawns;                            // 0x420(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Score* GetDefaultObj();

	void OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3);
	void OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
};

}


