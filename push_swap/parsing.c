/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:42:01 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:42:03 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remplir_a(t_push *push, int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < ac - 1)
	{
		push->a[i] = ft_atoi(av[j]);
		push->size_a += 1;
		i++;
		j++;
	}
}

int est_doublon(int *tab, int taille) 
{
	int	i;
	int	j;

	i = 0;
    while (i < taille) 
	{
        j = i + 1;
        while (j < taille) 
		{
            if (tab[i] == tab[j]) 
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int est_chiffre(char *str) 
{
    int i;

	i = 0;
    while (str[i]) 
	{
        if (!ft_isdigit(str[i])) {
            return 0;
        }
        i++;
    }
    return 1;
}

int	verif_all(t_push *push, int ac, char **av)
{
	int	i;

	i = 1;
	remplir_a(push, ac, av);
	if (verif_tri(push))
		return (1);
	if (est_doublon(push->a, push->size_a))
		return (1);
	return (0);
}

