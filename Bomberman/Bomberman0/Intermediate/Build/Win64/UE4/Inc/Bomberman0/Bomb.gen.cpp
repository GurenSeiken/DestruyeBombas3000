// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman0/bomb/Bomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomb() {}
// Cross Module References
	BOMBERMAN0_API UClass* Z_Construct_UClass_ABomb_NoRegister();
	BOMBERMAN0_API UClass* Z_Construct_UClass_ABomb();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman0();
	BOMBERMAN0_API UFunction* Z_Construct_UFunction_ABomb_onTimerEnd();
// End Cross Module References
	void ABomb::StaticRegisterNativesABomb()
	{
		UClass* Class = ABomb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onTimerEnd", &ABomb::execonTimerEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABomb_onTimerEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomb_onTimerEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tiempo" },
		{ "ModuleRelativePath", "bomb/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomb_onTimerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomb, nullptr, "onTimerEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomb_onTimerEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomb_onTimerEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomb_onTimerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomb_onTimerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomb_NoRegister()
	{
		return ABomb::StaticClass();
	}
	struct Z_Construct_UClass_ABomb_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman0,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABomb_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomb_onTimerEnd, "onTimerEnd" }, // 434348483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "bomb/Bomb.h" },
		{ "ModuleRelativePath", "bomb/Bomb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_tim_MetaData[] = {
		{ "Category", "TiemeBomb" },
		{ "ModuleRelativePath", "bomb/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_tim = { "tim", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, tim), METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_tim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_tim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_tim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomb_Statics::ClassParams = {
		&ABomb::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABomb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomb, 125899951);
	template<> BOMBERMAN0_API UClass* StaticClass<ABomb>()
	{
		return ABomb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomb(Z_Construct_UClass_ABomb, &ABomb::StaticClass, TEXT("/Script/Bomberman0"), TEXT("ABomb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
