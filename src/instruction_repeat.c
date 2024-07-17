/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_repeat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <acharik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:54:18 by acharik           #+#    #+#             */
/*   Updated: 2024/07/16 10:54:21 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ss(int *stake_a, int *stake_b, int size_a, int size_b)
{
	sa(stake_a, size_a);
	sb(stake_b, size_b);
	ft_printf("ss\n");
}

void	rr(int *stake_a, int *stake_b, int size_a, int size_b)
{
	ra(stake_a, size_a);
	rb(stake_b, size_b);
	ft_printf("rr\n");
}

void	rrr(int *stake_a, int *stake_b, int size_a, int size_b)
{
	rra(stake_a, size_a);
	rrb(stake_b, size_b);
	ft_printf("rrr\n");
}
