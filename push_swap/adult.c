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
	}
	
}