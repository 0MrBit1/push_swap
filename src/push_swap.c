#include "../include/push_swap.h"

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

int begin_checks(int stake_top , int *sorted_array , int *start_end , int sorted_array_len )
{
    int status[3];
    int i ;

    i = 0 ;
    status[0] = check_if_superior(stake_top , sorted_array , start_end ,  sorted_array_len ) ;
    status[1] = check_if_inferior(stake_top , sorted_array , start_end ) ;
    status[2] = check_if_in(stake_top , sorted_array , start_end ,  sorted_array_len) ; 
    while(i < 3)
    {
        if (status[i])
            break;
        i++;
    }
    return i;

}

void dispatcher(int status , int **stake_b , int **stake_a , int *start_end , int *size_push_pop)
{

    if (!status )
    {
        ra(*stake_a , size_push_pop[1] ) ; 
    }
    else if (status == 1)
    {
        pb(stake_a , stake_b , &(size_push_pop[1]) , &(size_push_pop[2])); 
        rb(*stake_b , size_push_pop[2] ); 

        start_end[0]++;
        start_end[1]++;

    }
    else 
    {

        pb(stake_a , stake_b , &(size_push_pop[1]) , &(size_push_pop[2]));       
        start_end[0]++;
        start_end[1]++;

    }
}
int main (int argc , char **argv)
{
    int *stake_a; 
    int *stake_b;
    int *buble_sorted; 
    int lens[3];
    int start_end[2];
    int status ; 

    if (argc < 2 )
        ft_printf("no arguments ,pleave give some arguments.\n") ;
    lens[0] = calculate_numbers(argv) ; 
    lens[1] = lens[0]; 
    lens[2] = 0; 
    stake_a = create_stake_a(argv , lens[0]);
    stake_b = NULL ;
    if (!stake_a)
    {
        ft_printf("there was an error creating the stake .\n");
        return 1;
    }
    buble_sorted = create_stake_a(argv , lens[0]);
    bubble_sort(buble_sorted , lens[0]);
    range_decider(lens[0] , start_end) ; 
    while (lens[1])
    {
        status = begin_checks( stake_a[   lens[1] - 1      ] , buble_sorted , start_end , lens[0]);
        dispatcher(status , &stake_b , &stake_a , start_end ,  lens ) ;
    }

    


    return 0;
}
