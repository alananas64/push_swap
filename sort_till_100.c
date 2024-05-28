/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_till_100.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:48:55 by nosman            #+#    #+#             */
/*   Updated: 2024/05/28 10:25:40 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pa in a row after the if condition:
// "if ((*b)->value < (*b)->next->value)
// 	sb(b);"
// pa(b, a);
// pa(b, a);
// pa(b, a);
t_stack	*sort_the_push_chunk(t_stack **a, t_stack **b)
{
	int	max;
	int	pos;
	int	mid;

	if (!b)
		return (NULL);
	while (list_size(*b))
	{
		max = get_max(*b);
		pos = get_pos(*b, max);
		mid = list_size(*b) / 2;
		if ((*b)->value == max)
			pa(b, a);
		else if (pos <= mid)
			rb(b);
		else
			rrb(b);
		if (list_size(*b) == 3)
			break ;
	}
	if ((*b)->value < (*b)->next->value)
		sb(b);
	while (*b)
		pa(b, a);
	return (*a);
}

void	push_the_chunk(t_stack **a, t_stack **b, int min, int max)
{
	int	size;
	int	x;

	x = list_size(*a);
	while (x)
	{
		x--;
		if ((*a)->value >= min && (*a)->value <= max)
		{
			pb(a, b);
			if ((*b)->value >= (min + max) / 2)
				rb(b);
		}
		else
			ra(a);
		if (*b)
		{
			size = list_size(*b);
			if (size == max + 1)
				break ;
		}
	}
}

// code block before return statement
// "if(a->value > a->next->value)
// 	sa(&a);
// else if (a->next->value > a->next->next->value)
// else"
t_stack	*sort_medium(t_stack *a, t_stack *b)
{
	int	size;
	int	min;
	int	max;
	int	tmp;
	int	i;

	i = 0;
	size = list_size(a);
	min = size / 4;
	min--;
	max = min;
	while (size > 34)
	{
		push_the_chunk(&a, &b, i, max);
		size = list_size(a);
		i = max + 1;
		tmp = max;
		max += min;
	}
	a = sort_the_push_chunk(&a, &b);
	a = sort_small(a, b, 35);
	return (a);
}

// t_stack	*sort_medium(t_stack *a, t_stack *b)
// {
// 	int	size;
// 	int	min;
// 	int	max;
// 	int	tmp;
// 	int	i;

// 	i = 0;
// 	size = list_size(a);
// 	min = size / 4;
// 	min--;
// 	max = min;
// 	while (max < size)
// 	{
// 		push_the_chunk(&a, &b, i, max);
// 		i = max + 1;
// 		tmp = max;
// 		max += min;
// 	}
// 	// if (size - tmp == 4)
// 	// 	sort_three(&a);
// 	// else
// 	// 	sort_more(a, b);
// 	// sort_the_push_chunk(a, b);
// 	size = list_size(a);
// 	if (size == 3)
// 		sort_three(&a);
// 	else
// 		a = sort_more(a, b);
// 	a = sort_the_push_chunk(&a, &b);
// 	return(a);
// }
