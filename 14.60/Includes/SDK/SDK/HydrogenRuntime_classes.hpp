#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x498 (0x818 - 0x380)
// Class HydrogenRuntime.FortAthenaMutator_Hydrogen
class AFortAthenaMutator_Hydrogen : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                        Pad_2323[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInitialized;                                      // 0x388(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWinnerDeclared;                                   // 0x389(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2324[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        VictoryPointImbalanceRespawnTimeMultiplier;        // 0x390(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HighVictoryPointImbalanceRespawnTimeMultiplier;    // 0x3B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinRespawnTime;                                    // 0x3D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTeamPointsEntry>              HydrogenTeamPoints;                                // 0x3F0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnHydrogenTeamPointsChanged;                       // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        WinningTeam;                                       // 0x410(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2326[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WinningScore;                                      // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AHydrogenObjectiveActor*>       CapturePointActors;                                // 0x418(0x10)(Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        NonCapturePointActorsForPath;                      // 0x428(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SafeZoneRadius;                                    // 0x438(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AircraftOffsetFromRadius;                          // 0x458(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bShouldDropSupplyDropsBetweenCurrentAndNextSafeZones; // 0x478(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SupplyDropPercentDistanceToNextPathLocation;       // 0x498(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SupplyDropPercentSafeZoneRadius;                   // 0x4B8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*          MinimapMaterialParameterCollection;                // 0x4D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinRespawnHeightAboveGround;                       // 0x4E0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DefaultRespawnLabelText;                           // 0x500(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            DefaultRespawnTexture;                             // 0x518(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DefaultRespawnDisplayPriority;                     // 0x520(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2329[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    DefaultRespawnCameraActorClass;                    // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_232A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        HydrogenCapturePointsPathsIndex;                   // 0x540(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TArray<struct FHydrogenPathNames>            HydrogenCapturePointsPaths;                        // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HydrogenCapturePointsPathSpeedToNextNode;          // 0x570(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        TickHydrogenStormShield_TimeBetweenTicks;          // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HydrogenCompassIconOverlap;                        // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStormActive;                                      // 0x598(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_232E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondsTilStormActivation;                         // 0x59C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2330[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        bAllowCheckWinnerWithOneTeamLeft;                  // 0x5C8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          ObjectiveAccoladeTag;                              // 0x5E8(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          EOMBonusAccoladeTag;                               // 0x5F0(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bOnlyCapturePointsInsideSafeZoneCount;             // 0x5F8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bAwardVictoryPointsWhenFullyCaptured;              // 0x618(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BonusVictoryPointsAwardedForCapturingPoint;        // 0x638(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BonusVictoryPointsAwardedForLockedCapturedPoint;   // 0x658(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	float                                        HydrogenVictoryPointCheckTime;                     // 0x678(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2332[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        HydrogenVictoryPointGoal;                          // 0x680(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HydrogenCloseToVictoryPointGoal;                   // 0x6A0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	float                                        HydrogenTotalTimeForOneCapturePoint;               // 0x6C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HydrogenMaxCapturePoints;                          // 0x6C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HydrogenTotalTimeForMaxCapturePoints;              // 0x6C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2333[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        HydrogenVictoryPointIncreaseReducedRate;           // 0x6D0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HydrogenVictoryPointIncrease;                      // 0x6F0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HydrogenVictoryPointRateIncreasePerPoint;          // 0x710(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	float                                        HydrogenVictoryPointCheckTimePassed;               // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2335[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SafeZoneCameraActor;                               // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2337[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HydrogenCapturePointsPathsIndexToUse;              // 0x74C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StormHeadingYawReplicated;                         // 0x750(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PathGameplayTagToUse;                              // 0x754(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_233A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInitialized;                                     // 0x760(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWinningTeamDeclared;                             // 0x770(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InventoryItemTagsToCount;                          // 0x780(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                MatchEndAnalyticsEventName;                        // 0x7A0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EarlyExitAnalyticsEventName;                       // 0x7B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_233C[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Hydrogen* GetDefaultObj();

	void UpdateCapturePointsCounted();
	bool TickHydrogenStormShield(float DeltaSeconds);
	void SetupSafeZoneRoute(const struct FVector& StartVector, const struct FVector& EndVector);
	void SetCapturePointFillAmount(class AHydrogenObjectiveActor* InCapturePointActor, uint8 InPlayerTeam);
	void PositionHydrogenStormShield();
	void OwningTeamChange(class AHydrogenObjectiveActor* Objective, uint8 NewTeam, uint8 OldTeam);
	void OnRep_WinningTeam();
	void OnRep_HydrogenTeamPointsChanged();
	void OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterfaceConst, enum class EAthenaGamePhaseStep GamePhaseStep);
	bool IsInStormShield(const struct FVector& TestLocation);
	void GotoNextStormShieldNode();
	void GiveObjectiveAccolade(class AFortPlayerControllerAthena* FortController);
	void GiveEOMBonusAccolade();
	float GetTimeToNextNode();
	float GetStormSpeed();
	void GetSortedActivePointIndices(TArray<int32>* OutSortedIndices);
	int32 GetOwnedCapturePointCount(int32 InIndex);
	struct FVector GetNextActorOnPathLocation(int32 InPathIndex);
	TArray<class AHydrogenObjectiveActor*> GetAllCapturePoints();
	struct FVector GetActorOnPathLocation(int32 InPathIndex);
	void EndGame(uint8 Winner);
	void CheckVictoryPoints(float TimePassed);
	bool bHasWinnerBeenDeclared();
	bool bHasStormStarted();
	void AddBonusVictoryPointsForLockedCapturePoints(uint8 InTeam);
	void ActivateTheStormShield();
};

// 0x5A0 (0xBA8 - 0x608)
// Class HydrogenRuntime.HydrogenObjectiveActor
class AHydrogenObjectiveActor : public ABuildingActor
{
public:
	uint8                                        Pad_2355[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                TeamsOnPoint;                                      // 0x610(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CaptureProgress;                                   // 0x620(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CapturingTeam;                                     // 0x624(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OwningTeam;                                        // 0x625(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBeenCaptured;                                     // 0x626(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnContestedChange;                                 // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamsOnPointChange;                              // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCapturePointChange;                              // 0x648(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOwningTeamChange;                                // 0x658(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStormIsNear;                                     // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        PreviousOwningTeam;                                // 0x678(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHydrogenCaptureStateEnum         HydrogenCaptureStateEnum;                          // 0x679(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfPlayersOnPoint;                            // 0x67C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfTeamsOnPoint;                              // 0x680(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTeamPlayerCountEntry>         TeamsOnCapturePoint;                               // 0x688(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CaptureProgressAdditionalPlayersMultiplier;        // 0x698(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AmountOfGainEveryLoop;                             // 0x6B8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CaptureProgressGoal;                               // 0x6D8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        MaxPlayerMultiplier;                               // 0x6F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateTime;                                        // 0x6FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActivePointsChanged;                             // 0x700(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PathGameplayTags;                                  // 0x710(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  CaptureCollisionName;                              // 0x730(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CapturePointLetter;                                // 0x738(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Locked_MapIconBrush;                               // 0x750(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             LockedMinimapIconScale;                            // 0x7D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Contested_MapIconBrush;                            // 0x7E0(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ContestedMinimapIconScale;                         // 0x868(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ContestedIconLinearColor;                          // 0x870(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ContestedLetterTextLinearColor;                    // 0x880(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EnemyCapturing_MapIconBrush;                       // 0x890(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AllyCapturing_MapIconBrush;                        // 0x918(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EnemyCap_MapIconBrush;                             // 0x9A0(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AllyCap_MapIconBrush;                              // 0xA28(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  FillAmountName;                                    // 0xAB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MiniMapIconScale;                                  // 0xAB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TextScale;                                         // 0xAC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CompassIconScale;                                  // 0xAC4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompassMaxPawnDistanceForScaling;                  // 0xACC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompassYOffset;                                    // 0xAD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2360[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        LetterFontInfo;                                    // 0xAD8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              EnemyCapturing_DrawBrushMID;                       // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              AllyCapturing_DrawBrushMID;                        // 0xB30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInStormShield;                                  // 0xB38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2361[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    IconFlashTimeline;                                 // 0xB50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           IconFlashCurve;                                    // 0xB58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2363[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CheckForStormTimerHandle;                          // 0xB70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CheckForStormRate;                                 // 0xB78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2364[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortGameStateAthena*                  CachedGameState;                                   // 0xB80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_Hydrogen*           CachedMutator;                                     // 0xB88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsActive;                                         // 0xB90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2366[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShapeComponent*                       CaptureCollisionComponent;                         // 0xB98(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2367[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AHydrogenObjectiveActor* GetDefaultObj();

	void WaitForMutator();
	void SetUpMaterialInstanceDynamic(struct FSlateBrush* MapIconBrush, class UMaterialInstanceDynamic** DrawBrushMID);
	void SetActive(bool bInIsActive);
	void ProcessOverlap(class AActor* OtherActor);
	void PlayContestedMapTimeline();
	void OnTimelineFlashing(float IconOpacity);
	void OnRep_TeamsOnCapturePoint();
	void OnRep_OwningTeam();
	void OnRep_HydrogenCaptureStateEnum();
	void OnRep_bIsActive();
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnMutatorAvailable();
	void OnComponentBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	bool GetIsActive();
	void FlashIcon();
	void CheckForStorm();
};

// 0x28 (0x248 - 0x220)
// Class HydrogenRuntime.HydrogenPathActor
class AHydrogenPathActor : public AActor
{
public:
	uint8                                        Pad_236C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 PathGameplayTags;                                  // 0x228(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AHydrogenPathActor* GetDefaultObj();

};

}


