#include "../include/push_swap.h"

int *create_stake_a(int argc , char **numbers)
{
    int i;
    int *stake_a;
 
    i = argc - 1;
    stake_a = malloc(sizeof(int) * ( i));
    if (!stake_a)
        return NULL;
    while(i)
    {
        if (digit_checker(numbers[i] ) )
        {
            free(stake_a);
            return NULL ;
        }
        if (overflow_checker(numbers[i]))
        { 
            free(stake_a);
            return NULL ;
        }
        stake_a[i - 1] = ft_atoi(numbers[i]);
        i--;
    }
    return stake_a;
}

void push_swap(int size  )
{

    int range ; 
    range = range_decider(size) ; 
}
int main (int argc , char **argv)
{
    int *stake_a ; 
    int *buble_sorted; 
    int range;

    if (argc < 2 )
        ft_printf("no arguments ,pleave give some arguments , don't be soo skimpy.\n") ; 
    stake_a = create_stake_a( argc , argv); 
    buble_sorted = create_stake_a( argc , argv); 
    if (!stake_a)
    {
        ft_printf("there was an error creating the stake .\n");
        return 1;
    }
    bubble_sort(buble_sorted , argc - 1);
    push_swap(argc - 1  ) ; 
}
