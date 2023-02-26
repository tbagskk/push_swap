#include "push_swap.h"

/* 

	/Users/gcherqui/Desktop/push_swap/push_swap

	cd push_swap_visualizer/build/bin/

	./visualizer

*/

int main(int ac, char **av)
{
	t_push *push;

	push = malloc(sizeof(push));
	
	int str[11] = {1,2,3,4,5,6,7,8,9};
	//depile(str);
	// depile(str);
	// depile(str);
	// empile(str);
	 empile(str, 69, push);
	// empile(str);
	//printf("%d\n",str[2]);

	int i = 0;
	int size = ft_strlen(str);
	// while (i < size)
	// {
	// 	printf("%d\n",str[i]);
	// 	i++;
	// }



	//str[0] = atoi(av[1]);
	//str[1] = atoi(av[2]);
	//str[2] = atoi(av[3]);

	//baby_sort(str);
}