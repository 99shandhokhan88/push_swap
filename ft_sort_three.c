/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:00:00 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/05 18:00:41 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack *stack)
{
	if ((stack->a[0] < stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		ft_sa(stack);
		ft_ra(stack);
	}
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if ((stack->a[0] < stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
		ft_rra(stack);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		ft_ra(stack);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		ft_sa(stack);
}
