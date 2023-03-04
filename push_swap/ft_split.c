/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:41:11 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:41:11 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_word(const char *str, char charset)
{
	int	i;

	i = 0;
	while (str[i]
		&& (str[i] != charset))
		i++;
	return (i);
}

int	ft_nbr(const char *str, char charset)
{	
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (*str)
	{
		while (*str && *str == charset)
			str++;
		i = ft_word(str, charset);
		str += i;
		if (i)
			a++;
	}
	return (a);
}

char	*ft_copy(const char *src, int a)
{
	char	*tab;

	tab = malloc(sizeof(char) * (a + 1));
	if (!(tab))
		return (NULL);
	tab[a] = 0;
	while (a--)
		tab[a] = src[a];
	return (tab);
}

char	**ft_free(char **tab, int length)
{
	int	i;

	i = 0;
	while (i < length)
		free(tab[i++]);
	free(tab);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		size;
	int		i;
	int		n;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_nbr(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	i = -1;
	if (!(tab))
		return (NULL);
	while (++i < size)
	{
		while (*s && *s == c)
			s++;
		n = ft_word(s, c);
		tab[i] = ft_copy(s, n);
		if (!tab[i])
			return (ft_free(tab, i));
		s += n;
	}
	tab[size] = 0;
	return (tab);
}
