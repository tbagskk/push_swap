#include "push_swap.h"

void *baby_sort(int nb[], t_push *push)
{
	int a;
	int b;
	int c;
	int temp;

	a = nb[0];
	b = nb[1];
	c = nb[2];
	if ((a > b) && (a < c))
		sa(push);
	if ((a > b) && (b > c))
	{
		sa(push);
		rra(push);
	}
	if ((a > c) && (b < c))
		ra(push);
	if ((b > c) && (c > a))
	{
		sa(push);
		ra(push);
	}
	if ((b > a) && (a > c))
		rra(push);
	return (0);
}

void two_sort(t_push *push)
{
	int	a;
	int	b;

	a = push->a[0];
	b = push->a[1];

	if (a > b)
		sa(push);
}