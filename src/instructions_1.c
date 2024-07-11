#include "../include/push_swap.h"


void ra(int *stake_a , int size)
{
    //Shift up all elements of stack a by 1.
    //The first element becomes the last one.
    int i;
    int swap;

    i = 0 ;
    while(i < size -1 )
    {
        swap = stake_a[i]; 
        stake_a[i] = stake_a[i + 1] ;
        stake_a[i + 1] = swap ; 
        i++;
    }
    ft_printf("ra\n") ; 
}

void rb(int *stake_b , int size)
{
    //Shift up all elements of stack a by 1.
    //The first element becomes the last one.
    int i;
    int swap;

    i = 0;
    while(i < size -1)
    {
        swap = stake_b[i]; 
        stake_b[i] = stake_b[i + 1] ;
        stake_b[i + 1] = swap ; 
        i++;
    }
    ft_printf("rb\n") ; 
}

void rra(int *stake_a , int  size )
{
   //Shift down all elements of stack a by 1.
   //The last element becomes the first one
    int i;
    int swap;

    i = size -1;
    while(i > 0 )
    {
        swap = stake_a[i]; 
        stake_a[i] = stake_a[i - 1] ;
        stake_a[i - 1] = swap ; 
        i--;
    }
    ft_printf("rra\n");
}

void rrb(int *stake_b , int  size)
{
   //Shift down all elements of stack a by 1.
   //The last element becomes the first one
    int i;
    int swap;

    i = size -1;
    while(i > 0 )
    {
        swap = stake_b[i]; 
        stake_b[i] = stake_b[i - 1] ;
        stake_b[i - 1] = swap ; 
        i--;
    }
    ft_printf("rrb\n");
}