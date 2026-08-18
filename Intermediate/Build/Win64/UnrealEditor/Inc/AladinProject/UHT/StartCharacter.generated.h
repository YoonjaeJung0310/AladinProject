// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StartCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ALADINPROJECT_StartCharacter_generated_h
#error "StartCharacter.generated.h already included, missing '#pragma once' in StartCharacter.h"
#endif
#define ALADINPROJECT_StartCharacter_generated_h

#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveUpDown); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartCharacter(); \
	friend struct Z_Construct_UClass_AStartCharacter_Statics; \
public: \
	DECLARE_CLASS(AStartCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AladinProject"), NO_API) \
	DECLARE_SERIALIZER(AStartCharacter)


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AStartCharacter(AStartCharacter&&); \
	AStartCharacter(const AStartCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStartCharacter) \
	NO_API virtual ~AStartCharacter();


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_15_PROLOG
#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALADINPROJECT_API UClass* StaticClass<class AStartCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
