/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:27:15 by lnicoter          #+#    #+#             */
/*   Updated: 2023/11/05 19:05:12 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three_ab(t_stack *stack, int dim)
{
	if (dim == 3 && stack->last_a == 3)
		ft_sort_three(stack);
	else if (dim == 2)
	{
		if (stack->a[0] > stack->a[1])
			ft_sa(stack);
	}
	else if (dim == 3)
	{
		while (dim != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (dim == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				ft_sa(stack);
			else if (dim == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				dim = ft_check_push(stack, dim, 1);
			else if (stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (dim++)
				ft_pa(stack);
		}
	}
}

int	ft_partition(int *pivot, int *stack, int dim)
{
	int	*tmp;
	int	i;
	int	j;

	tmp = (int *)malloc(sizeof(int) * dim);
	if (!tmp)
		return (0);
	i = 0;
	j = 0;
	while (i < dim)
		tmp[j++] = stack[i++];
	ft_temp_sort(tmp, dim);
	*pivot = tmp[dim / 2];
	free(tmp);
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
	int	numbers;

	if (ft_check_asc_order(stack->a, dim) == 1)
		return (1);
	numbers = dim;
	if (dim <= 3)
	{
		ft_sort_three_ab(stack, dim);
		return (1);
	}
	if (!count_r && !ft_partition(&pivot, stack->a, dim))
		return (0);
	while (dim != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && (dim--))
			ft_pb(stack);
		else if (++count_r)
			ft_ra(stack);
	}
	while (count_r--)
		ft_rra(stack);
	return (ft_quick_sort_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quick_sort_b(stack, numbers / 2, 0));
	return (1);
}
