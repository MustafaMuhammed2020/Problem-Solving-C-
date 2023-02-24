/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : counter of ones               */
/***********************************************/
#include <stdio.h>

int main()
{
	/* DEFINE A 32-BIT VARIABLE */
	unsigned long int Num = 0 , counter = 0 ;
	
	/* SCAN THE NUMBER FROM THE USER */
	printf("Enter the decimel number\n");
	scanf("%d",&Num);
	
	do{
		if(Num%2)      /* COUNTER WILL INCREMENT ONLY IF NUM%2 == 1 */
			counter++;
		
		Num /= 2 ;     /* DIVIDE NUMBER OVER 2 */
	}while(Num > 0);   /* DO UNTILL THE NUMBER ENDED */
	
	printf("Number of ones = %d",counter);
	
	return 0 ;
}