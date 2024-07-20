/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:53:56 by acharik           #+#    #+#             */
/*   Updated: 2024/07/18 07:01:34 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (1);
}

static int	overflow_checker(char *number)
{
	char	*int_min;
	int		i;
	int		number_len;

	i = 0;
	int_min = "2147483648";
	if (!ft_strncmp(number, int_min, 10) || !ft_strncmp(number, "+2147483648", 11) )
		return (1);
	if (*number == '+' || *number == '-')
		number++;
	number_len = ft_strlen(number);
	if (number_len != 10)
		return (number_len > 10);
	while (i < number_len)
	{
		if (number[i] - '0' > int_min[i] - '0')
			return (1);
		i++;
	}
	return (0);
}

static int	digit_checker(char *numbers)
{
	int	j;
	int	sign;

	sign = (*numbers == '+' || *numbers == '-') && !*(numbers + 1);
	if (sign)
		return (1);
	j = 0;
	if (*numbers == '+' || *numbers == '-')
		j++;
	while (numbers[j])
	{
		if (!ft_isdigit(numbers[j]))
			return (1);
		j++;
	}
	return (0);
}

int	calculate_numbers(char **argv)
{
	int		len;
	int		i;
	int		j;
	char	**numbers;

	i = 1;
	j = 0;
	len = 0;
	while (argv[i])
	{
		numbers = ft_split(argv[i], ' ');
		while (numbers[j])
		{
			if (digit_checker(numbers[j]) && free_array(numbers))
				return (0);
			if (overflow_checker(numbers[j]) && free_array(numbers))
				return (0);
			len++;
			j++;
		}
		free_array(numbers);
		j = 0;
		i++;
	}
	return (len);
}
