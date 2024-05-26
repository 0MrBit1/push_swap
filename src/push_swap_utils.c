#include "../include/push_it.h"

int *create_stake_a(int argc , char **numbers)
{
    int i;
    int j;
    int *stake_a;
 
    i = argc - 1;
    j = 0;
    stake_a = malloc(sizeof(int) * ( i)) ; 
    while(i)
    {
        while(numbers[i][j])
        {
            if (!ft_isdigit( numbers[i][j]) )
            {
                free(stake_a);
                return NULL;
            }
            j++;
        }
        stake_a[i - 1] = ft_atoi(numbers[i]);
        i--; 
        j = 0;
    }
    return stake_a;
}

