/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <acharik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:14:50 by acharik           #+#    #+#             */
/*   Updated: 2024/05/25 06:14:53 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <fcntl.h>
#include <sys/wait.h>


int  sa_function(int *stake_a, int size_a ) ; 

int  sb_function(int *stake_b, int size_b ) ; 

void ss_function(int *stake_a , int *stake_b , int size_a , int size_b) ; 

void pa_function(int *stake_a , int *stake_b , int size_a , int *size_b) ; 

int pa_function(int *stake_a , int *stake_b , int size_a , int *size_b) ; 

int ra_function(int *stake_a , int size_a) ; 

int rb_function(int *stake_b , int size_b) ;

int rr_function(int *stake_a , int *stake_b , int ) ;

int rra_function(int *stake_a , int  size_a) ; 

int rrb_function(int *stake_b , int  size_b) ;

int rrr(int *stake_b , int *stake_a , int size_b , int size_a) ; 

