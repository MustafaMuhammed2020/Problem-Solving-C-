/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : decimel representation        */
/***********************************************/
#include <stdio.h>

/* FUNCTION TO RETURN THE POWER */
int power(int Base , int Power)
{
	unsigned int Value = 1 ;
	
	for(int z = 0 ; z < Power ; z++)
	{
		Value *= Base ; /* BASE MULTIPLIED TO ITSELF POWER TIMES */
	}
	
	return Value ;  /* RETURN RESULT */
	
}

int main()
{
	/* DEFINE A VARIABLE FOR THE NUMBER */
	unsigned long int Binary_Num = 0 , Decimel = 0;
	
	signed char counter = -1; /* COUNTER FOR ORDER OF BITS */
	
	/* SCAN THE NUMBER FROM USER */
	printf("Enter the 8-bit binary number\n");
	scanf("%d",&Binary_Num);
	
	do{
	    counter++; /* START FROM BIT 0 */
	    
	    if(Binary_Num%10)      /* BECOME TRUE ONLY WHEN THE BIT IS 1 */
	    Decimel += power(2,counter);
	    
	    Binary_Num /= 10 ;   /* DIVIDE nUMBER BY 10 TO GET ANOTHER BIT */   
	    
	}while(Binary_Num > 0);
	
	printf("Decimel value = %d\n",Decimel); /* DISPLAY THE DECIMEL VALUE */
	
	return 0 ;
}