// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AladinProject/FloatingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingPlatform() {}

// Begin Cross Module References
ALADINPROJECT_API UClass* Z_Construct_UClass_AFloatingPlatform();
ALADINPROJECT_API UClass* Z_Construct_UClass_AFloatingPlatform_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AladinProject();
// End Cross Module References

// Begin Class AFloatingPlatform Function GetRotationSpeed
struct Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics
{
	struct FloatingPlatform_eventGetRotationSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FloatingPlatform|Properties" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatingPlatform_eventGetRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloatingPlatform, nullptr, "GetRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::FloatingPlatform_eventGetRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::FloatingPlatform_eventGetRotationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloatingPlatform::execGetRotationSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRotationSpeed();
	P_NATIVE_END;
}
// End Class AFloatingPlatform Function GetRotationSpeed

// Begin Class AFloatingPlatform Function ResetActorPosition
struct Z_Construct_UFunction_AFloatingPlatform_ResetActorPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FloatingPlatform|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xeb\xb8\x94\xed\x94\x84\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\x84\xa4\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "FloatingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xeb\xb8\x94\xed\x94\x84\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\x84\xa4\xec\xa0\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloatingPlatform_ResetActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloatingPlatform, nullptr, "ResetActorPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloatingPlatform_ResetActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloatingPlatform_ResetActorPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloatingPlatform_ResetActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloatingPlatform_ResetActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloatingPlatform::execResetActorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorPosition();
	P_NATIVE_END;
}
// End Class AFloatingPlatform Function ResetActorPosition

// Begin Class AFloatingPlatform
void AFloatingPlatform::StaticRegisterNativesAFloatingPlatform()
{
	UClass* Class = AFloatingPlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRotationSpeed", &AFloatingPlatform::execGetRotationSpeed },
		{ "ResetActorPosition", &AFloatingPlatform::execResetActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloatingPlatform);
UClass* Z_Construct_UClass_AFloatingPlatform_NoRegister()
{
	return AFloatingPlatform::StaticClass();
}
struct Z_Construct_UClass_AFloatingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingPlatform.h" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "FloatingPlatform|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "FloatingPlatform|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "FloatingPlatform|Components" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "FloatingPlatform|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84\xeb\xa5\xbc \xeb\x82\x98\xed\x83\x9c\xeb\x82\x98\xeb\x8a\x90 \xeb\xb3\x80\xec\x88\x98(\xec\xb4\x88\xeb\x8b\xb9 \xeb\x8f\x84 \xeb\x8b\xa8\xec\x9c\x84)\n" },
#endif
		{ "ModuleRelativePath", "FloatingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84\xeb\xa5\xbc \xeb\x82\x98\xed\x83\x9c\xeb\x82\x98\xeb\x8a\x90 \xeb\xb3\x80\xec\x88\x98(\xec\xb4\x88\xeb\x8b\xb9 \xeb\x8f\x84 \xeb\x8b\xa8\xec\x9c\x84)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloatingPlatform_GetRotationSpeed, "GetRotationSpeed" }, // 2347416227
		{ &Z_Construct_UFunction_AFloatingPlatform_ResetActorPosition, "ResetActorPosition" }, // 631550713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloatingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AladinProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloatingPlatform_Statics::ClassParams = {
	&AFloatingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloatingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloatingPlatform()
{
	if (!Z_Registration_Info_UClass_AFloatingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloatingPlatform.OuterSingleton, Z_Construct_UClass_AFloatingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloatingPlatform.OuterSingleton;
}
template<> ALADINPROJECT_API UClass* StaticClass<AFloatingPlatform>()
{
	return AFloatingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingPlatform);
AFloatingPlatform::~AFloatingPlatform() {}
// End Class AFloatingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_FloatingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloatingPlatform, AFloatingPlatform::StaticClass, TEXT("AFloatingPlatform"), &Z_Registration_Info_UClass_AFloatingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloatingPlatform), 1290971620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_FloatingPlatform_h_1261000158(TEXT("/Script/AladinProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_FloatingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_FloatingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
