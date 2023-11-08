/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:30:12 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/07 13:30:14 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(t_stack *stack)
{
	if (!ft_check_asc_order(stack->a, stack->last_a))
	{
		if (stack->last_a == 2)
			ft_sa(stack);
		else if (stack->last_a == 3)
			ft_sort_three(stack);
		else
			ft_quick_sort_a(stack, stack->last_a, 0);
	}
	return (0);
}
