/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:42 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/07 17:12:13 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three_a(t_stack *stack, int dim)
{
	if (dim == 3)
	{
		while (!(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (stack->a[0] > stack->a[1] && stack->a[2])
				ft_sa(stack);
			else if (!(stack->a[2] > stack->a[0] && stack->a[2] > stack->a[1]))
				dim = ft_check_push(stack, dim, 1);
			else
			{
				ft_sa(stack);
				ft_pa(stack);
			}
		}
	}
	else if (dim == 2 && stack->a[0] > stack->a[1])
		ft_sa(stack);
}

int	ft_partition(int *pivot, int *stack, int dim)
{
	int	*temp_stack;
	int	i;
	int	j;

	temp_stack = (int *)malloc(sizeof(int) * dim);
	if (!temp_stack)
		return (0);
	i = 0;
	j = 0;
	while (i < dim)
		temp_stack[j++] = stack[i++];
	ft_temp_sort(temp_stack, dim);
	*pivot = temp_stack[dim / 2];
	free(temp_stack);
	return (1);
}

int	ft_sort_three_b(t_stack *stack, int dim)
{
	if (dim == 1)
		ft_pa(stack);
	else if (dim == 2)
	{
		if (stack->b[0] < stack->b[1])
			ft_sb(stack);
		while (dim--)
			ft_pa(stack);
	}
	else if (dim == 3)
	{
		while (dim || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (dim == 1 && stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (dim == 1
				|| (dim >= 2 && stack->b[0] > stack->b[1])
				|| (dim == 3 && stack->b[0] > stack->b[2]))
				dim = ft_check_push(stack, dim, 0);
			else
				ft_sb(stack);
		}
	}
	return (0);
}

int	ft_quick_sort_b(t_stack *stack, int dim, int count_r)
{
	int	pivot;
	int	numbers;

	if (!count_r && ft_check_desc_order(stack->b, dim) == 1)
		while (dim--)
			ft_pa(stack);
	if (dim <= 3)
	{
		ft_sort_three_b(stack, dim);
		return (1);
	}
	numbers = dim;
	if (!ft_partition(&pivot, stack->b, dim))
		return (0);
	while (dim != numbers / 2)
	{
		if (stack->b[0] >= pivot && dim--)
			ft_pa(stack);
		else if (++count_r)
			ft_rb(stack);
	}
	while (numbers / 2 != stack->last_b && count_r--)
		ft_rrb(stack);
	return (ft_quick_sort_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quick_sort_b(stack, numbers / 2, 0));
}

int	ft_quick_sort_a(t_stack *stack, int dim, int count_r)
{
	int	pivot;
	int	number_elems;

	if (ft_check_asc_order(stack->a, dim) == 1)
		return (1);
	number_elems = dim;
	if (dim <= 3)
	{
		ft_sort_three_a(stack, dim);
		return (1);
	}
	if (!count_r && !ft_partition(&pivot, stack->a, dim))
		return (0);
	while (dim != number_elems / 2 + number_elems % 2)
	{
		if (stack->a[0] < pivot && (dim--))
			ft_pb(stack);
		else if (++count_r)
			ft_ra(stack);
	}
	while (count_r--)
		ft_rra(stack);
	return (ft_quick_sort_a(stack, number_elems / 2 + number_elems % 2, 0)
		&& ft_quick_sort_b(stack, number_elems / 2, 0));
	return (1);
}
