#include "../include/push_swap.h"

int  swap_top(int *stake, int size )
{
    // Swap the first 2 elements at the top of stack a.
    //Do nothing if there is only one or no elements.
    int swap;
    if (!stake || size == 1)
        return 0; 
    swap = stake[size - 1];
    stake[size - 1]  = stake[size - 2]; 
    stake[size - 2] = swap;
    return 1;
}

void ss(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //sa and sb at the same time
    swap_top(stake_a, size_a);
    swap_top(stake_b, size_b);
}

int  push_pop(int **stake_push , int **stake_pop , int *size_push , int *size_pop)
{
    int *new_stake_push; 
    int *new_stake_pop;

    if (! *size_pop)
        return 0 ;
    new_stake_push = malloc(sizeof(int) * ( *size_push + 1 ));
    new_stake_pop =  malloc(sizeof(int) * ( *size_pop - 1 ));
    move_data(*stake_push , new_stake_push  , *size_push) ;
    move_data(*stake_pop , new_stake_pop , *size_pop -1 ) ;
    new_stake_push[ *size_push ] = (*stake_pop)[*size_pop -1 ] ; 
    free(*stake_push);
    free(*stake_pop);
    *stake_push = new_stake_push ; 
    *stake_pop  = new_stake_pop ; 
    *size_push  = *size_push + 1; 
    *size_pop   = *size_pop - 1; 
    return 0;
}