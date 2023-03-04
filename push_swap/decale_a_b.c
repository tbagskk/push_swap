/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decale_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:40:51 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:40:52 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	decale_a(t_push *push)
{
	int	i;
	int	index;
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
}

void	decale_b(t_push *push)
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
