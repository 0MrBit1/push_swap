/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <acharik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:54:39 by acharik           #+#    #+#             */
/*   Updated: 2024/07/16 10:54:41 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sa(int *stake_a, int size)
{
	int	swap;

	if (!stake_a || size == 1)
		return (1);
	swap = stake_a[size - 1];
	stake_a[size - 1] = stake_a[size - 2];
	stake_a[size - 2] = swap;
	ft_printf("sa\n");
	return (0);
}

int	sb(int *stake_b, int size)
{
	int	swap;

	if (!stake_b || size == 1)
		return (1);
	swap = stake_b[size - 1];
	stake_b[size - 1] = stake_b[size - 2];
	stake_b[size - 2] = swap;
	ft_printf("sb\n");
	return (0);
}

int	pa(int **stake_a, int **stake_b, int *size_a, int *size_b)
{
	int	*new_stake_a;
	int	*new_stake_b;

	if (!*size_b)
		return (1);
	new_stake_a = malloc(sizeof(int) * (*size_a + 1));
	new_stake_b = malloc(sizeof(int) * (*size_b - 1));
	ft_memmove(new_stake_a, *stake_a, (*size_a) * sizeof(int));
	ft_memmove(new_stake_b, *stake_b, (*size_b - 1) * sizeof(int));
	new_stake_a[*size_a] = (*stake_b)[*size_b - 1];
	free(*stake_a);
	free(*stake_b);
	*stake_a = new_stake_a;
	*stake_b = new_stake_b;
	*size_a = *size_a + 1;
	*size_b = *size_b - 1;
	ft_printf("pa\n");
	return (0);
}

int	pb(int **stake_a, int **stake_b, int *size_a, int *size_b)
{
	int	*new_stake_a;
	int	*new_stake_b;

	if (!*size_a)
		return (1);
	new_stake_a = malloc(sizeof(int) * (*size_a - 1));
	new_stake_b = malloc(sizeof(int) * (*size_b + 1));
	ft_memmove(new_stake_a, *stake_a, (*size_a - 1) * sizeof(int));
	ft_memmove(new_stake_b, *stake_b, (*size_b) * sizeof(int));
	new_stake_b[*size_b] = (*stake_a)[*size_a - 1];
	free(*stake_a);
	free(*stake_b);
	*stake_a = new_stake_a;
	*stake_b = new_stake_b;
	*size_a = *size_a - 1;
	*size_b = *size_b + 1;
	ft_printf("pb\n");
	return (0);
}
