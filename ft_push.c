/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:11:48 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/05 18:11:50 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa(t_stack *stack)
{
	int	len;

	len = stack->last_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->last_a++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->last_b)
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
	stack->last_b--;
	write(1, "pa\n", 3);
	return (1);
}

int	ft_pb(t_stack *stack)
{
	int	len;

	len = stack->last_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->last_b++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->last_a)
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
	stack->last_a--;
	write(1, "pb\n", 3);
	return (1);
}
