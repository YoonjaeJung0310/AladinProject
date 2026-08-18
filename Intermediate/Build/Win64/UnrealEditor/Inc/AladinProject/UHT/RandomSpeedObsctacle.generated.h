// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RandomSpeedObsctacle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALADINPROJECT_RandomSpeedObsctacle_generated_h
#error "RandomSpeedObsctacle.generated.h already included, missing '#pragma once' in RandomSpeedObsctacle.h"
#endif
#define ALADINPROJECT_RandomSpeedObsctacle_generated_h

#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeRandomSpeed); \
	DECLARE_FUNCTION(execGetRotationSpeed); \
	DECLARE_FUNCTION(execResetActorPosition);


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARandomSpeedObsctacle(); \
	friend struct Z_Construct_UClass_ARandomSpeedObsctacle_Statics; \
public: \
	DECLARE_CLASS(ARandomSpeedObsctacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AladinProject"), NO_API) \
	DECLARE_SERIALIZER(ARandomSpeedObsctacle)


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARandomSpeedObsctacle(ARandomSpeedObsctacle&&); \
	ARandomSpeedObsctacle(const ARandomSpeedObsctacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomSpeedObsctacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomSpeedObsctacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARandomSpeedObsctacle) \
	NO_API virtual ~ARandomSpeedObsctacle();


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_9_PROLOG
#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALADINPROJECT_API UClass* StaticClass<class ARandomSpeedObsctacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
