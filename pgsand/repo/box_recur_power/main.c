#include "juk3.h"

int		ft_recur_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
//	else if (power == 1)
//		return (nb);
	else
		return (nb * ft_recur_power(nb, power - 1));
}

int 	main(int nb_arg, char **input)
{
	int i;
	int j;

	if (nb_arg == 3)
	{
		i = ft_atoi(input[1]);
		j = ft_atoi(input[2]);
		ft_recur_power(i, j);
		ft_putnbr(ft_recur_power(i, j));
		ft_putstr("\n");
	}
	return (0);
}
