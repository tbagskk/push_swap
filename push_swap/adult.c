#include "push_swap.h"

void	adult_sort(t_push *push)
{	
	int pos;
	int i;
	int size;

	size = push->size_a;
	
	while (i < size)
	{
		pos = middle_tri(push);
		moove_midle(push, pos);
		pb(push);
		i++;
	}
	i = 0;
	while (i < size)
	{
		pa(push);
		i++;
	}	
}

void adult_tri(t_push *push)
{
	int	i;
	int tmp;

	i = 0;
	while (i < push->size_a)
	{
		tmp = ft_min(push->a[i])
	}
}