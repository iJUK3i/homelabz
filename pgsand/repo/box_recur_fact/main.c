#include "juk3.h"
int		ft_recursive_factorial(int nb)
{
	int i;
	
	i = 1;
	if (nb < 0 || nb > 13)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int		main(int nb_arg, char **input)
{
	int nb;
	
	if (nb_arg > 1)
	{

		ft_putstr("\n");
		ft_putstr(input[1]);
		nb = ft_atoi(input[1]);
		ft_putstr("\n your input is: \n");
		ft_putnbr(nb);
		ft_putchar('\n');
		nb = ft_recursive_factorial(nb);
		ft_putnbr(nb);
		ft_putchar('\n');
		return (0);
	}
}
