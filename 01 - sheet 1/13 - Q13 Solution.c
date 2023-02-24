/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : number of holes               */
/***********************************************/
#include<stdio.h>

int main()
{
	int holes_0[5]={1,2,3,5,7}; /* ARRAY OFNUMBERS WITH 0 HOLES  */
	int holes_1[4]={0,4,6,9};   /* ARRAY OF NUMBERS WITH 1 HOLE  */
	int holes_2[1]={8};         /* ARRAY OF NUMBERS WITH 2 HOLES */
	
	/* DEFINE VARIABLE TO TAKE NUMBER FROM USER , SUM TO HOLD SUM OF HOLES */
	int Num = 0 , Sum = 0 , Reminder = 0;
	
	
	/* TAKE THE NUMBER FROM USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	while(Num > 0)
	{
		Reminder = Num %10; /* SPLIT DIGIT EACH TIME */
		
		/* SEARCH FOR THE NUMBER OF HOLES IN THE SPLITTED DIGIT */
		for(int i = 0 ; i < 5 ; i++)
		{
			if(Reminder == holes_0[i])
			{
				Sum += 0 ;
				break ;
			}
				
			else if(Reminder == holes_1[i])
			{
				Sum += 1 ;
				break ;
			}
			
			else if(Reminder == holes_2[i])
			{
				Sum += 2 ;
				break ;
			}
		}
		
		Num /= 10 ; /* DIVIDE NUMBER BY 10 TO SPLIT ANOTHER DIGIT */
	}
	
	/* DISPLAY THE SUM OF HOLES */
	printf("Sum of holes =  %d holes \n",Sum);
	return 0 ;
}