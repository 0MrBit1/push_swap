/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <acharik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:54:28 by acharik           #+#    #+#             */
/*   Updated: 2024/07/16 10:54:30 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(int *stake_a, int size)
{
	int	i;
	int	swap;

	i = size - 1;
	while (i)
	{
		swap = stake_a[i];
		stake_a[i] = stake_a[i - 1];
		stake_a[i - 1] = swap;
		i--;
	}
	ft_printf("ra\n");
}

void	rb(int *stake_b, int size)
{
	int	i;
	int	swap;

	i = size - 1;
	while (i)
	{
		swap = stake_b[i];
		stake_b[i] = stake_b[i - 1];
		stake_b[i - 1] = swap;
		i--;
	}
	ft_printf("rb\n");
}

void	rra(int *stake_a, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		swap = stake_a[i];
		stake_a[i] = stake_a[i + 1];
		stake_a[i + 1] = swap;
		i++;
	}
	ft_printf("rra\n");
}

void	rrb(int *stake_b, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		swap = stake_b[i];
		stake_b[i] = stake_b[i + 1];
		stake_b[i + 1] = swap;
		i++;
	}
	ft_printf("rrb\n");
}
