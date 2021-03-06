// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
// End Cross Module References
#if WITH_EDITORONLY_DATA
	static UEnum* EHoudiniEngineBakeOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineBakeOption"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineBakeOption>()
	{
		return EHoudiniEngineBakeOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniEngineBakeOption(EHoudiniEngineBakeOption_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniEngineBakeOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Hash() { return 2331835791U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniEngineBakeOption"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniEngineBakeOption::ToActor", (int64)EHoudiniEngineBakeOption::ToActor },
				{ "EHoudiniEngineBakeOption::ToBlueprint", (int64)EHoudiniEngineBakeOption::ToBlueprint },
				{ "EHoudiniEngineBakeOption::ToFoliage", (int64)EHoudiniEngineBakeOption::ToFoliage },
				{ "EHoudiniEngineBakeOption::ToWorldOutliner", (int64)EHoudiniEngineBakeOption::ToWorldOutliner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
				{ "ToActor.Name", "EHoudiniEngineBakeOption::ToActor" },
				{ "ToBlueprint.Name", "EHoudiniEngineBakeOption::ToBlueprint" },
				{ "ToFoliage.Name", "EHoudiniEngineBakeOption::ToFoliage" },
				{ "ToWorldOutliner.Name", "EHoudiniEngineBakeOption::ToWorldOutliner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniEngineBakeOption",
				"EHoudiniEngineBakeOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
#endif // WITH_EDITORONLY_DATA
	static UEnum* EHoudiniStaticMeshMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniStaticMeshMethod"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniStaticMeshMethod>()
	{
		return EHoudiniStaticMeshMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniStaticMeshMethod(EHoudiniStaticMeshMethod_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniStaticMeshMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Hash() { return 3788725249U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniStaticMeshMethod"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniStaticMeshMethod::RawMesh", (int64)EHoudiniStaticMeshMethod::RawMesh },
				{ "EHoudiniStaticMeshMethod::FMeshDescription", (int64)EHoudiniStaticMeshMethod::FMeshDescription },
				{ "EHoudiniStaticMeshMethod::UHoudiniStaticMesh", (int64)EHoudiniStaticMeshMethod::UHoudiniStaticMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FMeshDescription.Comment", "// Use the FMeshDescription method to build the UStaticMesh\n" },
				{ "FMeshDescription.Name", "EHoudiniStaticMeshMethod::FMeshDescription" },
				{ "FMeshDescription.ToolTip", "Use the FMeshDescription method to build the UStaticMesh" },
				{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
				{ "RawMesh.Comment", "// Use the RawMesh method to build the UStaticMesh\n" },
				{ "RawMesh.Name", "EHoudiniStaticMeshMethod::RawMesh" },
				{ "RawMesh.ToolTip", "Use the RawMesh method to build the UStaticMesh" },
				{ "UHoudiniStaticMesh.Comment", "// Build a fast proxy mesh: UHoudiniStaticMesh\n" },
				{ "UHoudiniStaticMesh.Name", "EHoudiniStaticMeshMethod::UHoudiniStaticMesh" },
				{ "UHoudiniStaticMesh.ToolTip", "Build a fast proxy mesh: UHoudiniStaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniStaticMeshMethod",
				"EHoudiniStaticMeshMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoudiniAssetStateResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetStateResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>()
	{
		return EHoudiniAssetStateResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniAssetStateResult(EHoudiniAssetStateResult_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniAssetStateResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Hash() { return 3614599069U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniAssetStateResult"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniAssetStateResult::None", (int64)EHoudiniAssetStateResult::None },
				{ "EHoudiniAssetStateResult::Working", (int64)EHoudiniAssetStateResult::Working },
				{ "EHoudiniAssetStateResult::Success", (int64)EHoudiniAssetStateResult::Success },
				{ "EHoudiniAssetStateResult::FinishedWithError", (int64)EHoudiniAssetStateResult::FinishedWithError },
				{ "EHoudiniAssetStateResult::FinishedWithFatalError", (int64)EHoudiniAssetStateResult::FinishedWithFatalError },
				{ "EHoudiniAssetStateResult::Aborted", (int64)EHoudiniAssetStateResult::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "EHoudiniAssetStateResult::Aborted" },
				{ "FinishedWithError.Name", "EHoudiniAssetStateResult::FinishedWithError" },
				{ "FinishedWithFatalError.Name", "EHoudiniAssetStateResult::FinishedWithFatalError" },
				{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
				{ "None.Name", "EHoudiniAssetStateResult::None" },
				{ "Success.Name", "EHoudiniAssetStateResult::Success" },
				{ "Working.Name", "EHoudiniAssetStateResult::Working" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniAssetStateResult",
				"EHoudiniAssetStateResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoudiniAssetState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetState>()
	{
		return EHoudiniAssetState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniAssetState(EHoudiniAssetState_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniAssetState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Hash() { return 1173921546U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniAssetState"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniAssetState::NeedInstantiation", (int64)EHoudiniAssetState::NeedInstantiation },
				{ "EHoudiniAssetState::PreInstantiation", (int64)EHoudiniAssetState::PreInstantiation },
				{ "EHoudiniAssetState::Instantiating", (int64)EHoudiniAssetState::Instantiating },
				{ "EHoudiniAssetState::PreCook", (int64)EHoudiniAssetState::PreCook },
				{ "EHoudiniAssetState::Cooking", (int64)EHoudiniAssetState::Cooking },
				{ "EHoudiniAssetState::PostCook", (int64)EHoudiniAssetState::PostCook },
				{ "EHoudiniAssetState::PreProcess", (int64)EHoudiniAssetState::PreProcess },
				{ "EHoudiniAssetState::Processing", (int64)EHoudiniAssetState::Processing },
				{ "EHoudiniAssetState::None", (int64)EHoudiniAssetState::None },
				{ "EHoudiniAssetState::NeedRebuild", (int64)EHoudiniAssetState::NeedRebuild },
				{ "EHoudiniAssetState::NeedDelete", (int64)EHoudiniAssetState::NeedDelete },
				{ "EHoudiniAssetState::Deleting", (int64)EHoudiniAssetState::Deleting },
				{ "EHoudiniAssetState::ProcessTemplate", (int64)EHoudiniAssetState::ProcessTemplate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cooking.Comment", "// Cooking task in progress\n" },
				{ "Cooking.Name", "EHoudiniAssetState::Cooking" },
				{ "Cooking.ToolTip", "Cooking task in progress" },
				{ "Deleting.Comment", "// Deleting\n" },
				{ "Deleting.Name", "EHoudiniAssetState::Deleting" },
				{ "Deleting.ToolTip", "Deleting" },
				{ "Instantiating.Comment", "// Instantiating task in progress\n" },
				{ "Instantiating.Name", "EHoudiniAssetState::Instantiating" },
				{ "Instantiating.ToolTip", "Instantiating task in progress" },
				{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
				{ "NeedDelete.Comment", "// Asset needs to be deleted\n" },
				{ "NeedDelete.Name", "EHoudiniAssetState::NeedDelete" },
				{ "NeedDelete.ToolTip", "Asset needs to be deleted" },
				{ "NeedInstantiation.Comment", "// Loaded / Duplicated HDA,\n// Will need to be instantiated upon change/update\n" },
				{ "NeedInstantiation.Name", "EHoudiniAssetState::NeedInstantiation" },
				{ "NeedInstantiation.ToolTip", "Loaded / Duplicated HDA,\nWill need to be instantiated upon change/update" },
				{ "NeedRebuild.Comment", "// Asset needs to be rebuilt (Deleted/Instantiated/Cooked)\n" },
				{ "NeedRebuild.Name", "EHoudiniAssetState::NeedRebuild" },
				{ "NeedRebuild.ToolTip", "Asset needs to be rebuilt (Deleted/Instantiated/Cooked)" },
				{ "None.Comment", "// Processed / Updated HDA\n// Will need to be cooked upon change/update\n" },
				{ "None.Name", "EHoudiniAssetState::None" },
				{ "None.ToolTip", "Processed / Updated HDA\nWill need to be cooked upon change/update" },
				{ "PostCook.Comment", "// Cooking has finished\n" },
				{ "PostCook.Name", "EHoudiniAssetState::PostCook" },
				{ "PostCook.ToolTip", "Cooking has finished" },
				{ "PreCook.Comment", "// Instantiated HDA, needs to be cooked immediately\n" },
				{ "PreCook.Name", "EHoudiniAssetState::PreCook" },
				{ "PreCook.ToolTip", "Instantiated HDA, needs to be cooked immediately" },
				{ "PreInstantiation.Comment", "// Newly created HDA, needs to be instantiated immediately\n" },
				{ "PreInstantiation.Name", "EHoudiniAssetState::PreInstantiation" },
				{ "PreInstantiation.ToolTip", "Newly created HDA, needs to be instantiated immediately" },
				{ "PreProcess.Comment", "// Cooked HDA, needs to be processed immediately\n" },
				{ "PreProcess.Name", "EHoudiniAssetState::PreProcess" },
				{ "PreProcess.ToolTip", "Cooked HDA, needs to be processed immediately" },
				{ "Processing.Comment", "// Processing task in progress\n" },
				{ "Processing.Name", "EHoudiniAssetState::Processing" },
				{ "Processing.ToolTip", "Processing task in progress" },
				{ "ProcessTemplate.Comment", "// Process component template. This is ticking has very limited\n// functionality, typically limited to checking for parameter updates\n// in order to trigger PostEditChange() to run construction scripts again.\n" },
				{ "ProcessTemplate.Name", "EHoudiniAssetState::ProcessTemplate" },
				{ "ProcessTemplate.ToolTip", "Process component template. This is ticking has very limited\nfunctionality, typically limited to checking for parameter updates\nin order to trigger PostEditChange() to run construction scripts again." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniAssetState",
				"EHoudiniAssetState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UHoudiniAssetComponent::StaticRegisterNativesUHoudiniAssetComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister()
	{
		return UHoudiniAssetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedIsPreview_MetaData[];
#endif
		static void NewProp_bCachedIsPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedIsPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeAfterNextCook_MetaData[];
#endif
		static void NewProp_bBakeAfterNextCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeAfterNextCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InputPresets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPresets_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputPresets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoProxyMeshNextCookRequested_MetaData[];
#endif
		static void NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoProxyMeshNextCookRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefineMeshesTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefineMeshesTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDGAssetLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PDGAssetLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullyLoaded_MetaData[];
#endif
		static void NewProp_bFullyLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullyLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasComponentTransformChanged_MetaData[];
#endif
		static void NewProp_bHasComponentTransformChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasComponentTransformChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandleComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandleComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UntrackedOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UntrackedOutputs;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_UntrackedOutputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlueprintModified_MetaData[];
#endif
		static void NewProp_bBlueprintModified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlueprintModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlueprintStructureModified_MetaData[];
#endif
		static void NewProp_bBlueprintStructureModified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlueprintStructureModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[];
#endif
		static void NewProp_bLastCookSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastCookSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[];
#endif
		static void NewProp_bForceNeedUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNeedUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[];
#endif
		static void NewProp_bEnableCooking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[];
#endif
		static void NewProp_bRebuildRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[];
#endif
		static void NewProp_bRecookRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecookRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[];
#endif
		static void NewProp_bPendingDelete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingDelete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[];
#endif
		static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[];
#endif
		static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetCookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetCookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetStateResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetStateResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetStateResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLastAssetState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugLastAssetState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugLastAssetState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownstreamHoudiniAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DownstreamHoudiniAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownstreamHoudiniAssets_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplacePreviousBake_MetaData[];
#endif
		static void NewProp_bReplacePreviousBake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplacePreviousBake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveOutputAfterBake_MetaData[];
#endif
		static void NewProp_bRemoveOutputAfterBake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveOutputAfterBake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniEngineBakeOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HoudiniEngineBakeOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HoudiniEngineBakeOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHelpAndDebugMenuExpanded_MetaData[];
#endif
		static void NewProp_bHelpAndDebugMenuExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHelpAndDebugMenuExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssetOptionMenuExpanded_MetaData[];
#endif
		static void NewProp_bAssetOptionMenuExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssetOptionMenuExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeMenuExpanded_MetaData[];
#endif
		static void NewProp_bBakeMenuExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeMenuExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMenuExpanded_MetaData[];
#endif
		static void NewProp_bGenerateMenuExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMenuExpanded;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StaticMeshMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StaticMeshMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimerOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[];
#endif
		static void NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalProxyStaticMeshSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedAssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedAssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedStreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedStreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[];
#endif
		static void NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedUseMaximumStreamingTexelRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedWalkableSlopeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedWalkableSlopeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedDistanceFieldResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedDistanceFieldResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLpvBiasMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedLpvBiasMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedCollisionTraceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeneratedCollisionTraceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedPhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedPhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedDoubleSidedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemporaryCookFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemporaryCookFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputTemplateGeos_MetaData[];
#endif
		static void NewProp_bOutputTemplateGeos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputTemplateGeos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputless_MetaData[];
#endif
		static void NewProp_bOutputless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputless;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnAssetInputCook_MetaData[];
#endif
		static void NewProp_bCookOnAssetInputCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnAssetInputCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnTransformChange_MetaData[];
#endif
		static void NewProp_bCookOnTransformChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnTransformChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUploadTransformsToHoudiniEngine_MetaData[];
#endif
		static void NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUploadTransformsToHoudiniEngine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnParameterChange_MetaData[];
#endif
		static void NewProp_bCookOnParameterChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnParameterChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering Common" },
		{ "HideCategories", "Object Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "HoudiniAssetComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_MetaData[] = {
		{ "Comment", "// Cached flag of whether this object is considered to be a 'preview' component or not.\n// This is typically useful in destructors when references to the World, for example, \n// is no longer available.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Cached flag of whether this object is considered to be a 'preview' component or not.\nThis is typically useful in destructors when references to the World, for example,\nis no longer available." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCachedIsPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview = { "bCachedIsPreview", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_MetaData[] = {
		{ "Comment", "// If true, bake the asset after its next cook.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If true, bake the asset after its next cook." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bBakeAfterNextCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook = { "bBakeAfterNextCook", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_MetaData[] = {
		{ "Comment", "// Maps a UObject to an Input number, used to preset the asset's inputs \n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Maps a UObject to an Input number, used to preset the asset's inputs" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets = { "InputPresets", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, InputPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_Key_KeyProp = { "InputPresets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_ValueProp = { "InputPresets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_MetaData[] = {
		{ "Comment", "// If true, don't build a proxy mesh next cook (regardless of global or override settings),\n// instead build the UStaticMesh directly (if applicable for the output types).\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If true, don't build a proxy mesh next cook (regardless of global or override settings),\ninstead build the UStaticMesh directly (if applicable for the output types)." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bNoProxyMeshNextCookRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested = { "bNoProxyMeshNextCookRequested", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer_MetaData[] = {
		{ "Comment", "// Timer that is used to trigger creation of UStaticMesh for all mesh outputs\n// that still have UHoudiniStaticMeshes. The timer is cleared on PreCook and reset\n// at the end of the PostCook.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Timer that is used to trigger creation of UStaticMesh for all mesh outputs\nthat still have UHoudiniStaticMeshes. The timer is cleared on PreCook and reset\nat the end of the PostCook." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer = { "RefineMeshesTimer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, RefineMeshesTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink = { "PDGAssetLink", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, PDGAssetLink), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bFullyLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded = { "bFullyLoaded", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bHasComponentTransformChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged = { "bHasComponentTransformChanged", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents = { "HandleComponents", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HandleComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner = { "HandleComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniHandleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_MetaData[] = {
		{ "Comment", "// Any actors that aren't explicitly\n// tracked by output objects should be registered\n// here so that they can be cleaned up.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Any actors that aren't explicitly\ntracked by output objects should be registered\nhere so that they can be cleaned up." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, UntrackedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_MetaData[] = {
		{ "Comment", "// The baked outputs from the last bake.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "The baked outputs from the last bake." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "//UPROPERTY(DuplicateTransient)\n//bool bEditorPropertiesNeedFullUpdate;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "UPROPERTY(DuplicateTransient)\nbool bEditorPropertiesNeedFullUpdate;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner_MetaData[] = {
		{ "Comment", "//UPROPERTY(DuplicateTransient)\n//bool bEditorPropertiesNeedFullUpdate;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "UPROPERTY(DuplicateTransient)\nbool bEditorPropertiesNeedFullUpdate;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bBlueprintModified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified = { "bBlueprintModified", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bBlueprintStructureModified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified = { "bBlueprintStructureModified", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bLastCookSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bForceNeedUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableCooking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bRebuildRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bRecookRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bPendingDelete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bHasBeenDuplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bHasBeenLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount_MetaData[] = {
		{ "Comment", "// Number of times this asset has been cooked.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Number of times this asset has been cooked." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount = { "AssetCookCount", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetCookCount), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex_MetaData[] = {
		{ "Comment", "// Subasset index\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Subasset index" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, SubAssetIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_MetaData[] = {
		{ "Comment", "// Result of the current asset's state\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Result of the current asset's state" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult = { "AssetStateResult", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetStateResult), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_MetaData[] = {
		{ "Comment", "// Last asset state logged.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Last asset state logged." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState = { "DebugLastAssetState", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DebugLastAssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_MetaData[] = {
		{ "Comment", "// Current state of the asset\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Current state of the asset" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState = { "AssetState", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID_MetaData[] = {
		{ "Comment", "// GUID used to track asynchronous cooking requests.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "GUID used to track asynchronous cooking requests." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HapiGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID_MetaData[] = {
		{ "Comment", "// Unique GUID created by component.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Unique GUID created by component." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_MetaData[] = {
		{ "Comment", "// List of dependent downstream HACs that have us as an asset input\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "List of dependent downstream HACs that have us as an asset input" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x0020088000200008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DownstreamHoudiniAssets), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId_MetaData[] = {
		{ "Comment", "// Id of corresponding Houdini asset.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Id of corresponding Houdini asset." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake_MetaData[] = {
		{ "Comment", "// If true, replace the previously baked output (if any) instead of creating new objects\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If true, replace the previously baked output (if any) instead of creating new objects" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bReplacePreviousBake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake = { "bReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors_MetaData[] = {
		{ "Comment", "// If true, recenter baked actors to their bounding box center after bake\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If true, recenter baked actors to their bounding box center after bake" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bRecenterBakedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake_MetaData[] = {
		{ "Comment", "// If true, then after a successful bake, the HACs outputs will be cleared and removed.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If true, then after a successful bake, the HACs outputs will be cleared and removed." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bRemoveOutputAfterBake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake = { "bRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption = { "HoudiniEngineBakeOption", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HoudiniEngineBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bHelpAndDebugMenuExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded = { "bHelpAndDebugMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bAssetOptionMenuExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded = { "bAssetOptionMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bBakeMenuExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeMenuExpanded = { "bBakeMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeMenuExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeMenuExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeMenuExpanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bGenerateMenuExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded = { "bGenerateMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_MetaData[] = {
		{ "Category", "HoudiniAsset | Development" },
		{ "Comment", "// The method to use to create the mesh\n" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "The method to use to create the mesh" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod = { "StaticMeshMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[] = {
		{ "Category", "HoudiniAsset | Static Mesh" },
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before starting a play in editor session\n" },
		{ "DisplayName", "Refine Proxy Static Meshes On PIE" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before starting a play in editor session" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = { "bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[] = {
		{ "Category", "HoudiniAsset | Static Mesh" },
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before the map is saved\n" },
		{ "DisplayName", "Refine Proxy Static Meshes When Saving a Map" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before the map is saved" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = { "bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[] = {
		{ "Category", "HoudiniAsset | Static Mesh" },
		{ "Comment", "// If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds.\n" },
		{ "DisplayName", "Proxy Mesh Auto Refine Timeout Seconds" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride && bEnableProxyStaticMeshRefinementByTimerOverride" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride = { "ProxyMeshAutoRefineTimeoutSecondsOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ProxyMeshAutoRefineTimeoutSecondsOverride), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[] = {
		{ "Category", "HoudiniAsset | Static Mesh" },
		{ "Comment", "// If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?\n" },
		{ "DisplayName", "Refine Proxy Static Meshes After a Timeout" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings && bEnableProxyStaticMeshOverride" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementByTimerOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride = { "bEnableProxyStaticMeshRefinementByTimerOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData[] = {
		{ "Category", "HoudiniAsset | Static Mesh" },
		{ "Comment", "// For StaticMesh outputs: should a fast proxy be created first?\n" },
		{ "DisplayName", "Enable Proxy Static Mesh" },
		{ "DisplayPriority", "0" },
		{ "EditCondition", "bOverrideGlobalProxyStaticMeshSettings" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "For StaticMesh outputs: should a fast proxy be created first?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride = { "bEnableProxyStaticMeshOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[] = {
		{ "Category", "HoudiniAsset | Static Mesh" },
		{ "Comment", "// Override the global fast proxy mesh settings on this component?\n" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Override the global fast proxy mesh settings on this component?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bOverrideGlobalProxyStaticMeshSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings = { "bOverrideGlobalProxyStaticMeshSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Array of user data stored with the asset. */" },
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Array of user data stored with the asset." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0010048000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedAssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Array of user data stored with the asset. */" },
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Array of user data stored with the asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_Inner = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Allows artists to adjust the distance where textures using UV 0 are streamed in/out. */" },
		{ "DisplayName", "Streaming Distance Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedStreamingDistanceMultiplier = { "GeneratedStreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedStreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** True if mesh should use a less-conservative method of mip LOD texture factor computation. */" },
		{ "DisplayName", "Use Maximum Streaming Texel Ratio" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "True if mesh should use a less-conservative method of mip LOD texture factor computation." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bGeneratedUseMaximumStreamingTexelRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio = { "bGeneratedUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** The light map coordinate index. */" },
		{ "DisplayName", "Light map coordinate index" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "The light map coordinate index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapCoordinateIndex = { "GeneratedLightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedLightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Custom walkable slope setting for generated mesh's body. */" },
		{ "DisplayName", "Walkable Slope Override" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Custom walkable slope setting for generated mesh's body." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedWalkableSlopeOverride = { "GeneratedWalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedWalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Mesh distance field resolution, setting it to 0 will prevent the mesh distance field generation while editing the asset **/" },
		{ "DisplayName", "Distance Field Resolution Scale" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Mesh distance field resolution, setting it to 0 will prevent the mesh distance field generation while editing the asset *" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedDistanceFieldResolutionScale = { "GeneratedDistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedDistanceFieldResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLpvBiasMultiplier_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Bias multiplier for Light Propagation Volume lighting. */" },
		{ "DisplayName", "Lpv Bias Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Bias multiplier for Light Propagation Volume lighting." },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLpvBiasMultiplier = { "GeneratedLpvBiasMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedLpvBiasMultiplier), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLpvBiasMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLpvBiasMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapResolution_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Resolution of lightmap. */" },
		{ "DisplayName", "Light Map Resolution" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Resolution of lightmap." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapResolution = { "GeneratedLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedLightMapResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate. */" },
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedCollisionTraceFlag = { "GeneratedCollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedCollisionTraceFlag), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DefaultBodyInstance_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance */" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DefaultBodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DefaultBodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedPhysMaterial_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** Physical material to use for simple collision on this body. Encodes information about density, friction etc. */" },
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Physical material to use for simple collision on this body. Encodes information about density, friction etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedPhysMaterial = { "GeneratedPhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedPhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedPhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData[] = {
		{ "Category", "HoudiniGeneratedStaticMeshSettings" },
		{ "Comment", "/** If true, the physics triangle mesh will use double sided faces when doing scene queries. */" },
		{ "DisplayName", "Double Sided Geometry" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bGeneratedDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedDoubleSidedGeometry = { "bGeneratedDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Comment", "// Folder used for baking this asset's outputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Folder used for baking this asset's outputs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder_MetaData[] = {
		{ "Comment", "// Temporary cook folder\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Temporary cook folder" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder = { "TemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, TemporaryCookFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_MetaData[] = {
		{ "Comment", "// Enabling this will allow outputing the asset's templated geos\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Enabling this will allow outputing the asset's templated geos" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bOutputTemplateGeos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos = { "bOutputTemplateGeos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_MetaData[] = {
		{ "Comment", "// Enabling this will prevent the HDA from producing any output after cooking.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Enabling this will prevent the HDA from producing any output after cooking." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bOutputless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless = { "bOutputless", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_MetaData[] = {
		{ "Comment", "// This asset will cook when its asset input cook\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "This asset will cook when its asset input cook" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCookOnAssetInputCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook = { "bCookOnAssetInputCook", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_MetaData[] = {
		{ "Comment", "// Transform changes automatically trigger cooks.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Transform changes automatically trigger cooks." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCookOnTransformChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange = { "bCookOnTransformChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData[] = {
		{ "Comment", "// Enables uploading of transformation changes back to Houdini Engine.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Enables uploading of transformation changes back to Houdini Engine." },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bUploadTransformsToHoudiniEngine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine = { "bUploadTransformsToHoudiniEngine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_MetaData[] = {
		{ "Comment", "// Automatically cook when a parameter or input is changed\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Automatically cook when a parameter or input is changed" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCookOnParameterChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange = { "bCookOnParameterChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset_MetaData[] = {
		{ "Category", "HoudiniAsset" },
		{ "Comment", "/*Category = HoudiniAsset, EditAnywhere, meta = (DisplayPriority=0)*/// BlueprintSetter = SetHoudiniAsset, BlueprintReadWrite, )\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetComponent.h" },
		{ "ToolTip", "Category = HoudiniAsset, EditAnywhere, meta = (DisplayPriority=0)// BlueprintSetter = SetHoudiniAsset, BlueprintReadWrite, )" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakedOutputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bReplacePreviousBake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecenterBakedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRemoveOutputAfterBake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniEngineBakeOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHelpAndDebugMenuExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bAssetOptionMenuExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeMenuExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGenerateMenuExpanded,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedAssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedStreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedWalkableSlopeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedDistanceFieldResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLpvBiasMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedLightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedCollisionTraceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DefaultBodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_GeneratedPhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bGeneratedDoubleSidedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams = {
		&UHoudiniAssetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetComponent, 366804776);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetComponent>()
	{
		return UHoudiniAssetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetComponent(Z_Construct_UClass_UHoudiniAssetComponent, &UHoudiniAssetComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniAssetComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
