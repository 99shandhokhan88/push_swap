/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:30:25 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/07 13:30:27 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sa(t_stack *stack)
{
	int		temp;

	if (!stack->a[0] || !stack->a[1])
		return (0);
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	write(1, "sa\n", 3);
	return (1);
}

int	ft_sb(t_stack *stack)
{
	int		temp;

	if (stack->last_b == 0 || stack->last_b == 1)
		return (0);
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	write(1, "sb\n", 3);
	return (1);
}

int	ft_ss(t_stack *stack)
{
	int	temp;

	if ((!stack->a[0] || !stack->a[1]) || (!stack->b[0] || !stack->b[1]))
		return (0);
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	write(1, "ss\n", 3);
	return (1);
}
