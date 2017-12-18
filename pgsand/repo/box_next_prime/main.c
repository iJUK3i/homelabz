#include "juk3.h"

int		ft_find_next_prime(int nb)
{
	int i;
	int flag;
	
	i = 2;
	flag = 0;
	nb++;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
		return (ft_find_next_prime(nb));
	else
		return (nb);
}

int		main(int nb_arg, char **input)
{
	int x;
	int z;

	if (nb_arg == 2)
	{
		x = ft_atoi(input[1]);
		z = ft_find_next_prime(x);
		ft_putnbr(z);
		ft_putchar('\n');
	}
	return (0);
}



