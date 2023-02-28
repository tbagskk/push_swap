#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_strcpy(int *dest, int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = tab[i];
		i++;
	}

}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_min(int *str, int len)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = str[0];
	while (i < len)
	{
		if (str[i] < tmp)
			tmp = str[i];
		i++;
	}
	return(tmp);
}

void tri_a_bulles(t_push *push, int taille) 
{
    int i = 0;
	int j = 0;
	int tmp = 0;
    int continuer = 1;
    
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