/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:03:17 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/12 15:01:28 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_temp_sort(int *temp_stack, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (temp_stack[i] > temp_stack[j])
			{
				temp = temp_stack[i];
				temp_stack[i] = temp_stack[j];
				temp_stack[j] = temp;
			}
			j++;
		}
		i++;
	}
}

static	int	ft_check_pivot(int *pivot, int *stack, int size)
{
	int		*temp_stack;
	int		i;

	temp_stack = (int *)malloc(size * sizeof(int));
	if (!temp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		temp_stack[i] = stack[i];
		i++;
	}
	ft_temp_sort(temp_stack, size);
	*pivot = temp_stack[size / 2];
	free(temp_stack);
	return (1);
}

static	void	ft_quicksort_stacks(t_stack *stack, int len)
{
	if (len == 3 && stack->len_a == 3)
		ft_sort_3a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			ft_sa(stack);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && stack->a[0] > stack->a[1]
				&& stack->a[2])
				ft_sa(stack);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				len = ft_check_push(stack, len, 0);
			else if (stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (len++)
				ft_pa(stack);
		}
	}
}

int	ft_quicksort_b(t_stack *stack, int len, int count_rot)
{
	int	pivot;
	int	numbers;

	if (ft_check_order(stack->b, len, 1) == 1)
		while (len--)
			ft_pa(stack);
	if (len <= 3)
	{
		ft_sort_3b(stack, len);
		return (1);
	}
	numbers = len;
	if (!ft_check_pivot(&pivot, stack->b, len))
		return (0);
	while (len != numbers / 2)
	{
		if (stack->b[0] >= pivot && len--)
			ft_pa(stack);
		else if (++count_rot)
			ft_rb(stack);
	}
	while (numbers / 2 != stack->len_b && count_rot)
		ft_rrb(stack);
	return (ft_quicksort_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_b(stack, numbers / 2, 0));
}

int	ft_quicksort_a(t_stack *stack, int len, int count_rot)
{
	int	pivot;
	int	numbers;

	if (ft_check_order(stack->a, len, 0) == 1)
		return (1);
	numbers = len;
	if (len <= 3)
	{
		ft_quicksort_stacks(stack, len);
		return (1);
	}
	if (!ft_check_pivot(&pivot, stack->a, len))
		return (0);
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && (len--))
			ft_pb(stack);
		else if (++count_rot)
			ft_ra(stack);
	}
	while (numbers / 2 + numbers % 2 != stack->len_a && count_rot)
		ft_rra(stack);
	return (ft_quicksort_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_b(stack, numbers / 2, 0));
	return (1);
}
