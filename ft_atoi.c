/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:52:13 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/14 16:26:39 by vzashev          ###   ########.fr       */
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

int	ft_atoi(char *num, int *stack)
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
			ft_error(stack);
		res = res * 10 + num[i++] - '0';
	}
	if (res > INT_MAX || res < INT_MIN)
		ft_error(stack);
	return (res * sign);
}
