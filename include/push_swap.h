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

int calculate_numbers(char **argv) ; 
void bubble_sort(int *stake , int size) ;

void rrr(int *stake_a , int *stake_b , int size_a , int size_b) ; 
void rr(int *stake_a , int *stake_b , int size_a , int size_b) ; 
void ss(int *stake_a , int *stake_b , int size_a , int size_b) ; 

int  pa(int **stake_a , int **stake_b , int *size_a , int *size_b ) ;
int  pb(int **stake_a , int **stake_b , int *size_a , int *size_b ) ;
int  sa(int *stake_a , int size ) ; 
int  sb(int *stake_b, int size ) ; 

void ra(int *stake_a , int siz) ; 
void rb(int *stake_b , int  size) ; 
void rra(int *stake_a , int  size ) ;
void rrb(int *stake_a , int  size ) ; 

void  range_decider(int size , int *start_end) ; 
int check_if_superior(int stake_top , int *sorted_array , int *start_end , int sorted_array_len ) ; 
int  check_if_inferior(int stake_top , int *sorted_array , int *start_end)  ; 
int check_if_in(int stake_top , int *sorted_array , int *start_end , int sorted_array_len) ; 

int free_array(char **array)  ;    
