#include "../include/push_swap.h"

int begin_checks(int stake_top , int *sorted_array , int *start_end , int sorted_array_len )
{
    int status[3];
    int i;

    i = 0;
    status[0] = check_if_superior(stake_top , sorted_array , start_end ,  sorted_array_len );
    status[1] = check_if_inferior(stake_top , sorted_array , start_end);
    status[2] = check_if_in(stake_top , sorted_array , start_end ,  sorted_array_len); 
    while(i < 3)
    {
        if (status[i])
            break;
        i++;
    }
    return i;
}

void dispatcher(int status , int **stake_a , int **stake_b , int *start_end , int *lens)
{
    // 0 means superior , 1 means inferirior  and 2 means it is in the range  . 
    if (!status) // 0 
        ra(*stake_a , lens[1] ) ; 
    else if (status == 1) // 1
    {
        pb(stake_a , stake_b , &(lens[1]) , &(lens[2])); 
        rb(*stake_b , lens[2]); 
        start_end[0]++;
        start_end[1]++;
    }
    else // 2 
    {
        pb(stake_a , stake_b , &(lens[1]) , &(lens[2]));       
        start_end[0]++;
        start_end[1]++;
    }
}

void initialize_lens(int *lens , char **argv)
{
    lens[0] = calculate_numbers(argv); 
    lens[1] = lens[0]; 
    lens[2] = 0; 
}

void  push_swap(int *lens  , char **argv , int *start_end )
{
    int *stake_a; 
    int *stake_b;
    int *buble_sorted;
    int *stake_a_b[2];

    stake_a = create_stake_a(argv , lens[0]);
    stake_b = NULL;
    if (!stake_a)
    {
        ft_printf("there was an error creating the stake .\n");
        return ;
    }
    reverse_the_array(&stake_a , lens[0]);
    buble_sorted = create_stake_a(argv , lens[0]);
    bubble_sort(buble_sorted , lens[0]);
    stake_a_b[0] = stake_a; 
    stake_a_b[1] = stake_b; 

    build_stake_b(stake_a_b, lens , buble_sorted , start_end); 
}

int main (int argc , char **argv)
{
    int lens[3];
    int start_end[2];
  
    if (argc < 2 )
    {
        ft_printf("no arguments ,pleave give some arguments.\n") ;
        return 1;
    }
    initialize_lens(lens , argv); 
    range_decider(lens[0] , start_end); 
    push_swap(lens  , argv , start_end ) ; 

    return 0;
}
