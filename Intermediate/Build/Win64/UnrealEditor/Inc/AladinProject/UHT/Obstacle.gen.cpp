// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AladinProject/Obstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle() {}

// Begin Cross Module References
ALADINPROJECT_API UClass* Z_Construct_UClass_AObstacle();
ALADINPROJECT_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AladinProject();
// End Cross Module References

// Begin Class AObstacle Function GetRotationSpeed
struct Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics
{
	struct Obstacle_eventGetRotationSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Obstacle|Properties" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Obstacle_eventGetRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstacle, nullptr, "GetRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::Obstacle_eventGetRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::Obstacle_eventGetRotationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AObstacle_GetRotationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObstacle_GetRotationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObstacle::execGetRotationSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRotationSpeed();
	P_NATIVE_END;
}
// End Class AObstacle Function GetRotationSpeed

// Begin Class AObstacle Function ResetActorPosition
struct Z_Construct_UFunction_AObstacle_ResetActorPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Obstacle|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xeb\xb8\x94\xed\x94\x84\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\x84\xa4\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "Obstacle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xeb\xb8\x94\xed\x94\x84\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\x84\xa4\xec\xa0\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstacle_ResetActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstacle, nullptr, "ResetActorPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacle_ResetActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObstacle_ResetActorPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AObstacle_ResetActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObstacle_ResetActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObstacle::execResetActorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorPosition();
	P_NATIVE_END;
}
// End Class AObstacle Function ResetActorPosition

// Begin Class AObstacle
void AObstacle::StaticRegisterNativesAObstacle()
{
	UClass* Class = AObstacle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRotationSpeed", &AObstacle::execGetRotationSpeed },
		{ "ResetActorPosition", &AObstacle::execResetActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle);
UClass* Z_Construct_UClass_AObstacle_NoRegister()
{
	return AObstacle::StaticClass();
}
struct Z_Construct_UClass_AObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle.h" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Obstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Obstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Obstacle|Properties" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Obstacle|Properties" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Obstacle|Properties" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Obstacle|Properties" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AObstacle_GetRotationSpeed, "GetRotationSpeed" }, // 2557870289
		{ &Z_Construct_UFunction_AObstacle_ResetActorPosition, "ResetActorPosition" }, // 3462807027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, MoveDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_MoveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AladinProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Statics::ClassParams = {
	&AObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AObstacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacle()
{
	if (!Z_Registration_Info_UClass_AObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle.OuterSingleton, Z_Construct_UClass_AObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacle.OuterSingleton;
}
template<> ALADINPROJECT_API UClass* StaticClass<AObstacle>()
{
	return AObstacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle);
AObstacle::~AObstacle() {}
// End Class AObstacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_Obstacle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle, AObstacle::StaticClass, TEXT("AObstacle"), &Z_Registration_Info_UClass_AObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle), 4019926597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_Obstacle_h_4288278023(TEXT("/Script/AladinProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_Obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_Obstacle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
