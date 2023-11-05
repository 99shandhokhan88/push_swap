# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 16:47:10 by vzashev           #+#    #+#              #
#    Updated: 2023/11/05 19:35:09 by vzashev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS		=	ft_main.c \
				ft_init.c \
				ft_split.c \
				ft_utils.c \
				ft_sort.c \
				ft_checks.c \
				ft_swap.c \
				ft_sort_three.c \
				ft_rotate.c \
				ft_reverse_rotate.c \
				ft_quick_sort.c \
				ft_push.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc -g

HEADER		=	./push_swap.h

RM			=	rm -f

FLGS		=	-Wall -Wextra -Werror -g

%.o: %.c
	$(CC) ${FLGS} -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLGS) -o $(NAME) $(OBJS)
	@echo "\033[32mCompiled OK!\033[0m"

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "\033[33mclean OK!\033[0m"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
