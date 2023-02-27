#include "push_swap.h"

void fill_in_a(t_push *push, int ac, char **av)
{
	int i;
	int j;
	
	i = 0;
	j = 1;
	while (i < ac)
	{
		push->a[i] = atoi(av[j]);
		push->size_a += 1;
		i++;
		j++;
	}
}

// int verif1(t_push *push, char **av)
// {
// 	int	i;

// 	i = 1;
// 	while (av[i])
// 	{
// 		if(!(av[i] >= '0' && av[i] <= '9'))
// 			{
// 				ft_putstr("error");
// 				return(0);
// 			}
// 	}
// 	return(1);
// }

// void verif(t_push *push, char **av)
// {
// 	verif1(push, av);
// }