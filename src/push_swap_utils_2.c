#include "../include/push_swap.h"

// Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

int  sa_function(int *stake_a, int size_a )
{
    // Swap the first 2 elements at the top of stack a.
    //Do nothing if there is only one or no elements.

    if (!stake_a || size_a == 1)
    {
        return 1; 
    }
    int swap;

    swap = stake_a[size_a - 1];
    stake_a[size_a - 1]  = stake_a[size_a - 2]; 
    stake_a[size_a - 2] = swap;
    return 0;
}

int  sb_function(int *stake_b, int size_b )
{
     //Swap the first 2 elements at the top of stack b.
     //Do nothing if there is only one or no elements
     if (!stake_b || size_b == 1)
        return 0;
    
    int swap;

    swap = stake_b[size_b - 1];
    stake_b[size_b - 1] = stake_b[size_b - 2]; 
    stake_b[size_b - 2] = swap;
    return 1; 
}

void ss_function(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //sa and sb at the same time
    sa_function(stake_a, size_a );
    sb_function(stake_b, size_b );
}

void pa_function(int *stake_a , int *stake_b , int size_a , int *size_b)
{
   //Take the first element at the top of b and put it at the top of a.
   //Do nothing if b is empty.
    
    stake_a = resize_array(stake_a , size_b );
    stake_a[ size_a - 1 ] = stake_b[*size_b -1];
}

int pa_function(int *stake_a , int *stake_b , int size_a , int *size_b)
{
    //Take the first element at the top of a and put it at the top of b.
    //Do nothing if a is empty
    if (!stake_a)
        return 0; 
    stake_b = resize_array ( stake_b , size_b );
    stake_b[ *size_b - 1] = stake_a[size_a -1];
    return 1; 
}

int ra_function(int *stake_a , int size_a)
{
    //Shift up all elements of stack a by 1.
    //The first element becomes the last one.
    int i;
    int swap;

    i = 0 ;
    while(i < size_a -1 )
    {
        swap = stake_a[i]; 
        stake_a[i] = stake_a[i + 1] ;
        stake_a[i + 1] = swap ; 
        i++;
    }
}

int rb_function(int *stake_b , int size_b)
{
    //Shift up all elements of stack a by 1.
    //The first element becomes the last one.
    int i;
    int swap;

    i = 0 ;
    while(i < size_b -1 )
    {
        swap = stake_b[i]; 
        stake_b[i] = stake_b[i + 1] ;
        stake_b[i + 1] = swap ; 
        i++;
    }
}

