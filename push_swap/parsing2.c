/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:09:13 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 18:09:14 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_size(int ac, char **av)
{
	int			i;
	int			j;
	long long	*tab;

	i = 0;
	j = 1;
	while (i < ac - 1)
	{
		if ((ft_atoi_long(av[j]) > 2147483647)
			|| (ft_atoi_long(av[j]) < -2147483647))
			return (1);
		i++;
		j++;
	}
	return (0);
}

int	verif_all(t_push *push, int ac, char **av)
{
	if (verif_size(ac, av))
		return (1);
	if (est_chiffre(ac, av))
		return (1);
	remplir_a(push, ac, av);
	if (verif_sign(ac, av))
		return (1);
	if (verif_tri(push))
		return (2);
	if (est_doublon(push->a, push->size_a))
		return (1);
	return (0);
}
