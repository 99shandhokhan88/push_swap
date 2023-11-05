/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:48:45 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/05 19:06:00 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

#ifndef MAX_INT
# define MAX_INT 2147483647
#endif

#ifndef MIN_INT
# define MIN_INT -2147483648
#endif

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	last_a;
	int	last_b;
}		t_stack;

t_stack	*init(int argc, char **argv);
char	**ft_split(const char *s, char c);
int	ft_atoi(char *num, int *stack, t_stack *stack_struct);
void	ft_free_matrix(char **matrix);
void	ft_exit(t_stack *stack);
int	ft_sort(t_stack *stack);
void	ft_fill_stack(int argc, char **argv, int i, t_stack *stack);
void	ft_sort_three(t_stack *stack);
void	ft_temp_sort(int *temp_stk, int dim);
int	ft_check_asc_order(int *stack, int dim);
int	ft_check_desc_order(int *stack, int dim);
int	ft_check_push(t_stack *stack, int dim, int n);
void	ft_error(int *stack, t_stack *stack_struct);
void	ft_find_dups(int *stack, int dim, t_stack *stack_struct);
void	ft_sort_three_ab(t_stack *stack, int dim);
int		ft_partition(int *pivot, int *stack, int dim);
int		ft_sort_three_b(t_stack *stack, int dim);
int		ft_quick_sort_a(t_stack *stack, int dim, int count_r);
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
