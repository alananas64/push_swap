/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:39:11 by nosman            #+#    #+#             */
/*   Updated: 2024/05/27 19:47:00 by myousaf          ###   ########.fr       */
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
