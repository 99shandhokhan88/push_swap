/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:52:13 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/15 23:36:21 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int *stack)
{
	free(stack);
	write(0, "Error\n", 6);
	exit (1);
}

int	ft_is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *num, int *stack, char **argv, t_stack *stac)
{
	int			i;
	int			sign;
	long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (num[i] == 32 || (num[i] >= 9 && num[i] <= 13))
		i++;
	if (num[i] == '+')
		i++;
	else if (num[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (num[i])
	{
		if (!ft_is_digit(num[i]))
		{
			if (stac->flag == 1)
				ft_free_matrix(argv);
			ft_error(stack);
		}
		res = res * 10 + num[i++] - '0';
	}
	if (res > INT_MAX || res < INT_MIN)
	{
		if (stac->flag == 1)
			ft_free_matrix(argv);
		ft_error(stack);
	}
	return (res * sign);
}
