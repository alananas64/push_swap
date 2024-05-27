/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:56:25 by myousaf           #+#    #+#             */
/*   Updated: 2024/04/23 17:16:38 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_border(size_t i)
{
	ft_printf("\e[31m");
	while (i > 0)
	{
		ft_printf("-");
		i--;
	}
	ft_printf("\e[0m\n");
}

void	perr(char *str)
{
	size_t	i;

	i = ft_strlen(str) + 14;
	ft_border(i);
	ft_printf("\e[1;31m Error ya: ");
	ft_printf("%s\e[22;0m\n", str);
	ft_border(i);
	exit(5);
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
