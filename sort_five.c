/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:42:52 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/27 21:46:37 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	uncle(t_stack *stack_a, t_stack *stack_b)
{
	pb (&stack_a, &stack_b);
	sort_four (stack_a, stack_b);
	pa (&stack_a, &stack_b);
}

static void	unclera(t_stack *stack_a, t_stack *stack_b)
{
	ra (&stack_a);
	pb (&stack_a, &stack_b);
	sort_four (stack_a, stack_b);
	pa (&stack_a, &stack_b);
}

static void	unclerra(t_stack *stack_a, t_stack *stack_b)
{
	pb (&stack_a, &stack_b);
	sort_four (stack_a, stack_b);
	pa (&stack_a, &stack_b);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	min;
	int	pos;

	min = get_min(stack_a);
	pos = get_pos(stack_a, min);
	if (pos == 1)
		uncle(stack_a, stack_b);
	else if (pos == 2)
		unclera(stack_a, stack_b);
	else if (pos == 3)
	{
		ra (&stack_a);
		unclera(stack_a, stack_b);
	}
	else if (pos == 4)
	{
		rra (&stack_a);
		unclerra(stack_a, stack_b);
	}
	else
		unclerra(stack_a, stack_b);
}
