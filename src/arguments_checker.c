#include "../include/push_swap.h"

int overflow_checker(char *number)
{
    char  *int_min;
    int   i;
    int   number_len;

    i = 0;
    int_min = "2147483648";
    if (!ft_strncmp(number , int_min ,10)) 
        return 1;
    if (*number == '+' || *number == '-')
        number++;
    number_len = ft_strlen(number) ; 
    if (number_len !=  10)
        return  number_len > 10 ;
    while( i  < number_len )
    {
        if ( number[i] - '0' >  int_min[i] - '0') 
            return 1; 
        i++;
    }
    return 0; 
} 

int digit_checker(char *numbers  ) 
{
    int j;
    int sign;

    sign =  ( *numbers == '+' ||  *numbers  == '-' ) && ! *( numbers + 1); 
    if (sign)
        return 1 ; 
    j = 0;
    if (*numbers == '+' ||  *numbers  == '-')
        j++;
    while(numbers[j])
    {
        if (!ft_isdigit(numbers[j])  )
            return 1;   
        j++;
    }
    return 0;
}
