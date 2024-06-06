/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:05:52 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:05:54 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

t_stack	*sort_medium(t_stack *a, t_stack *b)
{
	int	size;
	int	min;
	int	max;
	int	i;

	i = 0;
	size = list_size(a);
	min = size / 4;
	min--;
	max = min;
	while (list_size(a) > 34)
	{
		push_the_chunk(&a, &b, i, max);
		i = max + 1;
		max += min;
	}
	a = sort_the_push_chunk(&a, &b);
	a = sort_more(a, b);
	return (a);
}

t_stack	*sort_large(t_stack *a, t_stack *b)
{
	int	size;
	int	min;
	int	max;
	int	i;

	i = 0;
	size = list_size(a);
	min = size / 9;
	min--;
	max = min;
	while (list_size(a) > 34)
	{
		push_the_chunk(&a, &b, i - 1, max + 4);
		i = max + 2;
		max += min;
	}
	a = sort_the_push_chunk(&a, &b);
	a = sort_more(a, b);
	return (a);
}
