/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:41:36 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:41:36 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_push *push)
{
	int	tmp;
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
	int	tmp;
	int	tmp2;
	int	i;

	i = push->size_a - 1;
	tmp = push->a[push->size_a - 1];
	while (i > 0)
	{
		push->a[i] = push->a[i - 1];
		i--;
	}
	push->a[0] = tmp;
	ft_putstr("rra");
	write(1, "\n", 1);
}

void	rb(t_push *push)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = push->b[0];
	while (i < push->size_b)
	{
		push->b[i] = push->b[i +1];
		i++;
	}
	push->b[push->size_b - 1] = tmp;
	ft_putstr("rb");
	write(1, "\n", 1);
}

void	rrb(t_push *push)
{
	int	tmp;
	int	tmp2;
	int	i;

	i = push->size_b - 1;
	tmp = push->b[push->size_b - 1];
	while (i > 0)
	{
		push->b[i] = push->b[i - 1];
		i--;
	}
	push->b[0] = tmp;
	ft_putstr("rrb");
	write(1, "\n", 1);
}
