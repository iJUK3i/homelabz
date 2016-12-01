#include "juk3.h"

int		main(int nb_arg, char **str)
{
	int nb;

	nb = str[0];
	nb = ft_iter_fact(nb);
	ft_putnbr(nb);
	ft_putchar('\n');
	return (0);
}
