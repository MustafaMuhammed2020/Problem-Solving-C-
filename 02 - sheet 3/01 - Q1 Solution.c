/****************************************************/
/* AUTHOR      : MUSTAFA MUHAMMED                   */
/* DATE        : 17 JAN 2023                        */
/* VERSION     : V01                                */
/* DESCRIBTION : ELEMENT OCCURANCE                  */
/****************************************************/

#include<stdio.h>

/* FUNCTION PROTOTYPE / FUNCTION DECLERATION */
int Is_Exist(int * Copy_IntArr , int Copy_IntNum );



int main()
{
	/* DEFINE ARRAY WITH ABSTRACT ELEMENTS */
	int Array[5] = {1,2,3,4,5} , Num = 0 , Index = 0;
	
	/* TAKE NUMBER FROM USER TO SEARCH FOR IT */
	printf("Enter a number\n");
	scanf("%d",&Num);
	
    Index = Is_Exist(Array,Num);
	
	printf("%d Exists in index %d\n",Num,Index);
	
	return 0 ;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int Is_Exist(int * Copy_IntArr , int Copy_IntNum )
{
	/* CALCULATING THE PASSED ARRAY LENGTH */
	int Local_ArrLength = 0 , Local_Inedx = -1 ;
	
	/* CALCULATING THE LENGTH OF ARRAY */
	Local_ArrLength = *( &Copy_IntArr + 1) - Copy_IntArr ;
	
	/* LOOP OVER ARRAY ELEMENTS TO SEE IF THE ELEMENT EXISTS */
	for(int i = 0 ; i <= Local_ArrLength ; i++)
	{
		if(Copy_IntArr[i] ==  Copy_IntNum)
		{
			Local_Inedx = i ;  /* THE INDEX OF THE ELEMENT */
			break ;
		}

	}
	
	return Local_Inedx ; /* RETURN THE INDEX */
}



