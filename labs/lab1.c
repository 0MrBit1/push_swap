//#include "../include/push_swap.h"

#include <stdio.h>

int rra_function(int *stake_a , int  size_a)
{

      //Shift up all elements of stack a by 1.
    //The first element becomes the last one.
    int i;
    int swap;

    i = size_a -1 ;
    while(i > 0  )
    {
        swap = stake_a[i]; 
        stake_a[i] = stake_a[i - 1] ;
        stake_a[i - 1] = swap ; 
        i--;
    }
}

int main(int argc , char **argv)
{
   
   int tab[5] = { 1  , 2 , 3 , 4  }; 

   rra_function(tab , 4) ; 

   int i ;

   i = 0 ;

   while( i < 4)
   {
    printf("%d\n" , tab[i]) ; 
    i++;
   }
}