/*********************************************************/
/* Author   : Mustafa Muhammed Abdou                     */
/* Date     : 4 Feb,2023                                 */
/* Version  : V01                                        */
/* Hint     : longest consecutive occurance              */
/*********************************************************/
#include <stdio.h>

/* FUNCTION PROTOTYPE / DECLERATION */
/* FUNCTION TAKES AN ARRAY AND ITS SIZE AND A NUMBER TO SEARCH FOR  */
/* FUNCTION RETURNS LOST CONSECUTIVE OCCURANCE OF THE PASSED NUMBER */
int IntLongConsecutive(int *CopyIntArr, int CopyIntArrSize, int CopyIntSearchNum);

int main()
{
    /* CREATE ARRAY FOR TESTING */
    int IntLocalArray[16]={1,2,2,3,3,3,3,4,4,4,4,3,3,3,3,3} , IntLocalResult = 0;
    
    /* CALCULATE THE SIZE OF ARRAY */
    int IntLocalArraySize = sizeof(IntLocalArray) / sizeof(IntLocalArray[0]);

    /* CALL THE FUNCTION AND SIIGN THE RETURN TO IntLocalResult */
    IntLocalResult = IntLongConsecutive(IntLocalArray , IntLocalArraySize , 1);
    
    /* DISPLAY THE RESULT */
    printf("%d\n",IntLocalResult);

    return 0;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int IntLongConsecutive(int *CopyIntArr, int CopyIntArrSize, int CopyIntSearchNum)
{
    /* CREATE VARIABLE TO BE RETURNED FROM THE FUNCTION */
    int IntLocalLongestOccurance = 0, IntLocalMax = 0 , IntLocalCounter = 0;

    for (int i = 0; i < CopyIntArrSize; i++)
    {
        int IntLocalNext = i ; /* CREATE COUNTER STARTS FROM THE NEXT ELEMENT */
        while (CopyIntArr[IntLocalNext++] == CopyIntSearchNum)
        {
            /* WILL BE EXECUTED WHILE WE'VE THE NUMBER WE SEARCH FOR */
            IntLocalCounter++;
        }
        /* COMPARE TO MAX VALUE */
        if (IntLocalCounter > IntLocalMax)
        {
            /* UPDATE THE MAX VALUE AND STORE THE NUMBER WITH MAX OCCURANCE TILL NOW */
            IntLocalMax = IntLocalCounter;
            IntLocalLongestOccurance = CopyIntArr[i];
        }
        /* REINTIALIZE THE COUNTER TO START WITH 0 */
        IntLocalCounter = 0 ;
    }

    /* ADD ONE TO THE COUNTER BECUASE THE FIRST OCCURENCE OF THE ELEMENT WASN'T INCLUDED */
    return IntLocalMax ;
}
