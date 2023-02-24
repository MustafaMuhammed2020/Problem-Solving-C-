/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : binary representation         */
/***********************************************/
#include<stdio.h>

int main()
{
	/*DEFINE VARIABLE TO TAKE NUMBER FROM USER */
	int Num = 0 , Reminder = 0 ;
	
	/* SCAN NUMBER FROM THE USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	/* PRINT A MESSAGE BEFORE THE RESULT */
	printf("The decimel representation is\n");
	
	while(Num != 0 )
	{
		/* REMINDER WILL BE EITHER 1 OR 0 */
		printf("%d",(Num%2)); /* DISPLAY THE REMINDER */
		Num /= 2 ;
	}
	
	
	
	
	
	return 0 ;
}