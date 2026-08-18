// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MagicCarpet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ALADINPROJECT_MagicCarpet_generated_h
#error "MagicCarpet.generated.h already included, missing '#pragma once' in MagicCarpet.h"
#endif
#define ALADINPROJECT_MagicCarpet_generated_h

#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicCarpet(); \
	friend struct Z_Construct_UClass_AMagicCarpet_Statics; \
public: \
	DECLARE_CLASS(AMagicCarpet, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AladinProject"), NO_API) \
	DECLARE_SERIALIZER(AMagicCarpet)


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMagicCarpet(AMagicCarpet&&); \
	AMagicCarpet(const AMagicCarpet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicCarpet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicCarpet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagicCarpet) \
	NO_API virtual ~AMagicCarpet();


#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_15_PROLOG
#define FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALADINPROJECT_API UClass* StaticClass<class AMagicCarpet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_MagicCarpet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
