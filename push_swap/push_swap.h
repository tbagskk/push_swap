/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:42:22 by gcherqui          #+#    #+#             */
/*   Updated: 2023/03/04 11:42:23 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	<stdlib.h>
# include	<stdbool.h>
# include	<stdio.h>
# include	<unistd.h>

typedef struct s_push
{
	int		*a;
	int		*b;
	int		size_b;
	int		size_a;
	int		*tab;
	int		*tab2;
	int		*cout;
	int		tmp_rra;
	int		nbr_mdl;
	int		*target;
	int		target_tmp;
	int		*max_a;
	int		position_ideal;
	int		index_b;
	int		index_a;
}			t_push;

void	*baby_sort(int nb[], t_push *push);
char	**ft_split(const char *s, char c);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(int *str);
void	depile(int *tab);
void	middle_sort(t_push *push);
void	choose_algo(t_push *push, int nb);
void	two_sort(t_push *push);
void	adult_sort(t_push *push);
void	moove_midle(t_push *push, int pos);
int		middle_tri(t_push *push);
int		ft_min(int *str, int len);
void	ft_strcpy(int *dest, int *tab, int len);
void	tri_a_bulles(t_push *push, int taille);
int		ideal_position(t_push *push, int index);
int		cout_chiffre_ideal(t_push *push, int index);
int		cout_min_a_b(t_push *push);
void	decale_a(t_push *push);
void	decale_b(t_push *push);
void	free_all(t_push *push);
void	last_etape(t_push *push);
void	remettre_zero(int *tab);
int		cout_chiffre_b(t_push *push, int index);

// mouvement 

void	pb(t_push *push);
void	pa(t_push *push);
void	sa(t_push *push);
void	sb(t_push *push);
void	ss(t_push *push);
void	ra(t_push *push);
void	rra(t_push *push);
void	rb(t_push *push);
void	rrb(t_push *push);

#endif
