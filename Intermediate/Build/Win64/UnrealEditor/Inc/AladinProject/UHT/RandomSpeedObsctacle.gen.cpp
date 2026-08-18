// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AladinProject/RandomSpeedObsctacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomSpeedObsctacle() {}

// Begin Cross Module References
ALADINPROJECT_API UClass* Z_Construct_UClass_ARandomSpeedObsctacle();
ALADINPROJECT_API UClass* Z_Construct_UClass_ARandomSpeedObsctacle_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AladinProject();
// End Cross Module References

// Begin Class ARandomSpeedObsctacle Function ChangeRandomSpeed
struct Z_Construct_UFunction_ARandomSpeedObsctacle_ChangeRandomSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RandomObsctacle|Functions" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARandomSpeedObsctacle_ChangeRandomSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARandomSpeedObsctacle, nullptr, "ChangeRandomSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARandomSpeedObsctacle_ChangeRandomSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARandomSpeedObsctacle_ChangeRandomSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARandomSpeedObsctacle_ChangeRandomSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARandomSpeedObsctacle_ChangeRandomSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARandomSpeedObsctacle::execChangeRandomSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeRandomSpeed();
	P_NATIVE_END;
}
// End Class ARandomSpeedObsctacle Function ChangeRandomSpeed

// Begin Class ARandomSpeedObsctacle Function GetRotationSpeed
struct Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics
{
	struct RandomSpeedObsctacle_eventGetRotationSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RandomObstacle|Properties" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RandomSpeedObsctacle_eventGetRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARandomSpeedObsctacle, nullptr, "GetRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::RandomSpeedObsctacle_eventGetRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::RandomSpeedObsctacle_eventGetRotationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARandomSpeedObsctacle::execGetRotationSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRotationSpeed();
	P_NATIVE_END;
}
// End Class ARandomSpeedObsctacle Function GetRotationSpeed

// Begin Class ARandomSpeedObsctacle Function ResetActorPosition
struct Z_Construct_UFunction_ARandomSpeedObsctacle_ResetActorPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RandomObstacle|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARandomSpeedObsctacle_ResetActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARandomSpeedObsctacle, nullptr, "ResetActorPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARandomSpeedObsctacle_ResetActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARandomSpeedObsctacle_ResetActorPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARandomSpeedObsctacle_ResetActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARandomSpeedObsctacle_ResetActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARandomSpeedObsctacle::execResetActorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorPosition();
	P_NATIVE_END;
}
// End Class ARandomSpeedObsctacle Function ResetActorPosition

// Begin Class ARandomSpeedObsctacle
void ARandomSpeedObsctacle::StaticRegisterNativesARandomSpeedObsctacle()
{
	UClass* Class = ARandomSpeedObsctacle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeRandomSpeed", &ARandomSpeedObsctacle::execChangeRandomSpeed },
		{ "GetRotationSpeed", &ARandomSpeedObsctacle::execGetRotationSpeed },
		{ "ResetActorPosition", &ARandomSpeedObsctacle::execResetActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomSpeedObsctacle);
UClass* Z_Construct_UClass_ARandomSpeedObsctacle_NoRegister()
{
	return ARandomSpeedObsctacle::StaticClass();
}
struct Z_Construct_UClass_ARandomSpeedObsctacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomSpeedObsctacle.h" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "RandomObstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "RandomObstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "RandomObstacle|Properties" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomMoveSpeed_MetaData[] = {
		{ "Category", "RandomObstacle|Properties" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "RandomObstacle|Properties" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleClass_MetaData[] = {
		{ "Category", "RandomObsctacle|Spawn" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "RandomObstacle|Properties" },
		{ "ModuleRelativePath", "RandomSpeedObsctacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObstacleClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARandomSpeedObsctacle_ChangeRandomSpeed, "ChangeRandomSpeed" }, // 122647279
		{ &Z_Construct_UFunction_ARandomSpeedObsctacle_GetRotationSpeed, "GetRotationSpeed" }, // 1194555522
		{ &Z_Construct_UFunction_ARandomSpeedObsctacle_ResetActorPosition, "ResetActorPosition" }, // 905906961
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomSpeedObsctacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctacle, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctacle, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctacle, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_RandomMoveSpeed = { "RandomMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctacle, RandomMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomMoveSpeed_MetaData), NewProp_RandomMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctacle, MoveDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_ObstacleClass = { "ObstacleClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctacle, ObstacleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARandomSpeedObsctacle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleClass_MetaData), NewProp_ObstacleClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctacle, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomSpeedObsctacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_RandomMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_MoveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_ObstacleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctacle_Statics::NewProp_MaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandomSpeedObsctacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AladinProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomSpeedObsctacle_Statics::ClassParams = {
	&ARandomSpeedObsctacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARandomSpeedObsctacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctacle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctacle_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomSpeedObsctacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandomSpeedObsctacle()
{
	if (!Z_Registration_Info_UClass_ARandomSpeedObsctacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomSpeedObsctacle.OuterSingleton, Z_Construct_UClass_ARandomSpeedObsctacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandomSpeedObsctacle.OuterSingleton;
}
template<> ALADINPROJECT_API UClass* StaticClass<ARandomSpeedObsctacle>()
{
	return ARandomSpeedObsctacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomSpeedObsctacle);
ARandomSpeedObsctacle::~ARandomSpeedObsctacle() {}
// End Class ARandomSpeedObsctacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomSpeedObsctacle, ARandomSpeedObsctacle::StaticClass, TEXT("ARandomSpeedObsctacle"), &Z_Registration_Info_UClass_ARandomSpeedObsctacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomSpeedObsctacle), 3023291581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_3528649139(TEXT("/Script/AladinProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctacle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
