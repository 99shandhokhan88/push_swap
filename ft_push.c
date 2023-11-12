/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:28 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/12 00:06:58 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *stack)
{
	int	i;

	if (!stack->b)
		return ;
	stack->len_a++;
	i = stack->len_a - 1;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = stack->b[0];
	i = 0;
	while (i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->len_b--;
	write(1, "pa\n", 3);
	stack->moves++;
}

void	ft_pb(t_stack *stack)
{
	int	i;

	if (!stack->a)
		return ;
	stack->len_b++;
	i = stack->len_b - 1;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = stack->a[0];
	i = 0;
	while (i < stack->len_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->len_a--;
	write(1, "pb\n", 3);
	stack->moves++;
}
