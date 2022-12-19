// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN0_Bomb_generated_h
#error "Bomb.generated.h already included, missing '#pragma once' in Bomb.h"
#endif
#define BOMBERMAN0_Bomb_generated_h

#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_SPARSE_DATA
#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonTimerEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onTimerEnd(); \
		P_NATIVE_END; \
	}


#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonTimerEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onTimerEnd(); \
		P_NATIVE_END; \
	}


#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman0"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman0"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public:


#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomb)


#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_PRIVATE_PROPERTY_OFFSET
#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_14_PROLOG
#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_PRIVATE_PROPERTY_OFFSET \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_SPARSE_DATA \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_RPC_WRAPPERS \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_INCLASS \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_PRIVATE_PROPERTY_OFFSET \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_SPARSE_DATA \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_INCLASS_NO_PURE_DECLS \
	Bomberman0_Source_Bomberman0_bomb_Bomb_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN0_API UClass* StaticClass<class ABomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman0_Source_Bomberman0_bomb_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
