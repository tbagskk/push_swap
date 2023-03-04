/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:03:23 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 18:03:27 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 

	/Users/gcherqui/Desktop/push_swap/push_swap

	cd push_swap_visualizer/build/bin/

	./visualizer

*/
void	free_all(t_push *push)
{
	if (push->max_a)
		free(push->max_a);
	if (push->target)
		free(push->target);
	if (push->cout)
		free(push->cout);
	if (push->tab)
		free(push->tab);
	if (push->b)
		free(push->b);
	if (push->a)
		free(push->a);
	if (push)
		free(push);
}

int	main(int ac, char **av)
{
	t_push	*push;

	if (ac > 2)
	{
		push = malloc(sizeof(t_push));
		push->a = malloc(sizeof(int) * ac - 1);
		push->b = malloc(sizeof(int) * (ac - 1));
		push->tab = malloc(sizeof(int) * (ac - 1));
		push->cout = malloc(sizeof(int) * (ac - 1));
		push->target = malloc(sizeof(int) * (ac - 1));
		push->max_a = malloc(sizeof(int) * (ac - 1));
		if (verif_all(push, ac, av))
		{
			ft_putstr("error");
			write(1, "\n", 1);
			return (0);
		}
		choose_algo(push, ac - 1);
		free_all(push);
	}
}
