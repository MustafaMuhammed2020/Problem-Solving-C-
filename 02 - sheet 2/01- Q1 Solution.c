/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 10 jan 2023                       */
/* Version : V01                               */
/* Describtion : number of holes               */
/***********************************************/
#include<stdio.h>

#define PI  3.14
int main()
{
	/* DEFINE VARIABLE TO TAKE RADUIS FRO USER */
	float Raduis = 0 , Area = 0 , Circumference = 0;
	
	/*TAKE RADUIS FROM THE USER */
	printf("Enter the raduis\n");
	scanf("%f",&Raduis);
	
	/* CALCULATING ARES */\
	Area = PI * Raduis * Raduis ;
	
    /* CALCULATING CIRCUMFERENCE */
	Circumference = 2 * PI * Raduis ;
	
	printf("The Area = %.4f\n",Area);  /* DISPLAY UP TO 4 NUMBERS AFTER THE DECIMEL POINT */
	printf("The Circumference = %.3f\n",Circumference);/* DISPLAY UP TO 3 NUMBERS AFTER THE DECIMEL POINT */
	
	
	
	return 0 ;
}