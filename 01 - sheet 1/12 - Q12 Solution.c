/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : sum even inputs               */
/***********************************************/
#include<stdio.h>
int main()
{
	
	/* DEFINE NUMBER TAKEN FROM USER AND SUM */
	int Num = 0 , Sum = 0 , counter = 0 ;
	
	/* TAKE INPUT FROM USER FIRST TIME */
	printf("Enter even number\n");
	scanf("%d",&Num);
	
	/* CHECK TAKEN NUMBER EVEN OR ODD */
	while((Num%2) == 0 )
	{
		counter++ ;  /* COUNTS ENTERED NUMBERS */
		Sum += Num ; /* CAKCULATE SUM */
		
		/* DISPLAY SUM AND NUMBER OF ADDED NUMBERS */
		printf("Entered %d numbers with sum = %d\n",counter , Sum); 
		
	    printf("Enter even number\n");/* TAKE OTHER NUMBERS */
	    scanf("%d",&Num);
	      
	}
	
	/* IN CASE NUMBER TAKEN FROM USER IS ODD */
	printf("bye\n");
	
	return 0 ;
}