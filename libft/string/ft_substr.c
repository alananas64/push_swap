/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:08:40 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:08:42 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!(s))
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc ((len + 1) * sizeof(char));
	i = 0;
	if (!(sub))
		return (NULL);
	if (start < ft_strlen(s))
	{
		while ((s[start] != '\0') && (i < len))
		{
			sub[i] = s[start];
			start++;
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
