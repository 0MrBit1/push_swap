#include "../include/push_swap.h"

int  *resize_array(int *stake_b , int *size_b  )
{
    int *new_stake_b ; 
    int i;

    new_stake_b = malloc(sizeof(int)*( *size_b + 1 ));
    if(!new_stake_b)
        return NULL;
    i = 0;
    while(i < *size_b)
    {
        new_stake_b[i] =  stake_b[i]; 
        i++;
    }
    *size_b = *size_b + 1; 
    free(stake_b);
    return new_stake_b;
}