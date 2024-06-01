# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 11:33:45 by myousaf           #+#    #+#              #
#    Updated: 2024/06/01 10:14:27 by myousaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -O2
ARCHIVE	=	./libft/libft.a
SRC		=	./push_swap.c \
			./alias.c \
			./parsing_utils.c \
			./sort.c \
			./which_sort.c \
			./sort_three.c \
			./sort_four_more.c \
			./sort_utils.c \
			./stack_op_utils.c \
			./stack_operations_push.c \
			./stack_operations_rotate.c \
			./stack_operations_rr.c \
			./stack_operations_swap.c \
			./ft_string_check.c \
			./string_check_utils.c \
			./to_linked_list.c

REMOVE	=	a.out \
			a.out.dSYM \
			$(ARCHIVE)


OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(ARCHIVE) Makefile
	$(CC) $(CFLAGS) $(OBJ) $(ARCHIVE) -o $(NAME)

all:$(NAME)

$(ARCHIVE):
	@make -C libft

clean:
	@make clean -s -C libft
	@$(RM) $(OBJ)

fclean: clean
	@make fclean -s -C libft
	@$(RM)r $(NAME) $(REMOVE)

re: fclean all

debug: CFLAGS += -g3 -fsanitize=address
debug: re

.PHONY: all clean fclean re bonus debug
