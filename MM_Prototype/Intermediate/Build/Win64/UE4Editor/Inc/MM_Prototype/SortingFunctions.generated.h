// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MM_PROTOTYPE_SortingFunctions_generated_h
#error "SortingFunctions.generated.h already included, missing '#pragma once' in SortingFunctions.h"
#endif
#define MM_PROTOTYPE_SortingFunctions_generated_h

#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_SPARSE_DATA
#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execString_Sort) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array_To_Sort); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Sorted_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USortingFunctions::String_Sort(Z_Param_Out_Array_To_Sort,Z_Param_Descending,Z_Param_Out_Sorted_Array); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloat_Sort) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_Array_To_Sort); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Sorted_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USortingFunctions::Float_Sort(Z_Param_Out_Array_To_Sort,Z_Param_Descending,Z_Param_Out_Sorted_Array); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteger_Sort) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array_To_Sort); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Sorted_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USortingFunctions::Integer_Sort(Z_Param_Out_Array_To_Sort,Z_Param_Descending,Z_Param_Out_Sorted_Array); \
		P_NATIVE_END; \
	}


#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execString_Sort) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Array_To_Sort); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Sorted_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USortingFunctions::String_Sort(Z_Param_Out_Array_To_Sort,Z_Param_Descending,Z_Param_Out_Sorted_Array); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloat_Sort) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_Array_To_Sort); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Sorted_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USortingFunctions::Float_Sort(Z_Param_Out_Array_To_Sort,Z_Param_Descending,Z_Param_Out_Sorted_Array); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteger_Sort) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array_To_Sort); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Sorted_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USortingFunctions::Integer_Sort(Z_Param_Out_Array_To_Sort,Z_Param_Descending,Z_Param_Out_Sorted_Array); \
		P_NATIVE_END; \
	}


#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSortingFunctions(); \
	friend struct Z_Construct_UClass_USortingFunctions_Statics; \
public: \
	DECLARE_CLASS(USortingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MM_Prototype"), NO_API) \
	DECLARE_SERIALIZER(USortingFunctions)


#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSortingFunctions(); \
	friend struct Z_Construct_UClass_USortingFunctions_Statics; \
public: \
	DECLARE_CLASS(USortingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MM_Prototype"), NO_API) \
	DECLARE_SERIALIZER(USortingFunctions)


#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USortingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USortingFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortingFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortingFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortingFunctions(USortingFunctions&&); \
	NO_API USortingFunctions(const USortingFunctions&); \
public:


#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USortingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortingFunctions(USortingFunctions&&); \
	NO_API USortingFunctions(const USortingFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortingFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USortingFunctions)


#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_PRIVATE_PROPERTY_OFFSET
#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_12_PROLOG
#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_SPARSE_DATA \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_RPC_WRAPPERS \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_INCLASS \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_SPARSE_DATA \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_INCLASS_NO_PURE_DECLS \
	MM_Prototype_Source_MM_Prototype_SortingFunctions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MM_PROTOTYPE_API UClass* StaticClass<class USortingFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MM_Prototype_Source_MM_Prototype_SortingFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
