#include "push_swap.h"


int verif_tri(t_push *push) 
{
	int	i;

	i = 0;
	while (i < push->size_a - 1) 
	{
		if (push->a[i] > push->a[i + 1]) 
		{
            return (0);
        }
        i++;
    }
    return (1);
}
