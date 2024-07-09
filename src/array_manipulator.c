#include "../include/push_swap.h"

void move_data(int *src , int *dest , int size)
{
    int i; 

    i = 0;
    if (!src || !dest)
        return ;
    while(i < size)
    {
        dest[i] =  src[i]; 
        i++;
    }
}

