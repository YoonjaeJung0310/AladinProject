// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AladinProject/StartCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartCharacter() {}

// Begin Cross Module References
ALADINPROJECT_API UClass* Z_Construct_UClass_AStartCharacter();
ALADINPROJECT_API UClass* Z_Construct_UClass_AStartCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_AladinProject();
// End Cross Module References

// Begin Class AStartCharacter Function Look
struct Z_Construct_UFunction_AStartCharacter_Look_Statics
{
	struct StartCharacter_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStartCharacter_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StartCharacter_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStartCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStartCharacter_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartCharacter, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AStartCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStartCharacter_Look_Statics::StartCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStartCharacter_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AStartCharacter_Look_Statics::StartCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStartCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStartCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStartCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AStartCharacter Function Look

// Begin Class AStartCharacter Function Move
struct Z_Construct_UFunction_AStartCharacter_Move_Statics
{
	struct StartCharacter_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStartCharacter_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StartCharacter_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStartCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStartCharacter_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AStartCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStartCharacter_Move_Statics::StartCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStartCharacter_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AStartCharacter_Move_Statics::StartCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStartCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStartCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStartCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AStartCharacter Function Move

// Begin Class AStartCharacter Function MoveUpDown
struct Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics
{
	struct StartCharacter_eventMoveUpDown_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StartCharacter_eventMoveUpDown_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartCharacter, nullptr, "MoveUpDown", nullptr, nullptr, Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::StartCharacter_eventMoveUpDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::StartCharacter_eventMoveUpDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStartCharacter_MoveUpDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStartCharacter_MoveUpDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStartCharacter::execMoveUpDown)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveUpDown(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AStartCharacter Function MoveUpDown

// Begin Class AStartCharacter
void AStartCharacter::StaticRegisterNativesAStartCharacter()
{
	UClass* Class = AStartCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AStartCharacter::execLook },
		{ "Move", &AStartCharacter::execMove },
		{ "MoveUpDown", &AStartCharacter::execMoveUpDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStartCharacter);
UClass* Z_Construct_UClass_AStartCharacter_NoRegister()
{
	return AStartCharacter::StaticClass();
}
struct Z_Construct_UClass_AStartCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x84 \xeb\xb0\x9b\xec\x9d\x84 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xec\xa0\x84\xeb\xb0\xa9 \xec\x84\xa0\xec\x96\xb8\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StartCharacter.h" },
		{ "ModuleRelativePath", "StartCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x84 \xeb\xb0\x9b\xec\x9d\x84 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xec\xa0\x84\xeb\xb0\xa9 \xec\x84\xa0\xec\x96\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the game starts or when spawned\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StartCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the game starts or when spawned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//USpringArmComponent \xea\xb0\x9d\xec\xb2\xb4\xeb\xa5\xbc \xea\xb0\x80\xeb\xa6\xac\xed\x82\xa4\xeb\x8a\x94 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 SpringArmComp \xec\x83\x9d\xec\x84\xb1\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StartCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USpringArmComponent \xea\xb0\x9d\xec\xb2\xb4\xeb\xa5\xbc \xea\xb0\x80\xeb\xa6\xac\xed\x82\xa4\xeb\x8a\x94 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 SpringArmComp \xec\x83\x9d\xec\x84\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UCameraComponent \xea\xb0\x9d\xec\xb2\xb4\xeb\xa5\xbc \xea\xb0\x80\xeb\xa6\xac\xed\x82\xa4\xeb\x8a\x94 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 CameraComp \xec\x83\x9d\xec\x84\xb1\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StartCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCameraComponent \xea\xb0\x9d\xec\xb2\xb4\xeb\xa5\xbc \xea\xb0\x80\xeb\xa6\xac\xed\x82\xa4\xeb\x8a\x94 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 CameraComp \xec\x83\x9d\xec\x84\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleWidthSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHeightSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Movement|Gravity" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalVelocity_MetaData[] = {
		{ "Category", "Movement|Gravity" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCheckDistance_MetaData[] = {
		{ "Category", "Movement|Gravity" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grounded_MetaData[] = {
		{ "Category", "Movement|Gravity" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "StartCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleWidthSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHeightSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundCheckDistance;
	static void NewProp_Grounded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Grounded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStartCharacter_Look, "Look" }, // 1977100961
		{ &Z_Construct_UFunction_AStartCharacter_Move, "Move" }, // 261608582
		{ &Z_Construct_UFunction_AStartCharacter_MoveUpDown, "MoveUpDown" }, // 832286842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComponent_MetaData), NewProp_CapsuleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_CharacterSpeed = { "CharacterSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, CharacterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSpeed_MetaData), NewProp_CharacterSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_CapsuleWidthSize = { "CapsuleWidthSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, CapsuleWidthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleWidthSize_MetaData), NewProp_CapsuleWidthSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_CapsuleHeightSize = { "CapsuleHeightSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, CapsuleHeightSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHeightSize_MetaData), NewProp_CapsuleHeightSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_VerticalVelocity = { "VerticalVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, VerticalVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalVelocity_MetaData), NewProp_VerticalVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_GroundCheckDistance = { "GroundCheckDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, GroundCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCheckDistance_MetaData), NewProp_GroundCheckDistance_MetaData) };
void Z_Construct_UClass_AStartCharacter_Statics::NewProp_Grounded_SetBit(void* Obj)
{
	((AStartCharacter*)Obj)->Grounded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_Grounded = { "Grounded", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AStartCharacter), &Z_Construct_UClass_AStartCharacter_Statics::NewProp_Grounded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grounded_MetaData), NewProp_Grounded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartCharacter_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartCharacter, CameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpeed_MetaData), NewProp_CameraSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStartCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_CapsuleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_CharacterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_CapsuleWidthSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_CapsuleHeightSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_VerticalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_GroundCheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_Grounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartCharacter_Statics::NewProp_CameraSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStartCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStartCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AladinProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStartCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStartCharacter_Statics::ClassParams = {
	&AStartCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AStartCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AStartCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStartCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AStartCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStartCharacter()
{
	if (!Z_Registration_Info_UClass_AStartCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStartCharacter.OuterSingleton, Z_Construct_UClass_AStartCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStartCharacter.OuterSingleton;
}
template<> ALADINPROJECT_API UClass* StaticClass<AStartCharacter>()
{
	return AStartCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStartCharacter);
AStartCharacter::~AStartCharacter() {}
// End Class AStartCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStartCharacter, AStartCharacter::StaticClass, TEXT("AStartCharacter"), &Z_Registration_Info_UClass_AStartCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStartCharacter), 1158432527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_1738823094(TEXT("/Script/AladinProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_StartCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
