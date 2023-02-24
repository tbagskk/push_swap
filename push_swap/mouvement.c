#include "push_swap.h"

void	sa(t_push *push)
{
	int	tmp;

	tmp = push->a[0];
	push->a[0] = push->a[1];
	push->a[1] = tmp;
	ft_putstr("sa");
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

void	pa(t_push *push)
{
	if (push->size_b > 0)
	{
		int tmp;

		tmp = push->b[0];
		
		ft_putstr("pa");
		write(1, "\n", 1);

	}
}

void	pb(t_push *push)
{
	if (push->size_b > 0)
	{
		int tmp;

		tmp = push->a[0];
		push->a[0] = push->b[0];
		push->b[0] = tmp;
		ft_putstr("pb");
		write(1, "\n", 1);

	}
}



