#include "push_swap.h"

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
void last_etape_baby(t_push *push, int i)
{
	int	j;

	j = 0;
	if (push->a[i] > push->a[i + 1])
		{
			if (i > push->size_a / 2)
			{
				j = i + 1;
				while (j < push->size_a)
				{
					rra(push);
					j++;
				}
			}
			else if(i <= push->size_a / 2)
			{
				j = i + 1;
				while (j > 0)
				{
					ra(push);
					j--;
				}
			}
		}
}

void last_etape(t_push *push)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < push->size_a)
	{
		last_etape_baby(push, i);
		i++;
	}
}

void	adult_sort(t_push *push)
{
	int i = 0;

	adult_push_min(push);
	adult_push_rest(push);
	baby_sort(push->a, push); 
	int size = push->size_b;
	while (i < size)
	{
			cout_min_a_b(push);
			decale_a(push);
			decale_b(push);
			pa(push);
			i++;
	}
	last_etape(push);
}