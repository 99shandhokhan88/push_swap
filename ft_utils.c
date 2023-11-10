/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:30:32 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/07 13:30:34 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stack *stack_struct)
{
	write(2, "Error\n", 6);
	ft_exit(stack_struct);
}

int	ft_is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *num, t_stack *stack_struct)
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
			ft_error(stack_struct);
		res = res * 10 + num[i++] - '0';
	}
	if (res > INT_MAX || res < INT_MIN)
		ft_error(stack_struct);
	return (res * sign);
}

void	ft_exit(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	if (stack)
		free(stack);
	exit(0);
}

void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
