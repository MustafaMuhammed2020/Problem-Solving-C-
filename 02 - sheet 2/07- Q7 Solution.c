/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : from 1 to n sum               */
/***********************************************/
#include <stdio.h>

int main()
{
	/* DEFINE VARIABLE TO HOLD NUMBER FROM USER */
	unsigned int Num = 0 ; 
	float Sum = 0 ;
	
	/* SCAN THE NUMBER FROM USER */
	printf("Enter The Number\n");
	scanf("%d",&Num); 
	
	/* SUM EQUATION */
	/* ALSO (Num * (Num +1) / 2 */ 
	Sum = (Num * (Num-1) / 2) + Num  ;
	
	/* PRINT THE SUM FROM 1 TO NUM */
	printf("The Sum From 1 to %d = %f\n", Num , Sum);
	
	
	
	return 0 ;
}
