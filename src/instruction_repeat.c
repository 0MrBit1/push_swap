#include "../include/push_swap.h"

void ss(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //sa and sb at the same time
    swap_top(stake_a, size_a);
    swap_top(stake_b, size_b);
}

void rr(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //ra and rb at the same time.
    rotate_function(stake_a ,  size_a);
    rotate_function(stake_b ,  size_b);
}

void rrr (int *stake_a , int *stake_b , int size_a , int size_b)
{
    //rra and rrb at the same time.
    reverse_rotate_function(stake_a ,   size_a);
    reverse_rotate_function(stake_b ,   size_b) ;
} 