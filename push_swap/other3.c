/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:03:42 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 18:04:04 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nbr(int tab)
{
	if (tab >= '0' && tab <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (nbr(str[i]))
	{
			result = result * 10 + str[i] - '0';
			i++;
	}
	return (result * sign);
}

long long	ft_atoi_long(const char *str)
{
	int			i;
	long long	result;
	int			sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (nbr(str[i]))
	{
			result = result * 10 + str[i] - '0';
			i++;
	}
	return (result * sign);
}
