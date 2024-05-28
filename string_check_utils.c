/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_check_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:55:49 by nosman            #+#    #+#             */
/*   Updated: 2024/05/28 02:04:42 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_flag_check(int broken)
{
	if (broken)
		return (broken);
	return (0);
}

int	ft_sign_check(char **splited_arr, int i)
{
	if (splited_arr[i][0] == '-' || splited_arr[i][0] == '+')
	{
		if (!splited_arr[i][1])
			perr(2);
		return (0);
	}
	return (1);
}

int	ft_arr_check(char **splited_arr, int i)
{
	int	j;

	j = 0;
	if (ft_sign_check(splited_arr, i) == 0)
		j++;
	while (splited_arr[i][j] != '\0')
	{
		if (ft_isdigit(splited_arr[i][j]) == 0)
			perr (3);
		j++;
	}
	return (j);
}

// int	ft_arr_check(char **splited_arr, int i, int k)
// {
// 	k = 0;
// 	if (ft_sign_check(splited_arr, i) != 0)
// 		return (-1);
// 	k++;
// 	if (ft_check_digit(splited_arr, i, k) != 0)
// 		return (-1);
// 	while (splited_arr[i][k] && ft_isdigit(splited_arr[i][k]))
// 		k++;
// 	if (splited_arr[i][k] && (!ft_isdigit(splited_arr[i][k]) && \
// 			splited_arr[i][k] != 9 && splited_arr[i][k] != 32))
// 		return (-1);
// 	return (k);
// }
