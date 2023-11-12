/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:55:03 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/12 15:03:21 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_push(t_stack *stack, int dim, int push)
{
	if (push == 0)
		ft_pb(stack);
	else
		ft_pa(stack);
	dim--;
	return (dim);
}

int	ft_sort_3b(t_stack *stack, int len)
{
	if (len == 1)
		ft_pa(stack);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[1])
			ft_sb(stack);
		while (len--)
			ft_pa(stack);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_check_push(stack, len, 1);
			else
				ft_sb(stack);
		}
	}
	return (0);
}

void	ft_sort_3a(t_stack *stack)
{
	if (stack->a[0] < stack->a[1] && stack->a[0]
		< stack->a[2] && stack->a[1] < stack->a[2])
		return ;
	else if (stack->a[0] < stack->a[1] && stack->a[0]
		< stack->a[2] && stack->a[1] > stack->a[2])
	{
		ft_rra(stack);
		ft_sa(stack);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[0]
		< stack->a[2] && stack->a[1] < stack->a[2])
		ft_sa(stack);
	else if (stack->a[0] < stack->a[1] && stack->a[0]
		> stack->a[2] && stack->a[1] > stack->a[2])
		ft_rra(stack);
	else if (stack->a[1] < stack->a[2] && stack->a[0]
		> stack->a[1] && stack->a[0] > stack->a[2])
		ft_ra(stack);
	else if (stack->a[1] > stack->a[2] && stack->a[0]
		> stack->a[1] && stack->a[0] > stack->a[2])
	{
		ft_ra(stack);
		ft_sa(stack);
	}
}

int	ft_sort(t_stack *stack, int size)
{
	if (ft_check_order(stack->a, stack->len_a, 0) == 0)
	{
		if (size == 2)
			ft_sa(stack);
		else if (size == 3)
			ft_sort_3a(stack);
		else
			ft_quicksort_a(stack, size, 0);
	}
	return (0);
}
