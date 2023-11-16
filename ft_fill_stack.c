/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:24:18 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/16 17:38:41 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(char **argv, t_stack *stack)
{
	int		size;
	int		i;

	stack->moves = 0;
	i = -1;
	size = ft_len_stack(argv);
	stack->a = malloc(size * sizeof(int));
	if (!stack->a)
		return ;
	stack->len_a = size;
	stack->len_b = 0;
	while (++i < size)
		stack->a[i] = ft_atoi(argv[i], stack->a, argv, stack);
	ft_find_doubles(stack->a, size, argv, stack);
	stack->b = malloc(size * sizeof(int));
	if (!stack->b)
	{
		free(stack->a);
		return ;
	}
	ft_sort(stack, size);
	free(stack->a);
	free(stack->b);
}

void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
