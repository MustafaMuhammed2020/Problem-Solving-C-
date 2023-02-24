/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : check square                  */
/***********************************************/
#include<stdio.h>

int main()
{
	/* DEFINE A VARIABLE TO HOLD THE NUMBER */
	unsigned int Num = 0 , Iterations = 0 , square = 0;
	
	/* TAKE THE NUMBER FROM USER */
	printf("Enter the number\n");
	
	scanf("%d",&Num);
	
	Iterations = Num / 2 ; /* DEVIDE THE NUMBER TO DECREASE ITERATIONS */
	
	for(int i = 1 ; i <= Iterations ; i++)
	{
		/* NUMBER IS PERFECT SQUARE WHEN NUMBER MULTIPLIED TO ITSELF AND 
		   THE RESULT IS THE NUMBER WE HAVE   */
		if((i * i) == Num)
		{
			square = i ;
			break;
		}
		
	}
	
	/* IN CASE NUMBER HAS SQUARE ROOT */
	if(square)
		printf("%d is perfect square and its square root is %d\n",Num,square);
		
	/* IN CASE NUMBER HAS NO SQUARE ROOT */
	else if(!square)
		printf("%d is not perfect square\n",Num);
	
	return 0 ;
}