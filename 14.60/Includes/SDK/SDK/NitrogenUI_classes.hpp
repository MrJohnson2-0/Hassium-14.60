#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x330 - 0x318)
// Class NitrogenUI.NitrogenWidgetBase
class UNitrogenWidgetBase : public ULTMWidgetBase
{
public:
	class AFortPlayerStateAthena*                CurrentViewedPlayerState;                          // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11B3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenWidgetBase* GetDefaultObj();

	void OnExitVehicle();
	void OnEnterVehicleDriver();
	void HandleNitrogenGamePhaseChanged(enum class ENitrogenGamePhase NewGamePhase);
	void BP_BindToMutator(class AFortAthenaMutator_Nitrogen* Mutator);
};

// 0x90 (0x3C0 - 0x330)
// Class NitrogenUI.NitrogenFareBonusWidget
class UNitrogenFareBonusWidget : public UNitrogenWidgetBase
{
public:
	class UImage*                                Image_BonusIcon;                                   // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bEnableReminders;                                  // 0x338(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bLoopReminders;                                    // 0x358(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InitialReminderDelay;                              // 0x378(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ReminderFrequency;                                 // 0x398(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                          ShowWidgetTimerHandle;                             // 0x3B8(0x8)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNitrogenFareBonusWidget* GetDefaultObj();

	void ShowBonus();
	void OnEndFare(bool bFareCompleted);
	void OnBeginFare();
	void OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool ShouldAwardBonus);
	void HideBonus();
};

// 0x8 (0x338 - 0x330)
// Class NitrogenUI.NitrogenFareInteractionWidget
class UNitrogenFareInteractionWidget : public UNitrogenWidgetBase
{
public:
	uint8                                        Pad_11B8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenFareInteractionWidget* GetDefaultObj();

	void UpdateTimerDisplay(bool bCanceled);
	void OnEndInteraction();
	void OnBeginInteraction(struct FNitrogenFareInteractionData& FareInteractionData);
};

// 0x90 (0x3C0 - 0x330)
// Class NitrogenUI.NitrogenFareMeterWidget
class UNitrogenFareMeterWidget : public UNitrogenWidgetBase
{
public:
	class UCommonTextBlock*                      DeliveryTimeObjectiveText;                         // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      BonusObjectiveText;                                // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  FastDeliveryTimeLeftText;                          // 0x340(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UImage*                                FarePortrait;                                      // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      FareNameTextBlock;                                 // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ANitrogenFare*                         CurrentFare;                                       // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bThresholdAwardCondition;                          // 0x370(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFareBonusObjectiveComplete;                       // 0x371(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PortraitMaterialParameterName;                     // 0x374(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BorderPercentMaterialParameterName;                // 0x37C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      PassengerPlayerState;                              // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11C5[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenFareMeterWidget* GetDefaultObj();

	void SetCurrentFareTimedDeliveryObjectiveState(enum class ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation);
	void SetCurrentFareBonusObjectiveState(enum class ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation);
	void SetCurrentFareBaseRewardValue(int32 Num);
	void OnFareBonusFinshed(bool BonusCompleted);
	void OnEndFare(bool bFareCompleted);
	void OnBeginInteraction(struct FNitrogenFareInteractionData& FareInteractionData);
	void OnBeginFare();
	void OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool bShouldAwardBonus);
	void FastDeliveryTimeUpdate(float RemainingTimeRatio);
	void BonusProgressUpdate(float BonusProgressRatio);
};

// 0x20 (0x350 - 0x330)
// Class NitrogenUI.NitrogenLeaderboardWidget
class UNitrogenLeaderboardWidget : public UNitrogenWidgetBase
{
public:
	int32                                        MinimumScoreToDisplayTeam;                         // 0x330(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseGenericEnemyTeamName;                          // 0x334(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GenericEnemyTeamNameDescription;                   // 0x338(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNitrogenLeaderboardWidget* GetDefaultObj();

	void UpdateLeaderboardUI(TArray<struct FNitrogenLeaderboardData>& LeaderboardInfo, int32 GoalScore);
};

// 0x40 (0x370 - 0x330)
// Class NitrogenUI.NitrogenMatchNearEndWidget
class UNitrogenMatchNearEndWidget : public UNitrogenWidgetBase
{
public:
	class UCommonTextBlock*                      PointsFromWinningText;                             // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  EnemyTeamWinningDescription;                       // 0x338(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  PlayerTeamWinningDescription;                      // 0x350(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bMatchNearEnd;                                     // 0x368(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenMatchNearEndWidget* GetDefaultObj();

	void OnMatchNearEnd();
	void HandleTopScoreUpdated();
};

// 0x8 (0x338 - 0x330)
// Class NitrogenUI.NitrogenObjectiveWidget
class UNitrogenObjectiveWidget : public UNitrogenWidgetBase
{
public:
	enum class ENitrogenObjectiveWidgetState     ObjectiveWidgetState;                              // 0x330(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenObjectiveWidget* GetDefaultObj();

	void UpdateWidgetState(enum class ENitrogenObjectiveWidgetState NewObjectiveWidgetState);
	void SetShouldBeHidden(bool bInShouldBeHidden);
	void OnEndFare(bool bFareCompleted);
	void OnBeginFare();
	void HandleVehicleExited();
	void HandleVehicleEntered(class AFortAthenaVehicle* NewVehicle);
};

// 0x10 (0x340 - 0x330)
// Class NitrogenUI.NitrogenPlacementWidget
class UNitrogenPlacementWidget : public UNitrogenWidgetBase
{
public:
	float                                        UpdateTimerTickDuration;                           // 0x330(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D3[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenPlacementWidget* GetDefaultObj();

	void OnPlayerScoringUpdate(int32 CurrentPlayerTeamScore, int32 CurrentPlayerTeamPlacement, int32 GoalScore, TArray<uint8>& SortedTeamScores);
	void OnPlayerScoreChanged(int32 NewScore);
	void OnPlayerPlacementChanged(int32 NewPlacement, int32 OldPlacement);
	void OnPlayerFareComplete(int32 StarsGained);
	void OnEndFare(bool bFareCompleted);
	void HandleScoreChanged(int32 Score);
};

// 0x20 (0x350 - 0x330)
// Class NitrogenUI.NitrogenScoreEventWidget
class UNitrogenScoreEventWidget : public UNitrogenWidgetBase
{
public:
	FMulticastInlineDelegateProperty_            OnNitrogenScoreEventDisplayed;                     // 0x330(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNitrogenScoreEventHidden;                        // 0x340(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNitrogenScoreEventWidget* GetDefaultObj();

	void DisplayScoreEvent(enum class ENitrogenScoreReason ScoreReason);
	void DisplayLeadChangedEvent(bool bInLead);
};

// 0x18 (0x348 - 0x330)
// Class NitrogenUI.NitrogenSpeedyBonusTimerWidget
class UNitrogenSpeedyBonusTimerWidget : public UNitrogenWidgetBase
{
public:
	class ANitrogenFare*                         CurrentFare;                                       // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SecondsRemaining;                                  // 0x338(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D8[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenSpeedyBonusTimerWidget* GetDefaultObj();

	void OnSpeedyDeliveryTimeUpdate(float TimePrecentage, float TotalObjectiveTime);
	void OnSpeedyDeliveryFailed(bool bPlayAnimation);
	void OnSpeedyDeliveryCompleted();
	void OnEndFare(bool bFareCompleted);
	void OnBeginFare();
};

}


