/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alias.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:07:24 by nosman            #+#    #+#             */
/*   Updated: 2024/06/07 10:24:44 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_alias(t_stack *list, int array_size)
{
	int		index[4];
	int		*arr;
	t_stack	*final_list[3];

	final_list[1] = list;
	index[0] = -1;
	index[2] = list_size(list);
	arr = malloc(sizeof(int) * (index[2] + 1));
	while (++index[0] < index[2] && list)
	{
		final_list[0] = final_list[1];
		index[1] = -1;
		index[3] = 0;
		while (++index[1] < index[2] && final_list[0] != NULL)
		{
			if (list->value > final_list[0]->value)
				index[3]++;
			final_list[0] = final_list[0]->next;
		}
		arr[index[0]] = index[3];
		list = list->next;
	}
	final_list[2] = ft_arr_to_linkedlist(arr, array_size);
	return (free_arr_int(arr), final_list[2]);
}
