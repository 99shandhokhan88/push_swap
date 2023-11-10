/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:53 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/07 13:29:55 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ra(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->a[0];
	while (i < stack->last_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = temp;
	write(1, "ra\n", 3);
	return (1);
}

int	ft_rb(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->b[0];
	while (i < stack->last_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = temp;
	write(1, "rb\n", 3);
	return (1);
}

int	ft_rr(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->a[0];
	while (i < stack->last_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = temp;
	i = 0;
	temp = stack->b[0];
	while (i < stack->last_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = temp;
	write(1, "rr\n", 3);
	return (1);
}
