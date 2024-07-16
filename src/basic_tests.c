/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <acharik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:32:06 by acharik           #+#    #+#             */
/*   Updated: 2024/07/16 16:02:23 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void check_if_sorted(int *stake_a , int *sorted_array , int *lens)
{
    int i;

    i = 0; 
    while (i <= lens[0])
    {
        if (stake_a[i] != sorted_array[i])
        {
            return;
        }
        i++;    
    } 
    free(stake_a);
    free(sorted_array);
    exit(1) ; 
}

void check_if_deplicated(int *stake_a , int *lens )
{
    int number ; 
    int i ;

    number = stake_a[0] ;
    i = 0 ;

    while (i < lens[0] )
    {
        if (stake_a[i] !=  number  )
            return ;
        i++; 
    }
    free(stake_a);
    exit(1) ; 
}