#include "juk3.h"

int		ft_iter_power(int nb, int power)
{
	int sum;

	sum = 1;
	while (power > 0)
	{
		sum *= nb;
		power--;
	}

	return (sum);

}

int		main(int nb_arg, char **input)
{
	int i;
	int j;

	if (nb_arg == 3)
	{
		i = ft_atoi(input[1]);
		j = ft_atoi(input[2]);
		ft_iter_power(i, j);
		ft_putnbr(ft_iter_power(i, j));
		ft_putstr("\n");
	}
	return (0);
}

