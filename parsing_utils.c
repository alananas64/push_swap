/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:06:48 by nosman            #+#    #+#             */
/*   Updated: 2024/06/04 09:14:59 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	free_arr_int(int *arr)
{
	if (!arr)
		return ;
	free(arr);
}

int	arr_size(int *array)
{
	int	i;

	i = -1;
	while (array[++i])
		;
	return (i);
}

int	ft_strarr_len(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i])
		i++;
	return (i);
}

void	free_list(t_stack *head)
{
	t_stack	*current;
	t_stack	*next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		if (next == NULL)
			return ;
		current = next;
	}
}
