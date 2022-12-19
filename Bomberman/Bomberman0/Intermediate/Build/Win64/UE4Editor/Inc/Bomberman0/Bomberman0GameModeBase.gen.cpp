// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman0/Bomberman0GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman0GameModeBase() {}
// Cross Module References
	BOMBERMAN0_API UClass* Z_Construct_UClass_ABomberman0GameModeBase_NoRegister();
	BOMBERMAN0_API UClass* Z_Construct_UClass_ABomberman0GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bomberman0();
// End Cross Module References
	void ABomberman0GameModeBase::StaticRegisterNativesABomberman0GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABomberman0GameModeBase_NoRegister()
	{
		return ABomberman0GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABomberman0GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberman0GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman0GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Bomberman0GameModeBase.h" },
		{ "ModuleRelativePath", "Bomberman0GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberman0GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman0GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberman0GameModeBase_Statics::ClassParams = {
		&ABomberman0GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABomberman0GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman0GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberman0GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberman0GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberman0GameModeBase, 975575032);
	template<> BOMBERMAN0_API UClass* StaticClass<ABomberman0GameModeBase>()
	{
		return ABomberman0GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberman0GameModeBase(Z_Construct_UClass_ABomberman0GameModeBase, &ABomberman0GameModeBase::StaticClass, TEXT("/Script/Bomberman0"), TEXT("ABomberman0GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman0GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
