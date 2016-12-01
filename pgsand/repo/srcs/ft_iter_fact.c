#include "juk3.h"

int		ft_iter_fact(int nb)
{
	int i;
	int x;

	x = nb;
	i = 1;
	if ((x <= -1) || (x > 12))
		return (0);
	if (x == 1 || x == 0)
		return (1);
	if ((x >= 2) || (x <= 12))
		while (i < nb)
		{
			x = x * i;
			i++;
		}
	return (x);
}
