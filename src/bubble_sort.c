#include "../include/push_swap.h"

static void swap_values (int *addr1 , int *addr2 )
{
    int swap ; 

    swap = *addr1 ; 
    *addr1 = *addr2 ; 
    *addr2 = swap ; 
}

void bubble_sort(int *stake , int size)
{
    int i;
    int j; 
    int min;  

    i = 0; 
    j = 0; 
    min = i; 
    while (i < size)
    {
        while(j < size)
        {
            if (stake[j] < stake[min])
                min = j; 
            j++;
        }
        swap_values ( &(stake[i]) , &(stake[min]) ) ; 
        i++ ;
        j = i ;
        min = i ; 
    }
}