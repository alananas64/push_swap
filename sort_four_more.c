/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_more.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:31:38 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 11:32:52 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*uncle(t_stack *stack_a, t_stack *stack_b)
{
	pb(&stack_a, &stack_b);
	sort_three(&stack_a);
	pa(&stack_b, &stack_a);
	while (stack_b)
		pa(&stack_b, &stack_a);
	return (stack_a);
}

t_stack	*sort_four(t_stack *alias_list, t_stack *stack_b)
{
	int	min;
	int	pos;

	min = get_min(alias_list);
	pos = get_pos(alias_list, min);
	if (pos == 1)
		alias_list = uncle(alias_list, stack_b);
	else if (pos == 2)
	{
		ra(&alias_list);
		alias_list = uncle(alias_list, stack_b);
	}
	else if (pos == 3)
	{
		rra(&alias_list);
		rra(&alias_list);
		alias_list = uncle(alias_list, stack_b);
	}
	else
	{
		rra(&alias_list);
		alias_list = uncle(alias_list, stack_b);
	}
	return (alias_list);
}

t_stack	*sort_more(t_stack *a, t_stack *b)
{
	int	min;
	int	pos;
	int	size;
	int	current_size;

	size = list_size(a);
	while (1)
	{
		current_size = list_size(a);
		if (current_size == 4)
			break ;
		min = get_min(a);
		pos = get_pos(a, min);
		if ((a)->value == min)
			pb(&a, &b);
		else if (pos < size / 2)
			ra(&a);
		else
			rra(&a);
	}
	a = sort_four(a, b);
	return (a);
}
