/*********************************************************/
/* Author   : Mustafa Muhammed Abdou                     */
/* Date     : 4 Feb,2023                                 */
/* Version  : V01                                        */
/* Hint     : longest consecutive occurance              */
/*********************************************************/
#include <stdio.h>

/* FUNCTION PROTOTYPE / DECLERATION */
/* FUNCTION TAKES AN ARRAY AND ITS SIZE AND A NUMBER TO SEARCH FOR  */
/* FUNCTION RETURNS LAST CONSECUTIVE OCCURANCE OF THE PASSED NUMBER */
int * IntLongConsecutive(int *CopyIntArr, int CopyIntArrSize);

int main()
{
    /* CREATE ARRAY FOR TESTING */
    int IntLocalArray[]={1,1,1,1,1,1,1,2,2,3,3,3,3,4,4,4,4,3,3,3} , *IntLocalResult ;
    
    /* CALCULATE THE SIZE OF ARRAY */
    int IntLocalArraySize = sizeof(IntLocalArray) / sizeof(IntLocalArray[0]);

    /* CALL THE FUNCTION AND SIIGN THE RETURN TO IntLocalResult */
    IntLocalResult = IntLongConsecutive(IntLocalArray , IntLocalArraySize );
    
    for(int x = 0 ; x < 2 ; x++)
    {
        /* DISPLAY THE RESULT */
        printf("%d\n",IntLocalResult[x]);
    }
    

    return 0;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int * IntLongConsecutive(int *CopyIntArr, int CopyIntArrSize)
{
    /* CREATE STATIC ARRAY TO KEEP ITS ADDRESS NOT DELETED AS LOCAL ARRAY  */
    static int IntLocalLongestOccuranceArr[2] , IntLocalMax = 0 , IntLocalCounter = 0;

    for (int i = 0; i < CopyIntArrSize; i++)
    {
        int IntLocalNext = i + 1 ; /* CREATE COUNTER STARTS FROM THE NEXT ELEMENT */
        while (CopyIntArr[i] == CopyIntArr[IntLocalNext++])
        {
            /* WILL BE EXECUTED WHILE WE'VE THE NUMBER WE SEARCH FOR */
            IntLocalCounter++;
        }
        /* COMPARE TO MAX VALUE */
        if (IntLocalCounter >= IntLocalMax)
        {
            /* UPDATE THE MAX VALUE AND STORE THE NUMBER WITH MAX OCCURANCE TILL NOW */
            IntLocalMax = IntLocalCounter;
            IntLocalLongestOccuranceArr[0] = CopyIntArr[i];     /* NUMBER */
            IntLocalLongestOccuranceArr[1] = IntLocalMax + 1 ;  /* COUNTS + 1 TO INCLUDE THE NUMBER ITSELF */
        }
        /* REINTIALIZE THE COUNTER TO START WITH 0 */
        IntLocalCounter = 0 ;
    }

    /* RETURN THE ARRAY */
    return IntLocalLongestOccuranceArr ;
}
