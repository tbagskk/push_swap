#include "push_swap.h"

int cout_chiffre_ideal(t_push *push, int index)
{
	int size;
	int cout;

	size = push->size_a;
	if (index < size / 2)
	{
		cout = index;
	}
	else if (index >= size / 2)
	{
		cout = size - index;
	}
	return (cout);
}

int cout_chiffre_b(t_push *push, int index)
{
	int size;
	int cout;

	size = push->size_b;
	if (index < size / 2)
	{
		cout = index;
	}
	else if (index >= size / 2)
	{
		cout = size - index;
	}
	return (cout);
}

int cout_min_a_b(t_push *push)//cout final le moin cher, index b, index a
{
	int	i;
	int ideal;
	int	cout_ideal;
	int	cout_b;
	int	cout_final;
	int index_b_final = 0;
	int index_a_final = 0;

	i = 0;
	ideal = 0;
	cout_ideal = 0;
	cout_final = 3000; // a regler
	cout_b = 0;
	while (i < push->size_b) //parcours la stack b
	{
		ideal = ideal_position(push, i); //index du chiffre ideal
		cout_ideal = cout_chiffre_ideal(push, ideal); //du chiffre ideal
		cout_b = cout_chiffre_b(push, i); //cout de b
		if ((cout_ideal + cout_b) < cout_final)
		{
			cout_final = cout_ideal + cout_b;
			index_b_final = i;
			index_a_final = ideal;
		}
			
		i++;
	}
	push->index_b = index_b_final; //index de b a bouger
	push->index_a = index_a_final; //index de a a bouger
	return (cout_final);
}