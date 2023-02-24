/****************************************************/
/* AUTHOR      : MUSTAFA MUHAMMED                   */
/* DATE        : 4 Feb, 2023                        */
/* VERSION     : V01                                */
/* DESCRIBTION : Swap two arraies                   */
/****************************************************/
#include <stdio.h>

/* FUNCTION PROTOTYPE */
/* FUNCTION TAKES TWO ARRAIES AND SWAP THEIR ELEMENTS */
void VoidSwapArray(int *CopyArr1, int *CopyArr2, int CopyArrSize);

int main()
{
    /* CREATE TWO ARRAIES TO TEST */
    int IntLocalArray1[3] = {1, 2, 3}, IntLocalArray2[3] = {5, 6, 7};

    /* CALL SWAP FUNCTION */
    VoidSwapArray(IntLocalArray1, IntLocalArray2, 3);

    /* PRINT THE TWO ARRAIES AFTER SWAP CALLED */
    printf("After swap the Arraies will be : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", IntLocalArray1[i]);
        printf("%d\t", IntLocalArray2[i]);
        printf("\n");
    }

    return 0;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
void VoidSwapArray(int *CopyArr1, int *CopyArr2, int CopyArrSize)
{
    /* TEMPERORAY VARIABLE TO HELP SWAP TWO ELEMENTS */
    int IntLocalTemp = 0;
    for (int x = 0; x < CopyArrSize; x++)
    {
        IntLocalTemp = CopyArr1[x]; /* STORE THE FIRST VALUE IN TEMP                  */
        CopyArr1[x] = CopyArr2[x];  /* ASSIGN THE SECOND VALUE TO THE FIRST VARIABLE  */
        CopyArr2[x] = IntLocalTemp; /* assign the first value to the second variable  */
    }
}