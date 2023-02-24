/***************************************************/
/* Author   : Mustafa Mohammed Abdou               */
/* Date     : 23,Feb 2023                          */
/* Version  : V01                                  */
/* Hint     : Most repeated in array               */
/***************************************************/

#include<stdio.h>

/* FUNCTION DECLERATION / PROTOTYPE                                     */
/* THE FUNCTION TAKES ARRAY OF CHAR AND RETUEN THE MOST REPEATED NUMBER */
int IntMostRepeated(char * Copy_CharArr , int Copy_IntArrSize);

int main()
{
  /* CREATE ARRAY FOR TESTING */
  char numbers[]={1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,4,10,4,4,4,4,11,11,11,2,2,2,2,2,2,2};

  /* CALCULATE THE ARRAY SIZE TO BE PASSED TO THE FUNCTION */
  int size = sizeof(numbers)/sizeof(numbers[0]);
  
  /* CALL THE FUNCTION AND STORE ITS RETURN VALUE */
  int x = IntMostRepeated(numbers , size);

  /* PRINT THE VALUE */
  printf("The max repeated element is : %d\n" , x);

  return 0 ;
}

/* FUNCTON DEFINITION / IPLEMENTATION */
int IntMostRepeated(char * Copy_CharArr , int Copy_IntArrSize)
{
  /* CREATE TWO VARIABLES ONE FOR THE MAX REPEATED ELEMENT AND ONE FOR MAX IN EACH ITERATION 
     AND THE THIRD ONE FOR MEX NUMBER OF OCCURANCE */ 
  int Local_IntMaxRepeatedNum = 0 , Local_IntNumberCounter = 0 , Local_IntMaxOccurance = 0;
  
  /* FOR LOOP ON ALL ARRAY ELEMENTS */
  for(int i = 0 ; i < Copy_IntArrSize ; i++)
    {
       /* ANOTHER FOR LOOP STARTS FROM THE NEXT INDEX */
       for(int x = i+1 ; x < Copy_IntArrSize ; x++)
          {
            /* CHECK EQUALITY */
            if(Copy_CharArr[x] == Copy_CharArr[i]) /* IF TRUE */
               Local_IntNumberCounter++;           /* INCREASE THE ELEMENT COUNTER BY ONE */
          }
       /* THIS CONDITION WILL BE TRUE IF WE CAPTURED AN ELEMENT REPEATED MORE THE PREVIOUS ONE */
       if(Local_IntNumberCounter > Local_IntMaxOccurance)
        {  
          Local_IntMaxOccurance = Local_IntNumberCounter; /* STORE THE COUNTER */
          Local_IntMaxRepeatedNum = Copy_CharArr[i] ;     /* STORE THE NUMBER ITSELF */
        }
          
       Local_IntNumberCounter = 0 ; /* REINTIALIZE THE OCCURANCE COUNTER TO 0 AGAIN */
    }

/* RETURN THE ELEMET */
return Local_IntMaxRepeatedNum ;

}
