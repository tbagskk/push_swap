/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empile.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:41:00 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:41:01 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_push *push)
{
	int	i;
	int	tmp;

	i = 0;
	push->b[push->size_b] = push->a[0];
	push->size_b++;
	push->size_a--;
	while (i < push->size_b)
	{
		tmp = push->b[i];
		push->b[i] = push->b[push->size_b - 1];
		push->b[push->size_b - 1] = tmp;
		i++;
	}
	i = 0;
	while (i < push->size_a)
	{
		push->a[i] = push->a[i + 1];
		i++;
	}
	ft_putstr("pb");
	write(1, "\n", 1);
}

void	pa(t_push *push)
{
	int	i;
	int	tmp;

	i = 0;
	push->a[push->size_a] = push->b[0];
	push->size_a++;
	push->size_b--;
	while (i < push->size_a)
	{
		tmp = push->a[i];
		push->a[i] = push->a[push->size_a - 1];
		push->a[push->size_a - 1] = tmp;
		i++;
	}
	i = 0;
	while (i < push->size_b)
	{
		push->b[i] = push->b[i + 1];
		i++;
	}
	ft_putstr("pa");
	write(1, "\n", 1);
}

void	depile(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		tab[i] = tab[i + 1];
		i++;
	}
}
