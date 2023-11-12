/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:48 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/12 15:05:44 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *stack)
{
	int	temp;
	int	i;

	i = stack->len_a - 1;
	temp = stack->a[i];
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = temp;
	write(1, "rra\n", 4);
	stack->moves++;
}

void	ft_rrb(t_stack *stack)
{
	int	temp;
	int	i;

	i = stack->len_b - 1;
	temp = stack->b[i];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = temp;
	write(1, "rrb\n", 4);
	stack->moves++;
}

void	ft_rrr(t_stack *stack)
{
	int	temp_a;
	int	temp_b;
	int	i;

	i = stack->len_a - 1;
	if (stack->len_a < 2 || stack->len_b < 2)
		return ;
	temp_a = stack->a[i];
	temp_b = stack->b[0];
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = temp_a;
	i = stack->len_b - 1;
	temp_b = stack->b[i];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = temp_b;
	write(1, "rrr\n", 4);
	stack->moves++;
}
