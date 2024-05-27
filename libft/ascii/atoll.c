/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 07:49:18 by myousaf           #+#    #+#             */
/*   Updated: 2024/04/09 14:46:09 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ascii.h"

long long	ft_atoll(const char *str)
{
	long		i;
	long		sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	if ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (result < INT_MIN || result > INT_MAX)
		perr ("not in int range");
	// printf ("<<<<<<HERE>>>>>>");
	return (result * sign);
}
// int max