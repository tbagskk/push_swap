#include "push_swap.h"

void decale_a(t_push *push)
{
	int	i;
	int index;
	int	size;

	i = 0;
	size = push->size_a;
	
	index = push->index_a;
	if (index > size / 2)
	{
		while (index < size)
		{
			rra(push);
			index++;
		}
	}
	else if (index <= size / 2)
	{
		while (index > 0)
		{
			ra(push);
			index--;
		}
	}
	index = 0;
}

void decale_b(t_push *push)
{
	int	i;
	int	index;
	int	size;

	i = 0;
	size = push->size_b;
	index = push->index_b;
	if (index > size / 2)
	{
		while (index < size)
		{
			rrb(push);
			index++;
		}
	}
	else if (index <= size / 2)
	{
		while (index > 0)
		{
			rb(push);
			index--;
		}
	}
}