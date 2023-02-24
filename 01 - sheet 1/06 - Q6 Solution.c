/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : binary representation         */
/***********************************************/
#include <stdio.h>

/* FUNCTION TO RETURN THE POWER */
int power(int Base , int Power)
{
    int Result = 1 ;
    
    if(Power == 0)          /* ANY NUMBER POWER TO 0 IS 1 */
		Result = 1 ;
	
	else if(Power >= 1)
	{
		for(int i = 0 ; i < Power ; i++)
	{
		Result *= Base ;  /* NUM1 ADDED TO ITSELF BY NUM2 TIMES */
	}
		
	}
	
	return Result ;
}


/* FUNCTION IMPLEMENTATION THAT TAKES ARRAY OF BITS AND RETURN THE DECIMEL VALUE */ 
/* THE PASSED ARRAY WILL BE 8 ELEMENTS( 1 BYTE ) ACCORDING TO THE PROBLEM        */
unsigned char Return_Decimel(unsigned char *Bin_ARR )
{
	/* VARIABLE TO HOLD THE RETURN VALUE */ 
	unsigned char Decimel ;
	
	for(int i = 0 ; i < 8 ; i++)
	{
		if(Bin_ARR[i] == 1)
			Decimel += power(2,i);
	}
	
	return Decimel ;
}	


int main()
{
	/* DEFINE A VARIABLE TO HOLD THE DECIMEL NUMBER */
	unsigned int Num = 0 ;
	signed char Digits_Arr[8], Decimel = 0 , Digit = 0 ,counter = -1 ;

	
    /* SCAN THE NUMBER FROM USER */
	printf("Enter the number\n");
	scanf("%d",&Num);
	
	printf("The reverse number is \n");
	
	while(counter < 8)
	{
		counter++;
		
		Digit = Num % 2 ;
		
	    Digits_Arr[counter] = Digit ;
		
		printf("%d\n",Digit);
		
		Num /= 2 ;
	}
	
	Decimel = Return_Decimel(Digits_Arr);
	
	printf("\nThe decimel value is %d \n",Decimel);

	
		
	return 0 ;
}