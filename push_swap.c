/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:34:32 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/28 10:36:58 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parse(int ac, char **av)
{
	size_t	array_size;
	char	**split_strings;
	int		i;
	int		*array;

	i = 0;
	array = NULL;
	array_size = 0;
	while (++i < ac)
	{
		split_strings = ft_string_check(av[i]);
		if (!split_strings)
			(ft_free_arr(split_strings), perr (6));
		array = ft_join_array(&array_size, array, split_strings);
	}
	ft_check_doubles(array, array_size);
	return (array);
}

// ft_printf ("ar_sz= {%i} \n", array_size);
void	ft_sort(int *array, int array_size, t_stack *list)
{
	list = ft_arr_to_linkedlist(array, array_size);
	list = ft_alias(list, array_size);
	// check if sorted
	list = ft_sort_list(list);
}

int	main(int ac, char **av)
{
	int		*array;
	t_stack	list;

	if (ac < 2 || (av[1] && av[1][0] == '\0'))
		return (1);
	if (arg_checker(av) == false)
		return (2);
	print_array (array, sizeof(&array) / sizeof(array[0]));
	ft_sort(array, sizeof(&array) / sizeof(array[0]), &list);
	return (0);
}
// int i = 1;
// while (av[i] != NULL)
// 	ft_printf ("result= {%c}\n", *av[i++]);
