// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AladinProject/RandomSpeedObsctaleSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomSpeedObsctaleSpawner() {}

// Begin Cross Module References
ALADINPROJECT_API UClass* Z_Construct_UClass_ARandomSpeedObsctacle_NoRegister();
ALADINPROJECT_API UClass* Z_Construct_UClass_ARandomSpeedObsctaleSpawner();
ALADINPROJECT_API UClass* Z_Construct_UClass_ARandomSpeedObsctaleSpawner_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AladinProject();
// End Cross Module References

// Begin Class ARandomSpeedObsctaleSpawner
void ARandomSpeedObsctaleSpawner::StaticRegisterNativesARandomSpeedObsctaleSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomSpeedObsctaleSpawner);
UClass* Z_Construct_UClass_ARandomSpeedObsctaleSpawner_NoRegister()
{
	return ARandomSpeedObsctaleSpawner::StaticClass();
}
struct Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomSpeedObsctaleSpawner.h" },
		{ "ModuleRelativePath", "RandomSpeedObsctaleSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleClass_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "RandomSpeedObsctaleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnNumber_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "RandomSpeedObsctaleSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObstacleClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomSpeedObsctaleSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::NewProp_ObstacleClass = { "ObstacleClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctaleSpawner, ObstacleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARandomSpeedObsctacle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleClass_MetaData), NewProp_ObstacleClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::NewProp_SpawnNumber = { "SpawnNumber", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomSpeedObsctaleSpawner, SpawnNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnNumber_MetaData), NewProp_SpawnNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::NewProp_ObstacleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::NewProp_SpawnNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AladinProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::ClassParams = {
	&ARandomSpeedObsctaleSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandomSpeedObsctaleSpawner()
{
	if (!Z_Registration_Info_UClass_ARandomSpeedObsctaleSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomSpeedObsctaleSpawner.OuterSingleton, Z_Construct_UClass_ARandomSpeedObsctaleSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandomSpeedObsctaleSpawner.OuterSingleton;
}
template<> ALADINPROJECT_API UClass* StaticClass<ARandomSpeedObsctaleSpawner>()
{
	return ARandomSpeedObsctaleSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomSpeedObsctaleSpawner);
ARandomSpeedObsctaleSpawner::~ARandomSpeedObsctaleSpawner() {}
// End Class ARandomSpeedObsctaleSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctaleSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomSpeedObsctaleSpawner, ARandomSpeedObsctaleSpawner::StaticClass, TEXT("ARandomSpeedObsctaleSpawner"), &Z_Registration_Info_UClass_ARandomSpeedObsctaleSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomSpeedObsctaleSpawner), 763522695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctaleSpawner_h_2208432365(TEXT("/Script/AladinProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctaleSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_RandomSpeedObsctaleSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
