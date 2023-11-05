# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzashev <vzashev@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 16:47:10 by vzashev           #+#    #+#              #
#    Updated: 2023/11/05 18:53:53 by vzashev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC		=	ft_main.c \
			ft_init.c \
			ft_split.c \
			ft_utils.c \
			ft_sort.c \
			ft_checks.c \
			ft_swap.c \
			ft_sort_three.c \
			ft_rotate.c \
			ft_reverse_rotate.c \
			ft_quick_sort.c\
			ft_push.c \

OBJ		=	$(SRC:.c=.o)

CC		=	gcc -g

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[32mCompiled OK!\033[0m"
all:		$(NAME)

clean:
			make clean
			${RM} $(OBJ)
	@echo "\033[33mclean OK!\033[0m"
fclean: 	clean
			make fclean
			${RM} $(NAME) $(NAME_BONUS) ${OBJ}

re:			fclean all

.PHONY:		all clean fclean re
