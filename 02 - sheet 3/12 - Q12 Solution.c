/****************************************************/
/* Author  : Mustafa Muhammed Abdou                 */
/* Date    : 14 Feb,2023                            */
/* Version : V01                                    */
/* Hint : swap the 3 elements after two zeros       */
/****************************************************/
#include <stdio.h>

/* FUNTION THAT SWAPS TWO ELEMENTS */
/* NUMBERS MUST BE PASSED BY REFRENCE TO KEEP THEIR VALUES AFTER THE FUNCTION ENDS */
void VoidSwap(int *CopyIntNum1 , int *CopyIntNum2)
{
  *CopyIntNum1 = *CopyIntNum1 + *CopyIntNum2 ; /* SUMOF THE TWO NUMBERS */
  *CopyIntNum2 = *CopyIntNum1 - *CopyIntNum2 ; /* FIRST SWAP STEP       */
  *CopyIntNum1 = *CopyIntNum1 - *CopyIntNum2 ; /* SECOND SWAP STEP      */
}

/* FUNCTION PROTOTYPE / DECLERATION             */
/* THE FUNCTION TAKES AN ARRAY AND RETURNS VOID */
void VoidSwapElements(int *CopyIntArray);

int main()
{
  /* CREAT AN ARRAY FOR TESTING */
  int LocalIntArr[] = {1,2,3,4,0,10,20,30,2,1,3,0,100,200,300,11};
  int LocalIntArrSize = sizeof(LocalIntArr) / sizeof(LocalIntArr[0]) ;  /* CALCULATE ARRAY SIZE */
  
  /* CALL THE SWAPPING FUNCTION */
  VoidSwapElements( LocalIntArr );
  
  /* DISPLAY ARRAY ELEENTS AFTER SWAPPING CALLED */
  for( int z = 0 ; z < LocalIntArrSize ; z++ )
   {
     printf("%d\t" , LocalIntArr[z] );
   }


 return 0 ;
}

/* FUNCTION DEFINITION / IMLEMENTATION */
void VoidSwapElements(int *CopyIntArray)
{
  /* TWO LOCAL VARIABLES TO HOLD THE POSITIONS OF ZEROS AND COUNTER OF ZEROS */
  int LocalIntFirstZeroIndex = 0 , LocalIntSecondZeroIndex , LcalIntZerosCounter = 0 , LocalIntInterationCounter = 0;
  
  /* THIS WHILE LOOP WILL BE ENDED WHEN WE GET THE SECOND ZERO */
  while( LcalIntZerosCounter < 2 )
   { 
     /* BECOMES TRUE WHEN WE GET A ZERO ELEMENT */
     if( CopyIntArray[LocalIntInterationCounter] == 0 )
       {
         LcalIntZerosCounter++ ; /* INCREASE THE ZEROS COUNTER */

         if( LcalIntZerosCounter == 1 ) /* CASE OF THE FIRST ZERO */
           {
              LocalIntFirstZeroIndex = LocalIntInterationCounter ;
           }
         else if( LcalIntZerosCounter == 2 ) /* CASE OF SECOND ZERO */
           {
             LocalIntSecondZeroIndex = LocalIntInterationCounter ;
           }
       }

     LocalIntInterationCounter++ ; /* INCREASE THE COUNTER TO CHECK THE NEXT ARRAY ELEMENT */
   }

/* SWAP THE 3 ELEMENTS AFTER ZEROS */
/* DON'T FORGET TO PASS NUMBERS BY REFRENCE */
VoidSwap( &CopyIntArray[LocalIntFirstZeroIndex + 1] , &CopyIntArray[LocalIntSecondZeroIndex + 1] ) ; 
VoidSwap( &CopyIntArray[LocalIntFirstZeroIndex + 2] , &CopyIntArray[LocalIntSecondZeroIndex + 2] ) ; 
VoidSwap( &CopyIntArray[LocalIntFirstZeroIndex + 3] , &CopyIntArray[LocalIntSecondZeroIndex + 3] ) ; 

}