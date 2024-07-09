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
void rrr (int *stake_a , int *stake_b , int size_a , int size_b , int flag) ; 
void rr(int *stake_a , int *stake_b , int size_a , int size_b, int flag) ; 
void ss(int *stake_a , int *stake_b , int size_a , int size_b, int flag) ; 
push_pop(int **stake_push , int **stake_pop , int *size_push , int *size_pop , int flag) ;
int  swap_top(int *stake, int size , int flag) ; 
void rotate_function(int *stake , int siz, int flage) ; 
void reverse_rotate_function(int *stake , int  size, int flag) ; 
