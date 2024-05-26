#include "../include/push_swap.h"

int *create_stake_a(int argc , char **numbers)
{
    int i;
    int j;
    int *stake_a;
    int help_me; 
 
    i = argc - 1;
    j = 0;
    stake_a = malloc(sizeof(int) * ( i)) ; 
    while(i)
    {
        while(numbers[i][j])
        {

            help_me =  ( numbers[i][j] == '+' ||  numbers[i][j]  == '-' ) && j == 0 ;
         
            if (!ft_isdigit( numbers[i][j]) && !help_me )
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

int main(int argc , char **argv)
{

    int *a ; 
    int i ; 

    if (argc == 1 )
    {
        printf("no arguments has been given\n") ;
        return  1 ;
    }
    
    i = 0 ;
    a = create_stake_a( argc  ,  argv);
    if (!a)
    {
        printf("one argument was invalid \n") ; 
        return 1;
    }
    while( i < argc  - 1 )
    {
        printf("%d\n" , a[i]) ; 
        i++ ; 
    }
}