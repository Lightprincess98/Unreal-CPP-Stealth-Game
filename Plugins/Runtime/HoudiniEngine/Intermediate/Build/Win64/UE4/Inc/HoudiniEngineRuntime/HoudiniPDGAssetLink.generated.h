// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniPDGAssetLink_generated_h
#error "HoudiniPDGAssetLink.generated.h already included, missing '#pragma once' in HoudiniPDGAssetLink.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniPDGAssetLink_generated_h

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniPDGWorkResultObjectBakedOutput>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkItemTally_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FWorkItemTally>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTOPWorkResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FTOPWorkResult>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ResultOutputs() { return STRUCT_OFFSET(FTOPWorkResultObject, ResultOutputs); } \
	FORCEINLINE static uint32 __PPO__OutputObjectsToDelete() { return STRUCT_OFFSET(FTOPWorkResultObject, OutputObjectsToDelete); } \
	FORCEINLINE static uint32 __PPO__OutputActorOwner() { return STRUCT_OFFSET(FTOPWorkResultObject, OutputActorOwner); }


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FTOPWorkResultObject>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOutputActorOwner_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__OutputActor() { return STRUCT_OFFSET(FOutputActorOwner, OutputActor); }


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FOutputActorOwner>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_RPC_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTOPNode(); \
	friend struct Z_Construct_UClass_UTOPNode_Statics; \
public: \
	DECLARE_CLASS(UTOPNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTOPNode)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUTOPNode(); \
	friend struct Z_Construct_UClass_UTOPNode_Statics; \
public: \
	DECLARE_CLASS(UTOPNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTOPNode)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTOPNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTOPNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOPNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOPNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTOPNode(UTOPNode&&); \
	NO_API UTOPNode(const UTOPNode&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTOPNode(UTOPNode&&); \
	NO_API UTOPNode(const UTOPNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOPNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOPNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTOPNode)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShow() { return STRUCT_OFFSET(UTOPNode, bShow); } \
	FORCEINLINE static uint32 __PPO__BakedWorkResultObjectOutputs() { return STRUCT_OFFSET(UTOPNode, BakedWorkResultObjectOutputs); } \
	FORCEINLINE static uint32 __PPO__OutputActorOwner() { return STRUCT_OFFSET(UTOPNode, OutputActorOwner); }


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_260_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UTOPNode>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_RPC_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTOPNetwork(); \
	friend struct Z_Construct_UClass_UTOPNetwork_Statics; \
public: \
	DECLARE_CLASS(UTOPNetwork, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTOPNetwork)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_INCLASS \
private: \
	static void StaticRegisterNativesUTOPNetwork(); \
	friend struct Z_Construct_UClass_UTOPNetwork_Statics; \
public: \
	DECLARE_CLASS(UTOPNetwork, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTOPNetwork)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTOPNetwork(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTOPNetwork) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOPNetwork); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOPNetwork); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTOPNetwork(UTOPNetwork&&); \
	NO_API UTOPNetwork(const UTOPNetwork&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTOPNetwork(UTOPNetwork&&); \
	NO_API UTOPNetwork(const UTOPNetwork&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOPNetwork); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOPNetwork); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTOPNetwork)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_373_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_376_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UTOPNetwork>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_RPC_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPDGAssetLink(); \
	friend struct Z_Construct_UClass_UHoudiniPDGAssetLink_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPDGAssetLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPDGAssetLink)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPDGAssetLink(); \
	friend struct Z_Construct_UClass_UHoudiniPDGAssetLink_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPDGAssetLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPDGAssetLink)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPDGAssetLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPDGAssetLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPDGAssetLink); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPDGAssetLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPDGAssetLink(UHoudiniPDGAssetLink&&); \
	NO_API UHoudiniPDGAssetLink(const UHoudiniPDGAssetLink&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPDGAssetLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPDGAssetLink(UHoudiniPDGAssetLink&&); \
	NO_API UHoudiniPDGAssetLink(const UHoudiniPDGAssetLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPDGAssetLink); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPDGAssetLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPDGAssetLink)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_428_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_431_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HoudiniPDGAssetLink."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniPDGAssetLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h


#define FOREACH_ENUM_EPDGBAKEPACKAGEREPLACEMODEOPTION(op) \
	op(EPDGBakePackageReplaceModeOption::CreateNewAssets) \
	op(EPDGBakePackageReplaceModeOption::ReplaceExistingAssets) 

enum class EPDGBakePackageReplaceModeOption : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakePackageReplaceModeOption>();

#define FOREACH_ENUM_EPDGBAKESELECTIONOPTION(op) \
	op(EPDGBakeSelectionOption::All) \
	op(EPDGBakeSelectionOption::SelectedNetwork) \
	op(EPDGBakeSelectionOption::SelectedNode) 

enum class EPDGBakeSelectionOption : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakeSelectionOption>();

#define FOREACH_ENUM_EPDGWORKRESULTSTATE(op) \
	op(EPDGWorkResultState::None) \
	op(EPDGWorkResultState::ToLoad) \
	op(EPDGWorkResultState::Loading) \
	op(EPDGWorkResultState::Loaded) \
	op(EPDGWorkResultState::ToDelete) \
	op(EPDGWorkResultState::Deleting) \
	op(EPDGWorkResultState::Deleted) \
	op(EPDGWorkResultState::NotLoaded) 

enum class EPDGWorkResultState : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>();

#define FOREACH_ENUM_EPDGNODESTATE(op) \
	op(EPDGNodeState::None) \
	op(EPDGNodeState::Dirtied) \
	op(EPDGNodeState::Dirtying) \
	op(EPDGNodeState::Cooking) \
	op(EPDGNodeState::Cook_Complete) \
	op(EPDGNodeState::Cook_Failed) 

enum class EPDGNodeState : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>();

#define FOREACH_ENUM_EPDGLINKSTATE(op) \
	op(EPDGLinkState::Inactive) \
	op(EPDGLinkState::Linking) \
	op(EPDGLinkState::Linked) \
	op(EPDGLinkState::Error_Not_Linked) 

enum class EPDGLinkState : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGLinkState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
