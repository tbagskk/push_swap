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
	int 	tmp_rra;
}			t_push;


void 	*baby_sort(int nb[], t_push *push);
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


// mouvement 

void	pb(t_push *push);
void	pa(t_push *push);
void	sa(t_push *push);
void	sb(t_push *push);
void	ss(t_push *push);
void	ra(t_push *push);
void	rra(t_push *push);


#endif