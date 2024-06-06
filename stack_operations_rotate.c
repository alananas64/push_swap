/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:05:26 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:05:28 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// while loop after inititalizing
// while (temp->next != last_node)
// 	temp = temp->next;
void	rotate(t_stack **stack)
{
	t_stack	*last_node;
	t_stack	*temp;

	temp = *stack;
	last_node = ft_lstlast(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
}

void	ra(t_stack	**a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack	**b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
