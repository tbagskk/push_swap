/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:34:45 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 18:10:41 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remettre_zero(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		tab[i] = 0;
		i++;
	}
}

void	tri_a_bulles(t_push *push, int taille)
{
	int	i;
	int	j;
	int	tmp;
	int	continuer;

	j = 0;
	tmp = 0;
	continuer = 1;
	while (continuer)
	{
		continuer = 0;
		i = 0;
		while (i < taille - 1)
		{
			j = i + 1;
			if (push->tab[i] > push->tab[j])
			{
				tmp = push->tab[i];
				push->tab[i] = push->tab[j];
				push->tab[j] = tmp;
				continuer = 1;
			}
			i++;
		}
	}
}

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-'))
	{
		return (1);
	}
	return (0);
}

int	ft_strlen_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
