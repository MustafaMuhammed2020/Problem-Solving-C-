
/******************************************************************************/
/* Author   : Mustafa Muhammed Abdou                                          */
/* Date     : 14 Feb,2023                                                     */
/* Version  : V01                                                             */
/* Hint     : Return the maximum difference between two elements in the array */
/******************************************************************************/

#include<stdio.h>

#include<stdlib.h> /* TO USE malloc() */
/* FUNCTION PROTOTYPE / DECLARATION                                          */
/* IT TAKES AN ARRAY AND ITS SIZE AND RETURN THE MAXIMUM DIFFERENCE BETWEEN  */
/* TWO ELEMENTS WHILE THE SMALLER MUST COMES FIRST                           */
int IntMaxDifference(int *CopyIntArr , int CopyIntArrSize);

int main()
{
  //int LocalIntArray[] = {10,1,5,3,6,8,7,2} ; /* ARRAY FOR TESTING */                         
  //int LocalArraySize = sizeof(LocalIntArray) / sizeof(LocalIntArray[0]) ; /* SIZE OF THE ARRAY */
  
  int LocalArraySize = 0 , LocalIntDifference = 0 ;
  
  /* HERE WE WILL TAKE THE ARRAY ELEMENTS AND SIZE FROM USER */
  printf("Enter the number of elements\n");
  scanf("%d",&LocalArraySize);
  
  /* DYNAMICALLY CREATE THE ARRAY */
  int * Array = (int *) malloc(sizeof(int) * LocalArraySize);
  
  /* SCAN ARRAY ELEMENTS FROM THE USER */ 
  for(int x = 0 ; x < LocalArraySize ; x++)
  {
      printf("Enter element number %d \n", x+1);
      scanf("%d",&Array[x]);
  }
  
  /* CALL THE FUNCTION AND STORE ITS RETURN VALUE */
   LocalIntDifference = IntMaxDifference(Array , LocalArraySize);
  
  /* PRINT THE VALUE */  
  printf("The maximum diference is %d\n" , LocalIntDifference ) ;

  return 0 ;
}


/* FUNCTION DEFINITION / IMPLEMENTATION */
int IntMaxDifference(int *CopyIntArr , int CopyIntArrSize)
{
 int LocalIntMaxDifference = 0 , LocalIntSubtraction = 0 ;
 
 for(int i = 0 ; i < CopyIntArrSize ; i++)
  {
    for(int x = i+1 ; x < CopyIntArrSize ; x++)
      {
        /* TO ASSURE THAT THESMALLER ELEMENT COMES FIRST */
        if( CopyIntArr[i] < CopyIntArr[x] ) /* COMPARE THE CURRENT ELEMENT WITH THE REST */
          {
             LocalIntSubtraction = CopyIntArr[x] - CopyIntArr[i] ; /* SUBTRACT THE TWO ELEMENTS */
             if( LocalIntSubtraction > LocalIntMaxDifference ) /* COMPARE THE SUBTRACTION WITH THE MAX DIFFERENCE */
                LocalIntMaxDifference = LocalIntSubtraction ;  /* WILLHAPPEN IF THE SUBTRACTION GREATER */
          }
       }
  } 

 return LocalIntMaxDifference ; /* RETURN THE MAX DIFFERENCE */
}