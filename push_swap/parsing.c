/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:42:01 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 18:09:36 by gcherqui         ###   ########.fr       */
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

int	est_doublon(int *tab, int taille)
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

int	is_moin(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	est_chiffre(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (is_moin(av[i]))
			return (1);
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	verif_sign(int ac, char **av)
{
	int	i;
	int	j;
	int	k;
	int	count;

	i = 1;
	while (i < ac)
	{
		count = 0;
		k = 0;
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-')
				count++;
			j++;
		}
		if (count >= 2)
			return (1);
		i++;
	}
	return (0);
}
