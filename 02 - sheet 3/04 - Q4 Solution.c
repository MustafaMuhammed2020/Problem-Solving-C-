/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 19 jan 2023                       */
/* Version : V01                               */
/* Describtion : numbers between intervals     */
/***********************************************/
#include<stdio.h>
#include<stdlib.h>

/* PROTOTYPE OF FUNCTION TAKES TWO NUMBERS AND RETURN 
   NUMBERS BETWEEN THEM AND THE SIZE OF RETURNED ARRAY        */
int * ReturnArrayInt(int CopyIntNum1 , int CopyIntNum2 ,int *CopyIntSize);

int main()
{
    /* CREATE VARIABLES FOR THE TWO NUMBERS AND ARRAY TO STORE THE RETURN VALUE 
       AND SIZE TO HOLD THE RETURNED SIZE FROM THE FUNCTION                     */
    int Num1 = 0 , Num2 = 0 , *Array , size = 0;
    
    /* SCAN NUM1 && NUM2 FROM THE USER */
   printf("Enter Num1 \n");
   scanf("%d",&Num1);
    
   printf("Enter Num2 \n");
   scanf("%d",&Num2);
    
    /* STORE THE RETURNED ARRAY FROM THE FUNCTION */
    Array = ReturnArrayInt(Num1 , Num2 , &size);
    
    /* PRINT THE ARRAY ELEMENTS */
    for(int x = 0 ; x < size ; x++)
    {
        /* EACH ELEMENT SEPARATED WITH SPACE \t */
        printf("%d\t",Array[x]);
        
    }

    return 0 ; /* END OF EXECUTION */
}

/* FUNCTION DEFINITION / IMPLEMENTATION */
int *  ReturnArrayInt(int CopyIntNum1 , int CopyIntNum2 ,int *CopyIntSize)
{
    int x = 0 ; /* AS COUNTER TO THE ARRAY RESULT */

    *CopyIntSize = ((CopyIntNum1 - CopyIntNum2) + 1); /* DEFINE THE SIZE OF ELEMENTS */

    int * LocalResult = (int *) malloc(sizeof(int) * (*CopyIntSize)); /* DYNAMICALLY ALLOCATE THE ELEMENTS */
    
    for(int i = CopyIntNum1 ; i >= CopyIntNum2 ; i--)
    {
        /* STORE ELEMENTS FROM NUM1(GREATER) TO NUM2(SMALLER) */
        LocalResult[x] = i;
        x++;
    }
    
    return LocalResult; /* RETURN RESULT ARRAY */
}