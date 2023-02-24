/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 11 jan 2023                       */
/* Version : V01                               */
/* Describtion : upper/lower  case             */
/***********************************************/
#include<stdio.h>

/* TWO MACROS USED IN SWITCH CASE */
#define ODD     1
#define EVEN    0

int main()
{
	/* DEFINE CHAR VARIABLE TO HOLD THE CHARACTER */
	char Character ;
	int Num = 0 ;
	
	/* TAKE CHARACTER AND NUMBER FROM THE USER */
	printf("Enter a number followed by character\n");
	scanf("%d %c",&Num , &Character);
	
	switch((Num % 2))
	{
		case ODD  :
        if(Character >= 65 && Character <= 90)
        printf("%c\n",Character + 32);

        else if(Character >= 97 && Character <= 112)
        printf("%c\n",Character - 32);			
		break ;
		
		case EVEN : 
		printf("%c\n",Character) ;   
		break ;
		
		default   : 
		printf("Not Valid Num\n"); 
		break ;
 		
	}
	
return 0 ;
}
