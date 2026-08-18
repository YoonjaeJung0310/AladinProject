// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayableAladin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ALADINPROJECT_PlayableAladin_generated_h
#error "PlayableAladin.generated.h already included, missing '#pragma once' in PlayableAladin.h"
#endif
#define ALADINPROJECT_PlayableAladin_generated_h

#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove);


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayableAladin(); \
	friend struct Z_Construct_UClass_APlayableAladin_Statics; \
public: \
	DECLARE_CLASS(APlayableAladin, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AladinProject"), NO_API) \
	DECLARE_SERIALIZER(APlayableAladin)


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayableAladin(APlayableAladin&&); \
	APlayableAladin(const APlayableAladin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayableAladin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayableAladin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayableAladin) \
	NO_API virtual ~APlayableAladin();


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_13_PROLOG
#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALADINPROJECT_API UClass* StaticClass<class APlayableAladin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
