/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:30:25 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/12 15:08:48 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *stack)
{
	int	temp;

	if (stack->len_a < 2)
		return ;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	write(1, "sa\n", 3);
	stack->moves++;
}

void	ft_sb(t_stack *stack)
{
	int	temp;

	if (stack->len_b < 2)
		return ;
	temp = stack->b[1];
	stack->b[1] = stack->b[0];
	stack->b[0] = temp;
	write(1, "sb\n", 3);
	stack->moves++;
}

void	ft_ss(t_stack *stack)
{
	int	temp_a;
	int	temp_b;

	if (stack->len_a < 2 || stack->len_b < 2)
		return ;
	temp_a = stack->a[1];
	stack->a[1] = stack->a[0];
	stack->a[0] = temp_a;
	temp_b = stack->b[1];
	stack->b[1] = stack->b[0];
	stack->b[0] = temp_b;
	write(1, "ss\n", 3);
	stack->moves++;
}
