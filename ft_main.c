/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:50:32 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/15 23:26:51 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	//char	**matrix;
	t_stack	stack;

	if (argc > 1)
	{
		if (argc == 2 && ft_str_chr(argv[1], ' '))
		{
			stack.flag = 1;
			ft_split(argv[1], ' ', &stack);
		}
		else
		{
			stack.flag = 0;
			argv++;
			ft_fill_stack(argv, &stack);
		}
		return (0);
	}
	return (0);
}
