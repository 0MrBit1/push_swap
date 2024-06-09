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



int main (int argc , char **argv)
{
    int *stake_a ; 

    int i;

    i = 0 ;
    stake_a = create_stake_a( argc , argv); 
    bubble_sort(stake_a , argc - 1) ; 

    while(i < argc -1 )
    {
        printf("%d\n" , stake_a[i])  ; 
        i++;
    }
}
