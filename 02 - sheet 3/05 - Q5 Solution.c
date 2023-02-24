/*********************************************************/
/* Author   : Mustafa mohammed Abdou                     */
/* Date     : 4 Feb,2023                                 */
/* Version  : V01                                        */
/* Hint     : function returns the most repeated element */
/*********************************************************/

#include <stdio.h>

/* FUNCTION PROTOTYPE */
/* FUNCTION TAKES AN ARRAY AND RETURNS THE MOST REPEATED ELEMENT */
int IntMostRepeated(int * CopyIntArray);

int main(int argc, char const *argv[])
{
    /* CREATE ARRAY TO TEST */
    int IntLocalArr[5] = {1,1,4,2,2};

    int IntLocalMost = IntMostRepeated(IntLocalArr);

    printf("%d\n",IntLocalMost);

    return 0;
}


/* FUNCTION IMPLEMENTATION / DEFINITION */
int IntMostRepeated(int * CopyIntArray)
{
    /* DEFINE TWO LOCAL VARIABLES ONE TO BE RETEARNED AND THE OTHER ONE
       TO COUNT EACH ELEMENT OCCURANCE                                   */
    int IntLocalMostRepeated = 0 , IntLocalElementCounter = 0 ;

    for(int x = 0 ; x < 5 ; x++)
    {
        /* COMARE EACH ELEMENT TO THE REAT OF ELEMENTS */
        for(int z = x + 1 ; z < 5 ; z++)
        {
            /* ELEMENT COUNTER WILL INCREASED BY ONE WHEN MATCHING */
            if(CopyIntArray[z] == CopyIntArray[x])
            {
                IntLocalElementCounter++;
            }
        }
        /* THE ELEMENT WITH MAX OCCURANCE COUNTER WILL BE RETURNED FROM THE FUNCTION */
        if(IntLocalElementCounter >= IntLocalMostRepeated)
        {
            IntLocalMostRepeated = CopyIntArray[x];
        }
        
        /* REENTIALIZE THE ELEMENT COUNTER AS 0 */
        IntLocalElementCounter = 0 ;
       
    }

    return IntLocalMostRepeated ; /* RETURN THE ELEMENT */
}