#include "push_swap.h"

void	sa(t_push *push)
{
	int	tmp;

	tmp = push->a[0];
	push->a[0] = push->a[1];
	push->a[1] = tmp;
	ft_putstr("sa");
	write(1, "\n", 1);
}

void	sb(t_push *push)
{
	int	tmp;

	if (push->size_b > 0)
	{
		tmp = push->b[0];
		push->b[0] = push->b[1];
		push->b[1] = tmp;
		ft_putstr("sb");
		write(1, "\n", 1);
	}
}

void	ss(t_push *push)
{
	if (push->size_b > 0)
	{
		sa(push);
		sb(push);
		ft_putstr("ss");
		write(1, "\n", 1);
	}
	
}

void	ra(t_push *push)
{
	int tmp;
	int	i;

	i = 0;
	tmp = push->a[0];
	while (i < push->size_a)
	{
		push->a[i] = push->a[i +1];
		i++;
	}
	push->a[push->size_a - 1] = tmp;
	ft_putstr("ra");
	write(1, "\n", 1);
}

void	rra(t_push *push)
{
	int tmp;
	int tmp2;
	int	i;

	i = push->size_a - 1;
	tmp = push->a[push->size_a - 1];
	while (i > 0)
	{
		push->a[i] =push->a[i - 1];
		i--;
	}
	push->a[0] = tmp;
	ft_putstr("rra");
	write(1, "\n", 1);
}



