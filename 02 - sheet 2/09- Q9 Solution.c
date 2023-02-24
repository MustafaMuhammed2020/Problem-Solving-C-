/***********************************************/
/* Author  : Mustafa mohammed Abdou            */
/* Date    : 12 jan 2023                       */
/* Version : V01                               */
/* Describtion : patterns                      */
/***********************************************/

#include <stdio.h>

int main() {
    
	/* DEFINE VARIABLE TO TAKE NUMBER OF LINES FROM USER */
    int Lines , p1_Step = 0 , p2_Step = 1 , Deleted_stars = 1 , Spaces = 0 ;
    
    printf("Enter the number of lines\n");
    scanf("%d",&Lines);
    
	/************************************************/
	/* PATTERN 1  , LET LINES = 5                   */
 	/* OUTPUT :                                     */
	/*   *****                                      */
    /*    ****                                      */
    /*     ***                                      */
    /*      **                                      */
    /*       *                                      */
    /************************************************/
    for(int i = Lines ; i >= 1 ; i--)
    { 
        for(int x = 1 ; x <= p1_Step ; x++)
        {
            printf(" ");
        }
        
        for(int y = 1 ; y <= Lines - p1_Step; y++)
        {
            printf("*");
        }
        printf("\n");
        p1_Step++;
    }
	
	
	/************************************************/
	/* PATTERN 2  , LET LINES = 5                   */
 	/* OUTPUT :                                     */
	/*   *****                                      */
    /*   ****                                       */
    /*   ***                                        */
    /*   **                                         */
    /*   *                                          */
    /************************************************/
    for(int i = Lines ; i >= 1 ; i--)
    { 
        for(int x = 1 ; x <= i ; x++)
        {
            printf("*");
        }
        
        printf("\n");
    
    }
	
	/************************************************/
	/* PATTERN 3  , LET LINES = 5                   */
 	/* OUTPUT :                                     */
	/*   *                                          */
    /*   **                                         */
    /*   ***                                        */
    /*   ****                                       */
    /*   *****                                      */
    /************************************************/
    for(int i = 1 ; i <= Lines 1 ; i++)
    { 
        for(int x = 1 ; x <= i ; x++)
        {
            printf("*");
        }
        
        printf("\n");
    
    }
	
	/************************************************/
	/* PATTERN 4  , LET LINES = 5                   */
 	/* OUTPUT :                                     */
	/*       *                                      */
    /*      ***                                     */
    /*     *****                                    */
    /*    *******                                   */
    /*   *********                                  */
    /************************************************/
    for(int i = 1 ; i <= Lines ; i++)
    { 
        for(int x = 1 ; x <= Lines - i ; x++)
        {
            printf(" ");
        }
        
        for(int y = 1 ; y <= p2_Step ; y++)
        {
            printf("*");
        }
        printf("\n");
        p2_Step += 2;
    }
	
	/************************************************/
	/* PATTERN 5  , LET LINES = 5                   */
 	/* OUTPUT :                                     */
	/*       *                                      */
    /*      **                                      */
    /*     ***                                      */
    /*    ****                                      */
    /*   *****                                      */
    /************************************************/
    for(int i = 1 ; i <= Lines ; i++)
    { 
        for(int x = 1 ; x <= Lines - i ; x++)
        {
            printf(" ");
        }
        
        for(int y = 1 ; y <= p2_Step ; y++)
        {
            printf("*");
        }
        printf("\n");
        p2_Step++;
    }
	
	/*************************************************/
	/* PATTERN 6  , LET LINES = 10                   */
 	/* OUTPUT :                                      */
	/*   *********                                   */
	/*    *******                                    */
	/*     *****                                     */
	/*      ***                                      */
	/*       *                                       */
	/*************************************************/
    for(int i = Lines ; i >= 1 ; i--)
    { 
        for(int x = 1 ; x <= p1_Step ; x++)
        {
            printf(" ");
        }
        
        for(int y = 1 ; y <= Lines - Deleted_stars ; y++)
        {
            printf("*");
        }
        printf("\n");
        p1_Step++;
        Deleted_stars +=2 ;
    }
	
	/**************************************************/
	/* PATTERN 7  , LET LINES = 7 PRESENTS THE SPACES */
 	/* OUTPUT :                                       */
	/*   *      *                                     */
	/*    *    *                                      */
	/*     *  *                                       */
	/*      **                                        */
	/*                                                */
	/**************************************************/
    if(Lines % 2 == 1)
    {
        Spaces = Lines -1 ;
    }
    else 
    Spaces  = Lines ; /* NUMBER OF SPACES IN THE FIRST LINE */
    
    for(int x = 1 ; Spaces >= 0 ; x++)
    {
        for(int y = 1 ; y <= Lines ; y++)
        {
            if(y == x)
            {
                printf("*");
                for(int z = Spaces ; z >= 1 ; z--)
                {
                   printf(" ");
                }
                printf("*\n");
                Spaces -= 2 ;
                break ;
            }
            printf(" ");
            
        }
    }

	
	

	
	
	
	
	

    return 0;
}