#include "../include/push_swap.h"

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

int rr_function(int *stake_a , int *stake_b , int )
{
    //ra and rb at same time 
    rb_function(stake_a ,  size_a) ; 
    ra_function(stake_b ,  size_b) ; 
}

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


int rrb_function(int *stake_b , int  size_b)
{

      //Shift up all elements of stack a by 1.
    //The first element becomes the last one.
    int i;
    int swap;

    i = size_b -1 ;
    while(i > 0  )
    {
        swap = stake_b[i]; 
        stake_b[i] = stake_b[i - 1] ;
        stake_b[i - 1] = swap ; 
        i--;
    }
}

