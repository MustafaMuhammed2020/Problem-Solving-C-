/****************************************************/
/* AUTHOR      : MUSTAFA MUHAMMED                   */
/* DATE        : 17 JAN 2023                        */
/* VERSION     : V01                                */
/* DESCRIBTION : maximum and minimum in array       */
/****************************************************/

#include<stdio.h>


/* FUNCTION PROTOTYPE / DECLERATION */
/* FUNCTION TAKES AN ARRAY  AND OTHER VARIABLES TO STORE RETURNED DATA         */
/* HERE VARIABLES MUST BE PASSED BY REFRENCE TO KEEP THEIR VALUES AFTER THE FUNCTION */
void void_Get_MaxMin(int * Copy_IntArr , int Copy_IntLength , int * Copy_IntMax , int * Copy_IntMaxIndex , int * Copy_IntMin , int * Copy_IntMinIndex);


int main()
{
    int Array[] = {5,12,100,0,7,11,2};
    
    int Max = 0 , Max_Index = 0 , Min = 0 , Min_Index = 0 , Length = 0;

    Length = sizeof(Array) / sizeof(Array[0]);
    
    void_Get_MaxMin(Array , Length ,  &Max , &Max_Index , &Min , &Min_Index );
    
    printf("The maximum in the array    = %d\n",Max);
    printf("The index of maximum number = %d\n",Max_Index);
    printf("The minimum in the array    = %d\n",Min);
    printf("The index of minimum number = %d\n",Min_Index);
    
    
    return 0 ;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
void void_Get_MaxMin(int * Copy_IntArr , int Copy_IntLength , int * Copy_IntMax , int * Copy_IntMaxIndex , int * Copy_IntMin , int * Copy_IntMinIndex)

{
    
    *Copy_IntMax = Copy_IntArr[0];
    *Copy_IntMin = Copy_IntArr[0];

    
    for(int i = 0 ; i < Copy_IntLength ; i++)
    {
        /* SEARCH FOR THE MAX VALUE */
        if(Copy_IntArr[i] > *Copy_IntMax)
        {
            *Copy_IntMax = Copy_IntArr[i] ;
            *Copy_IntMaxIndex = i ;
        }
        
        /* SEARCH FOR THE MINIMUM VALUE */
        if(Copy_IntArr[i] < *Copy_IntMin)
        {
            *Copy_IntMin = Copy_IntArr[i] ;
            *Copy_IntMinIndex = i ;
        }
    }
    
    
}

/**************************************************************************/
/************** THE SAME PREVIOUS FUNCTION BUT USING ARRAY ****************/
/**************************************************************************/

#include<stdio.h>


/* FUNCTION PROTOTYPE / DECLERATION */
/* FUNCTION TAKES AN ARRAY  AND OTHER VARIABLES TO STORE RETURNED DATA         */
/* HERE VARIABLES MUST BE PASSED BY REFRENCE TO KEEP THEIR VALUES AFTER THE FUNCTION */
int void_Get_MaxMin(int * Copy_IntArr , int Copy_IntLength , int * Copy_IntResults);


int main()
{
    int Array[] = {0,12,300,3,7,1,144};
    
    int Results[4] ;
    
    int Length = 0 ;

    Length = sizeof(Array) / sizeof(Array[0]);
    
    void_Get_MaxMin(Array , Length , Results );
    
    printf("The maximum in the array    = %d\n",Results[0]);
    printf("The index of maximum number = %d\n",Results[1]);
    printf("The minimum in the array    = %d\n",Results[2]);
    printf("The index of minimum number = %d\n",Results[3]);
    
    
    return 0 ;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int void_Get_MaxMin(int * Copy_IntArr , int Copy_IntLength , int * Copy_IntResults)

{
    /* ASSUME MAX AND MIN VAKUES */
    Copy_IntResults[0] = 0 ;
    Copy_IntResults[1] = 0 ;
    Copy_IntResults[2] = 0 ;
    Copy_IntResults[3] = 0 ;

    
    for(int i = 0 ; i < Copy_IntLength ; i++)
    {
        /* SEARCH FOR THE MAX VALUE */
        if(Copy_IntArr[i] > Copy_IntResults[0])
        {
            Copy_IntResults[0] = Copy_IntArr[i] ;
            Copy_IntResults[1] = i ;
        }
        
        /* SEARCH FOR THE MINIMUM VALUE */
        if(Copy_IntArr[i] <= Copy_IntResults[1])
        {
            Copy_IntResults[2] = Copy_IntArr[i] ;
            Copy_IntResults[3] = i ;
        }
    }
    
    return Copy_IntResults ;
    
}