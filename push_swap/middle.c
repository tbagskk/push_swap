/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:41:19 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:41:20 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moove_midle(t_push *push, int pos)
{
	int	i;
	int	mds;

	i = pos;
	mds = push->size_a / 2;
	if (pos > mds)
	{
		while (i < push->size_a)
		{
			rra(push);
			i++;
		}
	}
	if (pos <= mds)
	{
		while (i > 0)
		{
			ra(push);
			i--;
		}
	}
}

int	middle_tri(t_push *push)
{
	int	i;
	int	pos;
	int	tmp;

	i = 1;
	pos = 0;
	tmp = push->a[0];
	while (i < push->size_a)
	{
		if (push->a[i] < tmp)
		{
			pos = i;
			tmp = push->a[i];
		}
		i++;
	}
	return (pos);
}

void	middle_sort(t_push *push)
{
	int	pos;

	pos = middle_tri(push);
	moove_midle(push, pos);
	pb(push);
	if (push->size_a > 3)
	{
		pos = middle_tri(push);
		moove_midle(push, pos);
		pb(push);
	}
	baby_sort(push->a, push);
	pa(push);
	if (push->size_a > 3)
		pa(push);
}
