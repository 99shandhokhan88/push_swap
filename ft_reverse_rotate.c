/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:52:13 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/05 17:58:39 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rra(t_stack *stack)
{
	int	len;
	int	temp;

	temp = stack->a[stack->last_a - 1];
	len = stack->last_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->a[0] = temp;
	write(1, "rra\n", 4);
	return (1);
}

int	ft_rrb(t_stack *stack)
{
	int	len;
	int	temp;

	temp = stack->b[stack->last_b - 1];
	len = stack->last_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
	stack->b[0] = temp;
	write(1, "rrb\n", 4);
	return (1);
}

int	ft_rrr(t_stack *stack)
{
	int	len;
	int	temp;

	temp = stack->a[stack->last_a - 1];
	len = stack->last_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
	stack->a[0] = temp;
	temp = stack->b[stack->last_b - 1];
	len = stack->last_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
	stack->b[0] = temp;
	write(1, "rrr\n", 4);
	return (1);
}
