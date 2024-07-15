#include "../include/push_swap.h"

void ss(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //sa and sb at the same time
    sa(stake_a, size_a);
    sb(stake_b, size_b);
    ft_printf("ss\n");
}

void rr(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //ra and rb at the same time.
    ra(stake_a ,  size_a);
    rb(stake_b ,  size_b);
    ft_printf("rr\n");
}
void rrr(int *stake_a , int *stake_b , int size_a , int size_b)
{
    //rra and rrb at the same time.
    rra(stake_a ,   size_a);
    rrb(stake_b ,   size_b) ;
    ft_printf("rrr\n");
} 