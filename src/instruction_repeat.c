#include "../include/push_swap.h"

void ss(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //sa and sb at the same time
    swap_top(stake_a, size_a , 3);
    swap_top(stake_b, size_b , 3 );
    ft_printf("ss\n");
}

void rr(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //ra and rb at the same time.
    rotate_function(stake_a ,  size_a, 3);
    rotate_function(stake_b ,  size_b, 3);
    ft_printf("rr\n");
}

void rrr (int *stake_a , int *stake_b , int size_a , int size_b)
{
    //rra and rrb at the same time.
    reverse_rotate_function(stake_a ,   size_a, 3);
    reverse_rotate_function(stake_b ,   size_b, 3) ;
    ft_printf("rrr\n");
} 