/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : binary representation         */
/***********************************************/
#include <stdio.h>

int main()
{
	/* DEFINE VARIABLE TO TAKE THE DECIMEL VALUE */
	unsigned long int Decimel = 0 ;
	unsigned char Digits[32] ;   /*            HOLD THE BINARY REPRESENTATION            */
	                             /* 32 BECASE THE DECIMEL IS LONG INT(4 BYTES --> 32 BIT)*/
									 
	char Digit = 0  , counter = -1;  /* Digit WILL BE EITHER 0 OR 1 */

    /* SCAN THE NUMBER FROM USER */	
	printf("Enter the number\n");
	scanf("%d",&Decimel);
	
	while(Decimel > 0)
	{
		counter++;                /* STARTS FROM 0 ,USED FOR ARRAY INDEX */
		Digit = Decimel % 2 ;     /* EITHER 0 OR 1                       */
		Digits[counter] = Digit ; /* STORE THE VALUE IN ARRAY            */
		Decimel /= 2 ;            /* DIVIDE DECIMEL NUMBER BY 2          */
	}
	
	/* PRINTING BINARY BR REVERSE */
	for(int z = counter ; z >= 0 ; z--)
	{
		printf("%d",Digits[z]);
	}
	
	
	
	return 0 ;
}