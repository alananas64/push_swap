/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:41:16 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/30 20:43:21 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_large(t_stack *a, t_stack *b)
{
	int	size;
	int	min;
	int	max;
	int	i;

	i = 0;
	size = list_size(a);
	min = list_size(a) / 9;
	min--;
	max = min;
	while (list_size(a) > 34)
	{
		push_the_chunk(&a, &b, i - 1, max + 4);
		i = max + 2;
		max += min;
	}
	a = sort_the_push_chunk(&a, &b);
	a = sort_small(a, b, 35);
	return (a);
}
