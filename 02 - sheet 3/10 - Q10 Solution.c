/****************************************************************/
/* Author   : Mustafa Muhammed Abdou                            */
/* Date     : 4 Feb,2023                                        */
/* Version  : V01                                               */
/* Hint     : Merge two arraies into one                        */
/****************************************************************/
#include<stdio.h>
#include<stdlib.h> /* TO USE THE DYNAMIC ALLOCATION malloc() */

/* FUNCTION PROTOTYPE / DECLERATION                              */
/* FUNCTION TAKES TWO ARRAYIES AND THEIR SIZE AND RETURNS ONE    */
/* ARRAY MERING THEM                                             */
int * IntMerge(int * CopyIntArr1 , int * CopyIntArr2 , int CopyIntSize);

int main()
{
    /* CREATE TWO ARRAIES FOR TESTING */
    int IntLocalArrar1[5]={1,2,3,4,5};
    int IntLocalArray2[5]={10,20,30,40,50};
    
    /* ARRAY TOHOLD THE RETURN FROM THE FUNCTION */
    int * IntLocalMergedArr ;
    
    /* CALCULATE THE SIZE OF MERGED ARRAY */
    int IntLocalMergedArrSize = (sizeof(IntLocalArrar1)/sizeof(IntLocalArrar1[0]) * 2);
    
    /* CALL MERGING FUNCTION */
    IntLocalMergedArr = IntMerge(IntLocalArrar1 , IntLocalArray2 , 5);
    
    /* PRINT THE MERGEF ARRAY */
    for (int i = 0; i < IntLocalMergedArrSize ; i++)
    {
        printf("%d\t",IntLocalMergedArr[i]);
    }
    
    return 0 ;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int * IntMerge(int * CopyIntArr1 , int * CopyIntArr2 , int CopyIntSize)
{
    /* DYNAMICALLY CREATE AN ARRAY */
    int * IntLocalMegedArr = (int *)malloc((2*CopyIntSize)*sizeof(int));
    int OddCounter = 0 , EvenCounter = 0 ; /* COUNTERS WILL BE USED */

    /******************************************************************/
    /* THE MAIN TRICK IS THAT ELEMENTS OF ARRAY2 WILL APPEAR IN       */
    /* EVEN INDEX IN THE NEW ARRAY (0,2,4,6,8,10)                     */
    /* AND ELEMENTS OF THE FIRST  ARRAY WILL APPEAR IN THE ODD        */
    /* INDEX IN THE NEW MERGED ARRAY (1,3,5,7,9)                      */
    /* SO WE NEED TWO COUNTERS EACH INCREASED IN THE INVERSE SIDE     */
    /* TO ASSIGN THE ELEMENTS PROBERLY                                */
    /* ALSO THE SIZE OF MERGING ARRAY WILL DOUBLE TO EACH ARRAY SIZE  */
    /******************************************************************/
    for(int i = 0; i < (2*CopyIntSize) ; i++)
    {
        if((i % 2) == 0) /* EVEN INDEX */
        {
            IntLocalMegedArr[i] = CopyIntArr1[i - EvenCounter]; /* EVALUATE THE ELEMENT FROM ARR1*/
            OddCounter++; /* ODD COUNTER INCREASED IN EVEN INDEX */

        }
        
        else if((i % 2) == 1) /* ODD INDEX */
        {
            IntLocalMegedArr[i] = CopyIntArr2[i - OddCounter]; /* EVALUATE ELEMENT FROM ARR2*/
            EvenCounter++;         /* EVEN COUNTER INCREASED IN ODD INDEX */
        }
    }

    /* RETURN THE POINTER ( ARRAY )*/
    return IntLocalMegedArr ;

}