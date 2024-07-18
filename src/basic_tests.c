/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <acharik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:32:06 by acharik           #+#    #+#             */
/*   Updated: 2024/07/16 16:55:09 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_if_sorted(int *stake_a, int *sorted_array, int *lens)
{
	int	i;

	i = 0;
	while (i <= lens[0])
	{
		if (stake_a[i] != sorted_array[i])
			return ;
		i++;
	}
	free(stake_a);
	free(sorted_array);
	exit(1);
}

void	check_if_deplicated(int *stake_a, int *lens)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < lens[0])
	{
		while (j < lens[0])
		{
			if ((stake_a[i] == stake_a[j]) && i != j)
			{
				write(2, "Error\n", 6);
				free(stake_a);
				exit(1);
			}
			j++;
		}
		j = 0;
		i++;
	}
}
int get_index_smalle_num(int *stack_a, int smalle_num)
{
	int i;

	i = 0;
	while (1)
	{
		if (smalle_num == stack_a[i])
			return (i);
		i++;
	}
}
void pope(int **stake_a, int **stake_b, int *lens, int smalle_num)
{
	// int i;
	int smalle_index;
	smalle_index = get_index_smalle_num(*stake_a, smalle_num);

	// i =  smalle_index;
	// printf ("%d\n", smalle_num);
	while (smalle_num != (*stake_a)[lens[1] - 1])
	{
		// sleep(100);
		if (smalle_index >= lens[1] / 2)
			ra(*stake_a, lens[1]);
		else
			rra(*stake_a, lens[1]);
	}
	// printf ("%d\n", (*stake_a)[lens[1] - 1]);
	pb(stake_a, stake_b, &(lens[1]), &(lens[2]));
}
void  sort_five_args(int **stake_a , int **stake_b , int *lens)
{
	int large_num;
	int *buble_sorted ;
	// int i;

	// i = 0;
	if (lens[1] == 2)
	{ 
		if ((*stake_a)[1] > (*stake_a)[0])
			sa(*stake_a, lens[1]);
		return ;
	}
	buble_sorted = malloc(sizeof(int)* (lens[0]) ) ; 
	while (lens[1] > 3)
	{
		ft_memmove(buble_sorted , *stake_a , sizeof(int)*(lens[1]));
		bubble_sort(buble_sorted, lens[1]);
		pope(stake_a, stake_b, lens, buble_sorted[0]);
		// printf ("jj\n");
	}
	ft_memmove(buble_sorted , *stake_a , sizeof(int)*(lens[1])) ;
	bubble_sort(buble_sorted, lens[1]);
	large_num = buble_sorted[lens[1] - 1];
	if ((*stake_a)[lens[1] - 1] == large_num)
		ra(*stake_a, lens[1]);
	else if ((*stake_a)[1] == large_num)
		rra(*stake_a, lens[1]);
	if ((*stake_a)[lens[1] - 1] > (*stake_a)[1])
		sa(*stake_a, lens[1]);
	// rrb(*stake_b, lens[2]);
	pa(stake_a, stake_b, &(lens[1]), &(lens[2]));
	pa(stake_a, stake_b, &(lens[1]), &(lens[2]));
}
