/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:28:17 by nosman            #+#    #+#             */
/*   Updated: 2024/06/04 08:00:47 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_small(t_stack *alias_list, t_stack *stack_b, int stack_size)
{
	if (stack_size == 2)
		sa(&alias_list);
	else if (stack_size == 3)
		sort_three(&alias_list);
	else if (stack_size == 4)
		alias_list = sort_four(alias_list, stack_b);
	else
		alias_list = sort_more(alias_list, stack_b);
	return (alias_list);
}

t_stack	*ft_sort_list(t_stack *alias_list)
{
	t_stack	*stack_b;
	int		list_len;

	stack_b = NULL;
	list_len = list_size(alias_list);
	if (list_len >= 2 && list_len <= 34)
		alias_list = sort_small(alias_list, stack_b, list_len);
	else if (list_len >= 35 && list_len <= 134)
		alias_list = sort_medium(alias_list, stack_b);
	else if (list_len >= 135 && list_len <= 500)
		alias_list = sort_large(alias_list, stack_b);
	else
		perr (9); //why??
	return (alias_list);
}
