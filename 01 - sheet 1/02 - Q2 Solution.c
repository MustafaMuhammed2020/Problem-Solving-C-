/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : Find the max and min within   */
/* numbers                                     */
/***********************************************/
#include<stdio.h>


int main()
{
    /* DECLARE A POINTER THAT WILL BE DYNAMICALLY SIZED AND DEFINE NUMBER OF ELEMENTS  */
    int * Array , No_of_Elements = 0 ;
	
	
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
	}
	 
	 /* ASSUME THAT FIRST ELEMENT IS THE MINIMUM AND SECOND ONE IS THE MAX */
	int min = Array[0] , max = Array[1];
	
	for(int i = 0 ; i < No_of_Elements ; i++)
	{
		if(Array[i] < min)
			min = Array[i];
		
		if(Array[i] > max)
			max = Array[i];
	}
	
	/* DISPLAY MAX AND MIN VALUES */
	printf("The max is %d And the min is %d\n",max,min);
	
	
	return 0 ;
}