/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adult_cout2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:40:26 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:40:27 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cout_chiffre_ideal(t_push *push, int index)
{
	int	size;
	int	cout;

	size = push->size_a;
	if (index < size / 2)
	{
		cout = index;
	}
	else if (index >= size / 2)
	{
		cout = size - index;
	}
	return (cout);
}

int	cout_chiffre_b(t_push *push, int index)
{
	int	size;
	int	cout;

	size = push->size_b;
	if (index < size / 2)
	{
		cout = index;
	}
	else if (index >= size / 2)
	{
		cout = size - index;
	}
	return (cout);
}

int	cout_min_a_b(t_push *push)
{
	int	i;
	int	ideal;
	int	cout_ideal;
	int	cout_b;
	int	cout_final;

	i = 0;
	ideal = 0;
	cout_ideal = 0;
	cout_final = 5000;
	cout_b = 0;
	while (i < push->size_b)
	{
		ideal = ideal_position(push, i);
		cout_ideal = cout_chiffre_ideal(push, ideal);
		cout_b = cout_chiffre_b(push, i);
		if ((cout_ideal + cout_b) < cout_final)
		{
			cout_final = cout_ideal + cout_b;
			push->index_b = i;
			push->index_a = ideal;
		}
		i++;
	}
	return (cout_final);
}
