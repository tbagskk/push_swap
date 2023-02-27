#include "push_swap.h"

/* 

	/Users/gcherqui/Desktop/push_swap/push_swap

	cd push_swap_visualizer/build/bin/

	./visualizer

	//regler prob si il ya que 2 chiffres

*/

int main(int ac, char **av)
{
	t_push *push;
	int i;
	int j;

	push = malloc(sizeof(t_push));
	push->a = malloc(sizeof(int) * ac - 1);
	push->b = malloc(sizeof(int) * ac - 1);
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
	
	
	//baby_sort(push->a, push);
	//i = 0;
	//rra(push);
	//middle_sort(push);
	// while (i < push->size_a)
	// {
	// 	printf("%d\n", push->a[i]);
	// 	i++;
	// }
	//printf("%d\n", push->a[0]);
	

}