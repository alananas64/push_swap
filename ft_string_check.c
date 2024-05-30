/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:40:48 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/30 20:47:34 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	arg_checker(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[++i])
	{
		while (av[i][j] && av[i][j] == ' ')
		{
			j++;
			if (av[i][j] == '\0')
				return (false);
		}
	}
	i = 0;
	while (av[i])
	{
		if (av[i][0] == '\0')
			return (false);
		i++;
	}
	return (true);
}

int	*ft_join_array(size_t *array_size, int *array, char **str)
{
	size_t	i[2];
	size_t	len;
	int		*new_array;

	new_array = NULL;
	ft_memset(i, 0, sizeof(i));

// ft_printf ("i[0]= {%i}\ni[0]= {%i}\n", i[0], i[1]); // debug

	len = ft_strarr_len(str);
	new_array = malloc(sizeof(int) * (len + *array_size));
	if (!new_array)
		return (0);
	while (i[0] < *array_size)
	{
		new_array[i[0]] = array[i[0]];
		i[0]++;
	}
	while (str[i[1]])
	{
		new_array[i[0] + i[1]] = ft_atoi(str[i[1]]);
		i[1]++;
	}
	ft_free_arr(str);
	if (*array_size)
		free(array);
	*array_size += len;
	return (new_array);
}

int	ft_check_doubles(int *splited_arr, int arrlen)
{
	int	i;
	int	j;

	i = 0;
	while (i < arrlen)
	{
		j = i + 1;
		while ((j < arrlen) && (splited_arr[i] != splited_arr[j]))
			j++;
		if ((j < arrlen) && (splited_arr[i] == splited_arr[j]))
			perr (8);
		i++;
	}
	return (0);
}

char	**ft_string_check(char *s)
{
	int			i;
	int			broken;
	char		**splited_arr;
	long long	result;

	i = -1;
	broken = 0;
	splited_arr = ft_split(s, ' ');
	while (splited_arr[++i])
	{
		ft_arr_check(splited_arr, i);
		result = ft_atoll(splited_arr[i]);
	}
	return (splited_arr);
}
