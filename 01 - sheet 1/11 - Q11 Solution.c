/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : sum of number digits          */
/***********************************************/
#include<stdio.h>

int main()
{
	/* DEFINE VARIABLE TO TAKE NUMBER FROM USER */
	int Num = 0 , counter = 0 , Sum = 0 ;
	
	
	/* SCAN THE NUMBER FROM USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	while(Num > 0)
	{
		counter++;         /* DIGITS COUNTER */
		Sum += (Num % 10); /* SPLIT A DIGIT AT EACH TIME AND ADD IT TO PREVIOUS DIGIT */
		Num = Num / 10 ;   /* DIVIDE THE ORIGINAL NUMBER BY 10 TO SPLIT ANOTHER DIGIT */
	}
	
	/* DISPLAY THE NUMBER OF DIGITS AND THEIR SUM */
	printf("Entered number consists of %d digits with sum = %d\n",counter,Sum);
	
	
	
	
	
	
	
	
	return 0 ;
}