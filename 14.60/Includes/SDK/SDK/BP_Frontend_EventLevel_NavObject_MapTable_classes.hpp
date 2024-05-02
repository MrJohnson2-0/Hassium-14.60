#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x568 - 0x508)
// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C
class ABP_Frontend_EventLevel_NavObject_MapTable_C : public AFortNavigationActor_MapTable
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sm_spybase_table_holo_ring_fx;                     // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sm_spybase_table_holo_ring_lights_meshsprites_fx;  // 0x518(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x520(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Cylinder_Floor_Pad_Glow;                        // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortBangCheckComponent_Map*           FortBangCheckComponent_Map;                        // 0x530(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MinimapMID;                                        // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MinimapMaterial;                                   // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>     MinimapTextures;                                   // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>     MinimapDiscoveryMasks;                             // 0x558(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Frontend_EventLevel_NavObject_MapTable_C* GetDefaultObj();

	void HasDynamicMinimapTextures(bool* bResult, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetMinimapIndex(int32* Index);
	void GetMinimapTextures(TSoftObjectPtr<class UTexture2D>* MinimapTexture, TSoftObjectPtr<class UTexture2D>* MinimapDiscoveryMask, int32* MinimapIndex, bool CallFunc_HasDynamicMinimapTextures_bResult, int32 CallFunc_GetMinimapIndex_Index, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item_1);
	void OnLoaded_F6AE426C44DA5A3F148FEB87D7046DD0(class UObject* Loaded);
	void OnLoaded_A68B6D734D1ACDA59664A699214A131F(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ApplyMinimapTextures();
	void OnActiveEventsChanged();
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_MapTable(int32 EntryPoint, bool CallFunc_HasDynamicMinimapTextures_bResult, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_A_Execution_Happened_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetMinimapTextures_MinimapTexture, TSoftObjectPtr<class UTexture2D> CallFunc_GetMinimapTextures_MinimapDiscoveryMask, int32 CallFunc_GetMinimapTextures_MinimapIndex, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_HasDynamicMinimapTextures_bResult_1);
};

}


