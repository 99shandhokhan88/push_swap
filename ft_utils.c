/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:30:32 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/14 23:15:35 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_str_chr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

int	ft_len_stack(char **argv)
{
	int	i;

	i = 0;
	if (argv == NULL)
	{
		return (0);
	}
	while (argv[i] != NULL)
		i++;
	return (i);
}

int	ft_check_order(int *stack, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] > stack[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_find_doubles(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack[i] == stack[j])
				ft_error(stack);
			j++;
		}
		i++;
		j = i + 1;
	}
}
