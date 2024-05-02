#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCD (0xC85 - 0xBB8)
// BlueprintGeneratedClass BP_Creative_Billboard.BP_Creative_Billboard_C
class ABP_Creative_Billboard_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       WidgetAnchor;                                      // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCreative_Enabled_Component_C*         Creative_Enabled_Component;                        // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCreative_VisibleInGame_Component_C*   VisibleInGameComponent;                            // 0xBD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameLogicComponent*           FortMinigameLogic;                                 // 0xBD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayReceiverMessageComponent* HideTextReceiverComponent;                         // 0xBE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayReceiverMessageComponent* ShowTextReceiverComponent;                         // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         ToolPickingBox;                                    // 0xBF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xBF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                UserDefinedText;                                   // 0xC00(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bShowBorder;                                       // 0xC10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_548B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackgroundColor;                                   // 0xC14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      HorizontalTextAlignment;                           // 0xC24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextSize;                                          // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ViewDistance;                                      // 0xC2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColor;                                         // 0xC30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EnabledIndex;                                      // 0xC40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextFont;                                          // 0xC44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Debug_Text;                                   // 0xC48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_548D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              BackgroundRelativeRotationWithBorder;              // 0xC4C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              BackgroundRelativeRotationWithoutBorder;           // 0xC58(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        OutlineStrength;                                   // 0xC64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBillboardshadowDirection         DropShadow;                                        // 0xC68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shadow_Divisor;                                    // 0xC6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      WidgetComponent;                                   // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         Widget;                                            // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinTextSize;                                       // 0xC80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigameState                Last_State_Updated;                                // 0xC84(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creative_Billboard_C* GetDefaultObj();

	void GetCreativeActorOrigin(bool* Override, struct FVector* Center, bool CallFunc_Not_PreBool_ReturnValue);
	void GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, bool CallFunc_Not_PreBool_ReturnValue);
	class UStaticMesh* GetCollisionStaticMesh();
	TArray<class UMeshComponent*> GetMeshComponents(TArray<class UMeshComponent*>& K2Node_MakeArray_Array);
	void Update_Last_Game_State_Enable_Changed(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Text_Visibility_On_Game_State(enum class EFortMinigameState New_State, bool bIsTextVisible, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Create_Widget(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UWidgetComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UCreative_Background_Widget_C* CallFunc_Create_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void SetShadow(bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetTextFont(bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void SetViewDistance(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SetTextColor(bool CallFunc_IsValid_ReturnValue);
	void UpdateProperties(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_ColorToText_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_ColorToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetDisplayText(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_IsEnabled_Enabled, const class FString& K2Node_Select_Default);
	void SetTextAlignment(bool CallFunc_IsValid_ReturnValue);
	void SetTextSize(bool CallFunc_IsValid_ReturnValue);
	void SetBackgroundColor(bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void PostUpdateProperties();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void Update_Static_Mesh_Component_Visibility_Options();
	void BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On_Visibility_Changed__DelegateSignature(bool Visible);
	void OnWorldReady();
	void Initialize_Device();
	void BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On_Enabled_State_Changed__DelegateSignature(bool Enabled);
	void ReceiveBeginPlay();
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
	void Initialize_Minigame_Options(class AFortMinigame* Minigame);
	void ExecuteUbergraph_BP_Creative_Billboard(int32 EntryPoint, enum class ECollisionEnabled Temp_byte_Variable, bool Temp_bool_Variable, enum class ECollisionResponse Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ECollisionResponse Temp_byte_Variable_2, enum class ECollisionResponse Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class EVisibleInGameState Temp_byte_Variable_4, enum class EVisibleInGameState Temp_byte_Variable_5, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, class AController* K2Node_ComponentBoundEvent_TriggerInstigator_1, class AController* K2Node_ComponentBoundEvent_TriggerInstigator, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame_1, enum class ECollisionEnabled Temp_byte_Variable_6, bool CallFunc_IsValid_ReturnValue_1, class AFortMinigame* K2Node_CustomEvent_Minigame_1, bool K2Node_CustomEvent_bIsInPlayMode, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, TArray<class USceneComponent*>& K2Node_MakeArray_Array, enum class ECollisionResponse K2Node_Select_Default, bool K2Node_ComponentBoundEvent_Visible, enum class ECollisionResponse K2Node_Select_Default_1, enum class EVisibleInGameState K2Node_Select_Default_2, const struct FRotator& K2Node_Select_Default_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool Temp_bool_Variable_4, enum class ECollisionEnabled K2Node_Select_Default_4, bool K2Node_ComponentBoundEvent_Enabled, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame, enum class EFortMinigameState K2Node_ComponentBoundEvent_NewMinigameState, class AFortMinigame* K2Node_CustomEvent_Minigame, bool CallFunc_IsInPlayMode_ReturnValue);
};

}


