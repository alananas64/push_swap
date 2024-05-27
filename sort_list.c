/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:28:17 by nosman            #+#    #+#             */
/*   Updated: 2024/05/27 14:08:30 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_small(t_stack *alias_list, t_stack *stack_b, int stack_size)
{
	// (void)stack_b;
	// if (is_it_sorted(alias_list))
	// 	return();
	if (stack_size == 2)
		sa(&alias_list);
	else if (stack_size == 3)
		sort_three(&alias_list);
	else if (stack_size == 4)
		alias_list = sort_four(alias_list, stack_b);
	else
		alias_list = sort_more(alias_list, stack_b);
	return(alias_list);
}

t_stack	*ft_sort_list(t_stack *alias_list)
{
	t_stack *stack_b = NULL;
	int		list_len;

	list_len = list_size(alias_list);
	// if (list_len == 1)
	// 	return ;
	if (list_len >= 2 && list_len <= 34)
		alias_list = sort_small(alias_list, stack_b, list_len);
	else if (list_len >= 35 && list_len <= 134)
		alias_list = sort_medium(alias_list, stack_b);
	// else if (list_len >= 135)
	// 	sort_large(alias_list, stack_b);
	else
		printf("handle more");
	return(alias_list);
}

///////// sort small is working here
///////// sort medium is working here 
