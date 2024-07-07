#include "../include/push_swap.h"

static int  free_array(char **array)
{
    int i ;

    i = 0;
    while(array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
    return 1 ;
}
int calculate_numbers(char **argv)
{
    int     len;
    int     i;
    int     j;
    char    **numbers;

    i = 1;
    j = 0;
    len = 0; 
    while(argv[i])
    {
        numbers = ft_split(argv[i], ' '); 
        while(numbers[j])
        { 
            if (digit_checker(numbers[j]) && free_array(numbers))
                return 0;
            if (overflow_checker(numbers[j]) &&  free_array(numbers))
                return 0;
            len++;
            j++;
        }
        free_array(numbers);
        j = 0 ; 
        i++;
    }
    return len;
}

int *create_stake_a(char **argv , int len)
{
    int i[3];  // i , j , c
    int *stake_a;
    char **numbers;

    if (!len)
        return NULL; 
    if(!(stake_a = malloc(sizeof(int) * (len))))
        return NULL;
    ft_bzero(i, sizeof(int)*3);
    i[0] = 1;
    while(argv[i[0]])
    {
        numbers = ft_split(argv[i[0]] , ' ');
        while(numbers[i[2]])
        {   
            stake_a[i[1]++] = ft_atoi(numbers[i[2]]) ; 
            i[2]++;
        }
        free_array(numbers);
        i[2] = 0;
        i[0]++;
    }
    return stake_a;
}

int begin_checks()
{


    
}
int main (int argc , char **argv)
{
    int *stake_a; 
    int *buble_sorted; 
    int len_a_b_init[3];
    int start_end[2];

    if (argc < 2 )
        ft_printf("no arguments ,pleave give some arguments.\n") ;
    len_a_b_init[0] = calculate_numbers(argv) ; 
    len_a_b_init[1] = len_a_b_init[0]; 
    len_a_b_init[2] = len_a_b_init[0]; 
    stake_a = create_stake_a(argv , len_a_b_init[0]);
    if (!stake_a)
    {
        ft_printf("there was an error creating the stake .\n");
        return 1;
    }
    buble_sorted = create_stake_a(argv , len_a_b_init[0]);
    bubble_sort(buble_sorted , len_a_b_init[0]);
    range_decider(len_a_b_init[0] , start_end) ; 

    return 0;
}
