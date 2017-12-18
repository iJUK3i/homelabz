#include "juk3.h"

int		ft_fib(int index)
{
	int n;

	n = index;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (ft_fib(n - 1) + ft_fib(n - 2));

}

int		main(int nb_arg, char **input)
{
	int x;
	int n;

	if (nb_arg == 2)
	{
		n = ft_atoi(input[1]);
		x = ft_fib(n);
		ft_putnbr(x);
		ft_putstr("\n");
	}
	return (0);
}
