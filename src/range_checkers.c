#include "../include/push_swap.h"

int  range_decider(int size , int *start_end)
{
    int range ; 
    
    if (size <= 16)
        range = 5;
    else if (size <= 100)
        range = 15;
    else if (size <= 500)
        range = 35;
    else
        range = 45;

    start_end[0] = 0;
    start_end[1] = range;  
}

int check_if_superior(int stake_top , int *sorted_array , int *start_end , int sorted_array_len )
{
    int start;
    int end;

    start = start_end[1]++ ;
    end =  sorted_array_len;
  
    while(start < end)
    {
        if (stake_top == sorted_array[start] )
        {
            return  1;
        }
        start++ ; 
    }

    return 0 ; 
    
}

int  check_if_inferior(int stake_top , int *sorted_array , int *start_end , int sorted_array_len)
{
    int start  ;
    int end ;

    end = start_end[0] ;
    start = 0 ;

    while(start < end)
    {

        if (stake_top == sorted_array[start] )
        {
            return  1;
        }
        start++;
    }

    return 0 ; 

}

int check_if_in(int stake_top , int *sorted_array , int *start_end , int sorted_array_len)
{
    int a ;
    int b ;

    a = check_if_inferior(stake_top , sorted_array , start_end , sorted_array_len) ; 
    b = check_if_superior(stake_top , sorted_array , start_end , sorted_array_len) ; 

    if (!a && !b )
        return 1 ;
    return 0 ;

}
        
