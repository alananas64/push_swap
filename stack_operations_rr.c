/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_rr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:05:12 by nosman            #+#    #+#             */
/*   Updated: 2024/06/01 13:05:14 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack	**a)
{
	revers_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack	**b)
{
	revers_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	revers_rotate(a);
	revers_rotate(b);
	ft_printf("rrr\n");
}
