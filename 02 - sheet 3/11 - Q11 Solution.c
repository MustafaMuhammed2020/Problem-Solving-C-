/***************************************************/
/* Author   : Mustafa Mohammed Abdou               */
/* Date     : 12 Feb, 2023                         */
/* Version  : V01                                  */
/* Hint     : remove repeated elements in array    */
/***************************************************/
#include<stdio.h>
#include<stdlib.h> /* TO USE malloc()  */

/* FUNCTION PROTOTYPE / DECLERATION */
/* THE FUNCTION TAKES AN ARRAY AND RETURN AN ARRAY */
int * IntRemoveRepeated(int *CopyIntArray , int CopyIntAraySize , int * IntReturnSize );



int main()
{
    /* CREATEARRAY FOR TESTING */
  int Arr[] = {0,1,2,0,1,5,6,5,8,8,3,4};
  int * NewArr , x ; /* ARRAY TO HOLD THE RETURNED ARRAY FROM THE FUNCTION  x IS A VARIABLE TO HOLD THE SIZE OF RETURNED ARRAY */
  
  /* CALCULATE THE SIZE OF ARRAY TO BE PASSED TO THE FUNCTION */
  int Size = sizeof(Arr)/sizeof(Arr[0]);

  /* CALL THE FUNCTION */
  NewArr = IntRemoveRepeated(Arr , Size , &x);
  
  /* PRINT THE ARRAY ELEMENTS */
  for(int y = 0 ; y < x ; y++)
   {
     printf("%d \t", NewArr[y]);
   }

   return 0 ;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int * IntRemoveRepeated(int *CopyIntArray , int CopyIntAraySize , int * IntReturnSize)
{
/* THIS VALUE WILL TAKES THE PLACE OF ANY REMOVED / REPEATED ELEMENT  */
/* AND BECAUSE THE ARRAY IS SORTED SO THIS VALUE WILL BE DISTIGUISHED */
int LocalIntRemoval = CopyIntArray[0] - 1 ;
/* LOCAL COUNTER TO COUNT THE REMOVED ELEMENTS AND COUNTER
   FOR THE NEW ARRAY OF NON REPEATED ELEMENTS               */
int LocalIntCounter = CopyIntAraySize , IntNonRepeatedCounter = 0 ; 
 
/* COMPARE EACH ELEMENT WITH OTHERELEMENTS TO SEE IF THE ELEMENT
   REPEATED OR NOT                                                  */
for(int i = 0 ; i < CopyIntAraySize ; i++)
 {
   for(int x = i+1 ; x < CopyIntAraySize ; x++)
    {
       /* IF REPEATED ELEMENT FOUNT REPLACE IT WITH REMOVAL NON REPEATED
          VALUE */
       if(CopyIntArray[i] == CopyIntArray[x] && CopyIntArray[i] != LocalIntRemoval)
        {
           CopyIntArray[x] = LocalIntRemoval ;
           LocalIntCounter--;  /* DECREASE THE LOCAL COUNTER */
        }
    }
 }            

/* STORE THE SIZE OF NON REPEATED ARRAY */
* IntReturnSize = LocalIntCounter ;

/* DYNAMICALLY CREATE ARRAY FOR NOT REPEATED ELEMENTS 
   THE ARRAY TAKES ITS SIZE AS (PASSED ARRAY SIZE - REPEATED ELEMENTS COUNTER */
int * IntNonRepeated = (int *) malloc(LocalIntCounter * sizeof(int));

/* STORE THE NON REPEATED ELEMENTS IN THE PRE DEFINED ARRAY */
for(int n = 0 ; n < CopyIntAraySize; n++)
{ 
    /* IF THE REMOVAL VALUE DETECTED DON'T INVOLVE IT */
  if(CopyIntArray[n] != LocalIntRemoval)
   {
     IntNonRepeated[IntNonRepeatedCounter++] = CopyIntArray[n] ;
   }
}

return IntNonRepeated ; /* RETURN THE ARRAY */
}