/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_check_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:55:49 by nosman            #+#    #+#             */
/*   Updated: 2024/05/31 10:06:16 by nosman           ###   ########.fr       */
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
