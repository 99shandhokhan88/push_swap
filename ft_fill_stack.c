/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:24:18 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/14 22:58:17 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(char **argv)
{
	t_stack	stack;
	int		size;
	int		i;

	stack.moves = 0;
	i = -1;
	size = ft_len_stack(argv);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.len_a = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.len_b = 0;
	while (++i < size)
		stack.a[i] = ft_atoi(argv[i], stack.a);
	ft_find_doubles(stack.a, size);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix && matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
