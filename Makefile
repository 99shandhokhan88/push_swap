# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 13:30:37 by vzashev           #+#    #+#              #
#    Updated: 2023/11/12 16:07:27 by vzashev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS		=	ft_atoi.c \
				ft_fill_stack.c \
				ft_main.c \
				ft_push.c \
				ft_quicksort.c \
				ft_reverse_rotate.c \
				ft_rotate.c \
				ft_sort.c \
				ft_split.c \
				ft_swap.c \
				ft_utils.c \

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc -g

RM			=	rm -f

FLGS		=	-Wall -Wextra -Werror -g

%.o: %.c
	$(CC) ${FLGS} -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLGS) -o $(NAME) $(OBJS)
	@echo "\033[32mCompiled, OK!\033[0m"

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "\033[33mClean, OK!\033[0m"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re