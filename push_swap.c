/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:34:32 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/30 20:48:18 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parse(int ac, char **av, size_t *arr_sz)
{
	int		i;
	int		*array;
	char	**split_strings;

	i = 0;
	array = NULL;
	while (++i < ac)
	{
		split_strings = ft_string_check(av[i]);
		if (!split_strings)
		{
			ft_free_arr(split_strings);
			perr (6);
		}
		array = ft_join_array(arr_sz, array, split_strings);
		if (NULL == array)
		{
			ft_free_arr_int(array);
			perr (6);
		}
	}
	ft_check_doubles(array, *arr_sz);
	return (array);
}

void	ft_sort(int *array, int array_size, t_stack *list)
{
	list = ft_arr_to_linkedlist(array, array_size);
	list = ft_alias(list, array_size);
	if (sorted(list))
		return ;
	list = ft_sort_list(list);
}

int arr_size(int *array)
{
	int	i;

	i = 0;
	while (array[i++])
		;
	return (i);
}

int	main(int ac, char **av)
{
	t_stack	list;
	int		*array;
	size_t	arr_sz;

	array = NULL;
	arr_sz = 0;
	if (ac < 2)
		return (1);
	if (arg_checker(av) == false)
		perr (2);
	array = parse (ac, av, &arr_sz);
	ft_sort(array, arr_sz, &list);
	return (0);
}
