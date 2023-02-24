/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : Reminder without (%)          */
/***********************************************/
#include<stdio.h>

int main()
{
	/* DEFINE THE TWO NUMBERS , REMINDER */
	int Num1 = 0 , Num2 = 0 , Reminder = 0;
	
	/* TAKE THE TWO NUMBERS FROM USER */
	printf("Please enter the two numbers\n");
	
	/* SCAN THE NUMBERS */
	scanf("%d %d",&Num1 , &Num2);
	
	/* REMINDER EQUATION   */
	for(int i = 0 ; i < Num2 ; i++)
	{
		Reminder = Num1 - (((int) Num1/Num2))*Num2 ;  /* REMINDER EQUATION */
		
	}
	
	printf("The reminder is %d\n", Reminder);
	
	
	return 0 ;
}