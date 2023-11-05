/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:41:08 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/05 19:00:58 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_asc_order(int *stack, int dim)
{
	int	i;

	i = 1;
	while (i < dim)
	{
		if (stack[i - 1] > stack[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_desc_order(int *stack, int dim)
{
	int	i;

	i = 1;
	while (i < dim)
	{
		if (stack[i - 1] < stack[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_push(t_stack *stack, int dim, int n)
{
	if (n == 1)
		ft_pb(stack);
	else if (n == 0)
		ft_pa(stack);
	dim--;
	return (dim);
}

void	ft_temp_sort(int *temp_stk, int dim)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < dim)
	{
		j = i + 1;
		while (j < dim)
		{
			if (temp_stk[i] > temp_stk[j])
			{
				temp = temp_stk[i];
				temp_stk[i] = temp_stk[j];
				temp_stk[j] = temp;
			}
			j++;
		}
		i++;
	}
}
