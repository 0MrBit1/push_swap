#include "../include/push_swap.h"

int  range_decider(int size)
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
    
    return range ; 
}

check_if_superior(int start , int range ,  int stake_top , int *sorted_array )
{

    while(start < range)
    {

        if (stake_top == range[start] )
        {
            return  1;
        }
    start ++ ;
    }
    return 0 ;
}

check_if_inferior(int start , int range ,  int stake_top , int *sorted_array)
{
    while(start < range)
    {

        if (stake_top == range[start] )
        {
            return  1 ;
        }
    start ++ ;
    }
    return 0 ;

}

check_if_in(int start , int range ,  int stake_top , int *sorted_array)
{
   while(start < range)
    {

        if (stake_top == range[start] )
        {
            return  1 ;
        }
    start ++ ;
    }
    return 0 ;
}
        
