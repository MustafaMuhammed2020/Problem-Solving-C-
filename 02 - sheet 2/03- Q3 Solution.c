/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : reverse decimel number        */
/***********************************************/
#include <stdio.h>

int main()
{
	/* DEFINE VARIABLE TO TAKE NUMBER FROM USER */
	int Num = 0 , Reminder = 0 ;
	
	/* SCAN THE NUMBER FROM USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	do{
		
		Reminder = (Num % 10);  /* SPLIT THE LAST DIGIT */
        printf("%d",Reminder);  /* PRINT THE SPLITTED DIGIT */
        Num /= 10 ;		        /* DIVIDE NUMBER OVER 10 TO THROW THE PREVIOUS PRINTTED DIGIT */
		
	}while(Num > 0);  /* DO UNTILL THE NUMBER ENDED */
	
	
	
	
	
	
	
	
	return 0 ;
}