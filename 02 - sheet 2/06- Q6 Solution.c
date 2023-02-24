/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : reversed decimel              */
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


/* FUNCTION IMPLEMENTATION THAT TAKES ARRAY OF BITS AND RETURN THE DECIMEL VALUE */
/* THE PASSED ARRAY WILL BE 8 ELEMENTS( 1 BYTE ) ACCORDING TO THE PROBLEM        */
unsigned char Return_Decimel(unsigned char *Bin_ARR )
{
	/* VARIABLE TO HOLD THE RETURN VALUE */
	unsigned char Decimel = 0 ;
	
	for(int i = 0 ; i < 8 ; i++)
	{
		if(Bin_ARR[i] == 1)
			Decimel += power(2,i);  /* 2 RAISED TO POWER OF POSITION */
		else
			continue ;
	}
	
	return Decimel ;  /* RETURN THE DECIMEL VALUE */
}	


int main()
{
	/* DEFINE A VARIABLE TO HOLD THE DECIMEL NUMBER */
	unsigned char Num = 0 , Digits[8]; /* 8 BITS DIGITAL ARRAY */
	
    char counter = 0 , Digit = 0 ;
	
    /* SCAN THE NUMBER FROM USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	while(counter < 8 ) /* ITERATION UNTILL THE ARRAY FILLED */
	{
		Digit = Num % 2 ; /* DIGIT WILL BE EITHER 1 OR 0 */
		Digits[7-counter++] = Digit ; /* ASSIGN VALUES TO THE ARRAY BY REVERSE */
		Num /= 2 ; /* DIVIDE NUM BY 2 */
	}
		
	/* DISPLAY THE REVESED DECIMEL VALUE */ 
	printf("The revesed decimel is %d\n",Return_Decimel(Digits));
   
		
	return 0 ;
}