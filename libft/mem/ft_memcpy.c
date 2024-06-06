/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:11:02 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:11:04 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*des;
	char	*sr;

	if ((!dest) && (!src))
		return (NULL);
	des = (char *)dest;
	sr = (char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
