/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:40:33 by myousaf           #+#    #+#             */
/*   Updated: 2024/06/01 01:19:59 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define _CRTDBG_MAP_ALLOC

# include <stdlib.h>
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

typedef struct s_stack_node
{
	t_stack	head;
	t_stack	tail;
}	t_stack_node;

/**
 * * error code:
 * 1	main: invlid argument(s)
 * 2	main: invalid argment contains invalid characters
 * 3	ft_sign_check: invlid sign
 * 4	ft_check_digit: invlid digit
 * 5	ft_string_check: invalid int value
 * 6	ft_string_check: error spilting strings
 * 7	atoll: value not in range of int
 * 8	ft_check_doubles: same value repeated twice
 * 9	ft_sort_list: invalid ammount of numbers
 * 10	
 * 11	
 * 12	
 * 13	
 * 14	
 * 15	
 * 16	
 * 17	
 * 18	
 * 19	
 * 20	
*/

// --- ft_string_check.c ---
char	**ft_string_check(char *s);
bool	arg_checker(char **av);
int		*ft_join_array(size_t *array_size, int *array, char **str);
int		ft_check_doubles(int *splited_arr, int arrlen);

// --- parsing_utils ---
void	free_arr(char **arr);
void	free_arr_int(int *arr);
void	free_list(t_stack *head);
int		arr_size(int *array);
int		ft_strarr_len(char **arr);

// --- sort_four_more ---
t_stack	*sort_four(t_stack *alias_list, t_stack *stack_b);
t_stack	*sort_more(t_stack *a, t_stack *b);

// --- sort_three ---
bool	sorted(t_stack *list);
t_stack	*find_max(t_stack *stack);
void	sort_three(t_stack **a);

// --- sort_utils ---
int		list_size(t_stack *list);
int		get_min(t_stack *list);
int		get_max(t_stack *list);
int		get_pos(t_stack *list, int min);
int		arr_len(int *arr);

// --- sort ---
t_stack	*sort_the_push_chunk(t_stack **a, t_stack **b);
void	push_the_chunk(t_stack **a, t_stack **b, int min, int max);
t_stack	*sort_medium(t_stack *a, t_stack *b);
t_stack	*sort_large(t_stack *a, t_stack *b);

// --- stack_op_utils ---
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_beforlst(t_stack *lst);
void	revers_rotate(t_stack **a);

// --- stack_op ---
void	pa(t_stack **b, t_stack	**a);
void	pb(t_stack	**a, t_stack **b);
void	ra(t_stack	**a);
void	rb(t_stack	**b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack	**a);
void	rrb(t_stack	**b);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack	**a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

// --- string_check_utils ---
int		ft_flag_check(int broken);
int		ft_sign_check(char **splited_arr, int i);
int		ft_arr_check(char **splited_arr, int i);

// --- alias ---
t_stack	*ft_alias(t_stack *list, int array_size);

// --- to_linked_list ---
void	print(t_stack *root);
t_stack	*ft_arr_to_linkedlist(int arr[], int n);

// --- to_linked_list ---
t_stack	*sort_small(t_stack *alias_list, t_stack *stack_b, int stack_size);
t_stack	*ft_sort_list(t_stack *alias_list);

#endif
