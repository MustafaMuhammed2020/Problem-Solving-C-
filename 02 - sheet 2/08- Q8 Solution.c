/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 12 jan 2023                       */
/* Version : V01                               */
/* Describtion : bit math                      */
/***********************************************/
#include <stdio.h>

/* MACROS TO IMPROVE READABILITY */
#define Set_bit       1
#define Clear_bit     2
#define Toggle_bit    3
#define Get_bit       4


int main()
{
	/* DEFINE NUMBER TO BE TAKEN FROM USER */
	unsigned int Num = 0 ;
    unsigned int Action = 0 , Bit_Num = 0 ;
	
	/* SCAN THE NUMBER AND BIT NUMBER AND ACTION */
	printf("Enter The Number Followed By The Bit Number \n");
	scanf("%d %d",&Num , &Bit_Num);
	
	printf("Choose An Action\n 1- Set Bit\n 2- Clear bit\n 3- Toggle Bit\n 4- Get bit\n");
	scanf("%d",&Action);
	
	switch(Action)
	{
		case Set_bit    : Num |= (1 << Bit_Num);        
		break ;
        
		case Clear_bit  : Num &= (~(1 << Bit_Num));     
		break ;		
		
		case Toggle_bit : Num ^= (1 << Bit_Num);           
		break ;
		
		case Get_bit    : Num = ((Num >> Bit_Num) & 0x01) ;  
		break ;
		
		default         : printf("Not Valid Choice\n"); 
		break ;
		
	}
		
	printf("%d\n", Num);
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}