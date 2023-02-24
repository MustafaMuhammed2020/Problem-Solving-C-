/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : This code calculate sum of    */
/* numbers taken from user                     */
/***********************************************/
#include<stdio.h>

int main()
{
	/* NUM1 & NUM2 ARE START AND END OF LOOP , i FOR ITERATIONS */
	unsigned char num1 = 0 , num2 = 0 , i = 0 ;
	
	/* SUM TO STORE RESULT  */
    unsigned short int sum = 0 ; 
	
	/* ASK USER TO ENTER THE TWO NUMBERS */
	printf("Please enter num1 and num2\n");
	
	/* TAKE NUMBERS FROM USER IN ONE LINE */ 
	scanf("%d %d",&num1 , &num2);
	
	/* IN CASE NUM1 < NUM2 */
	if(num1 < num2)
	{
		/* FOR LOOP TO INCLUDE NUMBERS BETWEEN THEM */
	    for(i = num1 ; i <= num2 ; i++)
	    {
		   sum += i ; 
	    }
	}
	
	/* IN CASE NUM1 > NUM2 */
	else if(num1 > num2)
	{
		for(i = num2 ; i <= num1 ; i++)
		{
			sum += i ;
           			
		}
	}
	

	/* DISPLAY THE RESULT */
	printf("The sum from %d and %d is %d",num1,num2,sum);
	
	
	return 0 ;
}