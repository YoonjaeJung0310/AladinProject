// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AladinProject/AladinGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAladinGameMode() {}

// Begin Cross Module References
ALADINPROJECT_API UClass* Z_Construct_UClass_AAladinGameMode();
ALADINPROJECT_API UClass* Z_Construct_UClass_AAladinGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_AladinProject();
// End Cross Module References

// Begin Class AAladinGameMode
void AAladinGameMode::StaticRegisterNativesAAladinGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAladinGameMode);
UClass* Z_Construct_UClass_AAladinGameMode_NoRegister()
{
	return AAladinGameMode::StaticClass();
}
struct Z_Construct_UClass_AAladinGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AladinGameMode.h" },
		{ "ModuleRelativePath", "AladinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAladinGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAladinGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_AladinProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAladinGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAladinGameMode_Statics::ClassParams = {
	&AAladinGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAladinGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAladinGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAladinGameMode()
{
	if (!Z_Registration_Info_UClass_AAladinGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAladinGameMode.OuterSingleton, Z_Construct_UClass_AAladinGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAladinGameMode.OuterSingleton;
}
template<> ALADINPROJECT_API UClass* StaticClass<AAladinGameMode>()
{
	return AAladinGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAladinGameMode);
AAladinGameMode::~AAladinGameMode() {}
// End Class AAladinGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_AladinGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAladinGameMode, AAladinGameMode::StaticClass, TEXT("AAladinGameMode"), &Z_Registration_Info_UClass_AAladinGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAladinGameMode), 3550227555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_AladinGameMode_h_2828840717(TEXT("/Script/AladinProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_AladinGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_AladinProject_Source_AladinProject_AladinGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
