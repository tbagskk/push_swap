/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adult_cout.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:42:35 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:42:36 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	retrouve_index_a(t_push *push, int nb)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (i < push->size_a)
	{
		if (push->a[i] == nb)
			index = i;
		i++;
	}
	return (index);
}

int	ideal_position2(t_push *push, int k)
{
	int	chiffre_min;
	int	index_ide;

	chiffre_min = push->a[0];
	index_ide = 0;
	if (k == 0)
		chiffre_min = ft_min(push->a, push->size_a);
	else if (k > 0)
		chiffre_min = ft_min(push->max_a, ft_strlen(push->max_a));
	index_ide = retrouve_index_a(push, chiffre_min);
	remettre_zero(push->max_a);
	return (index_ide);
}

int	ideal_position(t_push *push, int index)
{
	int	i;
	int	nb_b;
	int	k;

	i = 0;
	k = 0;
	nb_b = push->b[index];
	while (i < push->size_a)
	{
		if (push->a[i] > nb_b)
		{
			push->max_a[k] = push->a[i];
			k++;
		}
		i++;
	}
	return (ideal_position2(push, k));
}
