/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : factorial of number           */
/***********************************************/
#include<stdio.h>

int main()
{
	
	/* DEFINE THE NUMBER AND RESULT */
	int Num = 0 , Fact = 1 ;
	
	/* TAKE THE NUMBER FROM THE USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	/* FOR LOOP TO INCLUDE NUMBERS FROM 1 TO Num */
	for(int i = 1 ; i <= Num ; i++)
	{
		Fact *= i ;  /* MATHEMATICAL EQUATION OF FACTORIAL */
	}
	
	/* DISPLAY THE RESULTS */
	printf("The factorial of %d is %d\n",Num , Fact);
	
	
	
	return 0 ;
}