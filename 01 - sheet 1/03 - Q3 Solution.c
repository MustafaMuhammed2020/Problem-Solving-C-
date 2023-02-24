/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : Calculate the sum of          */
/* numbers taken from the user                 */
/***********************************************/
#include<stdio.h>


int main()
{
    /* DECLARE A POINTER THAT WILL BE DYNAMICALLY SIZED AND DEFINE NUMBER OF ELEMENTS  */
    int * Array , No_of_Elements = 0 ;
	
	/* VARIABLE TO HOLD SUM OF THE ELEMENTS */
	int Sum = 0 ; 
	
	/* TAKE THE SIZE OF ARRAY AS PARAMETER FROM THE USER */
	printf("Enter the number of elements\n");
	
	/* STORE THE ARRAY SIZE */
	scanf("%d", &No_of_Elements);
	
	/* CREATE DYNAMIC ALLOCATION OF THE ARRAY */
	Array = (int *)malloc(sizeof(int) * No_of_Elements);
	
	/* SCAN ELEMENTS FROM THE USER */
	for(int i = 0 ; i < No_of_Elements ; i++)
	{
		printf("Enter The element Number %d\n",i+1);
		scanf("%d",&Array[i]);
		
		/* ADD EACH NUMBER TO THE PREVIOUS ONE */
		Sum += Array[i]; 
	}
	 
	/* DISPLAY THE RESULT */
	printf("The sum is %d\n",Sum);
	
	
	return 0 ;
}