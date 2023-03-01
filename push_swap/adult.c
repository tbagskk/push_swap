#include "push_swap.h"

// void	adult_sort(t_push *push)
// {	
// 	int pos;
// 	int i;
// 	int size;

// 	size = push->size_a;
	
// 	while (i < size)
// 	{
// 		pos = middle_tri(push);
// 		moove_midle(push, pos);
// 		pb(push);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < size)
// 	{
// 		pa(push);
// 		i++;
// 	}	
// }
void	adult_push_min(t_push *push)
{
	int	i;
	int tmp;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = push->size_a;
	ft_strcpy(push->tab, push->a, push->size_a); //on copie pill a dans tab
	tri_a_bulles(push, push->size_a); //on trie les nombre de tab par ordre de grandeur
	push->nbr_mdl = push->tab[push->size_a / 2];
	while (i < k)
	{
		if (push->a[0] < push->nbr_mdl)
				pb(push);
		else
			ra(push);
		i++;
	}
	
}

void	adult_push_rest(t_push *push)
{
	int	i;
	int	j;

	i = 0;
	j = push->size_a - 3;
	while (i < j)
	{
		pb(push);
		i++;
	}
}

void	compteur_mouv(t_push *push)
{
	int	i;
	int	k;
	int j;

	i = 0;
	i = 0;
	k = push->size_b;
	while (i < k)
	{
		if (i > k / 2)
			push->cout[i] = k - i;
		else if (i <= k / 2)
			push->cout[i] = i;
		i++;
	}
}

void	target_position(t_push *push)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < push->size_b)
	{
		while(j < push->size_a)
		{
			if (push->a[j] > push->b[i])
			{
				push->target[k] = push->a[j];
				k++;
			}
				
			j++;
		}
		i++;
	}
	push->target_tmp = ft_min(push->target, ft_strlen(push->target)); //je cherche le nombre le + grand au dessus de mon nombre de la liste b
	printf("%d\n", push->target_tmp);
}

int cout_a(int size, int target, t_push *push)
{
	int tmp;

	tmp = 0;
	if (target > size / 2)
	{
		tmp = size - target;
	}
	else if (target <= size / 2)
	{
		tmp = target;
	}
	return (tmp);
}

void search_sort(t_push *push, int index)
{
	int	i;
	int k;

	i = 0;
	k =  push->size_a;
	while (i < k)
	{
		if (push->a[i] == push->target_tmp) //il a trouvé la target position du nombre le plus grand apres celui du tab(b)
			{
				//printf("le cout de  A[%d]->  %d\n", index,cout_a(k, i, push));
				push->cout[index] += cout_a(k, i, push);
				index++;
				break;
			}
		else if(push->target_tmp == 0)
		{
			//printf("le cout de  A[%d]->  1\n", index);
			push->cout[index] += 1;
			break;
		}

		i++;
	}
}

void calculateur_nbr_cout(t_push *push) // calcule le nombre de cout de a + b de chaque nbr 
{
	int i = 0;

	while (i < push->size_b)
	{
		target_position(push);
		search_sort(push, i);
		i++;
	}
}

void choose_push(t_push *push)
{
	int i;
	int k;
	int tmp;

	i = 0;
	k = 0;
	tmp = push->cout[0];
	while (i < ft_strlen(push->cout))
	{
		if (push->cout[i] < tmp)
		{
			k = i;
			tmp = push->cout[i];
		}
		i++;
	}

	printf("le plus petit-> %d\n", k);
	
}

void	adult_sort(t_push *push)
{
	adult_push_min(push);
	adult_push_rest(push);
	baby_sort(push->a, push);
	compteur_mouv(push);
	calculateur_nbr_cout(push);
	pa(push);
	pa(push);
	pa(push);
	choose_push(push);
	
	
}






