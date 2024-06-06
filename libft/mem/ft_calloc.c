/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:11:23 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:11:25 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if ((!count) || (!size))
	{
		memory = malloc(1);
		if (!(memory))
			return (NULL);
		return (memory);
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	memory = malloc(size * count);
	if (!(memory))
		return (NULL);
	else
		ft_bzero(memory, size * count);
	return (memory);
}
