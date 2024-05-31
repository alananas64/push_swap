/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:54:15 by myousaf           #+#    #+#             */
/*   Updated: 2024/06/01 00:14:22 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_stack *root)
{
	ft_printf("root->");
	while (root != NULL)
	{
		ft_printf("{%d}->", root->value);
		root = root->next;
	}
	printf("{NULL}\n");
}

void	insert(t_stack **root, int item)
{
	t_stack	*temp;
	t_stack	*ptr;

	temp = (t_stack *) malloc(sizeof(t_stack));
	if (!temp)
		return ;
	temp->value = item;
	temp->next = NULL;
	if (*root == NULL)
		*root = temp;
	else
	{
		ptr = *root;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}

t_stack	*ft_arr_to_linkedlist(int arr[], int n)
{
	t_stack	*root;
	int		i;

	i = 0;
	root = NULL;
	while (i < n)
		insert(&root, arr[i++]);
	return (root);
}
