/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:12:38 by nosman            #+#    #+#             */
/*   Updated: 2024/06/07 09:24:38 by nosman           ###   ########.fr       */
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
