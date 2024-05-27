# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 15:41:48 by myousaf           #+#    #+#              #
#    Updated: 2024/05/01 10:51:59 by myousaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -g3 -O2 -fsanitize=address
# LDFLAGS	=	-g3 -O2 -fsanitize=address
FR		=	libft.a \
			.vscode \
			push_swap.dSYM \
			a.out

CFILES	=	./ascii/atoll.c \
			./ascii/ft_atoi.c \
			./ascii/ft_atoi_ptr.c \
			./ascii/ft_itoa.c \
			./ft_is/ft_isalnum.c \
			./ft_is/ft_isalpha.c \
			./ft_is/ft_isascii.c \
			./ft_is/ft_isdigit.c \
			./ft_is/ft_isprint.c \
			./ft_printf/ft_char.c \
			./ft_printf/ft_hexa.c \
			./ft_printf/ft_nbr.c \
			./ft_printf/ft_perr.c \
			./ft_printf/ft_printf.c \
			./ft_printf/ft_ptr.c \
			./ft_printf/ft_putchar_fd.c \
			./ft_printf/ft_putendl_fd.c \
			./ft_printf/ft_putnbr_fd.c \
			./ft_printf/ft_putstr_fd.c \
			./mem/ft_bzero.c \
			./mem/ft_calloc.c \
			./mem/ft_memchr.c \
			./mem/ft_memcmp.c \
			./mem/ft_memcpy.c \
			./mem/ft_memmove.c \
			./mem/ft_memset.c \
			./string/ft_split.c \
			./string/ft_strchr.c \
			./string/ft_strdup.c \
			./string/ft_striteri.c \
			./string/ft_strjoin.c \
			./string/ft_strlcat.c \
			./string/ft_strlcpy.c \
			./string/ft_strlen.c \
			./string/ft_strmapi.c \
			./string/ft_strncmp.c \
			./string/ft_strnstr.c \
			./string/ft_strrchr.c \
			./string/ft_strtrim.c \
			./string/ft_substr.c \
			./string/ft_tolower.c \
			./string/ft_toupper.c

OFILES	=	$(CFILES:.c=.o)

all:$(NAME)

$(NAME) : $(OFILES)
	@ar -rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(FR)

re: fclean all

.PHONY: all clean fclean re
