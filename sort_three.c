/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:02:44 by myousaf           #+#    #+#             */
/*   Updated: 2024/06/01 02:53:06 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	sorted(t_stack *list)
{
	if (!list)
		return (1);
	while (list->next)
	{
		if (list->value > list->next->value)
			return (false);
		list = list->next;
	}
	return (true);
}

t_stack	*find_max(t_stack *stack)
{
	long	max;
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

void	sort_three(t_stack **a)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
