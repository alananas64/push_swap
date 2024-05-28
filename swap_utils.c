/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 22:53:17 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/28 00:17:04 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_alias(t_stack *list, int array_size)
{
	int		len;
	int		index[2];
	int		num;
	int		counter;
	int		*arr;
	t_stack *temp;
	t_stack *head;
	t_stack *final;

	len = list_size(list);
	temp = NULL;
	index[0] = 0;
	arr = malloc(sizeof(int) * (len + 1));
	head = list;
	while (index[0] < len && list)
	{
		temp = head;
		num = list->value;
		index[1] = 0;
		counter = 0;
		while (index[1] < len && temp != NULL)
		{
			if (num > temp->value)
				counter++;
			temp = temp->next;
			index[1]++;
		}
		arr[index[0]] = counter;
		list = list->next;
		index[0]++;
	}
	final = ft_arr_to_linkedlist(arr, array_size);
	return (final);
}
