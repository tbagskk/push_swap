#include "push_swap.h"

/* 

	/Users/gcherqui/Desktop/push_swap/push_swap

	cd push_swap_visualizer/build/bin/

	./visualizer

*/

int main(int ac, char **av)
{
	t_push *push;
	int i;
	int j;
	// if(!(verif(push, av)))
	// 	return (0);
	push = malloc(sizeof(t_push));
	push->a = malloc(sizeof(int) * 
	ac - 1);
	push->b = malloc(sizeof(int) * (ac - 1));
	push->tab = malloc(sizeof(int) * (ac - 1));
	push->cout = malloc(sizeof(int) * (ac - 1));
	push->target = malloc(sizeof(int) * (ac - 1));
	push->max_a = malloc(sizeof(int) * (ac - 1));
	j = ac - 1;

	i = 0;
	j = 1;

	while (i < ac - 1)
	{
		push->a[i] = atoi(av[j]);
		push->size_a += 1;
		i++;
		j++;
	}
	choose_algo(push, ac - 1);

}