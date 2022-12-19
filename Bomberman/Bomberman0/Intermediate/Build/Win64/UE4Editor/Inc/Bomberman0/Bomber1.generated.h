// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN0_Bomber1_generated_h
#error "Bomber1.generated.h already included, missing '#pragma once' in Bomber1.h"
#endif
#define BOMBERMAN0_Bomber1_generated_h

#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_SPARSE_DATA
#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomber1(); \
	friend struct Z_Construct_UClass_ABomber1_Statics; \
public: \
	DECLARE_CLASS(ABomber1, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman0"), NO_API) \
	DECLARE_SERIALIZER(ABomber1)


#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABomber1(); \
	friend struct Z_Construct_UClass_ABomber1_Statics; \
public: \
	DECLARE_CLASS(ABomber1, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman0"), NO_API) \
	DECLARE_SERIALIZER(ABomber1)


#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomber1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomber1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomber1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomber1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomber1(ABomber1&&); \
	NO_API ABomber1(const ABomber1&); \
public:


#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomber1(ABomber1&&); \
	NO_API ABomber1(const ABomber1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomber1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomber1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomber1)


#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_PRIVATE_PROPERTY_OFFSET
#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_18_PROLOG
#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_PRIVATE_PROPERTY_OFFSET \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_SPARSE_DATA \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_RPC_WRAPPERS \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_INCLASS \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_PRIVATE_PROPERTY_OFFSET \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_SPARSE_DATA \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_INCLASS_NO_PURE_DECLS \
	Bomberman0_Source_Bomberman0_Ch_Bomber1_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN0_API UClass* StaticClass<class ABomber1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman0_Source_Bomberman0_Ch_Bomber1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
