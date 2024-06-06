/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:15:26 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:15:28 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ascii.h"

int	*ft_atoi_ptr(const char *str)
{
	int		*ptr;

	ptr = malloc(sizeof(int));
	*ptr = (int)(ft_atoi(str));
	return (ptr);
}
