/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : check number is prime or not  */
/***********************************************/
#include<stdio.h>

int main()
{
	
	/* DEFINE VARIABLE FOR THE NUMBER */
	int Num = 0 , Notprime = 0 ;
	
	/* SCAN NUMBER FROM THE USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	for(int i = 1 ; i < Num ; i++)
	{
		/* PRIME NUMBER ACCEPTS DEVISION BY 1 AND ITSELF ONLY */
		if((Num % i) == 0 )
		{
			Notprime = 1 ;
			break;
		}
		
	}
	
	/* IN CASE THE NUMBER IS NOT PRIME */
	if(Notprime)
		printf("%d is not prime\n",Num);
	
	/* IN CASE THE NUMBER IS PRIME */
	else if(!Notprime)
		printf("%d is prime\n",Num);
	
	return 0 ;
}