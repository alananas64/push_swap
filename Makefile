# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 11:33:45 by myousaf           #+#    #+#              #
#    Updated: 2024/05/31 16:45:09 by myousaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -g3 -O2 -fsanitize=address
ARCHIVE	=	./libft/libft.a
SRC		=	ft_string_check.c \
			parsing_utils.c \
			string_check_utils.c \
			to_linked_list.c \
			stack_operations_swap.c \
			stack_operations_push.c \
			stack_operations_rotate.c \
			stack_operations_rr.c \
			sort_two_three.c \
			sort_four_more.c \
			sort_list.c \
			sort_utils.c \
			sort_till_100.c \
			sort_large.c \
			stack_op_utils.c \
			swap_utils.c \
			push_swap.c

REMOVE	=	a.out \
			a.out.dSYM \
			$(ARCHIVE)


OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(ARCHIVE)
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

.PHONY: all clean fclean re bonus debug
