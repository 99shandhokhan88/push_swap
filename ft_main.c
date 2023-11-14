/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:50:32 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/14 22:54:08 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**matrix;

	if (argc > 1)
	{
		if (argc == 2 && strchr(argv[1], ' '))
		{
			matrix = ft_split(argv[1], ' ');
			ft_fill_stack(matrix);
			ft_free_matrix(matrix);
		}
		else
		{
			argv++;
			ft_fill_stack(argv);
		}
		return (0);
	}
	return (0);
}
