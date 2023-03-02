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

int	compteur_mouv(t_push *push) //calcul le cout de B de chaque nombre
{
	int	i;
	int	k;
	int j;
	int tmp;

	i = 0;
	i = 0;
	k = push->size_b;
	while (i < k)
	{
		if (i > k / 2)
		{
			if ((k - i) < tmp )
				tmp = k - i;
		}
		else if (i <= k / 2)
		{
			if ((i) < tmp )
				tmp = i;
		}
		i++;

	}
		return (tmp);
}

// void	target_position(t_push *push) //pour cout de B
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	//push->target_tmp = 0;
// 	while (i < push->size_b)
// 	{
// 		while(j < push->size_a)
// 		{
			
// 			if (push->a[j] > push->b[i])
// 			{
// 				//printf("target de K ->%d\n", push->a[j]);
// 				push->target[k] = push->a[j];
// 				k++;
// 			}	
// 			j++;
// 		}
// 		i++;
// 	}
// 	push->target_tmp = ft_min(push->target, ft_strlen(push->target)); //je cherche le nombre le + grand au dessus de mon nombre de la liste b
// 	//printf("%d\n", push->target_tmp);
// }

int cout_a(int size, int target, t_push *push) // cout de A en lui donnant target & taille du tableau
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


void remettre_zero(int *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		tab[i] = 0;
		i++;
	}
}

void calculateur_nbr_cout(t_push *push) // calcule le nombre de cout de a + b de chaque nbr 
{
	int i = 0;

	while (i < push->size_b)
	{
		//remettre_zero(push->target);
		
		//pa(push);
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
}

// Prends l'index du nombre dans b et nous renvoie l'index ideal dans a
int position_ideal_a(t_push *push, int index)
{
	int i;
	int j;
	int k;
	int nb;
	int tmp;
	int ind;

	i = 0;
	j = push->size_a;
	k = 0;
	tmp = push->a[0];
	nb = push->b[index];
	while (i < push->size_a)
	{
		if (push->a[i] > nb)
		{
			push->max_a[k] = push->a[i];
			k++;
		}
		i++;
	}
	if (k == 0)
		tmp = ft_min(push->a, push->size_a);
	else
		tmp = ft_min(push->max_a, ft_strlen(push->max_a));
	i = 0;
	while (i < push->size_a)
	{
		if (tmp == push->a[i])
		{
			ind = i;
		}
		i++;
	}
	remettre_zero(push->max_a);

	
	// if (tmp == 0)
	// {
	// 	tmp2 = push->a[0];
	// 	while (i < push->a[i])
	// 	{
	// 		if (push->a[i] < tmp2)
	// 		{
	// 			tmp2 = push->a[i];
	// 			ind = i;
	// 		}
	// 		i++;
	// 	}
	// 	tmp = tmp2;
	// }
	// remettre_zero(push->max_a);
	return (ind);
}

int cout_a_b(t_push *push)
{
	int i;
	int j;
	int tmp_b;
	int ide_a;
	int tmp_a;
	int tmp_add;
	int tmp_min;
	int index_min;

	i = 0;
	j = 0;
	tmp_b = 0;
	tmp_a = 0;
	tmp_add = 0;
	tmp_min = 10;
	while (i < push->size_b)
	{
		tmp_b = cout_a(push->size_b, i, push);
		//printf("cout de b -> %d\n", tmp_a);
		ide_a = position_ideal_a(push, i);
		//printf("position ideal de b -> %d\n", ide_a);
		tmp_a = cout_a(push->size_a, ide_a, push);
		//printf("cout de a -> %d\n", tmp_b);
		tmp_add = tmp_a + tmp_b;
		//printf("cout de a + b -> %d\n", tmp_add);
			//printf("*****\n");
		if (tmp_add < tmp_min)
		{
			tmp_min = tmp_add;
			index_min = i;
			push->position_ideal = ide_a;
		}	
		i++;
	}
	// printf("Plus petit cout : tmp_min -> %d\n", tmp_min);
	// printf("Index du plus petit cout : index min -> %d\n", index_min);
	// printf("position ideal -> %d\n", push->position_ideal);
	
	return (index_min);
}

void decale_a(t_push *push)
{
	int i;
	int k;
	int j;

	k = push->size_a;
	i = 0;
	j = push->position_ideal;
	printf("K : J%d %d\n", k, j);
	if (push->position_ideal >= (k / 2))
	{
		//printf("k / 2 ->%d\n", k / 2);
		while (j < k)
		{
			rra(push);
			j++;
		}
	}
	else if (push->position_ideal < (k / 2))
	{
		//printf(" > k\n");
		//printf("k / 2 ->%d\n", k / 2);
		while (j > 0)
		{
			ra(push);
			j--;
		}
	}
}

void decale_b(t_push *push, int index)
{
	int i;
	int k;
	int j;

	i = k / 2;
	k = push->size_b;
	if (index > k / 2) //ra
	{
		while (i < k)
		{
			rrb(push);
			i++;
		}
	}
	i = k / 2;
	if (index <= k / 2)
	{
		while (i > k)
		{
			rb(push);
			i++;
		}
	}
	pa(push);
	
}
void	adult_sort(t_push *push)
{
	int tmp = 0;
	int i = 0;
	int j = 0;

	adult_push_min(push);
	adult_push_rest(push);
	baby_sort(push->a, push); 
	while (push->size_b > 0)
	{	
	tmp = cout_a_b(push); //compte le cout de moin cher de a et b reuni + l'index
	printf("Cout le moins cher : %d\n", tmp);
	decale_a(push);
	decale_b(push,tmp);
	}
	
}