/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:30:45 by vzashev           #+#    #+#             */
/*   Updated: 2023/11/15 23:22:46 by ofadhel          ###   ########.fr       */
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
	int	flag;
	int	len_a;
	int	len_b;
	int	moves;
}	t_stack;

// ft_atoi.c
void	ft_error(int *stack);
int		ft_is_digit(int c);
int		ft_atoi(char *num, int *stack, char **argv, t_stack *stac);

// ft_main.c
void	ft_fill_stack(char **argv, t_stack *stack);
int		main(int argc, char **argv);

// ft_push.c
void	ft_pa(t_stack *stack);
void	ft_pb(t_stack *stack);

// ft_quicksort.c
int		ft_quicksort_a(t_stack *stack, int len, int count_rot);
int		ft_quicksort_b(t_stack *stk, int len, int count_rot);

// ft_reverse_rotate.c
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *stack);

// ft_rotate.c
void	ft_ra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rr(t_stack *stack);

void	ft_free_matrix(char **matrix);

// ft_sort.c
int		ft_sort(t_stack *stack, int size);
void	ft_sort_3a(t_stack *stack);
int		ft_sort_3b(t_stack *stack, int len);
int		ft_check_push(t_stack *stak, int dim, int push);

// ft_split.c
char	**ft_split(char const *s, char c, t_stack *stack);
char	*strsub(char const *s, unsigned int start, size_t len);
int		count_words(char const *s, char c);
size_t	ft_strlen(const char *s);

// ft_swap.c
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack);

// ft_utils.c
char	*ft_str_chr(const char *s, int c);
void	ft_find_doubles(int *stack, int size);
int		ft_check_order(int *stack, int size, int order);
int		ft_len_stack(char **argv);

#endif
