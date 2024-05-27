#include "push_swap.h"

// void	sort_large_chunk(t_node **a, t_node **b)
// {
// 	int	size;
// 	int	min;
// 	int	max;
// 	int	i;

// 	i = 0;
// 	size = lst_size(*a);
// 	min = size / 9;
// 	min--;
// 	max = min;
// 	while (max < size - 11)
// 	{
// 		push_the_chunk(a, b, i - 1, max + 4);
// 		i = max + 2;
// 		max += min;
// 	}
// 	sort_more(a, b);
// 	sort_the_push_chunk(a, b);
// }

t_stack	*sort_large(t_stack *a, t_stack *b)
{
	int	size;
	int	min;
	int	max;
	int	tmp;
	int	i;
	int m;

	i = 0;
	m = list_size(a);
	size = list_size(a);
	min = size / 9;
	min--;
	max = min;
	while (m > 34)
	{
		push_the_chunk(&a, &b, i - 1, max + 4);
		m = list_size(a);
		i = max + 2;
		tmp = max;
		max += min;
	}
	a = sort_the_push_chunk(&a, &b);
	a = sort_small(a, b, 35);
	return (0);
}
