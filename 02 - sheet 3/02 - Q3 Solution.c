/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 19 jan 2023                       */
/* Version : V01                               */
/* Describtion : power of 3                    */
/***********************************************/
#include<stdio.h>

/* FUNCTION PROTOTYPE / DECLARATION */
int IsPowerInt(int Copy_IntNum);

int main()
{
	/* DEFINE A NUMBER TO BE TAKEN FROM USER */
	int Num = 0 ;
	
	/* SCAN THE NUMBER FROM USER */
	printf("Enter the number\n");
	scanf("%d",&Num);

	if(IsPowerInt(Num)) /* WILL HAPPEN ONLY IF THE FUNCTION RETURNED 1 (TRUE) */
	printf("%d is power of 3\n",Num);
	
    else /* WILL HAPPEN WHEN THE FUNCTION RETURNS 0 (FALSE) */
	printf("%d isn't power of 3\n",Num);
	

	return 0 ;
}


/* FUNCTION DEFINITION / IMPLEMENTATION */
int IsPowerInt(int Copy_IntNum)
{
	/* TWO VARIABLES TO HOLD THE RETURNED DATA AND THE POWER RESULT */
	int Local_IntResult = 0 , Local_IntPower = 1;
	
	for(int x = 1 ; x < Copy_IntNum ; x++)
	{
		/* CALCULATING POWER OF BASE 3 */
		Local_IntPower *= 3 ; 
		
		/* CHECK IF THE NUMBER REACHED OR NOT */
		if(Local_IntPower == Copy_IntNum)
		{
			Local_IntResult = 1 ; /* CHANGE THE STATUS FROM 0 TO 1 
			                         OTERWISE KEEP STATUS AS 0     */
			break ; /* TERMINATE THE LOOP NO NEED TO CONTINUE */
		}
	}
		
	return Local_IntResult ; /* RETURN THE RESULT */
}


