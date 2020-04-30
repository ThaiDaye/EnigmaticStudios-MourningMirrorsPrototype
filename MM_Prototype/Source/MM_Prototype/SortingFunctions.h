// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SortingFunctions.generated.h"

/**
 * 
 */
UCLASS()
class MM_PROTOTYPE_API USortingFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
    public:
        UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
            static void  Integer_Sort(UPARAM(ref) TArray <int32>& Array_To_Sort, bool Descending, TArray <int32>& Sorted_Array);   
                                                                                                                                    
        UFUNCTION(BlueprintCallable, Category = "Sorting Functions")                                                                
            static void  Float_Sort(UPARAM(ref) TArray <float>& Array_To_Sort, bool Descending, TArray <float>& Sorted_Array);

        UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
            static void  String_Sort(UPARAM(ref) TArray <FString>& Array_To_Sort, bool Descending, TArray <FString>& Sorted_Array);
};
