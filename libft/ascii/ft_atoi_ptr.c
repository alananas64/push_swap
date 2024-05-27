/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:44:04 by myousaf           #+#    #+#             */
/*   Updated: 2024/04/10 14:52:52 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ascii.h"

// static	int	minlong(long n, int sign, char c)
// {
// 	if ((((n == 922337203685477580) && (c > '8')) && (sign == -1))
// 		|| ((n > 922337203685477580) && (sign == -1)))
// 		return (1);
// 	else
// 		return (0);
// }

// static	int	maxlong(long n, int sign, char c)
// {
// 	if (((n > 922337203685477580) && (sign == 1))
// 		|| ((n == 922337203685477580) && (sign == 1) && (c > '7')))
// 		return (1);
// 	else
// 		return (0);
// }

int	*ft_atoi_ptr(const char *str)
{
	int		*ptr;

	ptr = malloc(sizeof(int));
	*ptr = (int)(ft_atoi(str));
	return (ptr);
}

// static int	*ft_atoi_ptr(const char *str)
// {
// 	long	i;
// 	long	sign;
// 	long	result;
// 	int		*ptr;

// 	i = 0;
// 	sign = 1;
// 	result = 0;
// 	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
// 		i++;
// 	if ((str[i] == 45) || (str[i] == 43))
// 	{
// 		if (str[i] == 45)
// 			sign *= -1;
// 		i++;
// 	}
// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		if (maxlong(result, sign, str[i]) == 1)
// 			return (NULL);
// 		else if (minlong(result, sign, str[i]) == 1)
// 			return (NULL);
// 		result = result * 10 + str[i] - '0';
// 		i++;
// 	}
// 	ptr = malloc(sizeof(int));
// 	*ptr = (int)(result * sign);
// 	return (ptr);
// }
