#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	<stdlib.h>
# include	<stdbool.h>
# include	<stdio.h>
# include	<unistd.h>


int		*baby_sort(int *nb);
char	**ft_split(const char *s, char c);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(int *str);
void	depile(int *tab);
void	empile(int *tab, int element, t_push *push);

typedef struct s_push
{
	int		*a;
	int		*b;
	int		*size_b;
	int		*tab2;
}			t_push;

#endif