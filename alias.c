/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alias.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 22:53:17 by myousaf           #+#    #+#             */
/*   Updated: 2024/06/01 10:12:50 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * index[0]	-	
 * index[1]	-	
 * index[2]	-	list length/size
 * index[3]	-	counter
 * removed variable num
 * removed temp = NULL;
 */
t_stack	*ft_alias(t_stack *list, int array_size)
{
	int		index[4];
	int		*arr;
	t_stack	*temp;
	t_stack	*head;
	t_stack	*final;

	head = list;
	index[0] = -1;
	index[2] = list_size(list);
	arr = malloc(sizeof(int) * (index[2] + 1));
	while (++index[0] < index[2] && list)
	{
		temp = head;
		index[1] = -1;
		index[3] = 0;
		while (++index[1] < index[2] && temp != NULL)
		{
			if (list->value > temp->value)
				index[3]++;
			temp = temp->next;
		}
		arr[index[0]] = index[3];
		list = list->next;
	}
	return (final = ft_arr_to_linkedlist(arr, array_size));
}
// int		len;
// len = list_size(list);
// arr = malloc(sizeof(int) * (len + 1));
// while (++index[0] < len && list)
// while (++index[1] < len && temp != NULL)
// int		counter;
// counter = 0;
// counter++;
// arr[index[0]] = counter;
