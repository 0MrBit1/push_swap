#include "../include/push_swap.h"

int  swap_top(int *stake, int size )
{
    //Swap the first 2 elements at the top of stack a.
    //Do nothing if there is only one or no elements.
    int swap;
    if (!stake || size == 1)
        return 1; 
    swap = stake[size - 1];
    stake[size - 1]  = stake[size - 2]; 
    stake[size - 2] = swap;
    return 0;
}

int  push_pop(int **stake_push , int **stake_pop , int *size_push , int *size_pop)
{
    //Take the first element at the top of stake_pop and put it at the top of stake_push.
    //Do nothing if stake_pop is empty

    int *new_stake_push; 
    int *new_stake_pop;

    if (! *size_pop)
        return 1 ;
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

void rotate_function(int *stake , int size)
{
    //Shift up all elements of stack a by 1.
    //The first element becomes the last one.
    int i;
    int swap;

    i = 0 ;
    while(i < size -1 )
    {
        swap = stake[i]; 
        stake[i] = stake[i + 1] ;
        stake[i + 1] = swap ; 
        i++;
    }
}

void reverse_rotate_function(int *stake , int  size)
{
   //Shift down all elements of stack a by 1.
   //The last element becomes the first one
    int i;
    int swap;

    i = size -1;
    while(i > 0 )
    {
        swap = stake[i]; 
        stake[i] = stake[i - 1] ;
        stake[i - 1] = swap ; 
        i--;
    }
}
