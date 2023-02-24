/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 12 jan 2023                       */
/* Version : V01                               */
/* Describtion : maximum XOR value             */
/***********************************************/

#include <stdio.h>

int main()
{
	/* DEFINE TWO VARIABLES TO TAKE THEM FROM THE USER */
	int Num1 = 0 , Num2 = 0 , Result = 0 ;
	
	/* SCAN THE NUMBERS FROM USER */
	printf("Enter the two numbers\n");
	scanf("%d %d",&Num1 , Num2);
	
	for(int i = Num1 ; i <= Num2 ; i++)
	{
		for(int x = i ; x <= Num2 ; x++)
		{
			Result = (i ^ x) ;
			printf("%d XOR %d = %d\n", i , x , Result);  
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}