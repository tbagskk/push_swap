#include "push_swap.h"

void	empile(int *tab, int element, t_push *push)
{
	int i;
	int size;
	int tmp;
	int tab2[12];

	size = ft_strlen(tab);
	i = 0;
	int j = 1;
	
	push->tab2[0] = element;


	while(i < size)
	{
		push->tab2[j] = tab[i];
		i++;
		j++;
	}

	//return(tab2);
}



void	depile(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		tab[i] = tab[i + 1];
		i++;
	}
}