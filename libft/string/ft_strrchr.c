/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:08:53 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:08:55 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	char	n;
	char	*str;
	int		i;
	int		len;

	n = (char)c;
	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	while (len >= 0)
	{
		if (s[len] == n)
		{
			return (str + len);
		}
		len--;
	}
	return (NULL);
}
