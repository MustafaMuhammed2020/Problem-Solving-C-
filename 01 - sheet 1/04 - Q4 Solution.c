/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : Multiply numbers without (*)  */
/***********************************************/
#include<stdio.h>

int main()
{
	/* DEFINE THE TWO NUMBERS , RESULT */
	int Num1 = 0 , Num2 = 0 , Result = 0;
	
	/* TAKE THE TWO NUMBERS FROM USER */
	printf("Please enter the two numbers\n");
	
	/* SCAN THE NUMBERS */
	scanf("%d %d",&Num1 , &Num2);
	
	/* MULTIPLICATION */
	for(int i = 0 ; i < Num2 ; i++)
	{
		Result += Num1 ;  /* NUM1 ADDED TO ITSELF BY NUM2 TIMES */
	}
	
	printf("%d * %d = %d\n",Num1 , Num2 , Result);
	
	
	return 0 ;
}