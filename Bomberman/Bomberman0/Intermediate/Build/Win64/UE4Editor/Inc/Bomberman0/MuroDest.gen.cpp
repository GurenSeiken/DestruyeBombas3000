// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman0/Muro/MuroDest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroDest() {}
// Cross Module References
	BOMBERMAN0_API UClass* Z_Construct_UClass_AMuroDest_NoRegister();
	BOMBERMAN0_API UClass* Z_Construct_UClass_AMuroDest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman0();
	BOMBERMAN0_API UClass* Z_Construct_UClass_UHealt_NoRegister();
// End Cross Module References
	void AMuroDest::StaticRegisterNativesAMuroDest()
	{
	}
	UClass* Z_Construct_UClass_AMuroDest_NoRegister()
	{
		return AMuroDest::StaticClass();
	}
	struct Z_Construct_UClass_AMuroDest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Salud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Salud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroDest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroDest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Muro/MuroDest.h" },
		{ "ModuleRelativePath", "Muro/MuroDest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroDest_Statics::NewProp_Salud_MetaData[] = {
		{ "Category", "Salud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Muro/MuroDest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroDest_Statics::NewProp_Salud = { "Salud", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroDest, Salud), Z_Construct_UClass_UHealt_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroDest_Statics::NewProp_Salud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroDest_Statics::NewProp_Salud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroDest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroDest_Statics::NewProp_Salud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroDest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroDest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroDest_Statics::ClassParams = {
		&AMuroDest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroDest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroDest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroDest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroDest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroDest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroDest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroDest, 3795445283);
	template<> BOMBERMAN0_API UClass* StaticClass<AMuroDest>()
	{
		return AMuroDest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroDest(Z_Construct_UClass_AMuroDest, &AMuroDest::StaticClass, TEXT("/Script/Bomberman0"), TEXT("AMuroDest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroDest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
