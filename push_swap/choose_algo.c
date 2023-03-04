/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:40:43 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:40:44 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_algo(t_push *push, int nb)
{
	if (nb <= 2)
		two_sort(push);
	else if (nb == 3)
		baby_sort(push->a, push);
	else if (nb >= 4 && nb <= 5)
		middle_sort(push);
	else if (nb > 5)
		adult_sort(push);
}
