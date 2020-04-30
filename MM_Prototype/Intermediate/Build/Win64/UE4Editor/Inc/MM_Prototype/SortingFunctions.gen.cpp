// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MM_Prototype/SortingFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSortingFunctions() {}
// Cross Module References
	MM_PROTOTYPE_API UClass* Z_Construct_UClass_USortingFunctions_NoRegister();
	MM_PROTOTYPE_API UClass* Z_Construct_UClass_USortingFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MM_Prototype();
	MM_PROTOTYPE_API UFunction* Z_Construct_UFunction_USortingFunctions_Float_Sort();
	MM_PROTOTYPE_API UFunction* Z_Construct_UFunction_USortingFunctions_Integer_Sort();
	MM_PROTOTYPE_API UFunction* Z_Construct_UFunction_USortingFunctions_String_Sort();
// End Cross Module References
	void USortingFunctions::StaticRegisterNativesUSortingFunctions()
	{
		UClass* Class = USortingFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Float_Sort", &USortingFunctions::execFloat_Sort },
			{ "Integer_Sort", &USortingFunctions::execInteger_Sort },
			{ "String_Sort", &USortingFunctions::execString_Sort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics
	{
		struct SortingFunctions_eventFloat_Sort_Parms
		{
			TArray<float> Array_To_Sort;
			bool Descending;
			TArray<float> Sorted_Array;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sorted_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sorted_Array_Inner;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array_To_Sort;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_To_Sort_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Sorted_Array = { "Sorted_Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingFunctions_eventFloat_Sort_Parms, Sorted_Array), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Sorted_Array_Inner = { "Sorted_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((SortingFunctions_eventFloat_Sort_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortingFunctions_eventFloat_Sort_Parms), &Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Array_To_Sort = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingFunctions_eventFloat_Sort_Parms, Array_To_Sort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Array_To_Sort_Inner = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Sorted_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Sorted_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Array_To_Sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::NewProp_Array_To_Sort_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting Functions" },
		{ "ModuleRelativePath", "SortingFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortingFunctions, nullptr, "Float_Sort", nullptr, nullptr, sizeof(SortingFunctions_eventFloat_Sort_Parms), Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortingFunctions_Float_Sort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortingFunctions_Float_Sort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics
	{
		struct SortingFunctions_eventInteger_Sort_Parms
		{
			TArray<int32> Array_To_Sort;
			bool Descending;
			TArray<int32> Sorted_Array;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sorted_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sorted_Array_Inner;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array_To_Sort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_To_Sort_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Sorted_Array = { "Sorted_Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingFunctions_eventInteger_Sort_Parms, Sorted_Array), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Sorted_Array_Inner = { "Sorted_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((SortingFunctions_eventInteger_Sort_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortingFunctions_eventInteger_Sort_Parms), &Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Array_To_Sort = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingFunctions_eventInteger_Sort_Parms, Array_To_Sort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Array_To_Sort_Inner = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Sorted_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Sorted_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Array_To_Sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::NewProp_Array_To_Sort_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting Functions" },
		{ "ModuleRelativePath", "SortingFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortingFunctions, nullptr, "Integer_Sort", nullptr, nullptr, sizeof(SortingFunctions_eventInteger_Sort_Parms), Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortingFunctions_Integer_Sort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortingFunctions_Integer_Sort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortingFunctions_String_Sort_Statics
	{
		struct SortingFunctions_eventString_Sort_Parms
		{
			TArray<FString> Array_To_Sort;
			bool Descending;
			TArray<FString> Sorted_Array;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sorted_Array;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sorted_Array_Inner;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array_To_Sort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_To_Sort_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Sorted_Array = { "Sorted_Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingFunctions_eventString_Sort_Parms, Sorted_Array), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Sorted_Array_Inner = { "Sorted_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((SortingFunctions_eventString_Sort_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortingFunctions_eventString_Sort_Parms), &Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Array_To_Sort = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingFunctions_eventString_Sort_Parms, Array_To_Sort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Array_To_Sort_Inner = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Sorted_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Sorted_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Array_To_Sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::NewProp_Array_To_Sort_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting Functions" },
		{ "ModuleRelativePath", "SortingFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortingFunctions, nullptr, "String_Sort", nullptr, nullptr, sizeof(SortingFunctions_eventString_Sort_Parms), Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortingFunctions_String_Sort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortingFunctions_String_Sort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USortingFunctions_NoRegister()
	{
		return USortingFunctions::StaticClass();
	}
	struct Z_Construct_UClass_USortingFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USortingFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MM_Prototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USortingFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USortingFunctions_Float_Sort, "Float_Sort" }, // 2361590475
		{ &Z_Construct_UFunction_USortingFunctions_Integer_Sort, "Integer_Sort" }, // 2081583683
		{ &Z_Construct_UFunction_USortingFunctions_String_Sort, "String_Sort" }, // 1898312222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USortingFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SortingFunctions.h" },
		{ "ModuleRelativePath", "SortingFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USortingFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USortingFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USortingFunctions_Statics::ClassParams = {
		&USortingFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USortingFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USortingFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USortingFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USortingFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USortingFunctions, 2648872504);
	template<> MM_PROTOTYPE_API UClass* StaticClass<USortingFunctions>()
	{
		return USortingFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USortingFunctions(Z_Construct_UClass_USortingFunctions, &USortingFunctions::StaticClass, TEXT("/Script/MM_Prototype"), TEXT("USortingFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USortingFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
