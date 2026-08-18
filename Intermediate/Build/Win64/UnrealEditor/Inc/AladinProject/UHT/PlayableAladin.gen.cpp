// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AladinProject/PlayableAladin.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayableAladin() {}

// Begin Cross Module References
ALADINPROJECT_API UClass* Z_Construct_UClass_APlayableAladin();
ALADINPROJECT_API UClass* Z_Construct_UClass_APlayableAladin_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_AladinProject();
// End Cross Module References

// Begin Class APlayableAladin Function Look
struct Z_Construct_UFunction_APlayableAladin_Look_Statics
{
	struct PlayableAladin_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayableAladin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayableAladin_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayableAladin_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayableAladin_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayableAladin_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableAladin_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableAladin, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_APlayableAladin_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayableAladin_Look_Statics::PlayableAladin_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayableAladin_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayableAladin_Look_Statics::PlayableAladin_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayableAladin_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayableAladin_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayableAladin::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayableAladin Function Look

// Begin Class APlayableAladin Function Move
struct Z_Construct_UFunction_APlayableAladin_Move_Statics
{
	struct PlayableAladin_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//IA_MOVE\xef\xbf\xbd\xef\xbf\xbd IA_Jump \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//Enhanced Input\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd FInPutActionValue\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb5\xcb\xb4\xcf\xb4\xef\xbf\xbd(F\xef\xbf\xbd\xef\xbf\xbd Fucntion\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_MOVE\xef\xbf\xbd\xef\xbf\xbd IA_Jump \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nEnhanced Input\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd FInPutActionValue\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb5\xcb\xb4\xcf\xb4\xef\xbf\xbd(F\xef\xbf\xbd\xef\xbf\xbd Fucntion\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayableAladin_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayableAladin_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayableAladin_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayableAladin_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableAladin_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableAladin, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_APlayableAladin_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayableAladin_Move_Statics::PlayableAladin_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayableAladin_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayableAladin_Move_Statics::PlayableAladin_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayableAladin_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayableAladin_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayableAladin::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayableAladin Function Move

// Begin Class APlayableAladin Function StartJump
struct Z_Construct_UFunction_APlayableAladin_StartJump_Statics
{
	struct PlayableAladin_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd4\xb7\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd FInputActionValue \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd4\xb7\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd FInputActionValue \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayableAladin_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayableAladin_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayableAladin_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayableAladin_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableAladin_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableAladin, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_APlayableAladin_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayableAladin_StartJump_Statics::PlayableAladin_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayableAladin_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayableAladin_StartJump_Statics::PlayableAladin_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayableAladin_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayableAladin_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayableAladin::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayableAladin Function StartJump

// Begin Class APlayableAladin Function StartSprint
struct Z_Construct_UFunction_APlayableAladin_StartSprint_Statics
{
	struct PlayableAladin_eventStartSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayableAladin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayableAladin_eventStartSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableAladin, nullptr, "StartSprint", nullptr, nullptr, Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::PlayableAladin_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::PlayableAladin_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayableAladin_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayableAladin_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayableAladin::execStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayableAladin Function StartSprint

// Begin Class APlayableAladin Function StopJump
struct Z_Construct_UFunction_APlayableAladin_StopJump_Statics
{
	struct PlayableAladin_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayableAladin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayableAladin_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayableAladin_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayableAladin_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayableAladin_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableAladin_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableAladin, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_APlayableAladin_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayableAladin_StopJump_Statics::PlayableAladin_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayableAladin_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayableAladin_StopJump_Statics::PlayableAladin_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayableAladin_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayableAladin_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayableAladin::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayableAladin Function StopJump

// Begin Class APlayableAladin Function StopSprint
struct Z_Construct_UFunction_APlayableAladin_StopSprint_Statics
{
	struct PlayableAladin_eventStopSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayableAladin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayableAladin_eventStopSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableAladin, nullptr, "StopSprint", nullptr, nullptr, Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::PlayableAladin_eventStopSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::PlayableAladin_eventStopSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayableAladin_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayableAladin_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayableAladin::execStopSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayableAladin Function StopSprint

// Begin Class APlayableAladin
void APlayableAladin::StaticRegisterNativesAPlayableAladin()
{
	UClass* Class = APlayableAladin::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &APlayableAladin::execLook },
		{ "Move", &APlayableAladin::execMove },
		{ "StartJump", &APlayableAladin::execStartJump },
		{ "StartSprint", &APlayableAladin::execStartSprint },
		{ "StopJump", &APlayableAladin::execStopJump },
		{ "StopSprint", &APlayableAladin::execStopSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayableAladin);
UClass* Z_Construct_UClass_APlayableAladin_NoRegister()
{
	return APlayableAladin::StaticClass();
}
struct Z_Construct_UClass_APlayableAladin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enhanced Input\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayableAladin.h" },
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//USpringArmComponent \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SpringArmComp \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USpringArmComponent \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SpringArmComp \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UCameraComponent \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CameraComp \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCameraComponent \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CameraComp \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xc8\xb1\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xc8\xb1\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xc5\xb3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlayableAladin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xc5\xb3\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayableAladin_Look, "Look" }, // 2807545577
		{ &Z_Construct_UFunction_APlayableAladin_Move, "Move" }, // 3453117796
		{ &Z_Construct_UFunction_APlayableAladin_StartJump, "StartJump" }, // 944166434
		{ &Z_Construct_UFunction_APlayableAladin_StartSprint, "StartSprint" }, // 2200898031
		{ &Z_Construct_UFunction_APlayableAladin_StopJump, "StopJump" }, // 448361165
		{ &Z_Construct_UFunction_APlayableAladin_StopSprint, "StopSprint" }, // 3189618658
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayableAladin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayableAladin_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayableAladin, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayableAladin_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayableAladin, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayableAladin_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayableAladin, NormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSpeed_MetaData), NewProp_NormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayableAladin_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayableAladin, SprintSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMultiplier_MetaData), NewProp_SprintSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayableAladin_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayableAladin, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayableAladin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableAladin_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableAladin_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableAladin_Statics::NewProp_NormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableAladin_Statics::NewProp_SprintSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableAladin_Statics::NewProp_SprintSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayableAladin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayableAladin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AladinProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayableAladin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayableAladin_Statics::ClassParams = {
	&APlayableAladin::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayableAladin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayableAladin_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayableAladin_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayableAladin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayableAladin()
{
	if (!Z_Registration_Info_UClass_APlayableAladin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayableAladin.OuterSingleton, Z_Construct_UClass_APlayableAladin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayableAladin.OuterSingleton;
}
template<> ALADINPROJECT_API UClass* StaticClass<APlayableAladin>()
{
	return APlayableAladin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayableAladin);
APlayableAladin::~APlayableAladin() {}
// End Class APlayableAladin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayableAladin, APlayableAladin::StaticClass, TEXT("APlayableAladin"), &Z_Registration_Info_UClass_APlayableAladin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayableAladin), 308190494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_3313301350(TEXT("/Script/AladinProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_PlayableAladin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
