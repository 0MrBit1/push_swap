#include "../include/push_swap.h"

int overflow_checker(char *number)
{
    char *int_max; 
    char *int_min;
    int   i;
    int   j;
    int     flag;
   

    i = 0;
    j = 0;
    flag = 0;
    int_max =  "2147483647";
    int_min =  "2147483648";
    if (number[0] == '+' || number[0] == '-')
    {
        flag = 1 ;
        number = &(number[1])  ;
    }
    if (ft_strlen(number) > 10 )
    {
        return 1;
    }
    if (ft_strlen(number) < 10)
    {
        return 0;
    }
    if (flag && number[i - 1] == '-')
    {

         while( i  < ft_strlen(number) )
         {
            if   ( number[i] - '0'  >  int_min[i] - '0' ) 
            {
                return 1; 
            }
        i++;
        }

    }
    while( i  < ft_strlen(number) )
    {
        if   ( number[i] - '0'  >  int_max[i] - '0' ) 
        {
            return 1; 
        }
        i++;
    }
    return 0 ; 
} 

int digit_checker(char **numbers , int i ) 
{

    int j;
    int help_me ; 

    j = 0;
    while(numbers[i][j])
    {
        help_me =  ( numbers[i][j] == '+' ||  numbers[i][j]  == '-' ) && j == 0 ;
        if (!ft_isdigit( numbers[i][j]) && !help_me )
            return 1;   
        j++;
    }
    return 0;
}

int *create_stake_a(int argc , char **numbers)
{
    int i;
    int *stake_a;
 
    i = argc - 1;
    stake_a = malloc(sizeof(int) * ( i));
    while(i)
    {
         if (digit_checker(numbers , i ) )
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