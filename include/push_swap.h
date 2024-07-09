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

int overflow_checker(char *number) ; 
int digit_checker(char *numbers  ) ;
void move_data(int *src , int *dest , int size) ; 
void bubble_sort(int *stake , int size) ;
void rrr (int *stake_a , int *stake_b , int size_a , int size_b) ; 
void rr(int *stake_a , int *stake_b , int size_a , int size_b) ; 
void ss(int *stake_a , int *stake_b , int size_a , int size_b) ; 

int push_pop(int **stake_push , int **stake_pop , int *size_push , int *size_pop , int flag) ;
int  swap_top(int *stake, int size , int flag) ; 
void rotate_function(int *stake , int siz, int flag) ; 
void reverse_rotate_function(int *stake , int  size, int flag) ; 

void  range_decider(int size , int *start_end) ; 
int check_if_superior(int stake_top , int *sorted_array , int *start_end , int sorted_array_len ) ; 
int  check_if_inferior(int stake_top , int *sorted_array , int *start_end , int sorted_array_len)  ; 
int check_if_in(int stake_top , int *sorted_array , int *start_end , int sorted_array_len) ; 
