


#include "SortingFunctions.h"

void USortingFunctions::Integer_Sort(UPARAM(ref) TArray <int32>& ArrayToSort, bool Reverse, TArray <int32>& SortedArray)
{
    int32 m = ArrayToSort.Num();
    int32 a, k;
    bool DidSwap;

    for (a = 0; a < (m - 1); a++)
    {
        DidSwap = false;

        if (Reverse == true)
        {
            for (k = 0; k < m - a - 1; k++)
            {
                if (ArrayToSort[k] < ArrayToSort[k + 1])
                {
                    int32 z;
                    z = ArrayToSort[k];
                    ArrayToSort[k] = ArrayToSort[k + 1];
                    ArrayToSort[k + 1] = z;
                    DidSwap = true;
                }
            }

            if (DidSwap == false)
            {
                break;
            }
        }
        else
        {
            ArrayToSort.Sort();
        }
    }

    SortedArray = ArrayToSort;
}

void USortingFunctions::Float_Sort(UPARAM(ref) TArray <float>& ArrayToSort, bool Reverse, TArray <float>& SortedArray)
{
    int32 m = ArrayToSort.Num();
    int32 a, k;
    bool DidSwap;

    for (a = 0; a < (m - 1); a++)
    {
        DidSwap = false;

        if (Reverse == true)
        {
            for (k = 0; k < m - a - 1; k++)
            {
                if (ArrayToSort[k] < ArrayToSort[k + 1])
                {
                    float z;
                    z = ArrayToSort[k];
                    ArrayToSort[k] = ArrayToSort[k + 1];
                    ArrayToSort[k + 1] = z;
                    DidSwap = true;
                }
            }

            if (DidSwap == false)
            {
                break;
            }
        }
        else
        {
            ArrayToSort.Sort();
        }
    }

    SortedArray = ArrayToSort;
}

void USortingFunctions::String_Sort(UPARAM(ref) TArray <FString>& ArrayToSort, bool Reverse, TArray <FString>& SortedArray)
{
    ArrayToSort.Sort();

    if (Reverse == true)
    {
        TArray <FString> newarray;
        int x = ArrayToSort.Num() - 1;

        while (x > -1)
        {
            newarray.Add(ArrayToSort[x]);
            --x;
        }

        ArrayToSort = newarray;
    }

    SortedArray = ArrayToSort;
}