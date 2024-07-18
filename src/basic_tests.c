/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:32:06 by acharik           #+#    #+#             */
/*   Updated: 2024/07/18 04:01:13 by acharik          ###   ########.fr       */
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
int handle_two(int *stake_a, int *lens)
{

	if (lens[1] == 2)
	{ 
		if ((stake_a)[1] > (stake_a)[0])
			sa(stake_a, lens[1]);
		return 1;
	}
	return 0;
}
void pope(int **stake_a, int **stake_b, int *lens, int small_num)
{
	int small_index;
	int i ;

	i = 0;
	

	while (1)
	{
		if (small_num == (*stake_a)[i])
		{
			small_index = i ; 
			break;
		}
		i++;
	}

	while (small_num != (*stake_a)[lens[1] - 1])
	{
		if (small_index >= lens[1] / 2)
			ra(*stake_a, lens[1]);
		else
			rra(*stake_a, lens[1]);
	}
	pb(stake_a, stake_b, &(lens[1]), &(lens[2]));
}
void  sort_five_args(int **stake_a , int **stake_b , int *lens)
{
	int large_num;
	int *buble_sorted;

	if(handle_two(*stake_a , lens))
		return ; 
	buble_sorted = malloc(sizeof(int)* (lens[0]) ) ; 
	while (lens[1] > 3)
	{
		ft_memmove(buble_sorted , *stake_a , sizeof(int)*(lens[1]));
		bubble_sort(buble_sorted, lens[1]);
		pope(stake_a, stake_b, lens, buble_sorted[0]);
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
	pa(stake_a, stake_b, &(lens[1]), &(lens[2]));
	pa(stake_a, stake_b, &(lens[1]), &(lens[2]));
}
