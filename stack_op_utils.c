/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:59:52 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/27 19:00:08 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

t_stack	*ft_beforlst(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next != NULL)
		lst = lst -> next;
	return (lst);
}

void	revers_rotate(t_stack **a)
{
	t_stack	*last_node;
	t_stack	*before_last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last_node = ft_lstlast(*a);
	before_last = ft_beforlst(*a);
	last_node->next = *a;
	before_last->next = NULL;
	*a = last_node;
}
