/*********************************************************/
/* Author   : Mustafa mohammed Abdou                     */
/* Date     : 4 Feb,2023                                 */
/* Version  : V01                                        */
/* Hint     : reverse array elements                     */
/*********************************************************/
#include <stdio.h>
#include<stdlib.h>

/* FUNCTION PROTOTYPE */
/* THE FUNCTION TAKES AN ARRAY AND RETURNS IT REVERSED */
int * IntReverseArray(int * CopyIntArray, int CopyIntArraySize);

int main(int argc, char const *argv[])
{
	int x[5] = {1,2,3,4,5}; /* CREATE ARRAY FOR TEST */

	int IntArrSize = 0 , * y ; /* ANOTHER ARRAY AND VARIABLE TO HOLD THE SIZE THAT WILL BE PASSED TO 
	                              THE FUNCTION                       */
	
	/* CALCULATE THE SIZE USING SIZEOF OPERATOR */
	IntArrSize = sizeof(x)/sizeof(x[0]);
	
	y = IntReverseArray(x , IntArrSize); /* FUNCTION CALL */

    /* PRINT RETURNED ARRAY ELEMENTS */
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t",y[i]);
	}


	return 0;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int * IntReverseArray(int * CopyIntArray, int CopyIntArraySize)
{
	int * IntLocalArr = (int *)malloc(sizeof(int) * CopyIntArraySize) ;

	for (int i = 0; i < CopyIntArraySize ; i++)
	{
		int IntLocalNewIndex = (CopyIntArraySize - 1) - i ;
		IntLocalArr[i] = CopyIntArray[IntLocalNewIndex];
	}

	return IntLocalArr ;

}