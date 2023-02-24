#include "push_swap.h"

int *baby_sort(int nb[])
{
	int a;
	int b;
	int c;
	int temp;

	a = nb[0];
	b = nb[1];
	c = nb[2];

	if ((a > b) && (a < c))
		printf("sa\n");
	if ((a > b) && (b > c))
	{
		printf("sa\n");
		printf("rra\n");
	}
	if ((a > c) && (b < c))
		printf("ra");
	if ((b > c) && (c > a))
	{
		printf("sa\n");
		printf("ra\n");
	}
	if ((b > a) && (a > c))
		printf("rra\n");
	
		
		
	return(0);
}