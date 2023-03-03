#include "push_swap.h"

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

void tri_a_bulles(t_push *push, int taille) 
{
    int i;;
	int j;
	int tmp;
    int continuer;

	i = 0;
	j = 0;
	tmp = 0;
	continuer = 1;
    
	while (continuer) {
        continuer = 0;
        i = 0;
        while (i < taille - 1) {
            j = i + 1;
            if (push->tab[i] > push->tab[j]) {
                tmp = push->tab[i];
                push->tab[i] = push->tab[j];
                push->tab[j] = tmp;
                continuer = 1;
            }
            i++;
        }
    }
}