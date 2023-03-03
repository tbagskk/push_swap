#include "push_swap.h"

/* on compte le cout de chaque item de la stack B
et on retien le plus petit cout + l'index du plus petit cout */

void cout_de_b(t_push *push)
{
	int	i;
	int	index;
	int	cout;

	i = 0;
	cout = push->b[0];
	while (i < push->size_b)
	{
		if (i < push->size_b / 2)
		{
			if(i < cout)
			{
				cout = i;
				index = i;
			}
		}
		else if (i >= push->size_b / 2)
		{
			if(push->size_b - i < cout)
			{
				cout = push->size_b - i;
				index = i;
			}
		}
		i++;
	}
}


int retrouve_index_a(t_push *push, int nb)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (i < push->size_a)
	{
		if (push->a[i] == nb)
			index = i;
		i++;
	}
	return (index);
}

//donne la position ideal dans la stack a du chiffre de la stack b don ton passe l'index
int ideal_position(t_push *push, int index)
{
	int	i;
	int	nb_b;
	int k;
	int chiffre_min;
	int index_ide;
	
	i = 0;
	k = 0;
	index_ide = 0;
	chiffre_min = push->a[0];
	nb_b = push->b[index];
	while (i < push->size_a) //stocke dans un tab les plus grand chiffre que nb_b
	{
		if (push->a[i] > nb_b)
		{
			push->max_a[k] = push->a[i];
			k++;
		}
		i++;
	}
	if(k == 0) //si il n'y a pas de plus grand
		chiffre_min = ft_min(push->a, push->size_a);
	else if(k > 0) //retrouve le plus petit des plus grand
		chiffre_min = ft_min(push->max_a, ft_strlen(push->max_a));	
	index_ide = retrouve_index_a(push, chiffre_min); //retrouve l'index du chiffre ideal
	remettre_zero(push->max_a);
	return (index_ide);
}



