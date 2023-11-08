/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:30:45 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/07 15:02:53 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	last_a;
	int	last_b;
}		t_stack;

t_stack	*ft_init(int argc, char **argv);
char	**ft_split(const char *s, char c);
void	ft_free_matrix(char **matrix);
void	ft_exit(t_stack *stack);
void	ft_error(t_stack *stack_struct);
int		ft_sort(t_stack *stack);
void	ft_fill_stack(int argc, char **argv, int i, t_stack *stack);
void	ft_sort_three(t_stack *stack);
void	ft_temp_sort(int *temp_stack, int dim);
int		ft_check_asc_order(int *stack, int dim);
int		ft_atoi(char *num, t_stack *stack_struct);
int		ft_check_desc_order(int *stack, int dim);
int		ft_check_push(t_stack *stack, int dim, int n);
void	ft_find_dups(int *stack, int dim, t_stack *stack_struct);
int		ft_partition(int *pivot, int *stack, int dim);
int		ft_sort_three_b(t_stack *stack, int dim);
int		ft_quick_sort_a(t_stack *stack, int dim, int count_r);
void	ft_sort_three_a(t_stack *stack, int dim);
int		ft_quick_sort_b(t_stack *stack, int dim, int count_r);
int		ft_sa(t_stack *stack);
int		ft_sb(t_stack *stack);
int		ft_ss(t_stack *stack);
int		ft_pa(t_stack *stack);
int		ft_pb(t_stack *stack);
int		ft_ra(t_stack *stack);
int		ft_rb(t_stack *stack);
int		ft_rr(t_stack *stack);
int		ft_rra(t_stack *stack);
int		ft_rrb(t_stack *stack);
int		ft_rrr(t_stack *stack);

#endif
