/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:16 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/07 14:55:57 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_dups(int *stack, int dim, t_stack *stack_struct)
{
	int	i;
	int	j;

	i = 0;
	while (i < dim)
	{
		j = i + 1;
		while (j < dim)
		{
			if (stack[i] == stack[j])
				ft_error(stack_struct);
			j++;
		}
		i++;
	}
}

void	ft_fill_stack(int argc, char **argv, int i, t_stack *stack)
{
	int	j;

	j = 0;
	stack->a = (int *)malloc(sizeof(int) * (argc));
	stack->b = (int *)malloc(sizeof(int) * (argc));
	while (i < argc)
	{
		stack->a[j] = ft_atoi(argv[i], stack);
		i++;
		j++;
	}
	ft_find_dups(stack->a, j, stack);
	stack->last_a = j;
	stack->last_b = 0;
}

t_stack	*ft_init(int argc, char **argv)
{
	t_stack	*stack;
	char	**parse_nums;
	int		nums_len;

	stack = NULL;
	parse_nums = NULL;
	nums_len = 0;
	if (argc == 2)
	{
		parse_nums = ft_split(argv[1], ' ');
		while (parse_nums[nums_len] != NULL)
			nums_len++;
		stack = malloc(sizeof(t_stack));
		ft_fill_stack(nums_len, parse_nums, 0, stack);
		ft_free_matrix(parse_nums);
	}
	if (argc >= 3)
	{
		stack = malloc(sizeof(t_stack));
		ft_fill_stack(argc, argv, 1, stack);
	}
	if (stack->last_a == 1)
		ft_exit(stack);
	return (stack);
}
