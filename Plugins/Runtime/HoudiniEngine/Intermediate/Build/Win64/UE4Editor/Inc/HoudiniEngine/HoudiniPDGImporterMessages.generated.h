// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniPDGImporterMessages_generated_h
#error "HoudiniPDGImporterMessages.generated.h already included, missing '#pragma once' in HoudiniPDGImporterMessages.h"
#endif
#define HOUDINIENGINE_HoudiniPDGImporterMessages_generated_h

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FHoudiniPDGImportBGEOMessage Super;


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportBGEOResultMessage>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportNodeOutput>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportNodeOutputObject>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniGenericAttributes>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportBGEOMessage>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportBGEODiscoverMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h


#define FOREACH_ENUM_EHOUDINIPDGIMPORTBGEORESULT(op) \
	op(EHoudiniPDGImportBGEOResult::HPIBR_Failed) \
	op(EHoudiniPDGImportBGEOResult::HPIBR_Success) \
	op(EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess) \
	op(EHoudiniPDGImportBGEOResult::HIBPR_MAX) 

enum class EHoudiniPDGImportBGEOResult : uint8;
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPDGImportBGEOResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
