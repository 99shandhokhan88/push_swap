/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:53 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/11 23:59:35 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *stack)
{
	int	temp;
	int	i;

	i = 0;
	if (stack->len_a < 2)
		return ;
	temp = stack->a[0];
	while (i < stack->len_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = temp;
	write(1, "ra\n", 3);
	stack->moves++;
}

void	ft_rb(t_stack *stack)
{
	int	temp;
	int	i;

	i = 0;
	if (stack->len_b < 2)
		return ;
	temp = stack->b[0];
	while (i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = temp;
	write(1, "rb\n", 3);
	stack->moves++;
}

void	ft_rr(t_stack *stack)
{
	int	temp_a;
	int	temp_b;
	int	i;

	if (stack->len_a < 2 || stack->len_b < 2)
		return ;
	temp_a = stack->a[0];
	temp_b = stack->b[0];
	i = 0;
	while (i < stack->len_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = temp_a;
	i = 0;
	while (i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = temp_b;
	write(1, "rr\n", 3);
	stack->moves++;
}
