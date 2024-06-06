/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:12:38 by nosman            #+#    #+#             */
/*   Updated: 2024/06/03 14:33:06 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_border(size_t i)
{
	while (--i > 0)
		ft_printf("-");
}

void	perr(int int_status)
{
	ft_printf("\e[31m");
	write (2, "Error\n", 6);
	ft_printf("\e[0m");
	exit (int_status);
}

void	mperr(char *str)
{
	size_t	i;

	i = ft_strlen(str) + 13;
	ft_border(i);
	ft_printf(" Error ya: ");
	ft_printf("%s", str);
	ft_printf("\n\e[90mKinda reminds me of my wife. cc: ;)\e[0m");
	ft_border(i);
}

void	ft_error(char *str)
{
	size_t	i;

	i = ft_strlen(str) + 12;
	ft_border(i);
	ft_printf("\e[90m====>\e[0m]");
	ft_printf("\e[31m%s", str);
	ft_printf("\n\e[90m<====\e[0m]");
	ft_border(i);
}
