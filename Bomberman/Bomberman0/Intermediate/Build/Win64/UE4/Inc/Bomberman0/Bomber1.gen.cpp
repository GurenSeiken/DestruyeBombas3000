// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman0/Ch/Bomber1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomber1() {}
// Cross Module References
	BOMBERMAN0_API UClass* Z_Construct_UClass_ABomber1_NoRegister();
	BOMBERMAN0_API UClass* Z_Construct_UClass_ABomber1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Bomberman0();
	BOMBERMAN0_API UFunction* Z_Construct_UFunction_ABomber1_Spawn();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN0_API UClass* Z_Construct_UClass_ABomb_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ABomber1::StaticRegisterNativesABomber1()
	{
		UClass* Class = ABomber1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &ABomber1::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABomber1_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomber1_Spawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//funcion spawn\n" },
		{ "ModuleRelativePath", "Ch/Bomber1.h" },
		{ "ToolTip", "funcion spawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomber1_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomber1, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomber1_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomber1_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomber1_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomber1_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomber1_NoRegister()
	{
		return ABomber1::StaticClass();
	}
	struct Z_Construct_UClass_ABomber1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomber1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman0,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABomber1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomber1_Spawn, "Spawn" }, // 1329044830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomber1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ch/Bomber1.h" },
		{ "ModuleRelativePath", "Ch/Bomber1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomber1_Statics::NewProp_vida_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Ch/Bomber1.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABomber1_Statics::NewProp_vida = { "vida", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomber1, vida), METADATA_PARAMS(Z_Construct_UClass_ABomber1_Statics::NewProp_vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomber1_Statics::NewProp_vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomber1_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//obtener locaclizacion del personaje\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ch/Bomber1.h" },
		{ "ToolTip", "obtener locaclizacion del personaje" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomber1_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomber1, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomber1_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomber1_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomber1_Statics::NewProp_ToSpawn_MetaData[] = {
		{ "Category", "Bomber1" },
		{ "Comment", "//seleccionar que se spawnea\n" },
		{ "ModuleRelativePath", "Ch/Bomber1.h" },
		{ "ToolTip", "seleccionar que se spawnea" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomber1_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomber1, ToSpawn), Z_Construct_UClass_ABomb_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABomber1_Statics::NewProp_ToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomber1_Statics::NewProp_ToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomber1_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//camara\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ch/Bomber1.h" },
		{ "ToolTip", "camara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomber1_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomber1, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomber1_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomber1_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomber1_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//para verse tambien el blueprint\n//brazo de la camara\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ch/Bomber1.h" },
		{ "ToolTip", "para verse tambien el blueprint\nbrazo de la camara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomber1_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomber1, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomber1_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomber1_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomber1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomber1_Statics::NewProp_vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomber1_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomber1_Statics::NewProp_ToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomber1_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomber1_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomber1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomber1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomber1_Statics::ClassParams = {
		&ABomber1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABomber1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomber1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomber1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomber1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomber1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomber1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomber1, 504588015);
	template<> BOMBERMAN0_API UClass* StaticClass<ABomber1>()
	{
		return ABomber1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomber1(Z_Construct_UClass_ABomber1, &ABomber1::StaticClass, TEXT("/Script/Bomberman0"), TEXT("ABomber1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomber1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
