// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRuntimeSettings() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EHoudiniRuntimeSettingsSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsSessionType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsSessionType>()
	{
		return EHoudiniRuntimeSettingsSessionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRuntimeSettingsSessionType(EHoudiniRuntimeSettingsSessionType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRuntimeSettingsSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Hash() { return 2880289992U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRuntimeSettingsSessionType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HRSST_InProcess", (int64)HRSST_InProcess },
				{ "HRSST_Socket", (int64)HRSST_Socket },
				{ "HRSST_NamedPipe", (int64)HRSST_NamedPipe },
				{ "HRSST_None", (int64)HRSST_None },
				{ "HRSST_MAX", (int64)HRSST_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HRSST_InProcess.Comment", "// In process session.\n" },
				{ "HRSST_InProcess.Hidden", "" },
				{ "HRSST_InProcess.Name", "HRSST_InProcess" },
				{ "HRSST_InProcess.ToolTip", "In process session." },
				{ "HRSST_MAX.Name", "HRSST_MAX" },
				{ "HRSST_NamedPipe.Comment", "// Connection to Houdini Engine server via pipe connection.\n" },
				{ "HRSST_NamedPipe.DisplayName", "Named pipe or domain socket" },
				{ "HRSST_NamedPipe.Name", "HRSST_NamedPipe" },
				{ "HRSST_NamedPipe.ToolTip", "Connection to Houdini Engine server via pipe connection." },
				{ "HRSST_None.Comment", "// No session, prevents license/Engine cook\n" },
				{ "HRSST_None.DisplayName", "None" },
				{ "HRSST_None.Name", "HRSST_None" },
				{ "HRSST_None.ToolTip", "No session, prevents license/Engine cook" },
				{ "HRSST_Socket.Comment", "// TCP socket connection to Houdini Engine server.\n" },
				{ "HRSST_Socket.DisplayName", "TCP socket" },
				{ "HRSST_Socket.Name", "HRSST_Socket" },
				{ "HRSST_Socket.ToolTip", "TCP socket connection to Houdini Engine server." },
				{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniRuntimeSettingsSessionType",
				"EHoudiniRuntimeSettingsSessionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UHoudiniRuntimeSettings::StaticRegisterNativesUHoudiniRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPDGAsyncCommandletImportEnabled_MetaData[];
#endif
		static void NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPDGAsyncCommandletImportEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioDsoSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageDsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageDsoSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DsoSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DsoSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtlSearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtlSearchPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniEnvironmentFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniEnvironmentFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingThreadStackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookingThreadStackSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomHoudiniLocation_MetaData[];
#endif
		static void NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomHoudiniLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticLegacyHDARebuild_MetaData[];
#endif
		static void NewProp_bAutomaticLegacyHDARebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticLegacyHDARebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBackwardCompatibility_MetaData[];
#endif
		static void NewProp_bEnableBackwardCompatibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBackwardCompatibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDefaultMesh_MetaData[];
#endif
		static void NewProp_bShowDefaultMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDefaultMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMesh_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingSplineResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingSplineResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesForceMinMaxValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseFullResolution_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseFullResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseDefaultUnrealScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultBakeFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTemporaryCookFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultTemporaryCookFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplaySlateCookingNotifications_MetaData[];
#endif
		static void NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplaySlateCookingNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseCookingOnStart_MetaData[];
#endif
		static void NewProp_bPauseCookingOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseCookingOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMultiAssetDialog_MetaData[];
#endif
		static void NewProp_bShowMultiAssetDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMultiAssetDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncUnrealViewport_MetaData[];
#endif
		static void NewProp_bSyncUnrealViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncUnrealViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncHoudiniViewport_MetaData[];
#endif
		static void NewProp_bSyncHoudiniViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncHoudiniViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncViewport_MetaData[];
#endif
		static void NewProp_bSyncViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookUsingHoudiniTime_MetaData[];
#endif
		static void NewProp_bCookUsingHoudiniTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookUsingHoudiniTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncWithHoudiniCook_MetaData[];
#endif
		static void NewProp_bSyncWithHoudiniCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncWithHoudiniCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticServerTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutomaticServerTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAutomaticServer_MetaData[];
#endif
		static void NewProp_bStartAutomaticServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAutomaticServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPipeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPipeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniRuntimeSettings.h" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData[] = {
		{ "Category", "PDG Settings" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// PDG Commandlet import\n//-------------------------------------------------------------------------------------------------------------\n// Is the PDG commandlet enabled? \n" },
		{ "DisplayName", "Async Importer Enabled" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "PDG Commandlet import\n-------------------------------------------------------------------------------------------------------------\nIs the PDG commandlet enabled?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPDGAsyncCommandletImportEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled = { "bPDGAsyncCommandletImportEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Sets HOUDINI_AUDIO_DSO_PATH\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Sets HOUDINI_AUDIO_DSO_PATH" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath = { "AudioDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AudioDsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Sets HOUDINI_IMAGE_DSO_PATH\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Sets HOUDINI_IMAGE_DSO_PATH" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath = { "ImageDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ImageDsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Sets HOUDINI_DSO_PATH\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Sets HOUDINI_DSO_PATH" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath = { "DsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DsoSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// Path to find other OTL/HDA files\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Path to find other OTL/HDA files" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath = { "OtlSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, OtlSearchPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "// List of paths to Houdini-compatible .env files (; separated on Windows, : otherwise)\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "List of paths to Houdini-compatible .env files (; separated on Windows, : otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles = { "HoudiniEnvironmentFiles", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniEnvironmentFiles), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// HAPI_Initialize\n//-------------------------------------------------------------------------------------------------------------\n// Evaluation thread stack size in bytes.  -1 for default \n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "HAPI_Initialize\n-------------------------------------------------------------------------------------------------------------\nEvaluation thread stack size in bytes.  -1 for default" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize = { "CookingThreadStackSize", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CookingThreadStackSize), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
		{ "Comment", "// Custom Houdini location (where HAPI library is located).\n" },
		{ "DisplayName", "Custom Houdini location" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Custom Houdini location (where HAPI library is located)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation = { "CustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Custom Houdini Location\n//-------------------------------------------------------------------------------------------------------------\n// Whether to use custom Houdini location.\n" },
		{ "DisplayName", "Use custom Houdini location (requires restart)" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Custom Houdini Location\n-------------------------------------------------------------------------------------------------------------\nWhether to use custom Houdini location." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseCustomHoudiniLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation = { "bUseCustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "// Automatically rebuild legacy HAC\n" },
		{ "DisplayName", "Automatically rebuild legacy Houdini Asset Components" },
		{ "EditCondition", "bEnableBackwardCompatibility" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Automatically rebuild legacy HAC" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bAutomaticLegacyHDARebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild = { "bAutomaticLegacyHDARebuild", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Legacy\n//-------------------------------------------------------------------------------------------------------------\n// Whether to enable backward compatibility\n" },
		{ "DisplayName", "Enable backward compatibility with Version 1" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Legacy\n-------------------------------------------------------------------------------------------------------------\nWhether to enable backward compatibility" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableBackwardCompatibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility = { "bEnableBackwardCompatibility", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before starting a play in editor session\n" },
		{ "DisplayName", "Refine Proxy Static Meshes On PIE" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before starting a play in editor session" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE = { "bEnableProxyStaticMeshRefinementOnPreBeginPIE", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before the map is saved\n" },
		{ "DisplayName", "Refine Proxy Static Meshes When Saving a Map" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before the map is saved" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld = { "bEnableProxyStaticMeshRefinementOnPreSaveWorld", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds.\n" },
		{ "DisplayName", "Proxy Mesh Auto Refine Timeout Seconds" },
		{ "EditCondition", "bEnableProxyStaticMesh && bEnableProxyStaticMeshRefinementByTimer" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds = { "ProxyMeshAutoRefineTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ProxyMeshAutoRefineTimeoutSeconds), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?\n" },
		{ "DisplayName", "Refine Proxy Static Meshes After a Timeout" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementByTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer = { "bEnableProxyStaticMeshRefinementByTimer", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// For static mesh outputs and socket actors: should spawn a default actor if the reference is invalid?\n" },
		{ "DisplayName", "Show Default Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "For static mesh outputs and socket actors: should spawn a default actor if the reference is invalid?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowDefaultMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh = { "bShowDefaultMesh", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "Comment", "// For StaticMesh outputs: should a fast proxy be created first?\n" },
		{ "DisplayName", "Enable Proxy Static Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "For StaticMesh outputs: should a fast proxy be created first?" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh = { "bEnableProxyStaticMesh", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// Default resolution used when converting Unreal Spline Components to Houdini Curves (step in cm between control points, 0 only send the control points)\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default resolution used when converting Unreal Spline Components to Houdini Curves (step in cm between control points, 0 only send the control points)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution = { "MarshallingSplineResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingSplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// The maximum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "The maximum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue = { "MarshallingLandscapesForcedMaxValue", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMaxValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// The minimum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "The minimum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue = { "MarshallingLandscapesForcedMinValue", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMinValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If true, the min/max values used to convert heightfields to landscape will be forced values\n// This is usefull when importing multiple landscapes from different HDAs\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, the min/max values used to convert heightfields to landscape will be forced values\nThis is usefull when importing multiple landscapes from different HDAs" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesForceMinMaxValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues = { "MarshallingLandscapesForceMinMaxValues", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If true, generated Landscapes will be using full precision for their ZAxis, \n// allowing for more precision but preventing them from being sculpted higher/lower than their min/max.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, generated Landscapes will be using full precision for their ZAxis,\nallowing for more precision but preventing them from being sculpted higher/lower than their min/max." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseFullResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution = { "MarshallingLandscapesUseFullResolution", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
		{ "Comment", "// If true, generated Landscapes will be marshalled using default unreal scaling. \n// Generated landscape will loose a lot of precision on the Z axis but will use the same transforms\n// as Unreal's default landscape\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If true, generated Landscapes will be marshalled using default unreal scaling.\nGenerated landscape will loose a lot of precision on the Z axis but will use the same transforms\nas Unreal's default landscape" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseDefaultUnrealScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling = { "MarshallingLandscapesUseDefaultUnrealScaling", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Default content folder used when baking houdini asset data to native unreal objects\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default content folder used when baking houdini asset data to native unreal objects" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder = { "DefaultBakeFolder", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBakeFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Default content folder storing all the temporary cook data (Static meshes, materials, textures, landscape layer infos...)\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Default content folder storing all the temporary cook data (Static meshes, materials, textures, landscape layer infos...)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder = { "DefaultTemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultTemporaryCookFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Whether to display instantiation and cooking Slate notifications.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether to display instantiation and cooking Slate notifications." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bDisplaySlateCookingNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications = { "bDisplaySlateCookingNotifications", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "// Whether houdini engine cooking is paused or not upon initializing the plugin\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether houdini engine cooking is paused or not upon initializing the plugin" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPauseCookingOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart = { "bPauseCookingOnStart", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData[] = {
		{ "Category", "Instantiating" },
		{ "Comment", "// Whether to ask user to select an asset when instantiating an HDA with multiple assets inside. If disabled, will always instantiate first asset.\n// TODO: PORT THE DIALOG!!\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether to ask user to select an asset when instantiating an HDA with multiple assets inside. If disabled, will always instantiate first asset.\nTODO: PORT THE DIALOG!!" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowMultiAssetDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog = { "bShowMultiAssetDialog", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, Unreal's viewport will be synchronized to Houdini's when using Session Sync.\n" },
		{ "DisplayName", "Sync the Unreal Viewport to Houdini's viewport" },
		{ "EditCondition", "bSyncViewport" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, Unreal's viewport will be synchronized to Houdini's when using Session Sync." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncUnrealViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport = { "bSyncUnrealViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, Houdini's viewport will be synchronized to Unreal's when using Session Sync.\n" },
		{ "DisplayName", "Sync the Houdini Viewport to Unreal's viewport." },
		{ "EditCondition", "bSyncViewport" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, Houdini's viewport will be synchronized to Unreal's when using Session Sync." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncHoudiniViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport = { "bSyncHoudiniViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// Enable when wanting to sync the Houdini and Unreal viewport when using Session Sync.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Enable when wanting to sync the Houdini and Unreal viewport when using Session Sync." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport = { "bSyncViewport", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, the Houdini Timeline time will be used to cook assets.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, the Houdini Timeline time will be used to cook assets." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bCookUsingHoudiniTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime = { "bCookUsingHoudiniTime", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// If enabled, changes made in Houdini, when connected to Houdini running in Session Sync mode will be automatically be pushed to Unreal.\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "If enabled, changes made in Houdini, when connected to Houdini running in Session Sync mode will be automatically be pushed to Unreal." },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncWithHoudiniCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook = { "bSyncWithHoudiniCook", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout = { "AutomaticServerTimeout", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AutomaticServerTimeout), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "// Whether to automatically start a HARS process\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Whether to automatically start a HARS process" },
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bStartAutomaticServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer = { "bStartAutomaticServer", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName = { "ServerPipeName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPipeName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPort), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost = { "ServerHost", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerHost), METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Session options.\x09\x09\n//-------------------------------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
		{ "ToolTip", "Session options." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SessionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAutomaticLegacyHDARebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableBackwardCompatibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams = {
		&UHoudiniRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniRuntimeSettings, 3869619490);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniRuntimeSettings>()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniRuntimeSettings(Z_Construct_UClass_UHoudiniRuntimeSettings, &UHoudiniRuntimeSettings::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
